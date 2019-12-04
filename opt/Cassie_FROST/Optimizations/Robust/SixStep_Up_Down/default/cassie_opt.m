%% Setup
clear; restoredefaultpath; matlabrc; clc;
root = fileparts(fileparts(fileparts(fileparts(pwd))));
addpath(root);
PATHS = cassie.utils.getPaths(root);
frost_addpath;

addpath([fileparts(fileparts(fileparts(fileparts(fileparts(pwd))))), '/C-Frost/Matlab']);

% Settings
IGNORE_CORIOLIS = true;
LOAD = false;
COMPILE = false;
SAVE = false;
GENERATE_C = false;
GENERATE_C_COMPILE = false;
RUN_OPTIMIZATION = false;
RUN_C_OPTIMIZATION = false;
LOAD_C_SOLUTION = false;
ANIMATE = false;

% Load hybrid system
robot = Cassie(fullfile(PATHS.MODEL, 'urdf', 'cassie_with_sensors.urdf'));
if LOAD
    robot.loadDynamics(PATHS.OPT_LOAD, true);
    [sys, domains, guards] = SixStep_Up_Down.load_behavior(robot, PATHS.OPT_LOAD);
else
    robot.configureDynamics('DelayCoriolisSet', IGNORE_CORIOLIS, 'OmitCoriolisSet', true);
    [sys, domains, guards] = SixStep_Up_Down.load_behavior(robot,'');
end

open SixStep_Up_Down.utils.getBounds
open cassie_opt

%% Create optimization problem
num_grid.RightStance = 10;
num_grid.LeftStance = 10;
num_grid.RightStanceUp1 = 10;
num_grid.LeftStanceUp1 = 10;
num_grid.RightStanceUp2 = 10;
num_grid.LeftStanceUp2 = 10;
num_grid.RightStanceDown1 = 10;
num_grid.LeftStanceDown1 = 10;
num_grid.RightStanceDown2 = 10;
num_grid.LeftStanceDown2 = 10;
nlp = HybridTrajectoryOptimization('Cassie_Robust', sys,num_grid, [], 'EqualityConstraintBoundary', 1e-4);
nlp.update;

% Add domain specific constraints
nlp.Phase(1).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.right_stance;
nlp.Phase(2).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.left_impact;
nlp.Phase(3).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.left_stance;
nlp.Phase(4).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.right_impact;
nlp.Phase(5).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.right_stance_up_1;
nlp.Phase(6).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.left_impact_up_1;
nlp.Phase(7).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.left_stance_up_1;
nlp.Phase(8).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.right_impact_up_1;
nlp.Phase(9).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.right_stance_up_2;
nlp.Phase(10).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.left_impact_up_1;
nlp.Phase(11).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.left_stance_up_2;
nlp.Phase(12).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.bridge_impact_1;
nlp.Phase(13).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.right_stance_down_1;
nlp.Phase(14).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.left_impact_down_1;
nlp.Phase(15).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.left_stance_down_1;
nlp.Phase(16).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.right_impact_down_1;
nlp.Phase(17).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.right_stance_down_2;
nlp.Phase(18).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.left_impact_down_1;
nlp.Phase(19).Plant.UserNlpConstraint = @SixStep_Up_Down.opt.left_stance_down_2;
nlp.update;

% Configure bounds and update
bounds = SixStep_Up_Down.utils.getBounds(robot);
if LOAD
    nlp.configure(bounds, PATHS.OPT_LOAD);
else
    nlp.configure(bounds);
end

% Add Multi-domain constraints
nlp = SixStep_Up_Down.opt.multi_domain_constraints(nlp, bounds);
nlp.update;

% Updating bounds
SixStep_Up_Down.utils.updateBounds(nlp, bounds);

%% Compile and Save
if COMPILE
    compileObjective(nlp,[],[],PATHS.OPT_EXPORT);
    compileConstraint(nlp,[],[],PATHS.OPT_EXPORT,'dynamics_equation');
    %compileConstraint(nlp,[],[],PATHS.OPT_EXPORT);
end

% Save
if SAVE
    sys.saveExpression(PATHS.OPT_LOAD);
end

