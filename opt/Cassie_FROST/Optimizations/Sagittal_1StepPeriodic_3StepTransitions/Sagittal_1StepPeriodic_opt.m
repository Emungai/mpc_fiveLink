%% Setup
restoredefaultpath; matlabrc; clear; clc;
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
    [sys, domains, guards] = cassie.load_behavior(robot, PATHS.OPT_LOAD, 'type', 'one_step');
else
    robot.configureDynamics('DelayCoriolisSet',true,'OmitCoriolisSet',true);
    [sys, domains, guards] = cassie.load_behavior(robot, '','type', 'one_step');
end
    

%% Create optimization problem
num_grid.RightStance = 10;
nlp = HybridTrajectoryOptimization('Cassie_Sagittal_1StepPeriodic',sys,num_grid,[],'EqualityConstraintBoundary',1e-4);
nlp.update;

% Add domain specific constraints
nlp.Phase(1).Plant.UserNlpConstraint = @Sagittal_1StepPeriodic.opt.right_stance;
nlp.Phase(2).Plant.UserNlpConstraint = @Sagittal_1StepPeriodic.opt.left_impact;
nlp.update;

% Configure bounds and update
bounds = Sagittal_1StepPeriodic.utils.getBounds(robot);
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
% compileConstraint(nlp.Phase(1),'average_velocity_RightStance',PATHS.OPT_EXPORT);
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
old = load('x0_1step');


%% Create c-frost problem
GENERATE_C = true;
GENERATE_C_COMPILE = true;
ROOT_PATH = 'one_step';
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
%         frost_c.createConstraints(nlp,[],[],src_gen_path, include_dir,{'dynamics_equation','dxDiscreteMapLeftImpactRelabel'})
%         frost_c.createConstraints(nlp,[],[],src_gen_path, include_dir)
%         frost_c.createObjectives(nlp,[],[],src_gen_path, include_dir);
        save(fullfile(local_res_path, 'funcs'), 'funcs');
    end
    load(fullfile(local_res_path, 'funcs'))
    frost_c.createDataFile(solver, funcs, data_path, 'data');
    frost_c.createBoundsFile(solver, funcs, data_path, 'bounds');
    frost_c.createInitialGuess(solver, data_path, old.solution.x);
end

% Example commands
% frost_c.createConstraints(nlp, 11, 'average_velocity_RightStance', src_gen_path, include_dir,'dynamics_equation')
% frost_c.createConstraints(nlp, 11, 'StartingStatedX_RightStanceDown1', src_gen_path, include_dir,'dynamics_equation')
% ./program --initial 'res/init.json' --options '../ipopt.opt' --data 'res/data.json' --bounds 'res/bounds.json' --output '../local/output/output.json'

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

% % Initialize Gait Library
% step_height_set = -0.2:0.1:0.2;
% step_length_set = -0.4:0.2:0.4;
% saved = load('GaitLibrary_v2');
% GaitLibrary = saved.GaitLibrary;
% % GaitLibrary = cell(length(step_length_set),length(step_length_set));
% 
% for i = 1:length(step_height_set)
%     for j = 1:length(step_length_set)
%         
%         % Skip over already computed gaits
%         if ~(isempty(GaitLibrary{i,j}))
%             continue;
%         end
%     
%         % --- Choose step height ----
%         step_height = step_height_set(i);
%         for k = 1:length(nlp.Phase(1).ConstrTable.u_leftToeHeight_cassie)-1
%             nlp.Phase(1).ConstrTable.u_leftToeHeight_cassie(k).updateProp('lb', -Inf, 'ub', Inf);
%         end
%         nlp.Phase(1).ConstrTable.u_leftToeHeight_cassie(end).updateProp('lb', step_height, 'ub', step_height);
% 
%         % --- Choose step length ----
%         step_length = step_length_set(j);
%         nlp.Phase(1).ConstrTable.step_length_RightStance(end).updateProp('lb', step_length, 'ub', step_length);
%         
%         % ------ Stair Clearance ------
%         clearance = 0.05;
%         alpha_stairs = stair_polynomial(step_length, step_height, clearance, -step_length, -step_height);
%         for k = 1:length(nlp.Phase(1).ConstrTable.stair_clearance_RightStance)
%             nlp.Phase(1).ConstrTable.stair_clearance_RightStance(k).setAuxdata(alpha_stairs);
%         end
% 
%         % Run Optimization
%         disp(['Step Height, ', num2str(step_height)])
%         disp(['Step Length, ', num2str(step_length)])
%         solver = IpoptApplication(nlp, ipopt_options);
%         old = load('x0_1Step');
%         [sol, info] = optimize(solver, old.solution.x ); 
%         [tspan, states, inputs, params] = exportSolution(nlp, sol);
%         
%         % Store Results
%         if info.status == 0
%             GaitLibrary{i,j}.step_height = step_height;
%             GaitLibrary{i,j}.step_length = step_length;
%             GaitLibrary{i,j}.solution.nlp = nlp;
%             GaitLibrary{i,j}.solution.x = sol;
%             GaitLibrary{i,j}.solution.tspan = tspan;
%             GaitLibrary{i,j}.solution.states = states;
%             GaitLibrary{i,j}.solution.inputs = inputs;
%             GaitLibrary{i,j}.solution.params = params;
%         else
%             keyboard
%         end
%     end
% end
% save('GaitLibrary_v2', 'GaitLibrary')

