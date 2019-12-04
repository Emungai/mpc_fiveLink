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
    [sys, domains, guards] = cassie.load_behavior(robot, PATHS.OPT_LOAD, 'type', 'four_step');
else
    robot.configureDynamics('DelayCoriolisSet',true,'OmitCoriolisSet',true);
    [sys, domains, guards] = cassie.load_behavior(robot, '', 'type', 'four_step');
end
    

%% Create optimization problem
num_grid.RightStance1 = 10;
num_grid.LeftStance1 = 10;
num_grid.RightStance2 = 10;
num_grid.LeftStance2 = 10;
nlp = HybridTrajectoryOptimization('Cassie_Sagittal_3StepTransitions',sys,num_grid,[],'EqualityConstraintBoundary',1e-4);
nlp.update;

% Add domain specific constraints
nlp.Phase(1).Plant.UserNlpConstraint = @Sagittal_3StepTransitions.opt.right_stance_1;
nlp.Phase(2).Plant.UserNlpConstraint = @Sagittal_3StepTransitions.opt.left_impact_1;
nlp.Phase(3).Plant.UserNlpConstraint = @Sagittal_3StepTransitions.opt.left_stance_1;
nlp.Phase(4).Plant.UserNlpConstraint = @Sagittal_3StepTransitions.opt.right_impact_1;
nlp.Phase(5).Plant.UserNlpConstraint = @Sagittal_3StepTransitions.opt.right_stance_2;
nlp.Phase(6).Plant.UserNlpConstraint = @Sagittal_3StepTransitions.opt.left_impact_2;
nlp.Phase(7).Plant.UserNlpConstraint = @Sagittal_3StepTransitions.opt.left_stance_2;
nlp.update;

% Configure bounds and update
bounds = Sagittal_3StepTransitions.utils.getBounds(robot);
if LOAD
    nlp.configure(bounds, PATHS.OPT_LOAD);
else
    nlp.configure(bounds);
end

% Set initial state
Periodic = load('one_step/local/output/GaitLibrary_Velocity_v1');
selected = ones(40,1);
gait_0 = Periodic.GaitLibrary{1};
x0 = gait_0.states{1}.x(:,11);
dx0 = gait_0.states{1}.dx(:,11);
addNodeConstraint(nlp.Phase(1), cassie.constraints.state_external(nlp.Phase(1)), ...
    {'x','dx'}, 11, -1e-2, 1e-2, 'Linear', {selected, x0, dx0});

% Set final state
Periodic = load('one_step/local/output/GaitLibrary_Velocity_v1');
selected = ones(40,1); selected(1:4) = 0;
x0 = Periodic.GaitLibrary{1}.states{1}.x(:,11);
dx0 = Periodic.GaitLibrary{1}.states{1}.dx(:,11);
[x0, dx0] = cassie.utils.mirrorState(x0, dx0);
addNodeConstraint(nlp.Phase(7), cassie.constraints.state_external(nlp.Phase(7)), ...
    {'x','dx'}, 11, -1e-2, 1e-2, 'Linear', {selected, x0, dx0})



% Create Insertion Map
input = [];
output = [];
for i=1:length(Periodic.GaitLibrary)
%    [xM, dxM] = cassie.utils.mirrorState(Periodic.GaitLibrary{i}.states{1}.x(:,11), Periodic.GaitLibrary{i}.states{1}.dx(:,11));
   xM = Periodic.GaitLibrary{i}.states{1}.x(:,11);
   dxM = Periodic.GaitLibrary{i}.states{1}.dx(:,11);
   R = Angles.Euler_to_Rotation( xM(4:6) );
   pw = xM(1:3);
   vw = dxM(1:3);
   wx = Angles.skew( Angles.EulerRates_to_AngularVelocity(xM(4:6), dxM(4:6)) );
   vb = R'*vw - wx*R'*pw;
   input = horzcat(input, vw(1));
%    input = horzcat(input, Periodic.GaitLibrary{i}.velocity(1));
   output = horzcat(output, [xM; dxM]);
end
% input = (input - input(1))/(input(end) - input(1));
alpha = reshape(Bezier.bezfit(input, output, 5),[],1);

% for i=1:length(input)
%     fit = Bezier.bezierv(alpha, input(i));
%     for j=1:length(fit)
%         figure(j)
%         hold on; grid on;
%         plot(input(i), output(j,i), 'ko', 'LineWidth', 2)
%         plot(input(i), fit(j), 'ro', 'LineWidth', 2)
%     end
% end


