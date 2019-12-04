function bounds = getBounds(robot)
% Get Bounds
model_bounds = robot.getLimits();

model_bounds.states.x.lb(1:3) = [-10,-10,0.5];
model_bounds.states.x.ub(1:3) = [10,10,1];

model_bounds.states.x.lb(4:6) = deg2rad(-5);
model_bounds.states.x.ub(4:6) = deg2rad(5);

model_bounds.states.x.lb([7,8,14,15]) = deg2rad(-5);
model_bounds.states.x.ub([7,8,14,15]) = deg2rad(5);

model_bounds.states.dx.lb = zeros(20,1); % Prevent joints from moving
model_bounds.states.dx.ub = zeros(20,1);

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

model_bounds.step_length.lb = 0.2;
model_bounds.step_length.ub = 0.2;

model_bounds.foot_clearance.lb = 0.15;
model_bounds.foot_clearance.ub = 0.2;

model_bounds.distance_pelvis_to_stance_toe.lb = 0.5;
model_bounds.distance_pelvis_to_stance_toe.ub = 1.0;

model_bounds.toe_to_toe_width.lb = -0.40; % 0.27 nominal width
model_bounds.toe_to_toe_width.ub = -0.10;

%% Right Double Support
bounds = model_bounds;

bounds.time.t0.lb = 0;
bounds.time.t0.ub = 0;
bounds.time.t0.x0 = 0;

bounds.time.tf.lb = 0.8;
bounds.time.tf.ub = 0.8;
bounds.time.tf.x0 = 0.8;

bounds.time.duration.lb = 0.4;
bounds.time.duration.ub = 0.8;
bounds.time.duration.x0 = 0.6;

bounds.inputs.ConstraintWrench.fRightToeBottom.lb = -10000;
bounds.inputs.ConstraintWrench.fRightToeBottom.ub = 10000;
bounds.inputs.ConstraintWrench.fRightToeBottom.x0 = 100;

bounds.inputs.ConstraintWrench.fLeftToeBottom.lb = -10000;
bounds.inputs.ConstraintWrench.fLeftToeBottom.ub = 10000;
bounds.inputs.ConstraintWrench.fLeftToeBottom.x0 = 100;

bounds.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.params.pfourBar.lb = -0*ones(2,1);
bounds.params.pfourBar.ub = 0*ones(2,1);
bounds.params.pfourBar.x0 = zeros(2,1);

bounds.params.pRightToeBottom.lb = [0;0;0;0;-pi/2];
bounds.params.pRightToeBottom.ub = [0;0;0;0;-pi/2];
bounds.params.pRightToeBottom.x0 = [0;0;0;0;-pi/2];

bounds.params.pLeftToeBottom.lb = [0;-10;0;0;-pi/2];
bounds.params.pLeftToeBottom.ub = [0;10;0;0;-pi/2];
bounds.params.pLeftToeBottom.x0 = [0;0;0;0;-pi/2];

bounds.params.atime.lb = -10*ones(6*10,1);
bounds.params.atime.ub = 10*ones(6*10,1);
bounds.params.atime.x0 = zeros(6*10,1);

bounds.params.ptime.lb = [bounds.time.tf.lb, bounds.time.t0.lb];
bounds.params.ptime.ub = [bounds.time.tf.ub, bounds.time.t0.ub];
bounds.params.ptime.x0 = [bounds.time.t0.x0, bounds.time.tf.x0];

bounds.time.kp = 100;
bounds.time.kd = 20;

end
