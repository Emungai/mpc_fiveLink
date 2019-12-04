function bounds = getBounds(robot, varargin)
model_bounds = robot.getLimits();

p = inputParser;
addParameter(p, 'step_length', 0);
addParameter(p, 'st_knee_vel', [model_bounds.states.dx.lb(17), model_bounds.states.dx.ub(17)]);
addParameter(p, 'st_knee_pos', [model_bounds.states.x.lb(17), model_bounds.states.x.ub(17)]); % Mostly used to test optimization
addParameter(p, 'avg_st_knee_pos', [-deg2rad(180), deg2rad(180)]);
addParameter(p, 'be_strict', false); % Almost only used to test optimization
addParameter(p, 'ankle_joint', [model_bounds.states.x.lb(20), model_bounds.states.x.ub(20)]); % Almost only used to test optimization
addParameter(p, 'hip_rot_joint', [model_bounds.states.x.lb(8), model_bounds.states.x.ub(8)]); % Almost only used to test optimization

parse(p, varargin{:});

%% Get Bounds
bounds = struct();

bounds.shared.up_offset = 0.05; % must be positive
bounds.shared.down_offset = -0.05; % must be negative

bounds.shared.up_step_length_relax = 0.05;
bounds.shared.down_step_length_relax = 0.05;

bounds.shared.stance_knee_pos.lb = p.Results.st_knee_pos(1);
bounds.shared.stance_knee_pos.ub = p.Results.st_knee_pos(2);
bounds.shared.stance_knee_vel.lb = p.Results.st_knee_vel(1);
bounds.shared.stance_knee_vel.ub = p.Results.st_knee_vel(2);
bounds.shared.avg_st_knee_pos.lb = p.Results.avg_st_knee_pos(1);
bounds.shared.avg_st_knee_pos.ub = p.Results.avg_st_knee_pos(2);

bounds.shared.convergance = 'constraint'; % 'cost', 'constraint', 'both'

cost_weights.per_domain.first_step = 1:21; %[zeros(1, 10), 1:11];
cost_weights.per_domain.second_step = 22:42; %12:32;
cost_weights.per_domain.third_step = 43:63; %33:53;
model_bounds.cost_weights.per_state = [zeros(4, 1); ones(16, 1); zeros(3, 1); ones(17, 1)] .* [1.*ones(20, 1); 0.1.*ones(20, 1)] .* 1;
model_bounds.cost_weights.per_torque = ones(10 ,1) .* 0.02;

model_bounds.states.x.lb(1:3) = [-10,-10,-10];
model_bounds.states.x.ub(1:3) = [10,10,10];

model_bounds.states.x.lb(4:5) = deg2rad(-10);
model_bounds.states.x.ub(4:5) = deg2rad(10);
model_bounds.states.x.lb(6) = deg2rad(-5); % Roll lb
model_bounds.states.x.ub(6) = deg2rad(+5); % Roll ub

model_bounds.states.x.lb([7,8,14,15]) = deg2rad(-10);
model_bounds.states.x.ub([7,8,14,15]) = deg2rad(10);

model_bounds.inputs.Control.u.lb([5,10]) = -0.01;
model_bounds.inputs.Control.u.ub([5,10]) = 0.01;

model_bounds.average_pitch.lb = deg2rad(0);
model_bounds.average_pitch.ub = deg2rad(0);

model_bounds.average_yaw.lb = deg2rad(0);
model_bounds.average_yaw.ub = deg2rad(0);

model_bounds.average_hip_abduction.lb = deg2rad(0);
model_bounds.average_hip_abduction.ub = deg2rad(0);

model_bounds.average_hip_rotation.lb = deg2rad(0);
model_bounds.average_hip_rotation.ub = deg2rad(0);

model_bounds.step_length.lb = p.Results.step_length;
model_bounds.step_length.ub = p.Results.step_length;

model_bounds.foot_clearance.lb = 0.10;
model_bounds.foot_clearance.ub = 0.2;

model_bounds.distance_pelvis_to_stance_toe.lb = 0.5;
model_bounds.distance_pelvis_to_stance_toe.ub = 1.0;

model_bounds.toe_to_toe_width.lb = -0.40; % 0.27 nominal width
model_bounds.toe_to_toe_width.ub = -0.10;

model_bounds.swing_toe_end_velocity.lb = [-0.5, -0.5, -2];
model_bounds.swing_toe_end_velocity.ub = [+0.5, +0.5,  0];

model_bounds.states.x.lb(13) = p.Results.ankle_joint(1);
model_bounds.states.x.ub(13) = p.Results.ankle_joint(2);
model_bounds.states.x.lb(20) = p.Results.ankle_joint(1);
model_bounds.states.x.ub(20) = p.Results.ankle_joint(2);
model_bounds.states.x.lb(8) = p.Results.hip_rot_joint(1);
model_bounds.states.x.ub(8) = p.Results.hip_rot_joint(2);
model_bounds.states.x.lb(15) = p.Results.hip_rot_joint(1);
model_bounds.states.x.ub(15) = p.Results.hip_rot_joint(2);

