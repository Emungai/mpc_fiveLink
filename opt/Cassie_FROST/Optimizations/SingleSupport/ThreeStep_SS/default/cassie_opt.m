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
    [sys, domains, guards] = cassie.load_behavior(robot, PATHS.OPT_LOAD, 'type', 'three_step');
else
    robot.configureDynamics('DelayCoriolisSet',true);
    [sys, domains, guards] = cassie.load_behavior(robot, '', 'type', 'three_step');
end
    

%% Create optimization problem
num_grid.RightStance1 = 10;
num_grid.LeftStance1 = 10;
num_grid.RightStance2 = 10;
nlp = HybridTrajectoryOptimization('Cassie_ThreeStep_SS',sys,num_grid,[],'EqualityConstraintBoundary',1e-4);
nlp.update;

% Add domain specific constraints
nlp.Phase(1).Plant.UserNlpConstraint = @ThreeStep_SS_default.opt.right_stance;
nlp.Phase(2).Plant.UserNlpConstraint = @ThreeStep_SS_default.opt.left_impact;
nlp.Phase(3).Plant.UserNlpConstraint = @ThreeStep_SS_default.opt.left_stance;
nlp.Phase(4).Plant.UserNlpConstraint = @ThreeStep_SS_default.opt.right_impact;
nlp.Phase(5).Plant.UserNlpConstraint = @ThreeStep_SS_default.opt.right_stance_2;
nlp.update;

% Configure bounds and update
bounds = ThreeStep_SS_default.utils.getBounds(robot);
if LOAD
    nlp.configure(bounds, PATHS.OPT_LOAD);
else
    nlp.configure(bounds);
end

% % Add Multi-domain constraints
% nlp = ThreeStep_SS_default.opt.multi_domain_constraints(nlp);
% nlp.update;


%% Compile and Save
if COMPILE
    compileObjective(nlp,[],[],PATHS.OPT_EXPORT);
%     compileConstraint(nlp,[],[],PATHS.OPT_EXPORT);
    compileConstraint(nlp,[],[],PATHS.OPT_EXPORT,'dynamics_equation');
%     nlp.Phase(3).ConstrTable.dynamics_equation(1).SummandFunctions(end).SymFun.export(PATHS.OPT_EXPORT, 'ForceExport',true)
%     nlp.Phase(3).ConstrTable.dynamics_equation(1).SummandFunctions(end).SymFun.exportJacobian(PATHS.OPT_EXPORT, 'ForceExport',true)
end

% Save
if SAVE
    sys.saveExpression(PATHS.OPT_LOAD);
end

% Compile Single Constraint
% compileConstraint(nlp.Phase(2),'xDiscreteMapLeftImpact_SS',PATHS.OPT_EXPORT);
% compileConstraint(nlp.Phase(4),'xDiscreteMapRightImpact_SS',PATHS.OPT_EXPORT);

% Remove Single Constraint
% removeConstraint(nlp.Phase(1),'dynamics_equation');
% removeConstraint(nlp.Phase(3),'dynamics_equation');
% removeConstraint(nlp.Phase(1),'BezierSymmetry');


% phases = [5];
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
[sol, info] = optimize(solver, old.solution.x);
% [sol, info] = optimize(solver);
[tspan, states, inputs, params] = exportSolution(nlp, sol);
solution.x = sol;
solution.tspan = tspan;
solution.states = states;
solution.inputs = inputs;
solution.params = params;

% checkConstraints(nlp, sol, 1e-4, 'log.txt')

%% Animate 
q_log = [solution.states{1}.x, solution.states{3}.x, solution.states{5}.x]; 
t_log = [solution.tspan{1}, solution.tspan{1}(end) + solution.tspan{3}, solution.tspan{1}(end) + solution.tspan{3}(end) + solution.tspan{5}];
conGUI = cassie.load_animation(robot, t_log, q_log)';


