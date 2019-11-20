%% Setup
clear all; clc;
cur = pwd;
addpath(genpath(cur));

% addpath('../../');
% frost_addpath;
export_path = fullfile(cur, 'gen/stepUp');
utilities.init_path(export_path);
% export_path = fullfile(cur, 'gen/');
% if load_path is empty, it will not load any expression.
% if non-empty and assigned valid directory, then symbolic expressions will
% be loaded  from the MX binary files from the given directory.
load_path = [];%fullfile(cur, 'gen/sym');
%% define variables
delay_set = false;
args={};
args.x_step=0.20;
args.y_step=0.15;
args.x_del=args.x_step+0.5*args.x_step;
args.r_buff=0.1*args.x_step;
COMPILE=0;

%%
% Load model
rabbit = RABBIT('urdf/five_link_walker.urdf');
if isempty(load_path)
    rabbit.configureDynamics('DelayCoriolisSet',delay_set);
else
    % load symbolic expression for the dynamics equations
    rabbit.loadDynamics(load_path, delay_set);
end
%%
rStanceModel=hybridSystemModel.domains.RightStance(rabbit, load_path)
rStanceModel.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.right_stance_constraints;

DS1Model=hybridSystemModel.domains.DoubleSupportConstHeight(rabbit, load_path);
DS1Model.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.right_stance_constraints;
%% Define User Costs
u = rStanceModel.Inputs.Control.u;
u2r = tovector(norm(u).^2);
u2r_fun = SymFunction(['torques2_' rStanceModel.Name],u2r,{u});
%  bounds=hybridSystemModel.domains.constraintFuncs.GetBounds(rStanceModel,args);
hybridSystemModel.domains.constraintFuncs.setBounds;
 nlp = TrajectoryOptimization('righStance_opt', rStanceModel, 10, [],'EqualityConstraintBoundary',1e-4); %1e-4

 nlp.configure(bounds.RightStance,args);
addRunningCost(nlp,u2r_fun,{'u'});
nlp.update
%%
u = DS1Model.Inputs.Control.u;
u2r = tovector(norm(u).^2);
u2r_fun = SymFunction(['torques_' DS1Model.Name],u2r,{u});
%  bounds=hybridSystemModel.domains.constraintFuncs.GetBounds(rStanceModel,args);
hybridSystemModel.domains.constraintFuncs.setBounds;
 nlp = TrajectoryOptimization('righStance_opt', DS1Model, 10, [],'EqualityConstraintBoundary',1e-4); %1e-4

 nlp.configure(bounds.RightStance,args);
addRunningCost(nlp,u2r_fun,{'u'});
nlp.update
%% Compile
if COMPILE
compileObjective(nlp,[],export_path);
compileConstraint(nlp,[],export_path);%,,{'dynamics_equation'}

end
compileConstraint(nlp,{'torsoRotDoubleSupportConstHeight'},export_path);%,,{'dynamics_equation'}
compileConstraint(nlp,{'torsoBaseDoubleSupportConstHeight'},export_path);%,,{'dynamics_equation'}


%% Create Ipopt solver 
addpath(genpath(export_path));
nlp.update;
initGuess.LoadInitialGuess(nlp,gait(1))
solver = IpoptApplication(nlp);
solver.Options.ipopt.max_iter = 250; %800  %cutting down the number of iterations//////////////////

% Run Optimization
tic
% old = load('x0');
% [sol, info] = optimize(solver, old.sol);
[sol, info] = optimize(solver);
toc
[tspan, states, inputs, params] = exportSolution(nlp, sol);
gait = struct(...
    'tspan',tspan,...
    'states',states,...
    'inputs',inputs,...
    'params',params);
%%
%%
SAVE_SOLUTION = 1;
    CHARACTER_NAME = 'DS1';
    MODEL_NAME='Rabbit';
    if SAVE_SOLUTION
        data_name = char(datetime('now','TimeZone','local','Format','d-MMM-y-HH-mm-ssZ'));%'local/longer_double_support_wider_step_dummy';

        name = [CHARACTER_NAME, '_', data_name, '_', MODEL_NAME];
 
        save_dir = fullfile(cur, 'trajectories\stepUp');
 
        if ~exist(save_dir,'dir'), mkdir(save_dir); end

        if info.status ~= -1
            file_name = [name, '.mat'];
            fprintf('Saving gait %s\n', file_name);
        else
            file_name = [name, '_failed.mat'];
            fprintf('Saving (failed) gait %s\n', file_name);
        end
    end

%%
anim = Animator.FiveLinkAnimator(gait(1).tspan, gait(1).states.x);
anim.pov = Animator.AnimatorPointOfView.West;
anim.Animate(true);
anim.isLooping = false;
anim.updateWorldPosition = true;
anim.endTime = gait(1).tspan(end);
conGUI = Animator.AnimatorControls();
conGUI.anim = anim;