model_bounds.shared = bounds.shared;

%% Right Stance
bounds.RightStance = model_bounds;

bounds.RightStance.time.t0.lb = 0;
bounds.RightStance.time.t0.ub = 0;
bounds.RightStance.time.t0.x0 = 0;

bounds.RightStance.time.tf.lb = 0.4;
bounds.RightStance.time.tf.ub = 0.4;
bounds.RightStance.time.tf.x0 = 0.4;

bounds.RightStance.time.duration.lb = 0.4;
bounds.RightStance.time.duration.ub = 0.4;
bounds.RightStance.time.duration.x0 = 0.4;

% Stancce knee limits
bounds.RightStance.states.x.lb(17) = bounds.shared.stance_knee_pos.lb;
bounds.RightStance.states.x.ub(17) = bounds.shared.stance_knee_pos.ub;
bounds.RightStance.states.dx.lb(17) = bounds.shared.stance_knee_vel.lb;
bounds.RightStance.states.dx.ub(17) = bounds.shared.stance_knee_vel.ub;
bounds.RightStance.average_st_knee_angle.lb = bounds.shared.avg_st_knee_pos.lb;
bounds.RightStance.average_st_knee_angle.ub = bounds.shared.avg_st_knee_pos.ub;

bounds.RightStance.inputs.ConstraintWrench.fRightToeBottom.lb = -10000;
bounds.RightStance.inputs.ConstraintWrench.fRightToeBottom.ub = 10000;
bounds.RightStance.inputs.ConstraintWrench.fRightToeBottom.x0 = 100;

bounds.RightStance.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.RightStance.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.RightStance.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.RightStance.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.RightStance.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.RightStance.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.RightStance.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.RightStance.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.RightStance.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.RightStance.params.pfourBar.lb = -0*ones(2,1);
bounds.RightStance.params.pfourBar.ub = 0*ones(2,1);
bounds.RightStance.params.pfourBar.x0 = zeros(2,1);

bounds.RightStance.params.pRightToeBottom.lb = [0;0;0;0;-pi/2];
bounds.RightStance.params.pRightToeBottom.ub = [0;0;0;0;-pi/2];
bounds.RightStance.params.pRightToeBottom.x0 = [0;0;0;0;-pi/2];

bounds.RightStance.params.atime.lb = -10*ones(6*10,1);
bounds.RightStance.params.atime.ub = 10*ones(6*10,1);
bounds.RightStance.params.atime.x0 = zeros(6*10,1);

bounds.RightStance.params.ptime.lb = [bounds.RightStance.time.tf.lb, bounds.RightStance.time.t0.lb];
bounds.RightStance.params.ptime.ub = [bounds.RightStance.time.tf.ub, bounds.RightStance.time.t0.ub];
bounds.RightStance.params.ptime.x0 = [bounds.RightStance.time.t0.x0, bounds.RightStance.time.tf.x0];

bounds.RightStance.time.kp = 100;
bounds.RightStance.time.kd = 20;

%% Left Stance
bounds.LeftStance = model_bounds;

bounds.LeftStance.time.t0.lb = 0;
bounds.LeftStance.time.t0.ub = 0;
bounds.LeftStance.time.t0.x0 = 0;

bounds.LeftStance.time.tf.lb = 0.4;
bounds.LeftStance.time.tf.ub = 0.4;
bounds.LeftStance.time.tf.x0 = 0.4;

bounds.LeftStance.time.duration.lb = 0.4;
bounds.LeftStance.time.duration.ub = 0.4;
bounds.LeftStance.time.duration.x0 = 0.4;

% Stancce knee limits
bounds.LeftStance.states.x.lb(10) = bounds.shared.stance_knee_pos.lb;
bounds.LeftStance.states.x.ub(10) = bounds.shared.stance_knee_pos.ub;
bounds.LeftStance.states.dx.lb(10) = bounds.shared.stance_knee_vel.lb;
bounds.LeftStance.states.dx.ub(10) = bounds.shared.stance_knee_vel.ub;
bounds.LeftStance.average_st_knee_angle.lb = bounds.shared.avg_st_knee_pos.lb;
bounds.LeftStance.average_st_knee_angle.ub = bounds.shared.avg_st_knee_pos.ub;

bounds.LeftStance.inputs.ConstraintWrench.fLeftToeBottom.lb = -10000;
bounds.LeftStance.inputs.ConstraintWrench.fLeftToeBottom.ub = 10000;
bounds.LeftStance.inputs.ConstraintWrench.fLeftToeBottom.x0 = 100;

bounds.LeftStance.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.LeftStance.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.LeftStance.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.LeftStance.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.LeftStance.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.LeftStance.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.LeftStance.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.LeftStance.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.LeftStance.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.LeftStance.params.pfourBar.lb = -0*ones(2,1);
bounds.LeftStance.params.pfourBar.ub = 0*ones(2,1);
bounds.LeftStance.params.pfourBar.x0 = zeros(2,1);