%% Remove constraints
if false
    for i = 5:12
        for j = flip(1:length(nlp.Phase(i).ConstrTable.Properties.VariableNames))
            removeConstraint(nlp.Phase(i), nlp.Phase(i).ConstrTable.Properties.VariableNames{j});
        end
        for j = flip(1:length(nlp.Phase(i).CostTable.Properties.VariableNames))
            removeCost(nlp.Phase(i), nlp.Phase(i).CostTable.Properties.VariableNames{j});
        end
    end
end

%% Solve Optimization Problem 

% Create Ipopt solver
ipopt_options.max_iter         = 1000;
ipopt_options.tol              = 1e-2;
ipopt_options.dual_inf_tol           = 1e0;
ipopt_options.constr_viol_tol        = 1e-4;
ipopt_options.compl_inf_tol          = 1e0;

solver = IpoptApplication(nlp, ipopt_options);

old = load(fullfile(SixStep_Up_Down.getRootPath, 'res/x0.mat'));

%% Create files depending on solver
c_code_path = fullfile(SixStep_Up_Down.getRootPath, 'c_code');
src_path = fullfile(SixStep_Up_Down.getRootPath, 'c_code', 'src');
src_gen_path = fullfile(SixStep_Up_Down.getRootPath, 'c_code', 'src', 'gen');
include_dir = fullfile(SixStep_Up_Down.getRootPath, 'c_code', 'include');
data_path = fullfile(SixStep_Up_Down.getRootPath, 'c_code', 'res');

if GENERATE_C
    mkdir(c_code_path); %#ok<*UNRCH>
    mkdir(src_path);
    mkdir(src_gen_path);
    mkdir(include_dir);
    mkdir(data_path);
    
    if GENERATE_C_COMPILE
        [funcs, map] = frost_c.getAllFuncs(solver);
        frost_c.createFunctionListHeader(funcs, src_path, include_dir);
        save(fullfile(SixStep_Up_Down.getRootPath, 'local', 'res', 'funcs'), 'funcs');
        
        frost_c.createIncludeHeader(funcs, include_dir);
        frost_c.createConstraints(nlp,[],[],src_gen_path, include_dir,'dynamics_equation')
        frost_c.createObjectives(nlp,[],[],src_gen_path, include_dir)
    end
    load(fullfile(SixStep_Up_Down.getRootPath, 'local', 'res', 'funcs'))
    frost_c.createDataFile(solver, funcs, data_path, 'data');
    frost_c.createBoundsFile(solver, funcs, data_path, 'bounds');
    frost_c.createInitialGuess(solver, data_path);
    
    if ~exist(fullfile('local', 'res', 'CMakeLists.txt'), 'file')
        copyfile(fullfile('local', 'res', 'CMakeLists_sample.txt'), fullfile('local', 'res', 'CMakeLists.txt'));
    end
    copyfile('local/res/CMakeLists.txt', 'c_code/CMakeLists.txt');
    copyfile('res/run_all.sh', 'c_code/run_all.sh');
end

% frost_c.createConstraints(nlp, 1, 'average_st_knee_angle_RightStance', src_gen_path, include_dir)
% frost_c.createConstraints(nlp, 3, 'average_st_knee_angle_LeftStance', src_gen_path, include_dir)
% 
% compileConstraint(nlp, 1, 'average_st_knee_angle_RightStance', PATHS.OPT_EXPORT, [], 'ForceExport', true)
% compileConstraint(nlp, 3, 'average_st_knee_angle_LeftStance', PATHS.OPT_EXPORT, [], 'ForceExport', true)

%% Run Optimization
if RUN_OPTIMIZATION
    % [sol, info] = optimize(solver, old.solution.x);
    [sol, info] = optimize(solver);

    [tspan, states, inputs, params] = exportSolution(nlp, sol);
    solution.x = sol;
    solution.tspan = tspan;
    solution.states = states;
    solution.inputs = inputs;
    solution.params = params;

    new_name = fullfile(SixStep_Up_Down.getRootPath, 'local', 'result.mat');
    save(new_name, 'solution', 'nlp', 'robot', 'bounds');
end

