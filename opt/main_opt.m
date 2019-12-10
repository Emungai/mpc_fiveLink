%% setting up the path
clear; close all; clc;
restoredefaultpath; matlabrc;

cur = pwd;
addpath(genpath(cur));

export_path = fullfile(cur, 'gen');
export_anim_path = fullfile(export_path, 'kinematics\');
export_opt_path = fullfile(export_path, 'stepUp');
utilities.init_path(export_path);
% if load_path is empty, it will not load any expression.
% if non-empty and assigned valid directory, then symbolic expressions will
% be loaded  from the MX binary files from the given directory.
load_path = [];%fullfile(cur, 'gen/sym');
delay_set = false; % Set to false when running for the first time
%what is delay_set doing?; calculating the symbolic expressions of the dynamics of the rigid body system
%setting to false will not calculate the expressions



%% define variables
args={};
% args.x_step=0.20;
% args.y_step=0.15;
% args.x_del=args.x_step+0.5*args.x_step;
% args.r_buff=0.1*args.x_step;
COMPILE=1;
%% load model
% Load model
rabbit = RABBIT('urdf/five_link_walker.urdf');
if isempty(load_path)
    rabbit.configureDynamics('DelayCoriolisSet',delay_set,'OmitCoriolisSet',true);
else
    % load symbolic expression for the dynamics equations
    rabbit.loadDynamics(load_path, delay_set);
end

%%
bounds=hybridSystemModel.domains.constraintFuncs.GetBounds(rabbit,{});
system=hybridSystemModel.LoadSystem(rabbit,[],{});
nlp=opt.LoadOpt(system,bounds,{});
%%
%removing constraints to create fake ending node
constraint_names = nlp.Phase(6).ConstrTable.Properties.VariableNames';
for i = 1:length(constraint_names)
	removeConstraint(nlp.Phase(6), constraint_names{i});
end
%% compile objective and system equations
if COMPILE
    rabbit.ExportKinematics(export_anim_path);
    compileObjective(nlp,[],[],export_opt_path);
    compileConstraint(nlp,[],[],export_opt_path);
end
% compileConstraint(nlp,[5],{},export_path);
%%
% compileConstraint(nlp,[],{'output_boundary_LeftStance'},export_path);
% compileConstraint(nlp,[],{'average_velocity_LeftStance'},export_path);
% compileConstraint(nlp,[],{'rightFootSwingLeftStance'},export_path);
% compileConstraint(nlp,[],{'leftFootSwingRightStance'},export_path);
% compileConstraint(nlp,[],{'leftFootPosX_RightStance'},export_path);
% compileConstraint(nlp,[],{'rightFootPosX_LeftStance'},export_path);
% 
% 
% compileConstraint(nlp,[],{'d2y_rightStance_RightStance'},export_path);

%%

%% remove constraints

% constraint_names = nlp.Phase(5).ConstrTable.Properties.VariableNames';
% for i = 1:length(constraint_names)
% 	removeConstraint(nlp.Phase(5), constraint_names{i});
% end
% 



% for i = 1
% 	removeConstraint(nlp.Phase(i), 'dynamics_equation');
% end


%% Create Ipopt solver 
addpath(export_opt_path);
nlp.update;
% initGuess.LoadInitialGuess(nlp,gait)
solver = IpoptApplication(nlp);
% solver.Options.ipopt.max_iter = 1000; %800  %cutting down the number of iterations//////////////////
% solver.Options.ipopt.tol = 5e-1;
% solver.Options.ipopt.compl_inf_tol = 5e+4;
% solver.Options.ipopt.constr_viol_tol = 5e-4;
% solver.Options.ipopt.dual_inf_tol = 1e+4 ;

% solver.Options.ipopt.max_iter = 10; %800    %cutting down the number of iterations//////////////////

% Run Optimization
tic
old = load(fullfile('trajectories', 'stepUp', 'debug3', 'stepUp_0.01_noDynamicsDS_3-Dec-2019-17-21-26-0500_Rabbit.mat'));
[sol, info] = optimize(solver, old.sol);
toc
[tspan, states, inputs, params] = exportSolution(nlp, sol);
gait = struct(...
    'tspan',tspan,...
    'states',states,...
    'inputs',inputs,...
    'params',params);

%% check costs & constraints
checkConstraints(nlp, sol, 1e-16, 'constraintCheck.txt');
checkCosts(nlp, sol,'checkCosts.txt');
open('constraintCheck.txt')
open('checkCosts.txt')
%% save solution
SAVE_SOLUTION = 1;
CHARACTER_NAME = 'opt_traj';
MODEL_NAME='Rabbit';
if SAVE_SOLUTION
    data_name = char(datetime('now','TimeZone','local','Format','d-MMM-y-HH-mm-ssZ'));%'local/longer_double_support_wider_step_dummy';

    name = [CHARACTER_NAME, '_', data_name, '_', MODEL_NAME];

    save_dir = fullfile(cur, 'trajectories\stepUp\singleDomain');

    if ~exist(save_dir,'dir'), mkdir(save_dir); end 

    if info.status ~= -1
        file_name = [name, '.mat'];
        fprintf('Saving gait %s\n', file_name);
           save(fullfile(save_dir, file_name), 'gait', 'sol', 'info', 'bounds');
    else
        file_name = [name, '_failed.mat'];
        fprintf('Saving (failed) gait %s\n', file_name);

    end


end


%% Animation
addpath(export_anim_path);

anim = Animator.FiveLinkAnimator([gait(1).tspan,gait(3).tspan,gait(5).tspan], [gait(1).states.x,gait(3).states.x,gait(5).states.x]);

anim.pov = Animator.AnimatorPointOfView.West;
anim.Animate(true);
anim.isLooping = true;
anim.updateWorldPosition = true;
anim.speed=0.5;
conGUI = Animator.AnimatorControls();
conGUI.anim = anim;

