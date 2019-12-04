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
robot.configureDynamics('DelayCoriolisSet',true,'OmitCoriolisSet',true);
[sys, domains, guards] = cassie.load_behavior(robot, '', 'type', 'two_step');

if COMPILE
    cassie.configureDynamics('DelayCoriolisSet',false);
    cassie.compile([EXPORT_PATH,'dyn/']);
end

domain = sys.Gamma.Nodes.Domain{1};
domain.ExportHolonomicConstraints(@Export.export_slrt, './')

%% Define hybrid system

% Add controller
io_control  = IOFeedback('IO');
sys = setVertexProperties(sys,'RightStance','Control',io_control);
sys = setVertexProperties(sys,'LeftStance','Control',io_control);

% right-stance parameters
r_stance_param = struct;
r_stance_param.atime = zeros(10,6);
r_stance_param.ptime = [0.4; 0];
r_stance_param.ktime = [100,20];
sys = setVertexProperties(sys,'RightStance','Param',r_stance_param);

% left-stance parameters
l_stance_param = struct;
l_stance_param.atime = zeros(10,6);
l_stance_param.ptime = [0.4; 0];
l_stance_param.ktime = [100,20];
sys = setVertexProperties(sys,'LeftStance','Param',l_stance_param);

%% Simulate
q0 = zeros(20,1);
dq0 = zeros(20,1);
x0 = [q0; dq0];
logger = sys.simulate(0, x0, [], [],'NumCycle',1);