bounds.LeftStance.params.pLeftToeBottom.lb = [-10;-10;-10;0;-pi/2];
bounds.LeftStance.params.pLeftToeBottom.ub = [10;10;10;0;-pi/2];
bounds.LeftStance.params.pLeftToeBottom.x0 = [0;0;0;0;-pi/2];

bounds.LeftStance.params.atime.lb = -10*ones(6*10,1);
bounds.LeftStance.params.atime.ub = 10*ones(6*10,1);
bounds.LeftStance.params.atime.x0 = zeros(6*10,1);

bounds.LeftStance.params.ptime.lb = [bounds.RightStance.time.tf.lb, bounds.RightStance.time.t0.lb];
bounds.LeftStance.params.ptime.ub = [bounds.RightStance.time.tf.ub, bounds.RightStance.time.t0.ub];
bounds.LeftStance.params.ptime.x0 = [bounds.RightStance.time.t0.x0, bounds.RightStance.time.tf.x0];

bounds.LeftStance.time.kp = 100;
bounds.LeftStance.time.kd = 20;

bounds.LeftStance.toe_to_toe_width.lb = -model_bounds.toe_to_toe_width.ub; 
bounds.LeftStance.toe_to_toe_width.ub = -model_bounds.toe_to_toe_width.lb;

%% Right Stance Up 1
bounds.RightStanceUp1 = model_bounds;

bounds.RightStanceUp1.time.t0.lb = 0;
bounds.RightStanceUp1.time.t0.ub = 0;
bounds.RightStanceUp1.time.t0.x0 = 0;

bounds.RightStanceUp1.time.tf.lb = 0.3;
bounds.RightStanceUp1.time.tf.ub = 0.4;
bounds.RightStanceUp1.time.tf.x0 = 0.4;

bounds.RightStanceUp1.time.duration.lb = 0.3;
bounds.RightStanceUp1.time.duration.ub = 0.4;
bounds.RightStanceUp1.time.duration.x0 = 0.4;

bounds.RightStanceUp1.states.x.lb(17) = bounds.shared.stance_knee_pos.lb;
bounds.RightStanceUp1.states.x.ub(17) = bounds.shared.stance_knee_pos.ub;
bounds.RightStanceUp1.states.dx.lb(17) = bounds.shared.stance_knee_vel.lb;
bounds.RightStanceUp1.states.dx.ub(17) = bounds.shared.stance_knee_vel.ub;

bounds.RightStanceUp1.inputs.ConstraintWrench.fRightToeBottom.lb = -10000;
bounds.RightStanceUp1.inputs.ConstraintWrench.fRightToeBottom.ub = 10000;
bounds.RightStanceUp1.inputs.ConstraintWrench.fRightToeBottom.x0 = 100;

bounds.RightStanceUp1.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.RightStanceUp1.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.RightStanceUp1.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.RightStanceUp1.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.RightStanceUp1.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.RightStanceUp1.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.RightStanceUp1.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.RightStanceUp1.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.RightStanceUp1.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.RightStanceUp1.params.pfourBar.lb = -0*ones(2,1);
bounds.RightStanceUp1.params.pfourBar.ub = 0*ones(2,1);
bounds.RightStanceUp1.params.pfourBar.x0 = zeros(2,1);

bounds.RightStanceUp1.params.pRightToeBottom.lb = [0;0;0;0;-pi/2];
bounds.RightStanceUp1.params.pRightToeBottom.ub = [0;0;0;0;-pi/2];
bounds.RightStanceUp1.params.pRightToeBottom.x0 = [0;0;0;0;-pi/2];

bounds.RightStanceUp1.params.atime.lb = -10*ones(6*10,1);
bounds.RightStanceUp1.params.atime.ub = 10*ones(6*10,1);
bounds.RightStanceUp1.params.atime.x0 = zeros(6*10,1);

bounds.RightStanceUp1.params.ptime.lb = [bounds.RightStanceUp1.time.tf.lb, bounds.RightStanceUp1.time.t0.lb];
bounds.RightStanceUp1.params.ptime.ub = [bounds.RightStanceUp1.time.tf.ub, bounds.RightStanceUp1.time.t0.ub];
bounds.RightStanceUp1.params.ptime.x0 = [bounds.RightStanceUp1.time.t0.x0, bounds.RightStanceUp1.time.tf.x0];

bounds.RightStanceUp1.time.kp = 100;
bounds.RightStanceUp1.time.kd = 20;

%% Left Stance Up 1
bounds.LeftStanceUp1 = model_bounds;

bounds.LeftStanceUp1.cost_weights.per_domain = cost_weights.per_domain.first_step;

bounds.LeftStanceUp1.states.x.lb(6) = deg2rad(-10); % Roll lb
bounds.LeftStanceUp1.states.x.ub(6) = deg2rad(+10); % Roll ub

if p.Results.be_strict
    bounds.LeftStanceUp1.states.x.lb(10) = bounds.shared.stance_knee_pos.lb;
    bounds.LeftStanceUp1.states.x.ub(10) = bounds.shared.stance_knee_pos.ub;
