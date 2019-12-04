%% Setup
restoredefaultpath; clear; clc;
root = fileparts(fileparts(pwd));
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

% Add Multi-domain constraints
nlp = SagittalGaitLibrary.opt.multi_domain_constraints(nlp);
nlp.update;


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


%% Solve Optimization Problem 

% Create Ipopt solver
ipopt_options.max_iter         = 3000;
ipopt_options.tol              = 1e-2;
ipopt_options.dual_inf_tol           = 1e0;
ipopt_options.constr_viol_tol        = 1e-4;
ipopt_options.compl_inf_tol          = 1e0;

step_height_set = -0.2:0.1:0.2;
step_length_set = -0.4:0.2:0.4;
GaitLibrary = cell(length(step_height_set),length(step_length_set));

% Loop to generate periodic gait library
tic
for i = 1:length(step_height_set)
    for j = 1:length(step_length_set)
        
        % Select from set
        step_height = step_height_set(i);
        step_length = step_length_set(j);

        % ------- Step Height ---------
        % Right Stance Guard
        N = length(nlp.Phase(1).ConstrTable.u_leftToeHeight_cassie);
        for k = 1:N-1
            nlp.Phase(1).ConstrTable.u_leftToeHeight_cassie(k).updateProp('lb', -Inf, 'ub', Inf);
        end
        nlp.Phase(1).ConstrTable.u_leftToeHeight_cassie(end).updateProp('lb', step_height, 'ub', step_height);
        
        % Left Stance Guard
        N = length(nlp.Phase(3).ConstrTable.u_rightToeHeight_cassie);
        for k = 1:N-1
            nlp.Phase(3).ConstrTable.u_rightToeHeight_cassie(k).updateProp('lb', -Inf, 'ub', Inf);
        end
        nlp.Phase(3).ConstrTable.u_rightToeHeight_cassie(end).updateProp('lb', 2*step_height, 'ub', 2*step_height);
        
        
        % ------- Step Length ---------
        nlp.Phase(1).ConstrTable.step_length_RightStance(end).updateProp('lb', step_length, 'ub', step_length);
        nlp.Phase(3).ConstrTable.step_length_LeftStance(end).updateProp('lb', step_length, 'ub', step_length);
        
        
        % Create solver
        solver = IpoptApplication(nlp, ipopt_options);
        
        % Run Optimization
        old = load('x0');
        [sol, info] = optimize(solver, old.solution.x);
        [tspan, states, inputs, params] = exportSolution(nlp, sol);
        GaitLibrary{i,j}.step_height = step_height;
        GaitLibrary{i,j}.step_length = step_length;
        GaitLibrary{i,j}.solution.x = sol;
        GaitLibrary{i,j}.solution.tspan = tspan;
        GaitLibrary{i,j}.solution.states = states;
        GaitLibrary{i,j}.solution.inputs = inputs;
        GaitLibrary{i,j}.solution.params = params;
        
        keyboard
    end
end
toc

% solution.x = sol;
% solution.tspan = tspan;
% solution.states = states;
% solution.inputs = inputs;
% solution.params = params;

% checkConstraints(nlp, sol, 1e-4, 'log.txt')

%% Animate 
solution = GaitLibrary{5,5}.solution;

q_log = [solution.states{1}.x, solution.states{3}.x]; 
t_log = [solution.tspan{1}, solution.tspan{1}(end) + solution.tspan{3}];
conGUI = cassie.load_animation(robot, t_log, q_log)';


%%
figure;
hold on; grid on;

for n = 1:5
    solution = GaitLibrary{5,n}.solution;
    for i=1:21
       pL(:,i) = p_LeftToeBottom(solution.states{1}.x(:,i)); 
    end
    plot(pL(1,:), pL(3,:),'.')
end