% checkConstraints(nlp, sol, 1e-4, 'log.txt')

%% Generate bounds for Sagittal step_length gait library
step_length_set = -0.4:0.1:0.4;
length(step_length_set)
for i = 1:length(step_length_set)
    % Choose new step length
    step_length = step_length_set(i);
    nlp.Phase(1).ConstrTable.step_length_RightStance(end).updateProp('lb', step_length, 'ub', step_length);
    solver = IpoptApplication(nlp);
    % Create bounds file
    frost_c.createBoundsFile(solver, funcs, data_path, ['bounds',num2str(i)]);
end

%% Generate bounds for Sagittal velocity gait library
velocity_set = -1:0.2:1;
length(velocity_set)
for i = 1:length(velocity_set)
    % Choose new step length
    velocity = [velocity_set(i), 0];
    nlp.Phase(1).ConstrTable.average_velocity_RightStance(end).updateProp('lb', velocity, 'ub', velocity);
    solver = IpoptApplication(nlp);
    % Create bounds file
    frost_c.createBoundsFile(solver, funcs, data_path, ['bounds',num2str(i)]);
end

%%
velocity = [0.1;0.1];
nlp.Phase(1).ConstrTable.average_velocity_RightStance(end).updateProp('lb', velocity, 'ub', velocity);
solver = IpoptApplication(nlp);
% Create bounds file
frost_c.createBoundsFile(solver, funcs, data_path, 'bounds');

end

%% Run Optimization
[sol, info] = optimize(solver, old.solution.x ); 
% [sol, info] = optimize(solver);

%% Load c_frost results
sol = loadjson('one_step/local/output/output.json');

%% Load Sagittal step_length gait library c_frost results
GaitLibrary = cell(length(step_length_set),1);
for i = 1:length(step_length_set)
    sol = loadjson([local_output_path, '\output', num2str(i),'.json']);
    [tspan, states, inputs, params] = exportSolution(nlp, sol);
    GaitLibrary{i}.step_length = step_length_set(i);
    GaitLibrary{i}.x = sol;
    GaitLibrary{i}.tspan = tspan;
    GaitLibrary{i}.states = states;
    GaitLibrary{i}.inputs = inputs;
    GaitLibrary{i}.params = params;
end
save([local_output_path,'\GaitLibrary_v5'],'GaitLibrary')

%% Load Sagittal velocity gait library c_frost results
GaitLibrary = cell(length(velocity_set),1);
for i = 1:length(velocity_set)
    sol = loadjson([local_output_path, '\output', num2str(i),'.json']);
    [tspan, states, inputs, params] = exportSolution(nlp, sol);
    GaitLibrary{i}.velocity = velocity_set(i);
    GaitLibrary{i}.x = sol;
    GaitLibrary{i}.tspan = tspan;
    GaitLibrary{i}.states = states;
    GaitLibrary{i}.inputs = inputs;
    GaitLibrary{i}.params = params;
end
save([local_output_path,'\GaitLibrary_Velocity_v1'],'GaitLibrary')


%% Extract optimization results
[tspan, states, inputs, params] = exportSolution(nlp, sol);
solution.x = sol;
solution.tspan = tspan;
solution.states = states;
solution.inputs = inputs;
solution.params = params;
 
% checkConstraints(nlp, sol, 1e-4, 'log.txt')

%% Animate 
% solution = GaitLibrary{1};

q_right_stance_log = solution.states{1}.x; 
q_left_stance_log = cassie.utils.mirrorStep(q_right_stance_log);

q_log = [q_right_stance_log, q_left_stance_log(:,1:end)]; 
t_log = [solution.tspan{1}, solution.tspan{1}(end) + solution.tspan{1}(1:end)]; 
conGUI = cassie.load_animation(robot, t_log, q_log)';



%% Analyze Gaits

for i=1:length(robot.Joints)
    figure(i);
    hold on; grid on;
    title(robot.Joints(i).Name)
    for j=1:length(GaitLibrary)
        step_length = GaitLibrary{j}.velocity;
        q = GaitLibrary{j}.states{1}.x(i,:);
        t = GaitLibrary{j}.tspan{1};   
        plot3(t,q,repmat(step_length,length(t)));
    end
end