%% Load C solution
if LOAD_C_SOLUTION
    name = 'output_inplace_hip_restricted';
    sol = loadjson(['local/', name, '.json']);
    [tspan, states, inputs, params] = exportSolution(nlp, sol);
    solution.x = sol;
    solution.tspan = tspan;
    solution.states = states;
    solution.inputs = inputs;
    solution.params = params;
    
    save(['local/', name, '.mat'], 'solution');
end

%%
if RUN_OPTIMIZATION || LOAD_C_SOLUTION
    checkConstraints(nlp, solution.x, 5e-3, fullfile(SixStep_Up_Down.getRootPath, 'local', 'checkConstraints.txt'));
    checkVariables(nlp, solution.x, 1e-3, fullfile(SixStep_Up_Down.getRootPath, 'local', 'checkVariables.txt'));
    checkCosts(nlp, solution.x, fullfile(SixStep_Up_Down.getRootPath, 'local', 'checkCosts.txt'));
    
    open local/checkConstraints.txt
    open local/checkVariables.txt
    open local/checkCosts.txt
    open cassie_opt

%     SixStep_Up_Down.plot.plotOptStates(robot, nlp, solution);
%     SixStep_Up_Down.plot.plotOptTorques(robot, nlp, solution);
end

%% Measure state deviation
if RUN_OPTIMIZATION || LOAD_C_SOLUTION
    qRS = solution.states{1}.x;
    qLS = solution.states{3}.x;
    qLSUp = solution.states{7}.x;
    qRSUp = solution.states{9}.x;
    qLSDown = solution.states{13}.x;
    qRSDown = solution.states{15}.x;
    
    ErrUp1 = qLSUp - qLS;
    ErrUp2 = qRSUp - qRS;
    ErrDown1 = qLSDown - qLS;
    ErrDown2 = qRSDown - qRS;
    
    t = linspace(0, 0.4, 21);
    
    f = figure; ax1 = subplot(1, 2, 1); ax2 = subplot(1, 2, 2); f.Name = 'Err Up';
    plot(ax1, t, rad2deg(ErrUp1(5:end, :)));
    plot(ax2, t, rad2deg(ErrUp2(5:end, :)));
    f = figure; ax1 = subplot(1, 2, 1); ax2 = subplot(1, 2, 2); f.Name = 'Err Down';
    plot(ax1, t, rad2deg(ErrDown1(5:end, :)));
    plot(ax2, t, rad2deg(ErrDown2(5:end, :)));
end

%% Animate Periodic
if ANIMATE
    q_log = [solution.states{1}.x, solution.states{3}.x]; 
    t_log = [solution.tspan{1},...
        solution.tspan{1}(end) + solution.tspan{3}];
    conGUI = cassie.load_animation(robot, t_log, q_log)';
end

%% Animate Up
if ANIMATE
    q_log = [solution.states{5}.x, solution.states{7}.x, solution.states{9}.x, solution.states{11}.x]; 
    t_log = [solution.tspan{5},...
        solution.tspan{5}(end) + solution.tspan{7},...
        solution.tspan{5}(end) + solution.tspan{7}(end) + solution.tspan{9},...
        solution.tspan{5}(end) + solution.tspan{7}(end) + solution.tspan{7}(end) + solution.tspan{11}];
    conGUI = cassie.load_animation(robot, t_log, q_log)';
end

%% Animate Down
if ANIMATE
    q_log = [solution.states{1}.x, solution.states{13}.x, solution.states{15}.x, solution.states{17}.x, solution.states{19}.x]; 
    t_log = [solution.tspan{1},...
        solution.tspan{1}(end) + solution.tspan{13},...
        solution.tspan{1}(end) + solution.tspan{13}(end) + solution.tspan{15},...
        solution.tspan{1}(end) + solution.tspan{13}(end) + solution.tspan{15}(end) + solution.tspan{17},...
        solution.tspan{1}(end) + solution.tspan{13}(end) + solution.tspan{15}(end) + solution.tspan{17}(end) + solution.tspan{19}];
    conGUI = cassie.load_animation(robot, t_log, q_log)';
end

%%
LOAD_C_SOLUTION = true;
ANIMATE = true;

