%% Setup
restoredefaultpath; matlabrc; clear; clc;
root = fileparts(fileparts(fileparts(fileparts(pwd))));
addpath(root);
PATHS = cassie.utils.getPaths(root);
 addpath(genpath('C:\Users\mungam\Documents\GitHub\frost-dev'));

frost_addpath;

% Settings
LOAD = false;
COMPILE = false;
SAVE = false;
GENERATE_C = true;
GENERATE_C_COMPILE = false;

% Load hybrid system
robot = Cassie([PATHS.MODEL,'\urdf\cassie_with_sensors.urdf']);
if LOAD
    robot.loadDynamics(PATHS.MODEL_LOAD, true);
    [sys, domains, guards] = cassie.load_behavior(robot, PATHS.OPT_LOAD, 'type', 'one_step');
else
    robot.configureDynamics('DelayCoriolisSet',true,'OmitCoriolisSet',true);
    [sys, domains, guards] = cassie.load_behavior(robot, '','type', 'one_step');
end
    

%% Create optimization problem
num_grid.RightStance = 10;
nlp = HybridTrajectoryOptimization('Cassie_OneStep',sys,num_grid,[],'EqualityConstraintBoundary',1e-4);
nlp.update;

% Add domain specific constraints
nlp.Phase(1).Plant.UserNlpConstraint = @OneStep_SS_default_c_frost.opt.right_stance;
nlp.Phase(2).Plant.UserNlpConstraint = @OneStep_SS_default_c_frost.opt.left_impact;
nlp.update;

% Configure bounds and update
bounds = OneStep_SS_default_c_frost.utils.getBounds(robot);
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
    % nlp.Phase(1).ConstrTable.dynamics_equation(1).SummandFunctions(end).SymFun.export(PATHS.OPT_EXPORT, 'ForceExport',true)
    % nlp.Phase(1).ConstrTable.dynamics_equation(1).SummandFunctions(end).SymFun.exportJacobian(PATHS.OPT_EXPORT, 'ForceExport',true)
end

% Save
if SAVE
    sys.saveExpression(PATHS.OPT_LOAD);
end

% Compile Single Constraint
% compileConstraint(nlp.Phase(1),'swing_toe_pitch_RightStance',PATHS.OPT_EXPORT);
% compileConstraint(nlp.Phase(2),'dxDiscreteMapLeftImpactRelabel',PATHS.OPT_EXPORT);

% Remove Single Constraint
% removeConstraint(nlp.Phase(1),'dynamics_equation');

% removeConstraint(nlp.Phase(2),'xDiscreteMapLeftImpactRelabel');
% removeConstraint(nlp.Phase(2),'dxDiscreteMapLeftImpactRelabel');

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

%% Run Optimization in Matlab
[sol, info] = optimize(solver, old.solution.x); 
% [sol, info] = optimize(solver);

%% Create c-frost problem
ROOT_PATH = 'periodic';
c_code_path = fullfile(ROOT_PATH, 'c_code');
src_path = fullfile(ROOT_PATH, 'c_code', 'src');
src_gen_path = fullfile(ROOT_PATH, 'c_code', 'src', 'gen');
include_dir = fullfile(ROOT_PATH, 'c_code', 'include');
data_path = fullfile(ROOT_PATH, 'c_code', 'res');
local_path = fullfile(ROOT_PATH, 'local');
local_res_path = fullfile(ROOT_PATH, 'local', 'res');
local_output_path = fullfile(ROOT_PATH, 'local', 'output');
local_log_path = fullfile(ROOT_PATH, 'local', 'log');

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
    if ~exist(local_output_path, 'dir')
        mkdir(local_output_path);
    end
    if ~exist(local_log_path, 'dir')
        mkdir(local_log_path);
    end
    
    if GENERATE_C_COMPILE
        [funcs, map] = frost_c.getAllFuncs(solver);
        frost_c.createFunctionListHeader(funcs, src_path, include_dir);
        frost_c.createIncludeHeader(funcs, include_dir);
        save(fullfile(ROOT_PATH, 'local', 'res', 'funcs'), 'funcs');
        frost_c.createConstraints(nlp,[],[],src_gen_path, include_dir,'dynamics_equation')
