function bounds = getBounds(robot)

% Get Bounds
model_bounds = robot.getLimits();
bounds = struct();

model_bounds.states.x.lb(1:3) = [-10,-10,-10];
model_bounds.states.x.ub(1:3) = [10,10,10];

model_bounds.states.x.lb(4:6) = deg2rad(-5);
model_bounds.states.x.ub(4:6) = deg2rad(5);

model_bounds.states.x.lb([7,8,14,15]) = deg2rad(-5);
model_bounds.states.x.ub([7,8,14,15]) = deg2rad(5);

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

%% Double Support
bounds.DoubleSupport = model_bounds;

bounds.DoubleSupport.time.t0.lb = 0;
bounds.DoubleSupport.time.t0.ub = 0;
bounds.DoubleSupport.time.t0.x0 = 0;

bounds.DoubleSupport.time.tf.lb = 0.05;
bounds.DoubleSupport.time.tf.ub = 0.2;
bounds.DoubleSupport.time.tf.x0 = 0.1;

bounds.DoubleSupport.time.duration.lb = 0.05;
bounds.DoubleSupport.time.duration.ub = 0.2;
bounds.DoubleSupport.time.duration.x0 = 0.1;

bounds.DoubleSupport.inputs.ConstraintWrench.fRightToeBottom.lb = -10000;
bounds.DoubleSupport.inputs.ConstraintWrench.fRightToeBottom.ub = 10000;
bounds.DoubleSupport.inputs.ConstraintWrench.fRightToeBottom.x0 = 100;

bounds.DoubleSupport.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.DoubleSupport.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.DoubleSupport.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.DoubleSupport.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.DoubleSupport.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.DoubleSupport.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.DoubleSupport.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.DoubleSupport.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.DoubleSupport.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.DoubleSupport.params.pfourBar.lb = -0*ones(2,1);
bounds.DoubleSupport.params.pfourBar.ub = 0*ones(2,1);
bounds.DoubleSupport.params.pfourBar.x0 = zeros(2,1);

bounds.DoubleSupport.params.pRightToeBottom.lb = [0;0;0;0;-pi/2];
bounds.DoubleSupport.params.pRightToeBottom.ub = [0;0;0;0;-pi/2];
bounds.DoubleSupport.params.pRightToeBottom.x0 = [0;0;0;0;-pi/2];

bounds.DoubleSupport.params.pLeftToeBottom.lb = [-10;-10;0;0;-pi/2];
bounds.DoubleSupport.params.pLeftToeBottom.ub = [10;10;0;0;-pi/2];
bounds.DoubleSupport.params.pLeftToeBottom.x0 = [0;0;0;0;-pi/2];

bounds.DoubleSupport.params.atime.lb = -10*ones(6*10,1);
bounds.DoubleSupport.params.atime.ub = 10*ones(6*10,1);
bounds.DoubleSupport.params.atime.x0 = zeros(6*10,1);

bounds.DoubleSupport.params.ptime.lb = [bounds.DoubleSupport.time.tf.lb, bounds.DoubleSupport.time.t0.lb];
bounds.DoubleSupport.params.ptime.ub = [bounds.DoubleSupport.time.tf.ub, bounds.DoubleSupport.time.t0.ub];
bounds.DoubleSupport.params.ptime.x0 = [bounds.DoubleSupport.time.t0.x0, bounds.DoubleSupport.time.tf.x0];

bounds.DoubleSupport.time.kp = 100;
bounds.DoubleSupport.time.kd = 20;

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

bounds.RightStance.params.atime.lb = -10*ones(6*10,1);
bounds.RightStance.params.atime.ub = 10*ones(6*10,1);
bounds.RightStance.params.atime.x0 = zeros(6*10,1);

bounds.RightStance.params.ptime.lb = [bounds.RightStance.time.tf.lb, bounds.RightStance.time.t0.lb];
bounds.RightStance.params.ptime.ub = [bounds.RightStance.time.tf.ub, bounds.RightStance.time.t0.ub];
bounds.RightStance.params.ptime.x0 = [bounds.RightStance.time.t0.x0, bounds.RightStance.time.tf.x0];

bounds.RightStance.time.kp = 100;
bounds.RightStance.time.kd = 20;


%% Impacts

% Left Lift
bounds.LeftLiftSingleSupport = model_bounds;
% Left Impact Relabel
bounds.LeftImpactDoubleSupportRelabel = model_bounds;

end