% % Set Insertion Map Constraint
% selected = ones(40,1); selected(1:4) = 0;
% X = nlp.Phase(3).Plant.States.x;
% dX = nlp.Phase(3).Plant.States.dx;
% phi = dX(1);
% addNodeConstraint(nlp.Phase(3), cassie.constraints.state_insertion_map(nlp.Phase(3), phi, 5), ...
%     {'x','dx'}, 11, -1e-2, 1e-2, 'Linear', {selected, alpha})


% % --- Choose step height ----
% % Right Stance
% for k = 1:length(nlp.Phase(1).ConstrTable.u_leftToeHeight_cassie)-1
%     nlp.Phase(1).ConstrTable.u_leftToeHeight_cassie(k).updateProp('lb', -Inf, 'ub', Inf);
% end
% nlp.Phase(1).ConstrTable.u_leftToeHeight_cassie(end).updateProp('lb', gait_0.step_height, 'ub', gait_0.step_height);
% % Left Stance
% for k = 1:length(nlp.Phase(3).ConstrTable.u_rightToeHeight_cassie)-1
%     nlp.Phase(3).ConstrTable.u_rightToeHeight_cassie(k).updateProp('lb', -Inf, 'ub', Inf);
% end
% nlp.Phase(3).ConstrTable.u_rightToeHeight_cassie(end).updateProp('lb', 2*gait_0.step_height, 'ub', 2*gait_0.step_height);
% 

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
% compileConstraint(nlp.Phase(3),'state_insertion_map',PATHS.OPT_EXPORT);
% compileConstraint(nlp.Phase(4),'xDiscreteMapRightImpact_SS',PATHS.OPT_EXPORT);

% Remove Single Constraint
% removeConstraint(nlp.Phase(1),'dynamics_equation');
% removeConstraint(nlp.Phase(3),'dynamics_equation');
% removeConstraint(nlp.Phase(5),'dynamics_equation');
% removeConstraint(nlp.Phase(7),'dynamics_equation');
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


%% Create Optimization Problem 

% Create Ipopt solver
ipopt_options.max_iter         = 3000;
ipopt_options.tol              = 1e-2;
ipopt_options.dual_inf_tol           = 1e0;
ipopt_options.constr_viol_tol        = 1e-4;
ipopt_options.compl_inf_tol          = 1e0;
    
solver = IpoptApplication(nlp, ipopt_options);
% solver = IpoptApplication(nlp);
old = load('x0_4step');

%% Create c-frost problem
GENERATE_C = true;
GENERATE_C_COMPILE = true;
ROOT_PATH = 'three_step';
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
%         frost_c.createConstraints(nlp,[],[],src_gen_path, include_dir,{'dynamics_equation','dxDiscreteMapLeftImpact','dxDiscreteMapRightImpact'})
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
% frost_c.createConstraints(nlp, 11, 'StartingStateX_RightStanceDown1', src_gen_path, include_dir,'dynamics_equation')
% frost_c.createConstraints(nlp, 11, 'StartingStatedX_RightStanceDown1', src_gen_path, include_dir,'dynamics_equation')
% ./program --initial 'res/init.json' --options '../ipopt.opt' --data 'res/data.json' --bounds 'res/bounds.json' --output '../output.json'


%% 

% Select periodic gaits
Periodic = load('one_step/local/output/GaitLibrary_v5');
% Periodic = load('three_step/local/output/GaitLibrary_Velocity_v1');

gait_0 = Periodic.GaitLibrary{1};
gait_F = Periodic.GaitLibrary{9};

% Set initial state
selected = ones(40,1);
x0 = gait_0.states{1}.x(:,1);
dx0 = gait_0.states{1}.dx(:,1);
nlp.Phase(1).ConstrTable.state_external_constraint(1).updateProp('AuxData',{{selected, x0, dx0}});
nlp.Phase(1).ConstrTable.state_external_constraint(1).updateProp('lb', -1e-2, 'ub', 1e-2);

% Set final state
selected = ones(40,1); selected(1:4) = 0;
x0 = gait_F.states{1}.x(:,end);
dx0 = gait_F.states{1}.dx(:,end);
nlp.Phase(5).ConstrTable.state_external_constraint(end).updateProp('AuxData',{{selected, x0, dx0}});
nlp.Phase(5).ConstrTable.state_external_constraint(end).updateProp('lb', -1e-2, 'ub', 1e-2);

