%% Setup
restoredefaultpath; clear; clc;
root = fileparts(fileparts(fileparts(fileparts(pwd))));
addpath(genpath(root));
PATHS = cassie.util.getPaths(root);
frost_addpath;

% Settings
LOAD = false;
COMPILE = false;
SAVE = false;

% Load hybrid system
robot = Cassie([PATHS.MODEL,'\urdf\cassie_with_sensors.urdf']);
if LOAD
    robot.loadDynamics(PATHS.MODEL_LOAD, true);
    [sys, domains, guards] = cassie.load_behavior(robot, PATHS.OPT_LOAD, 'type', 'standing');
else
    robot.configureDynamics('DelayCoriolisSet',true);
    [sys, domains, guards] = cassie.load_behavior(robot, '','type', 'standing');
end
    

%% Create optimization problem
num_grid = 10;
nlp = TrajectoryOptimization('Cassie_Standing_DS',sys,num_grid,[],'EqualityConstraintBoundary',1e-4);
nlp.update;

nlp.Plant.UserNlpConstraint = @Standing_DS_default.opt.standing;
nlp.update;

% Configure bounds and update
bounds = Standing_DS_default.utils.getBounds(robot);
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
    compileConstraint(nlp,[],PATHS.OPT_EXPORT,'dynamics_equation');
%      nlp.ConstrTable.dynamics_equation(1).SummandFunctions(end-1).SymFun.export(PATHS.OPT_EXPORT, 'ForceExport',true)
end

% Save
if SAVE
    sys.saveExpression(PATHS.OPT_LOAD);
end

% Compile Single Constraint
% compileConstraint(nlp,'Body2ToeDistance_RightDoubleSupport',PATHS.OPT_EXPORT);

% Remove Single Constraint
% removeConstraint(nlp,'u_friction_cone_RightToeBottom');


%% Solve Optimization Problem 

% Create Ipopt solver
ipopt_options.max_iter         = 3000;
ipopt_options.tol              = 1e-2;
ipopt_options.dual_inf_tol           = 1e0;
ipopt_options.constr_viol_tol        = 1e-4;
ipopt_options.compl_inf_tol          = 1e0;

nlp.update;
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
q_log = solution.states.x; 
t_log = solution.tspan; 
conGUI = cassie.load_animation(robot, t_log, q_log)';


