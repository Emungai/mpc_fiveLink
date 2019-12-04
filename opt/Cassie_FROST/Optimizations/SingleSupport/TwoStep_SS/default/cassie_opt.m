%% Setup
restoredefaultpath; matlabrc; clear; clc;
root = fileparts(fileparts(fileparts(fileparts(pwd))));
addpath(root);
PATHS = cassie.utils.getPaths(root);
frost_addpath;

addpath('C:\Users\Ross Hartley\Documents\GitHub\Ross_Cassie_Controllers\submodules\C-Frost\Matlab')

% Settings
LOAD = false;
COMPILE = false;
SAVE = false;

% Load hybrid system
robot = Cassie([PATHS.MODEL,'\urdf\cassie_with_sensors.urdf']);
if LOAD
    robot.loadDynamics(PATHS.MODEL_LOAD, true);
    [sys, domains, guards] = cassie.load_behavior(robot, PATHS.OPT_LOAD, 'type', 'two_step');
else
    robot.configureDynamics('DelayCoriolisSet',true,'OmitCoriolisSet',true);
    [sys, domains, guards] = cassie.load_behavior(robot, '', 'type', 'two_step');
end
    

%% Create optimization problem
num_grid.RightStance = 10;
num_grid.LeftStance = 10;
nlp = HybridTrajectoryOptimization('Cassie_TwoStep_SS',sys,num_grid,[],'EqualityConstraintBoundary',1e-4);
nlp.update;

% Add domain specific constraints
nlp.Phase(1).Plant.UserNlpConstraint = @TwoStep_SS_default.opt.right_stance;
nlp.Phase(2).Plant.UserNlpConstraint = @TwoStep_SS_default.opt.left_impact;
nlp.Phase(3).Plant.UserNlpConstraint = @TwoStep_SS_default.opt.left_stance;
nlp.Phase(4).Plant.UserNlpConstraint = @TwoStep_SS_default.opt.right_impact;
nlp.update;

% Configure bounds and update
bounds = TwoStep_SS_default.utils.getBounds(robot);
if LOAD
    nlp.configure(bounds, PATHS.OPT_LOAD);
else
    nlp.configure(bounds);
end 

% % Add Multi-domain constraints
% nlp = TwoStep_SS_default.opt.multi_domain_constraints(nlp);
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


%% Create Optimization Problem 

% Create Ipopt solver
ipopt_options.max_iter         = 3000;
ipopt_options.tol              = 1e-2;
ipopt_options.dual_inf_tol           = 1e0;
ipopt_options.constr_viol_tol        = 1e-4;
ipopt_options.compl_inf_tol          = 1e0;
    
solver = IpoptApplication(nlp, ipopt_options);
% solver = IpoptApplication(nlp);
old = load('x0');

%% Create c-frost problem
GENERATE_C = true;
GENERATE_C_COMPILE = false;
ROOT_PATH = './';
c_code_path = fullfile(ROOT_PATH, 'c_code');
src_path = fullfile(ROOT_PATH, 'c_code', 'src');
src_gen_path = fullfile(ROOT_PATH, 'c_code', 'src', 'gen');
include_dir = fullfile(ROOT_PATH, 'c_code', 'include');
data_path = fullfile(ROOT_PATH, 'c_code', 'res');
local_path = fullfile(ROOT_PATH, 'local');
local_res_path = fullfile(ROOT_PATH, 'local', 'res');

if GENERATE_C
    if ~exist(c_code_path, 'dir')
        mkdir(c_code_path);
    end
    if ~exist(src_path, 'dir')
        mkdir(src_path);
    end
    if ~exist(src_gen_path, 'dir')
        mkdir(src_gen_path);
    end
    if ~exist(include_dir, 'dir')
        mkdir(include_dir);
    end
    if ~exist(data_path, 'dir')
        mkdir(data_path);
    end
    if ~exist(local_path, 'dir')
        mkdir(local_path);
    end
    if ~exist(local_res_path, 'dir')
        mkdir(local_res_path);
    end
    
    if GENERATE_C_COMPILE
        [funcs, map] = frost_c.getAllFuncs(solver);
        frost_c.createFunctionListHeader(funcs, src_path, include_dir);
        frost_c.createIncludeHeader(funcs, include_dir);
        frost_c.createConstraints(nlp,[],[],src_gen_path, include_dir,{'dynamics_equation','dxDiscreteMapLeftImpact','dxDiscreteMapRightImpact'})
%         frost_c.createConstraints(nlp,[],[],src_gen_path, include_dir)
        frost_c.createObjectives(nlp,[],[],src_gen_path, include_dir);
        save(fullfile(local_res_path, 'funcs'), 'funcs');
    end
    load(fullfile(local_res_path, 'funcs'))
    frost_c.createDataFile(solver, funcs, data_path, 'data');
    frost_c.createBoundsFile(solver, funcs, data_path, 'bounds');
    frost_c.createInitialGuess(solver, data_path, old.solution.x);
end

% Example commands
% frost_c.createConstraints(nlp, 11, 'StartingStateX_RightStanceDown1', src_gen_path, include_dir,'dynamics_equation')
% frost_c.createConstraints(nlp, 11, 'StartingStatedX_RightStanceDown1', src_gen_path, include_dir,'dynamics_equation')
% ./program --initial 'res/init.json' --options '../ipopt.opt' --data 'res/data.json' --bounds 'res/bounds.json' --output '../output.json'

%% Create Gait Library

step_length_set = -1:0.2:1;
for i = 1:length(step_length_set)
    % Change step length
    step_length = step_length_set(i);
    nlp.Phase(1).updateConstrProp('step_length_RightStance', 'last', 'lb', step_length, 'ub', step_length);
    nlp.Phase(3).updateConstrProp('step_length_LeftStance', 'last', 'lb', step_length, 'ub', step_length);
    solver = IpoptApplication(nlp);
    % Create bounds file
    frost_c.createBoundsFile(solver, funcs, data_path, ['bounds_', num2str(i)]);
end

%% Run Optimization
[sol, info] = optimize(solver, old.solution.x ); 
% [sol, info] = optimize(solver);

%% Load c_frost results
sol = loadjson('output.json');

%% Extract optimization results
[tspan, states, inputs, params] = exportSolution(nlp, sol);
solution.x = sol;
solution.tspan = tspan;
solution.states = states;
solution.inputs = inputs;
solution.params = params;
 
% checkConstraints(nlp, sol, 1e-4, 'log.txt')

%% Animate 
q_log = [solution.states{1}.x, solution.states{3}.x]; 
t_log = [solution.tspan{1}, solution.tspan{1}(end) + solution.tspan{3}];
conGUI = cassie.load_animation(robot, t_log, q_log)';