end

bounds.LeftStanceUp1.time.t0.lb = 0;
bounds.LeftStanceUp1.time.t0.ub = 0;
bounds.LeftStanceUp1.time.t0.x0 = 0;

bounds.LeftStanceUp1.time.tf.lb = 0.4;
bounds.LeftStanceUp1.time.tf.ub = 0.4;
bounds.LeftStanceUp1.time.tf.x0 = 0.4;

bounds.LeftStanceUp1.time.duration.lb = 0.4;
bounds.LeftStanceUp1.time.duration.ub = 0.4;
bounds.LeftStanceUp1.time.duration.x0 = 0.4;

bounds.LeftStanceUp1.inputs.ConstraintWrench.fLeftToeBottom.lb = -10000;
bounds.LeftStanceUp1.inputs.ConstraintWrench.fLeftToeBottom.ub = 10000;
bounds.LeftStanceUp1.inputs.ConstraintWrench.fLeftToeBottom.x0 = 100;

bounds.LeftStanceUp1.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.LeftStanceUp1.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.LeftStanceUp1.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.LeftStanceUp1.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.LeftStanceUp1.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.LeftStanceUp1.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.LeftStanceUp1.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.LeftStanceUp1.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.LeftStanceUp1.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.LeftStanceUp1.params.pfourBar.lb = -0*ones(2,1);
bounds.LeftStanceUp1.params.pfourBar.ub = 0*ones(2,1);
bounds.LeftStanceUp1.params.pfourBar.x0 = zeros(2,1);

bounds.LeftStanceUp1.params.atime.lb = -10*ones(6*10,1);
bounds.LeftStanceUp1.params.atime.ub = 10*ones(6*10,1);
bounds.LeftStanceUp1.params.atime.x0 = zeros(6*10,1);

bounds.LeftStanceUp1.params.ptime.lb = [bounds.LeftStanceUp1.time.tf.lb, bounds.LeftStanceUp1.time.t0.lb];
bounds.LeftStanceUp1.params.ptime.ub = [bounds.LeftStanceUp1.time.tf.ub, bounds.LeftStanceUp1.time.t0.ub];
bounds.LeftStanceUp1.params.ptime.x0 = [bounds.LeftStanceUp1.time.t0.x0, bounds.LeftStanceUp1.time.tf.x0];

bounds.LeftStanceUp1.time.kp = 100;
bounds.LeftStanceUp1.time.kd = 20;

bounds.LeftStanceUp1.foot_clearance.lb = model_bounds.foot_clearance.lb + bounds.shared.up_offset;
bounds.LeftStanceUp1.foot_clearance.ub = model_bounds.foot_clearance.lb + bounds.shared.up_offset;

bounds.LeftStanceUp1.toe_to_toe_width.lb = -model_bounds.toe_to_toe_width.ub; 
bounds.LeftStanceUp1.toe_to_toe_width.ub = -model_bounds.toe_to_toe_width.lb;

bounds.LeftStanceUp1.step_length.lb = model_bounds.step_length.lb - bounds.shared.up_step_length_relax;
bounds.LeftStanceUp1.step_length.ub = model_bounds.step_length.ub + bounds.shared.up_step_length_relax;

%% Right Stance Up 2
bounds.RightStanceUp2 = model_bounds;

bounds.RightStanceUp2.cost_weights.per_domain = cost_weights.per_domain.second_step;

bounds.RightStanceUp2.states.x.lb(6) = deg2rad(-10); % Roll lb
bounds.RightStanceUp2.states.x.ub(6) = deg2rad(+10); % Roll ub

if p.Results.be_strict
    bounds.RightStanceUp2.states.x.lb(17) = bounds.shared.stance_knee_pos.lb;
    bounds.RightStanceUp2.states.x.ub(17) = bounds.shared.stance_knee_pos.ub;
end

bounds.RightStanceUp2.time.t0.lb = 0;
bounds.RightStanceUp2.time.t0.ub = 0;
bounds.RightStanceUp2.time.t0.x0 = 0;

bounds.RightStanceUp2.time.tf.lb = 0.4;
bounds.RightStanceUp2.time.tf.ub = 0.4;
bounds.RightStanceUp2.time.tf.x0 = 0.4;

bounds.RightStanceUp2.time.duration.lb = 0.4;
bounds.RightStanceUp2.time.duration.ub = 0.4;
bounds.RightStanceUp2.time.duration.x0 = 0.4;

bounds.RightStanceUp2.inputs.ConstraintWrench.fRightToeBottom.lb = -10000;
bounds.RightStanceUp2.inputs.ConstraintWrench.fRightToeBottom.ub = 10000;
bounds.RightStanceUp2.inputs.ConstraintWrench.fRightToeBottom.x0 = 100;

