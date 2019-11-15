function bounds =GetBounds(model,args)
% x_step=args.x_step;
% y_step=args.y_step;
% r_buff=args.r_buff;

common_bounds = model.getLimits();
common_bounds.gains.kp =100;
common_bounds.gains.kd = 20;

common_bounds.states.x.lb = [-10, 0.5, -1, 2, 0.5, 2, 0.5];
common_bounds.states.x.ub = [10, 2, 1, 5, 2, 5, 2];
common_bounds.states.dx.lb = -20*ones(1,7);
common_bounds.states.dx.ub = 20*ones(1,7);
common_bounds.states.ddx.lb = -100*ones(1,7);
common_bounds.states.ddx.ub = 100*ones(1,7);

common_bounds.inputs.Control.u.lb = -100*ones(4,1);
common_bounds.inputs.Control.u.ub = 100*ones(4,1);
common_bounds.inputs.Control.u.x0 = zeros(4,1);

common_bounds.params.atime.lb = -10*ones(6*4,1);
common_bounds.params.atime.ub = 10*ones(6*4,1);
common_bounds.params.atime.x0 = zeros(6*4,1);


bounds = struct();
%% DS1
bounds.DoubleSupportConstHeight=common_bounds;
bounds.DoubleSupportConstHeight.time.t0.lb=0;
bounds.DoubleSupportConstHeight.time.t0.ub = 0;
bounds.DoubleSupportConstHeight.time.t0.x0 = 0;

bounds.DoubleSupportConstHeight.time.tf.lb = 0.25;
bounds.DoubleSupportConstHeight.time.tf.ub = 0.75;
bounds.DoubleSupportConstHeight.time.tf.x0 = 0.75;

bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fRightToe.lb = -1000;
bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fRightToe.ub = 1000;
bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fRightToe.x0 = 100;

bounds.DoubleSupportConstHeight.params.pRightToe.lb = -0*ones(3,1);
bounds.DoubleSupportConstHeight.params.pRightToe.ub = 0*ones(3,1);
bounds.DoubleSupportConstHeight.params.pRightToe.x0 = zeros(3,1);

bounds.DoubleSupportConstHeight.params.ptime.lb = [bounds.DoubleSupportConstHeight.time.tf.lb, bounds.DoubleSupportConstHeight.time.t0.lb];
bounds.DoubleSupportConstHeight.params.ptime.ub = [bounds.DoubleSupportConstHeight.time.tf.ub, bounds.DoubleSupportConstHeight.time.t0.ub];
bounds.DoubleSupportConstHeight.params.ptime.x0 = [bounds.DoubleSupportConstHeight.time.t0.x0, bounds.DoubleSupportConstHeight.time.tf.x0];

%%
bounds.RightStance=common_bounds;

bounds.DoubleSupportConstHeight.time.tf.lb = 0.75;
bounds.DoubleSupportConstHeight.time.tf.ub = 2;
bounds.DoubleSupportConstHeight.time.tf.x0 = 1;

bounds.RightStance.inputs.ConstraintWrench.fRightToe.lb = -1000;
bounds.RightStance.inputs.ConstraintWrench.fRightToe.ub = 1000;
bounds.RightStance.inputs.ConstraintWrench.fRightToe.x0 = 100;

bounds.RightStance.params.pRightToe.lb = -0*ones(3,1);
bounds.RightStance.params.pRightToe.ub = 0*ones(3,1);
bounds.RightStance.params.pRightToe.x0 = zeros(3,1);




end