%         frost_c.createConstraints(nlp,[],[],src_gen_path, include_dir)
        frost_c.createObjectives(nlp,[],[],src_gen_path, include_dir)
    end
    load(fullfile(ROOT_PATH, 'local', 'res', 'funcs'))
    frost_c.createDataFile(solver, funcs, data_path, 'data');
    frost_c.createBoundsFile(solver, funcs, data_path, 'bounds');
    frost_c.createInitialGuess(solver, data_path, old.solution.x);
    
    if ~exist(fullfile(c_code_path, 'CMakeLists.txt'), 'file')
        copyfile(fullfile(PATHS.RES, 'CMakeLists_sample.txt'), fullfile(c_code_path, 'CMakeLists.txt'));
    end
    if ~exist(fullfile(ROOT_PATH, 'ipopt.opt'), 'file')
        copyfile(fullfile(PATHS.RES, 'ipopt.opt'), fullfile(ROOT_PATH, 'ipopt.opt'));
    end
    if ~exist(fullfile(c_code_path, 'run_all.sh'), 'file')
        copyfile(fullfile(PATHS.RES, 'run_all.sh'), fullfile(c_code_path, 'run_all.sh'));
    end    
end

% Example commands
% frost_c.createConstraints(nlp, 11, 'average_velocity_RightStance', src_gen_path, include_dir,'dynamics_equation')
% frost_c.createConstraints(nlp, 11, 'StartingStatedX_RightStanceDown1', src_gen_path, include_dir,'dynamics_equation')
% ./program --initial 'res/init.json' --options '../ipopt.opt' --data 'res/data.json' --bounds 'res/bounds.json' --output '../local/output/output.json'

% frost_c.createConstraints(nlp, 1, 'dynamics_equation', 'cassie_dynamics/src/gen/', 'cassie_dynamics/include',[])
% frost_c.createConstraints(nlp, 3, 'dynamics_equation', 'cassie_dynamics/src/gen/', 'cassie_dynamics/include',[])

%% Load single c_frost solution
sol = loadjson(fullfile(local_output_path,'output_bounds_1_1.json'));

%% Create multiple bounds.json for c_frost Gait Library
step_length_set = -0.4:0.2:0.4;%linspace(-0.4,0.4,10);%
step_height_set = -0.2:0.2:0.2;%linspace(-0.2,0.2,10);%
N = length(step_length_set);
M = length(step_height_set);
disp(['Creating ', num2str(N*M), ' bounds files.'])
for i = 1:N
    for j = 1:M
        % ------- Step Length ---------
        step_length = step_length_set(i);
        nlp.Phase(1).updateConstrProp('step_length_RightStance', 'last', 'lb', step_length, 'ub', step_length);
        
        % ------- Step Height ---------
        step_height = step_height_set(j);
        % Right Stance Guard
        for k = 1:length(nlp.Phase(1).ConstrTable.u_leftToeHeight_cassie)-1
            nlp.Phase(1).ConstrTable.u_leftToeHeight_cassie(k).updateProp('lb', -Inf, 'ub', Inf);
        end
        nlp.Phase(1).ConstrTable.u_leftToeHeight_cassie(end).updateProp('lb', step_height, 'ub', step_height);
        
        % ------- Create Bounds File ---------
            solver = IpoptApplication(nlp);
        frost_c.createBoundsFile(solver, funcs, data_path, ['bounds_', num2str(i), '_', num2str(j)]);
        
    end
end
disp('Done!')

%% Load multiple c_frost solutions
GaitLibrary = cell(N,M);
for i = 1:N
    for j = 1:M
        sol = loadjson([local_output_path, '\output_bounds_', num2str(i), '_', num2str(j), '.json']);
        [tspan, states, inputs, params] = exportSolution(nlp, sol);
        GaitLibrary{i,j}.step_length = step_length_set(i);
        GaitLibrary{i,j}.step_height = step_height_set(j);
        GaitLibrary{i,j}.x = sol;
        GaitLibrary{i,j}.tspan = tspan;
        GaitLibrary{i,j}.states = states;
        GaitLibrary{i,j}.inputs = inputs;
        GaitLibrary{i,j}.params = params;
    end
end
% save([local_output_path,'\GaitLibrary_v5'],'GaitLibrary')

%% Extract variables from solution
[tspan, states, inputs, params] = exportSolution(nlp, sol);
solution.x = sol;
solution.tspan = tspan;
solution.states = states;
solution.inputs = inputs;
solution.params = params;
 
% checkConstraints(nlp, sol, 1e-4, 'log.txt')

%% Animate 
% solution = GaitLibrary{end,end}

q_right_stance_log = solution.states{1}.x; 
q_left_stance_log = cassie.utils.mirrorStep(q_right_stance_log);

q_log = [q_right_stance_log, q_left_stance_log(:,1:end)]; 
t_log = [solution.tspan{1}, solution.tspan{1}(end) + solution.tspan{1}(1:end)]; 
conGUI = cassie.load_animation(robot, t_log, q_log)';