bounds.RightStanceUp2.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.RightStanceUp2.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.RightStanceUp2.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.RightStanceUp2.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.RightStanceUp2.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.RightStanceUp2.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.RightStanceUp2.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.RightStanceUp2.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.RightStanceUp2.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.RightStanceUp2.params.pfourBar.lb = -0*ones(2,1);
bounds.RightStanceUp2.params.pfourBar.ub = 0*ones(2,1);
bounds.RightStanceUp2.params.pfourBar.x0 = zeros(2,1);

bounds.RightStanceUp2.params.atime.lb = -10*ones(6*10,1);
bounds.RightStanceUp2.params.atime.ub = 10*ones(6*10,1);
bounds.RightStanceUp2.params.atime.x0 = zeros(6*10,1);

bounds.RightStanceUp2.params.ptime.lb = [bounds.RightStanceUp2.time.tf.lb, bounds.RightStanceUp2.time.t0.lb];
bounds.RightStanceUp2.params.ptime.ub = [bounds.RightStanceUp2.time.tf.ub, bounds.RightStanceUp2.time.t0.ub];
bounds.RightStanceUp2.params.ptime.x0 = [bounds.RightStanceUp2.time.t0.x0, bounds.RightStanceUp2.time.tf.x0];

bounds.RightStanceUp2.foot_clearance.lb = model_bounds.foot_clearance.lb + bounds.shared.up_offset;
bounds.RightStanceUp2.foot_clearance.ub = model_bounds.foot_clearance.lb + bounds.shared.up_offset;

bounds.RightStanceUp2.time.kp = 100;
bounds.RightStanceUp2.time.kd = 20;

bounds.RightStanceUp2.step_length.lb = model_bounds.step_length.lb - bounds.shared.up_step_length_relax;
bounds.RightStanceUp2.step_length.ub = model_bounds.step_length.ub + bounds.shared.up_step_length_relax;

%% Left Stance Up 2
bounds.LeftStanceUp2 = model_bounds;

bounds.LeftStanceUp2.cost_weights.per_domain = cost_weights.per_domain.third_step;

bounds.LeftStanceUp2.states.x.lb(6) = deg2rad(-10); % Roll lb
bounds.LeftStanceUp2.states.x.ub(6) = deg2rad(+10); % Roll ub

if p.Results.be_strict
    bounds.LeftStanceUp2.states.x.lb(10) = bounds.shared.stance_knee_pos.lb;
    bounds.LeftStanceUp2.states.x.ub(10) = bounds.shared.stance_knee_pos.ub;
end

bounds.LeftStanceUp2.time.t0.lb = 0;
bounds.LeftStanceUp2.time.t0.ub = 0;
bounds.LeftStanceUp2.time.t0.x0 = 0;

bounds.LeftStanceUp2.time.tf.lb = 0.4;
bounds.LeftStanceUp2.time.tf.ub = 0.4;
bounds.LeftStanceUp2.time.tf.x0 = 0.4;

bounds.LeftStanceUp2.time.duration.lb = 0.4;
bounds.LeftStanceUp2.time.duration.ub = 0.4;
bounds.LeftStanceUp2.time.duration.x0 = 0.4;

bounds.LeftStanceUp2.inputs.ConstraintWrench.fLeftToeBottom.lb = -10000;
bounds.LeftStanceUp2.inputs.ConstraintWrench.fLeftToeBottom.ub = 10000;
bounds.LeftStanceUp2.inputs.ConstraintWrench.fLeftToeBottom.x0 = 100;

bounds.LeftStanceUp2.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.LeftStanceUp2.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.LeftStanceUp2.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.LeftStanceUp2.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.LeftStanceUp2.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.LeftStanceUp2.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.LeftStanceUp2.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.LeftStanceUp2.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.LeftStanceUp2.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.LeftStanceUp2.params.pfourBar.lb = -0*ones(2,1);
bounds.LeftStanceUp2.params.pfourBar.ub = 0*ones(2,1);
bounds.LeftStanceUp2.params.pfourBar.x0 = zeros(2,1);

bounds.LeftStanceUp2.params.atime.lb = -10*ones(6*10,1);
bounds.LeftStanceUp2.params.atime.ub = 10*ones(6*10,1);
bounds.LeftStanceUp2.params.atime.x0 = zeros(6*10,1);

bounds.LeftStanceUp2.params.ptime.lb = [bounds.LeftStanceUp2.time.tf.lb, bounds.LeftStanceUp2.time.t0.lb];
bounds.LeftStanceUp2.params.ptime.ub = [bounds.LeftStanceUp2.time.tf.ub, bounds.LeftStanceUp2.time.t0.ub];
bounds.LeftStanceUp2.params.ptime.x0 = [bounds.LeftStanceUp2.time.t0.x0, bounds.LeftStanceUp2.time.tf.x0];

bounds.LeftStanceUp2.time.kp = 100;
bounds.LeftStanceUp2.time.kd = 20;

bounds.LeftStanceUp2.foot_clearance.lb = model_bounds.foot_clearance.lb + bounds.shared.up_offset;
bounds.LeftStanceUp2.foot_clearance.ub = model_bounds.foot_clearance.lb + bounds.shared.up_offset;

