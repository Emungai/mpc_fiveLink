%% setting up the path
clear; close all; clc;
restoredefaultpath; matlabrc;

cur = pwd;
addpath(genpath(cur));

export_path = fullfile(cur, 'gen/');
utilities.init_path(export_path);
% if load_path is empty, it will not load any expression.
% if non-empty and assigned valid directory, then symbolic expressions will
% be loaded  from the MX binary files from the given directory.
load_path = [];%fullfile(cur, 'gen/sym');
delay_set = false; % Set to false when running for the first time
%what is delay_set doing?; calculating the symbolic expressions of the dynamics of the rigid body system
%setting to false will not calculate the expressions
COMPILE = true;
%% load model
% Load model
rabbit = RABBIT('urdf/five_link_walker.urdf');
if isempty(load_path)
    rabbit.configureDynamics('DelayCoriolisSet',delay_set);
else
    % load symbolic expression for the dynamics equations
    rabbit.loadDynamics(load_path, delay_set);
end

r_stance = domains.RightStance(rabbit, load_path);
%%

