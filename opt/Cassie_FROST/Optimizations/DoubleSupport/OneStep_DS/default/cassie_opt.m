%% Setup
restoredefaultpath; clear; clc;
root = fileparts(fileparts(fileparts(fileparts(pwd))));
addpath(genpath(root));
PATHS = cassie.utils.getPaths(root);
frost_addpath;

% Settings
LOAD = false;
COMPILE = false;
SAVE = false;

% Load hybrid system
robot = Cassie([PATHS.MODEL,'\urdf\cassie_with_sensors.urdf']);
if LOAD
    robot.loadDynamics(PATHS.MODEL_LOAD, true);
    [sys, domains, guards] = cassie.load_behavior(robot, PATHS.OPT_LOAD, 'type', 'one_step_double_support');
else
    robot.configureDynamics('DelayCoriolisSet',true);
    [sys, domains, guards] = cassie.load_behavior(robot, '','type', 'one_step_double_support');
end
    

%% Create optimization problem
num_grid.DoubleSupport = 5;
num_grid.RightStance = 10;
nlp = HybridTrajectoryOptimization('Cassie_OneStep',sys,num_grid,[],'EqualityConstraintBoundary',1e-4);
nlp.update;

% Add domain specific constraints
nlp.Phase(1).Plant.UserNlpConstraint = @OneStep_DS_default.opt.right_double_support;
nlp.Phase(2).Plant.UserNlpConstraint = @OneStep_DS_default.opt.left_lift;
nlp.Phase(3).Plant.UserNlpConstraint = @OneStep_DS_default.opt.right_stance;
nlp.Phase(4).Plant.UserNlpConstraint = @OneStep_DS_default.opt.left_impact;
nlp.update;

% Configure bounds and update
bounds = OneStep_DS_default.utils.getBounds(robot);
if LOAD
    nlp.configure(bounds, PATHS.OPT_LOAD);
else
    nlp.configure(bounds);
end
nlp.update;

%% Compile and Save
if COMPILE
    compileObjective(nlp,[],[],PATHS.OPT_EXPORT);
%     compileConstraint(nlp,[],[],PATHS.OPT_EXPORT);
    compileConstraint(nlp,[],[],PATHS.OPT_EXPORT,'dynamics_equation');
end

% Save
if SAVE
    sys.saveExpression(PATHS.OPT_LOAD);
end

% Compile Single Constraint
% compileConstraint(nlp.Phase(4),'xDiscreteMapLeftImpact_DS_Relabel',PATHS.OPT_EXPORT);

% Remove Single Constraint
% removeConstraint(nlp.Phase(1),'dynamics_equation');

% removeConstraint(nlp.Phase(2),'xDiscreteMapLeftImpactRelabel');
% removeConstraint(nlp.Phase(2),'dxDiscreteMapLeftImpactRelabel');

% phases = [4];
% for i = phases
%     if ~isempty(nlp.Phase(i).ConstrTable)
%         field_names = fields(nlp.Phase(i).ConstrTable);
%         field_names = field_names(1:end-3);
%         for j = 1:length(field_names)
%             removeConstraint(nlp.Phase(i),field_names{j});
%         end
%     end
% end


%% Solve Optimization Problem 

% Create Ipopt solver
ipopt_options.max_iter         = 3000;
ipopt_options.tol              = 1e-2;
ipopt_options.dual_inf_tol           = 1e0;
ipopt_options.constr_viol_tol        = 1e-4;
ipopt_options.compl_inf_tol          = 1e0;

solver = IpoptApplication(nlp, ipopt_options);
% solver = IpoptApplication(nlp);

% Run Optimization
old = load('x0');
[sol, info] = optimize(solver, old.solution.x ); 
% [sol, info] = optimize(solver);
[tspan, states, inputs, params] = exportSolution(nlp, sol);
solution.x = sol;
solution.tspan = tspan;
solution.states = states;
solution.inputs = inputs;
solution.params = params;
 
% checkConstraints(nlp, sol, 1e-4, 'log.txt')

%% Animate 
q_right_stance_log = [solution.states{1}.x, solution.states{3}.x]; 
q_left_stance_log = cassie.utils.mirrorStep(q_right_stance_log);

q_log = [q_right_stance_log, q_left_stance_log(:,1:end)]; 
t_log = [solution.tspan{1}, solution.tspan{1}(end) + solution.tspan{3}, solution.tspan{1}(end) + solution.tspan{3}(end) + solution.tspan{1}, 2*solution.tspan{1}(end) + solution.tspan{3}(end) + solution.tspan{3}]; 
conGUI = cassie.load_animation(robot, t_log, q_log)';