bounds.LeftStanceUp2.toe_to_toe_width.lb = -model_bounds.toe_to_toe_width.ub; 
bounds.LeftStanceUp2.toe_to_toe_width.ub = -model_bounds.toe_to_toe_width.lb;

bounds.LeftStanceUp2.step_length.lb = model_bounds.step_length.lb - bounds.shared.up_step_length_relax;
bounds.LeftStanceUp2.step_length.ub = model_bounds.step_length.ub + bounds.shared.up_step_length_relax;

%% Right Stance Down 1
bounds.RightStanceDown1 = model_bounds;

bounds.RightStanceDown1.states.x.lb(6) = deg2rad(-10); % Roll lb
bounds.RightStanceDown1.states.x.ub(6) = deg2rad(+10); % Roll ub

if p.Results.be_strict
    bounds.RightStanceDown1.states.x.lb(17) = bounds.shared.stance_knee_pos.lb;
    bounds.RightStanceDown1.states.x.ub(17) = bounds.shared.stance_knee_pos.ub;
end

bounds.RightStanceDown1.time.t0.lb = 0;
bounds.RightStanceDown1.time.t0.ub = 0;
bounds.RightStanceDown1.time.t0.x0 = 0;

bounds.RightStanceDown1.time.tf.lb = 0.01;
bounds.RightStanceDown1.time.tf.ub = 0.2;
bounds.RightStanceDown1.time.tf.x0 = 0.01;

bounds.RightStanceDown1.time.duration.lb = 0.01;
bounds.RightStanceDown1.time.duration.ub = 0.2;
bounds.RightStanceDown1.time.duration.x0 = 0.01;

bounds.RightStanceDown1.inputs.ConstraintWrench.fRightToeBottom.lb = -10000;
bounds.RightStanceDown1.inputs.ConstraintWrench.fRightToeBottom.ub = 10000;
bounds.RightStanceDown1.inputs.ConstraintWrench.fRightToeBottom.x0 = 100;

bounds.RightStanceDown1.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.RightStanceDown1.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.RightStanceDown1.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.RightStanceDown1.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.RightStanceDown1.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.RightStanceDown1.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.RightStanceDown1.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.RightStanceDown1.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.RightStanceDown1.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.RightStanceDown1.params.pfourBar.lb = -0*ones(2,1);
bounds.RightStanceDown1.params.pfourBar.ub = 0*ones(2,1);
bounds.RightStanceDown1.params.pfourBar.x0 = zeros(2,1);

% bounds.RightStanceDown1.params.pRightToeBottom.lb =  [-10;-10;-10;0;-pi/2];
% bounds.RightStanceDown1.params.pRightToeBottom.ub =  [10;10;10;0;-pi/2];
% bounds.RightStanceDown1.params.pRightToeBottom.x0 = [0;0;0;0;-pi/2];

bounds.RightStanceDown1.params.atime.lb = -10*ones(6*10,1);
bounds.RightStanceDown1.params.atime.ub = 10*ones(6*10,1);
bounds.RightStanceDown1.params.atime.x0 = zeros(6*10,1);

bounds.RightStanceDown1.params.ptime.lb = [bounds.RightStanceDown1.time.tf.lb, bounds.RightStanceDown1.time.t0.lb];
bounds.RightStanceDown1.params.ptime.ub = [bounds.RightStanceDown1.time.tf.ub, bounds.RightStanceDown1.time.t0.ub];
bounds.RightStanceDown1.params.ptime.x0 = [bounds.RightStanceDown1.time.t0.x0, bounds.RightStanceDown1.time.tf.x0];

bounds.RightStanceDown1.time.kp = 100;
bounds.RightStanceDown1.time.kd = 20;

%% Left Stance Down 1
bounds.LeftStanceDown1 = model_bounds;

bounds.LeftStanceDown1.cost_weights.per_domain = cost_weights.per_domain.first_step;

bounds.LeftStanceDown1.states.x.lb(6) = deg2rad(-10); % Roll lb
bounds.LeftStanceDown1.states.x.ub(6) = deg2rad(+10); % Roll ub

if p.Results.be_strict
    bounds.LeftStanceDown1.states.x.lb(10) = bounds.shared.stance_knee_pos.lb;
    bounds.LeftStanceDown1.states.x.ub(10) = bounds.shared.stance_knee_pos.ub;
end

bounds.LeftStanceDown1.time.t0.lb = 0;
bounds.LeftStanceDown1.time.t0.ub = 0;
bounds.LeftStanceDown1.time.t0.x0 = 0;

bounds.LeftStanceDown1.time.tf.lb = 0.4;
bounds.LeftStanceDown1.time.tf.ub = 0.4;
bounds.LeftStanceDown1.time.tf.x0 = 0.4;

bounds.LeftStanceDown1.time.duration.lb = 0.4;
bounds.LeftStanceDown1.time.duration.ub = 0.4;
bounds.LeftStanceDown1.time.duration.x0 = 0.4;

