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
    [sys, domains, guards] = cassie.load_behavior(robot, PATHS.OPT_LOAD, 'type', 'two_step_double_support');
else
    robot.configureDynamics('DelayCoriolisSet',true);
    [sys, domains, guards] = cassie.load_behavior(robot, '','type', 'two_step_double_support');
end
    

%% Create optimization problem
num_grid.DoubleSupport1 = 5;
num_grid.RightStance = 10;
num_grid.DoubleSupport2 = 5;
num_grid.LeftStance = 10;
nlp = HybridTrajectoryOptimization('Cassie_TwoStep_DS',sys,num_grid,[],'EqualityConstraintBoundary',1e-4);
nlp.update;

% Add domain specific constraints
nlp.Phase(1).Plant.UserNlpConstraint = @TwoStep_DS_default.opt.right_double_support;
nlp.Phase(2).Plant.UserNlpConstraint = @TwoStep_DS_default.opt.left_lift;
nlp.Phase(3).Plant.UserNlpConstraint = @TwoStep_DS_default.opt.right_stance;
nlp.Phase(4).Plant.UserNlpConstraint = @TwoStep_DS_default.opt.left_impact;
nlp.Phase(5).Plant.UserNlpConstraint = @TwoStep_DS_default.opt.left_double_support;
nlp.Phase(6).Plant.UserNlpConstraint = @TwoStep_DS_default.opt.right_lift;
nlp.Phase(7).Plant.UserNlpConstraint = @TwoStep_DS_default.opt.left_stance;
nlp.Phase(8).Plant.UserNlpConstraint = @TwoStep_DS_default.opt.right_impact;
nlp.update;

% Configure bounds and update
bounds = TwoStep_DS_default.utils.getBounds(robot);
if LOAD
    nlp.configure(bounds, PATHS.OPT_LOAD);
else
    nlp.configure(bounds);
end
nlp.update;

% % Add Multi-domain constraints
% nlp = TwoStep_DS_default.opt.multi_domain_constraints(nlp);
% nlp.update;

%% Compile and Save
if COMPILE
    compileObjective(nlp,[],[],PATHS.OPT_EXPORT);
%     compileConstraint(nlp,[],[],PATHS.OPT_EXPORT);
    compileConstraint(nlp,[],[],PATHS.OPT_EXPORT,'dynamics_equation');
end

    compileConstraint(nlp,[],[],PATHS.OPT_EXPORT,'dynamics_equation');

% Save
if SAVE
    sys.saveExpression(PATHS.OPT_LOAD);
end
%     compileConstraint(nlp.Phase(2),[],[],PATHS.OPT_EXPORT);
% compileConstraint(nlp.Phase(4),'xDiscreteMapLeftImpact_DS',PATHS.OPT_EXPORT);
% compileConstraint(nlp.Phase(8),'xDiscreteMapRightImpact_DS',PATHS.OPT_EXPORT);

% Compile Single Constraint
% compileConstraint(nlp.Phase(3),'average_pitch_RightStance',PATHS.OPT_EXPORT);

% Remove Single Constraint
% removeConstraint(nlp.Phase(1),'u_zmp_LeftToeBottom');
% 
% phases = [8];
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
ipopt_options.tol              = 1e0;
ipopt_options.dual_inf_tol           = 1e2;
ipopt_options.constr_viol_tol        = 1e-4;
ipopt_options.compl_inf_tol          = 1e2;

solver = IpoptApplication(nlp, ipopt_options);
% solver = IpoptApplication(nlp);

% Run Optimization
old = load('x0');
% old = load('x0_5node_v2');

% Refit nodes
% new_x = TwoStep_DS_default.utils.refitSolution(old.nlp, nlp, old.solution.x);

% [sol, info] = optimize(solver, new_x ); 
[sol, info] = optimize(solver, old.solution.x); 
% [sol, info] = optimize(solver);
[tspan, states, inputs, params] = exportSolution(nlp, sol);
solution.x = sol;
solution.tspan = tspan;
solution.states = states;
solution.inputs = inputs;
solution.params = params;
% checkConstraints(nlp, sol, 1e-1, 'log.txt')

%% Animate 
q_log = [solution.states{1}.x, solution.states{3}.x, solution.states{5}.x, solution.states{7}.x]; 
t_log = [solution.tspan{1}, solution.tspan{1}(end) + solution.tspan{3}, solution.tspan{1}(end) + solution.tspan{3}(end) + solution.tspan{5}, solution.tspan{1}(end) + solution.tspan{3}(end) + solution.tspan{5}(end) + solution.tspan{7}];
 
conGUI = cassie.load_animation(robot, t_log, q_log)';









  