% Insertion Map
selected = ones(40,1);
x0 = gait_0.states{1}.x(:,1);
dx0 = gait_0.states{1}.dx(:,1);
nlp.Phase(1).ConstrTable.state_external_constraint(1).updateProp('AuxData',{{selected, x0, dx0}});
nlp.Phase(1).ConstrTable.state_external_constraint(1).updateProp('lb', -1e-2, 'ub', 1e-2);



% Create bounds file
solver = IpoptApplication(nlp, ipopt_options);
frost_c.createBoundsFile(solver, funcs, data_path, ['bounds','']);

%% Create bounds for all step length transitions

% Select periodic gait library
% Periodic = load('one_step/local/output/GaitLibrary_v5');
Periodic = load('one_step/local/output/GaitLibrary_Velocity_v1');
N = length(Periodic.GaitLibrary);
GaitLibary = cell(N*N-N,1);

index = 0;
for i = 1:N
    for j = 1:N
        % Skip trivial transition
        if i == j
            continue;
        end
        i
        j
        % Select initial and final orbits
        gait_0 = Periodic.GaitLibrary{i};
        gait_F = Periodic.GaitLibrary{j};
        
        % Set initial state
        selected = ones(40,1);
        x0 = gait_0.states{1}.x(:,1);
        dx0 = gait_0.states{1}.dx(:,1);
        nlp.Phase(1).ConstrTable.state_external_constraint(1).updateProp('AuxData',{{selected, x0, dx0}});
        nlp.Phase(1).ConstrTable.state_external_constraint(1).updateProp('lb', -1e-2, 'ub', 1e-2);
        
        % Set final state
        selected = ones(40,1); selected(1:4) = 0;
        x0 = gait_F.states{1}.x(:,end);
        dx0 = gait_F.states{1}.dx(:,end);
        nlp.Phase(5).ConstrTable.state_external_constraint(end).updateProp('AuxData',{{selected, x0, dx0}});
        nlp.Phase(5).ConstrTable.state_external_constraint(end).updateProp('lb', -1e-2, 'ub', 1e-2);
       
        % Create bounds file
        solver = IpoptApplication(nlp, ipopt_options);
        frost_c.createBoundsFile(solver, funcs, data_path, ['bounds_',num2str(i),'_',num2str(j)]);
        index = index + 1;
        
        % Store Library information
        GaitLibary{index}.output_file = ['output_','bounds_',num2str(i),'_',num2str(j)];
%         GaitLibary{index}.initial_step_length = gait_0.step_length;
%         GaitLibary{index}.final_step_length = gait_F.step_length;
        GaitLibary{index}.initial_velocity = gait_0.velocity;
        GaitLibary{index}.final_velocity = gait_F.velocity;
    end
end
disp(['Number of optimizations: ', num2str(index)])

%% Run Optimization
[sol, info] = optimize(solver, old.solution.x ); 
% [sol, info] = optimize(solver);

%% Load c_frost results
sol = loadjson([local_output_path,'\output_bounds_10_1.json']);


%% Extract Gait Library
for i=1:length(GaitLibary)
    sol = loadjson([local_output_path,'\',GaitLibary{i}.output_file,'.json']);
    [tspan, states, inputs, params] = exportSolution(nlp, sol);
    GaitLibary{i}.x = sol;
    GaitLibary{i}.tspan = tspan;
    GaitLibary{i}.states = states;
    GaitLibary{i}.inputs = inputs;
    GaitLibary{i}.params = params;
end
PeriodicLibrary = Periodic;
TransitionLibrary = GaitLibary;
save([local_output_path,'\GaitLibrary_PeriodicTransitions_Velocity_v1'],'PeriodicLibrary','TransitionLibrary')

%% Extract optimization results

[tspan, states, inputs, params] = exportSolution(nlp, sol);
solution.x = sol;
solution.tspan = tspan;
solution.states = states;
solution.inputs = inputs;
solution.params = params;
 
% checkConstraints(nlp, sol, 1e-4, 'log.txt')

%% Animate 
% solution = TransitionLibrary{50};

q_log = [solution.states{1}.x, solution.states{3}.x, solution.states{5}.x, solution.states{7}.x]; 
t_log = [solution.tspan{1}, solution.tspan{1}(end) + solution.tspan{3}, solution.tspan{1}(end) + solution.tspan{3}(end) + solution.tspan{5}, solution.tspan{1}(end) + solution.tspan{3}(end) + solution.tspan{5}(end) + solution.tspan{7}];
conGUI = cassie.load_animation(robot, t_log, q_log)';









