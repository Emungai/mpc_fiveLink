%% Setup
clear; clc;
cur = pwd;
addpath(genpath(cur));

addpath('../../');
addpath('../frost-dev-local');
frost_addpath;

% if load_path is empty, it will not load any expression.
% if non-empty and assigned valid directory, then symbolic expressions will
% be loaded  from the MX binary files from the given directory.
load_path = [];%fullfile(cur, 'gen/sym');
delay_set = false;
COMPILE = false;
SAVE_SOLUTION=1;


% Load model
rabbit = RABBIT('urdf/five_link_walker.urdf');
if isempty(load_path)
    rabbit.configureDynamics('DelayCoriolisSet',delay_set, 'OmitCoriolisSet', true);
else
    % load symbolic expression for the dynamics equations
    rabbit.loadDynamics(load_path, delay_set);
end


export_path = fullfile(cur, 'gen/sim/');

%% loading the trajectory
cur=pwd;
trajName='one_sec_nocoriolis_9-Dec-2019-22-23-15-0500.mat';
trajName='opt_traj_3-Dec-2019-18-07-22-0500_Rabbit.mat';
param=load(fullfile(cur,'trajectories\stepUp\singleDomain',trajName));
gait=param.gait;
gait(1).params.ptime(1)=gait(1).tspan(end);
%%
% Define domains
r_stance = RightStance_sim(rabbit, load_path);
% l_stance = LeftStance(rabbit, load_path);
r_impact = RightImpact_sim(r_stance, load_path);
% l_impact = LeftImpact(l_stance, load_path);

% Define hybrid system
rabbit_1step = HybridSystem('Rabbit_1step');
io_control  = IOFeedback('IO');
params = struct;
params.atime=gait(1).params.atime;
params.ptime=gait(1).params.ptime;
params.pRightToe=gait(1).params.pRightToe;
params.ktime=[100,20];

r_stance.PreProcess=@sim.resetTau;

rabbit_1step = addVertex(rabbit_1step, 'RightStance', 'Domain', r_stance,'Control', io_control);
rabbit_1step = setVertexProperties(rabbit_1step,'RightStance','Param',params);


srcs = {'RightStance'};
tars = {'RightStance'};

rabbit_1step = addEdge(rabbit_1step, srcs, tars);
rabbit_1step = setEdgeProperties(rabbit_1step, srcs, tars, ...
    'Guard', {r_impact});
%%
if COMPILE
    rabbit_1step.compile(export_path);
    rabbit.ExportKinematics([export_path,'kinematics/']);
    rightToepos=getCartesianPosition(r_stance, r_stance.ContactPoints.RightToe);
    export(rightToepos, 'Vars',r_stance.States.x, 'File', [export_path,'stanceFootPos']);
    
    
end
%%
logger=rabbit_1step.simulate(0,[gait(1).states.x(:,1);gait(1).states.dx(:,1)],3, [],'NumCycle',5);


%% animate
q_log=[];
t_log=[];
for i=1:length(logger)
q_log=[q_log,logger(i).flow.states.x];
t_log=[t_log,logger(i).flow.t];
end
anim = Animator.FiveLinkAnimator(t_log, q_log);
anim.pov = Animator.AnimatorPointOfView.West;
anim.Animate(true);
anim.isLooping = false;
anim.updateWorldPosition = true;
% anim.endTime = 20;
conGUI = Animator.AnimatorControls();
conGUI.anim = anim;


%%


