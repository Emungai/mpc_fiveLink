%% Setup
clear; clc;
cur = pwd;
addpath(genpath(cur));
export_path = fullfile(cur, 'gen\');
if ~exist(export_path,'dir')
    mkdir(export_path);
    addpath(export_path);
end

% Set FROST path
FROST_PATH = '..\..\..\..\frost-dev';
addpath(FROST_PATH)
frost_addpath;

% Load model
cassie = CASSIE('urdf/cassie.urdf');
cassie.configureDynamics('DelayCoriolisSet',true);

% Define domains
r_stance = RightStance(cassie);
l_stance = LeftStance(cassie);
r_impact = RightImpact(r_stance, l_stance);
l_impact = LeftImpact(l_stance, r_stance);

% Export Kinematics and Dynamics
% cassie.ExportKinematics([export_path,'kinematics\']);
% r_stance.compile([export_path,'dynamics\']);
% l_stance.compile([export_path,'dynamics\']);
% r_impact.compile([export_path,'dynamics\']);
% l_impact.compile([export_path,'dynamics\']);

%% Define hybrid system
io_control  = IOFeedback('IO');

cassie_sys = HybridSystem('Cassie_twoStep');
cassie_sys = addVertex(cassie_sys, {'RightStance','LeftStance'}, 'Domain', {r_stance,l_stance}, 'Control', io_control);
srcs = {'RightStance','LeftStance'};
tars = {'LeftStance','RightStance'};
cassie_sys = addEdge(cassie_sys, srcs, tars);
cassie_sys = setEdgeProperties(cassie_sys, srcs, tars, 'Guard', {r_impact,l_impact});


% right-stance parameters
r_stance_param = struct;
r_stance_param.atime = zeros(10,6);
r_stance_param.ptime = [0.4; 0];
r_stance_param.ktime = [100,20];
atlas_flat = setVertexProperties(cassie_sys,'RightStance','Param',r_stance_param);

% left-stance parameters
l_stance_param = struct;
l_stance_param.atime = zeros(10,6);
l_stance_param.ptime = [0.4; 0];
l_stance_param.ktime = [100,20];
atlas_flat = setVertexProperties(cassie_sys,'LeftStance','Param',l_stance_param);

%% Simulate
q0 = zeros(22,1);
dq0 = zeros(22,1);
x0 = [q0; dq0];
logger = cassie_sys.simulate(0, x0, [], [],'NumCycle',1);




