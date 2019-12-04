function bounds = getBounds(robot)
% Get Bounds
model_bounds = robot.getLimits();

model_bounds.states.x.lb(1:3) = [-10,-10,0.5];
model_bounds.states.x.ub(1:3) = [10,10,1];

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


%% Double Support 1
bounds.DoubleSupport1 = model_bounds;

bounds.DoubleSupport1.time.t0.lb = 0;
bounds.DoubleSupport1.time.t0.ub = 0;
bounds.DoubleSupport1.time.t0.x0 = 0;

bounds.DoubleSupport1.time.tf.lb = 0.05;
bounds.DoubleSupport1.time.tf.ub = 0.2;
bounds.DoubleSupport1.time.tf.x0 = 0.1;

bounds.DoubleSupport1.time.duration.lb = 0.05;
bounds.DoubleSupport1.time.duration.ub = 0.2;
bounds.DoubleSupport1.time.duration.x0 = 0.1;

bounds.DoubleSupport1.inputs.ConstraintWrench.fRightToeBottom.lb = -10000;
bounds.DoubleSupport1.inputs.ConstraintWrench.fRightToeBottom.ub = 10000;
bounds.DoubleSupport1.inputs.ConstraintWrench.fRightToeBottom.x0 = 100;

bounds.DoubleSupport1.inputs.ConstraintWrench.fLeftToeBottom.lb = -10000;
bounds.DoubleSupport1.inputs.ConstraintWrench.fLeftToeBottom.ub = 10000;
bounds.DoubleSupport1.inputs.ConstraintWrench.fLeftToeBottom.x0 = 100;

bounds.DoubleSupport1.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.DoubleSupport1.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.DoubleSupport1.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.DoubleSupport1.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.DoubleSupport1.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.DoubleSupport1.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.DoubleSupport1.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.DoubleSupport1.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.DoubleSupport1.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.DoubleSupport1.params.pfourBar.lb = -0*ones(2,1);
bounds.DoubleSupport1.params.pfourBar.ub = 0*ones(2,1);
bounds.DoubleSupport1.params.pfourBar.x0 = zeros(2,1);

bounds.DoubleSupport1.params.pRightToeBottom.lb = [0;0;0;0;-pi/2];
bounds.DoubleSupport1.params.pRightToeBottom.ub = [0;0;0;0;-pi/2];
bounds.DoubleSupport1.params.pRightToeBottom.x0 = [0;0;0;0;-pi/2];

bounds.DoubleSupport1.params.pLeftToeBottom.lb = [-10;-10;0;0;-pi/2];
bounds.DoubleSupport1.params.pLeftToeBottom.ub = [10;10;0;0;-pi/2];
bounds.DoubleSupport1.params.pLeftToeBottom.x0 = [0;0;0;0;-pi/2];

bounds.DoubleSupport1.params.atime.lb = -10*ones(6*10,1);
bounds.DoubleSupport1.params.atime.ub = 10*ones(6*10,1);
bounds.DoubleSupport1.params.atime.x0 = zeros(6*10,1);

bounds.DoubleSupport1.params.ptime.lb = [bounds.DoubleSupport1.time.tf.lb, bounds.DoubleSupport1.time.t0.lb];
bounds.DoubleSupport1.params.ptime.ub = [bounds.DoubleSupport1.time.tf.ub, bounds.DoubleSupport1.time.t0.ub];
bounds.DoubleSupport1.params.ptime.x0 = [bounds.DoubleSupport1.time.t0.x0, bounds.DoubleSupport1.time.tf.x0];

bounds.DoubleSupport1.time.kp = 100;
bounds.DoubleSupport1.time.kd = 20;

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

%% Double Support 2
bounds.DoubleSupport2 = model_bounds;

bounds.DoubleSupport2.time.t0.lb = 0;
bounds.DoubleSupport2.time.t0.ub = 0;
bounds.DoubleSupport2.time.t0.x0 = 0;

bounds.DoubleSupport2.time.tf.lb = 0.05;
bounds.DoubleSupport2.time.tf.ub = 0.2;
bounds.DoubleSupport2.time.tf.x0 = 0.1;

bounds.DoubleSupport2.time.duration.lb = 0.05;
bounds.DoubleSupport2.time.duration.ub = 0.2;
bounds.DoubleSupport2.time.duration.x0 = 0.1;

bounds.DoubleSupport2.inputs.ConstraintWrench.fRightToeBottom.lb = -10000;
bounds.DoubleSupport2.inputs.ConstraintWrench.fRightToeBottom.ub = 10000;
bounds.DoubleSupport2.inputs.ConstraintWrench.fRightToeBottom.x0 = 100;

bounds.DoubleSupport2.inputs.ConstraintWrench.fLeftToeBottom.lb = -10000;
bounds.DoubleSupport2.inputs.ConstraintWrench.fLeftToeBottom.ub = 10000;
bounds.DoubleSupport2.inputs.ConstraintWrench.fLeftToeBottom.x0 = 100;

bounds.DoubleSupport2.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.DoubleSupport2.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.DoubleSupport2.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.DoubleSupport2.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.DoubleSupport2.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.DoubleSupport2.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.DoubleSupport2.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.DoubleSupport2.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.DoubleSupport2.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.DoubleSupport2.params.pfourBar.lb = -0*ones(2,1);
bounds.DoubleSupport2.params.pfourBar.ub = 0*ones(2,1);
bounds.DoubleSupport2.params.pfourBar.x0 = zeros(2,1);

bounds.DoubleSupport2.params.atime.lb = -10*ones(6*10,1);
bounds.DoubleSupport2.params.atime.ub = 10*ones(6*10,1);
bounds.DoubleSupport2.params.atime.x0 = zeros(6*10,1);

bounds.DoubleSupport2.params.ptime.lb = [bounds.DoubleSupport2.time.tf.lb, bounds.DoubleSupport2.time.t0.lb];
bounds.DoubleSupport2.params.ptime.ub = [bounds.DoubleSupport2.time.tf.ub, bounds.DoubleSupport2.time.t0.ub];
bounds.DoubleSupport2.params.ptime.x0 = [bounds.DoubleSupport2.time.t0.x0, bounds.DoubleSupport2.time.tf.x0];

bounds.DoubleSupport2.time.kp = 100;
bounds.DoubleSupport2.time.kd = 20;

bounds.DoubleSupport2.toe_to_toe_width.lb = -model_bounds.toe_to_toe_width.ub; 
bounds.DoubleSupport2.toe_to_toe_width.ub = -model_bounds.toe_to_toe_width.lb;

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

%% Guards

% Right Lift
bounds.RightLiftSingleSupport = model_bounds;
% Left Lift
bounds.LeftLiftSingleSupport = model_bounds;
% Right Impact
bounds.RightImpactDoubleSupport = model_bounds;
% Left Impact
bounds.LeftImpactDoubleSupport = model_bounds;


end