bounds.LeftStanceDown1.inputs.ConstraintWrench.fLeftToeBottom.lb = -10000;
bounds.LeftStanceDown1.inputs.ConstraintWrench.fLeftToeBottom.ub = 10000;
bounds.LeftStanceDown1.inputs.ConstraintWrench.fLeftToeBottom.x0 = 100;

bounds.LeftStanceDown1.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.LeftStanceDown1.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.LeftStanceDown1.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.LeftStanceDown1.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.LeftStanceDown1.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.LeftStanceDown1.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.LeftStanceDown1.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.LeftStanceDown1.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.LeftStanceDown1.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.LeftStanceDown1.params.pfourBar.lb = -0*ones(2,1);
bounds.LeftStanceDown1.params.pfourBar.ub = 0*ones(2,1);
bounds.LeftStanceDown1.params.pfourBar.x0 = zeros(2,1);

bounds.LeftStanceDown1.params.atime.lb = -10*ones(6*10,1);
bounds.LeftStanceDown1.params.atime.ub = 10*ones(6*10,1);
bounds.LeftStanceDown1.params.atime.x0 = zeros(6*10,1);

bounds.LeftStanceDown1.params.ptime.lb = [bounds.LeftStanceDown1.time.tf.lb, bounds.LeftStanceDown1.time.t0.lb];
bounds.LeftStanceDown1.params.ptime.ub = [bounds.LeftStanceDown1.time.tf.ub, bounds.LeftStanceDown1.time.t0.ub];
bounds.LeftStanceDown1.params.ptime.x0 = [bounds.LeftStanceDown1.time.t0.x0, bounds.LeftStanceDown1.time.tf.x0];

bounds.LeftStanceDown1.time.kp = 100;
bounds.LeftStanceDown1.time.kd = 20;

bounds.LeftStanceDown1.foot_clearance.lb = model_bounds.foot_clearance.lb + bounds.shared.down_offset;
bounds.LeftStanceDown1.foot_clearance.ub = model_bounds.foot_clearance.lb + bounds.shared.down_offset;

bounds.LeftStanceDown1.toe_to_toe_width.lb = -model_bounds.toe_to_toe_width.ub; 
bounds.LeftStanceDown1.toe_to_toe_width.ub = -model_bounds.toe_to_toe_width.lb;

bounds.LeftStanceDown1.step_length.lb = model_bounds.step_length.lb - bounds.shared.down_step_length_relax;
bounds.LeftStanceDown1.step_length.ub = model_bounds.step_length.ub + bounds.shared.down_step_length_relax;

%% Right Stance Down 2
bounds.RightStanceDown2 = model_bounds;

bounds.RightStanceDown2.cost_weights.per_domain = cost_weights.per_domain.second_step;

bounds.RightStanceDown2.states.x.lb(6) = deg2rad(-10); % Roll lb
bounds.RightStanceDown2.states.x.ub(6) = deg2rad(+10); % Roll ub

if p.Results.be_strict
    bounds.RightStanceDown2.states.x.lb(17) = bounds.shared.stance_knee_pos.lb;
    bounds.RightStanceDown2.states.x.ub(17) = bounds.shared.stance_knee_pos.ub;
end

bounds.RightStanceDown2.time.t0.lb = 0;
bounds.RightStanceDown2.time.t0.ub = 0;
bounds.RightStanceDown2.time.t0.x0 = 0;

bounds.RightStanceDown2.time.tf.lb = 0.4;
bounds.RightStanceDown2.time.tf.ub = 0.4;
bounds.RightStanceDown2.time.tf.x0 = 0.4;

bounds.RightStanceDown2.time.duration.lb = 0.4;
bounds.RightStanceDown2.time.duration.ub = 0.4;
bounds.RightStanceDown2.time.duration.x0 = 0.4;

bounds.RightStanceDown2.inputs.ConstraintWrench.fRightToeBottom.lb = -10000;
bounds.RightStanceDown2.inputs.ConstraintWrench.fRightToeBottom.ub = 10000;
bounds.RightStanceDown2.inputs.ConstraintWrench.fRightToeBottom.x0 = 100;

bounds.RightStanceDown2.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.RightStanceDown2.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.RightStanceDown2.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.RightStanceDown2.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.RightStanceDown2.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.RightStanceDown2.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.RightStanceDown2.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.RightStanceDown2.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.RightStanceDown2.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.RightStanceDown2.params.pfourBar.lb = -0*ones(2,1);
bounds.RightStanceDown2.params.pfourBar.ub = 0*ones(2,1);
bounds.RightStanceDown2.params.pfourBar.x0 = zeros(2,1);

bounds.RightStanceDown2.params.atime.lb = -10*ones(6*10,1);
bounds.RightStanceDown2.params.atime.ub = 10*ones(6*10,1);
bounds.RightStanceDown2.params.atime.x0 = zeros(6*10,1);

