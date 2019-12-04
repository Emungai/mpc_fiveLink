%% Setup
restoredefaultpath; clear; clc;
root = fileparts(fileparts(pwd));
addpath(genpath(root));
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
nlp = HybridTrajectoryOptimization('Cassie_GaitLibrary',sys,num_grid,[],'EqualityConstraintBoundary',1e-4);
nlp.update;

% Add domain specific constraints
nlp.Phase(1).Plant.UserNlpConstraint = @SagittalGaitLibrary.opt.right_stance;
nlp.Phase(2).Plant.UserNlpConstraint = @SagittalGaitLibrary.opt.left_impact;
nlp.Phase(3).Plant.UserNlpConstraint = @SagittalGaitLibrary.opt.left_stance;
nlp.Phase(4).Plant.UserNlpConstraint = @SagittalGaitLibrary.opt.right_impact;
nlp.update;

% Configure bounds and update
bounds = SagittalGaitLibrary.utils.getBounds(robot);
if LOAD
    nlp.configure(bounds, PATHS.OPT_LOAD);
else
    nlp.configure(bounds);
end

% % Add Multi-domain constraints
% nlp = SagittalGaitLibrary.opt.multi_domain_constraints(nlp);
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
% compileConstraint(nlp.Phase(1),'stair_clearance_RightStance',PATHS.OPT_EXPORT);
% compileConstraint(nlp.Phase(3),'stair_clearance_LeftStance',PATHS.OPT_EXPORT);

% Remove Single Constraint
% removeConstraint(nlp.Phase(1),'dynamics_equation');
% removeConstraint(nlp.Phase(3),'dynamics_equation');
% removeConstraint(nlp.Phase(1),'BezierSymmetry');


%% Fit polynomial to stairs
d = 0.3;
h = 0.3;
c = 0.05;

points = [0, 0;
          d/2, 0;
          d, c;
          d, h/2
          d, h+c;
          3*d/2, h;
          2*d, h];

alpha0 = zeros(1,4);
cost_fun = @(alpha) cost(alpha, points);
nonlcon_fun = @(alpha) nonlcon(alpha, points);
alpha_star = fmincon(cost_fun, alpha0, [], [], [], [], [], [], nonlcon_fun);

% Plotting
f = @(x) alpha_star(1) + alpha_star(2).*x + alpha_star(3).*x.^2 + alpha_star(4).*x.^3;
t = linspace(0,2*d,100);

stairs = [0, 0;
          d/2, 0;
          d, 0;
          d, c;
          d, h/2
          d, h+c;
          d, h;
          3*d/2, h;
          2*d, h];

figure(1);
grid on;
hold on;
plot(t, f(t), 'Linewidth', 2);
plot(stairs(:,1), stairs(:,2), 'Linewidth', 2)


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
GENERATE_C_COMPILE = true;
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

% step_height_set = -0.2:0.1:0.2;
% step_length_set = -0.4:0.2:0.4;
% GaitLibrary = cell(length(step_height_set),length(step_length_set));
% 
% % Loop to generate periodic gait library
% tic
% for i = 1:length(step_height_set)
%     for j = 1:length(step_length_set)
%         
%         % Select from set
%         step_height = 0; %step_height_set(i);
%         step_length = 0; %step_length_set(j);
% 
%         % ------- Step Height ---------
%         step_height_1 = 0.1;
%         step_height_2 = 0.1;
%         % Right Stance Guard
%         N = length(nlp.Phase(1).ConstrTable.u_leftToeHeight_cassie);
%         for k = 1:N-1
%             nlp.Phase(1).ConstrTable.u_leftToeHeight_cassie(k).updateProp('lb', -step_height_2, 'ub', Inf);
%         end
%         nlp.Phase(1).ConstrTable.u_leftToeHeight_cassie(end).updateProp('lb', step_height_1, 'ub', step_height_1);
%         
%         % Left Stance Guard
%         N = length(nlp.Phase(3).ConstrTable.u_rightToeHeight_cassie);
%         for k = 1:N-1
%             nlp.Phase(3).ConstrTable.u_rightToeHeight_cassie(k).updateProp('lb', step_height_1, 'ub', Inf);
%         end
%         nlp.Phase(3).ConstrTable.u_rightToeHeight_cassie(end).updateProp('lb', step_height_1 + step_height_2, 'ub', step_height_1 + step_height_2);
%         
%         
%         % ------- Step Length ---------
%         step_length_1 = 0.2;
%         step_length_2 = 0.2;
%         nlp.Phase(1).ConstrTable.step_length_RightStance(end).updateProp('lb', step_length_1, 'ub', step_length_1);
%         nlp.Phase(3).ConstrTable.step_length_LeftStance(end).updateProp('lb', step_length_2, 'ub', step_length_2);
%         
%         
%         % ------ Stair Clearance ------
%         clearance = 0.05;
%         alpha_stairs_1 = stair_polynomial(step_length_1, step_height_1, clearance, -step_length_2, -step_height_2);
%         alpha_stairs_2 = stair_polynomial(step_length_2, step_height_2, clearance, 0, 0);
%         for k = 1:length(nlp.Phase(1).ConstrTable.stair_clearance_RightStance)
%             nlp.Phase(1).ConstrTable.stair_clearance_RightStance(k).setAuxdata(alpha_stairs_1);
%         end
%         for k = 1:length(nlp.Phase(3).ConstrTable.stair_clearance_LeftStance)
%             nlp.Phase(3).ConstrTable.stair_clearance_LeftStance(k).setAuxdata(alpha_stairs_2);
%         end        
%         
%         % Create solver
%         solver = IpoptApplication(nlp, ipopt_options);
%         
%         % Run Optimization
%         old = load('x0');
%         [sol, info] = optimize(solver, old.solution.x);
%         [tspan, states, inputs, params] = exportSolution(nlp, sol);
%         
%         keyboard
%         
%         % Store gait
%         GaitLibrary{i,j}.step_height = step_height;
%         GaitLibrary{i,j}.step_length = step_length;
%         GaitLibrary{i,j}.solution.x = sol;
%         GaitLibrary{i,j}.solution.tspan = tspan;
%         GaitLibrary{i,j}.solution.states = states;
%         GaitLibrary{i,j}.solution.inputs = inputs;
%         GaitLibrary{i,j}.solution.params = params;
%         
%         keyboard
%     end
% end
% toc


%%
        % ------- Step Length ---------
        step_length_1 = -0.4;
        step_length_2 = -0.4;
        nlp.Phase(1).ConstrTable.step_length_RightStance(end).updateProp('lb', step_length_1, 'ub', step_length_1);
        nlp.Phase(3).ConstrTable.step_length_LeftStance(end).updateProp('lb', step_length_2, 'ub', step_length_2);

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