bounds.RightStanceDown2.params.ptime.lb = [bounds.RightStanceDown2.time.tf.lb, bounds.RightStanceDown2.time.t0.lb];
bounds.RightStanceDown2.params.ptime.ub = [bounds.RightStanceDown2.time.tf.ub, bounds.RightStanceDown2.time.t0.ub];
bounds.RightStanceDown2.params.ptime.x0 = [bounds.RightStanceDown2.time.t0.x0, bounds.RightStanceDown2.time.tf.x0];

bounds.RightStanceDown2.foot_clearance.lb = model_bounds.foot_clearance.lb + bounds.shared.down_offset;
bounds.RightStanceDown2.foot_clearance.ub = model_bounds.foot_clearance.lb + bounds.shared.down_offset;

bounds.RightStanceDown2.time.kp = 100;
bounds.RightStanceDown2.time.kd = 20;

bounds.RightStanceDown2.step_length.lb = model_bounds.step_length.lb - bounds.shared.down_step_length_relax;
bounds.RightStanceDown2.step_length.ub = model_bounds.step_length.ub + bounds.shared.down_step_length_relax;

%% Left Stance Down 2
bounds.LeftStanceDown2 = model_bounds;

bounds.LeftStanceDown2.cost_weights.per_domain = cost_weights.per_domain.third_step;

bounds.LeftStanceDown2.states.x.lb(6) = deg2rad(-10); % Roll lb
bounds.LeftStanceDown2.states.x.ub(6) = deg2rad(+10); % Roll ub

if p.Results.be_strict
    bounds.LeftStanceDown2.states.x.lb(10) = bounds.shared.stance_knee_pos.lb;
    bounds.LeftStanceDown2.states.x.ub(10) = bounds.shared.stance_knee_pos.ub;
end

bounds.LeftStanceDown2.time.t0.lb = 0;
bounds.LeftStanceDown2.time.t0.ub = 0;
bounds.LeftStanceDown2.time.t0.x0 = 0;

bounds.LeftStanceDown2.time.tf.lb = 0.4;
bounds.LeftStanceDown2.time.tf.ub = 0.4;
bounds.LeftStanceDown2.time.tf.x0 = 0.4;

bounds.LeftStanceDown2.time.duration.lb = 0.4;
bounds.LeftStanceDown2.time.duration.ub = 0.4;
bounds.LeftStanceDown2.time.duration.x0 = 0.4;

bounds.LeftStanceDown2.inputs.ConstraintWrench.fLeftToeBottom.lb = -10000;
bounds.LeftStanceDown2.inputs.ConstraintWrench.fLeftToeBottom.ub = 10000;
bounds.LeftStanceDown2.inputs.ConstraintWrench.fLeftToeBottom.x0 = 100;

bounds.LeftStanceDown2.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.LeftStanceDown2.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.LeftStanceDown2.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.LeftStanceDown2.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.LeftStanceDown2.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.LeftStanceDown2.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.LeftStanceDown2.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.LeftStanceDown2.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.LeftStanceDown2.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.LeftStanceDown2.params.pfourBar.lb = -0*ones(2,1);
bounds.LeftStanceDown2.params.pfourBar.ub = 0*ones(2,1);
bounds.LeftStanceDown2.params.pfourBar.x0 = zeros(2,1);

bounds.LeftStanceDown2.params.atime.lb = -10*ones(6*10,1);
bounds.LeftStanceDown2.params.atime.ub = 10*ones(6*10,1);
bounds.LeftStanceDown2.params.atime.x0 = zeros(6*10,1);

bounds.LeftStanceDown2.params.ptime.lb = [bounds.LeftStanceDown2.time.tf.lb, bounds.LeftStanceDown2.time.t0.lb];
bounds.LeftStanceDown2.params.ptime.ub = [bounds.LeftStanceDown2.time.tf.ub, bounds.LeftStanceDown2.time.t0.ub];
bounds.LeftStanceDown2.params.ptime.x0 = [bounds.LeftStanceDown2.time.t0.x0, bounds.LeftStanceDown2.time.tf.x0];

bounds.LeftStanceDown2.time.kp = 100;
bounds.LeftStanceDown2.time.kd = 20;

bounds.LeftStanceDown2.foot_clearance.lb = model_bounds.foot_clearance.lb + bounds.shared.down_offset;
bounds.LeftStanceDown2.foot_clearance.ub = model_bounds.foot_clearance.lb + bounds.shared.down_offset;

bounds.LeftStanceDown2.toe_to_toe_width.lb = -model_bounds.toe_to_toe_width.ub; 
bounds.LeftStanceDown2.toe_to_toe_width.ub = -model_bounds.toe_to_toe_width.lb;

bounds.LeftStanceDown2.step_length.lb = model_bounds.step_length.lb - bounds.shared.down_step_length_relax;
bounds.LeftStanceDown2.step_length.ub = model_bounds.step_length.ub + bounds.shared.down_step_length_relax;

%% Impacts

% Left Impact
bounds.LeftImpact = model_bounds;
% Right Impact
bounds.RightImpact = model_bounds;


end
