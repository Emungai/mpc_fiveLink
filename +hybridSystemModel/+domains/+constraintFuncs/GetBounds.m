function bounds =GetBounds(model,args)
%% Set bounds for optimization problem
rabbit=model;
%% Set Bounds
model_bounds = rabbit.getLimits();
model_bounds.states.x.lb = [-10, 0.5, -1, 2, 0.5, 2, 0.5];
model_bounds.states.x.ub = [10, 2, 1, 5, 2, 5, 2];
model_bounds.states.dx.lb = -20*ones(1,7);
model_bounds.states.dx.ub = 20*ones(1,7);
model_bounds.states.ddx.lb = -100*ones(1,7);
model_bounds.states.ddx.ub = 100*ones(1,7);
model_bounds.params.pdoubleSupportConst.x0=[0,5];
model_bounds.params.prightStance.x0=[0,5];
model_bounds.params.pleftStance.x0=[0,5];

    model_bounds.gains.kp =100;
    model_bounds.gains.kd = 20;
bounds = struct();
%%
bounds.DoubleSupportConstHeight=model_bounds;
bounds.DoubleSupportConstHeight.time.t0.lb=0;
bounds.DoubleSupportConstHeight.time.t0.ub = 0;
bounds.DoubleSupportConstHeight.time.t0.x0 = 0;

bounds.DoubleSupportConstHeight.time.tf.lb = 0.25;
bounds.DoubleSupportConstHeight.time.tf.ub = 0.75;
bounds.DoubleSupportConstHeight.time.tf.x0 = 0.75;

% 
bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fRightToe.lb = [-1e3;0;-1e3];
bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fRightToe.ub =[1e3;1e3;1e3];
bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fRightToe.x0 = [100;100;100];

bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fLeftToe.lb = [-1e3;0;-1e3];
bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fLeftToe.ub =[1e3;1e3;1e3];
bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fLeftToe.x0 = [100;100;100];

bounds.DoubleSupportConstHeight.params.pRightToe.lb = -0*ones(3,1);
bounds.DoubleSupportConstHeight.params.pRightToe.ub = 0*ones(3,1);
bounds.DoubleSupportConstHeight.params.pRightToe.x0 = zeros(3,1);

bounds.DoubleSupportConstHeight.params.pLeftToe.lb = [-10,-10,0]';
bounds.DoubleSupportConstHeight.params.pLeftToe.ub = [10,10,0]';
bounds.DoubleSupportConstHeight.params.pLeftToe.x0 = zeros(3,1);

%% Right Stance
bounds.RightStance = model_bounds;

% bounds.RightStance.time.t0.lb = 0;
% bounds.RightStance.time.t0.ub = 0;
% bounds.RightStance.time.t0.x0 = 0;

bounds.RightStance.time.tf.lb = 0.75;
bounds.RightStance.time.tf.ub = 1.75;
bounds.RightStance.time.tf.x0 = 1;

% bounds.RightStance.time.duration.lb = 0.25;
% bounds.RightStance.time.duration.ub = 0.75;
% bounds.RightStance.time.duration.x0 = 0.75;

bounds.RightStance.inputs.ConstraintWrench.fRightToe.lb = -1000;
bounds.RightStance.inputs.ConstraintWrench.fRightToe.ub = 1000;
bounds.RightStance.inputs.ConstraintWrench.fRightToe.x0 = 100;

bounds.RightStance.inputs.Control.u.lb = -100*ones(4,1);
bounds.RightStance.inputs.Control.u.ub = 100*ones(4,1);
bounds.RightStance.inputs.Control.u.x0 = zeros(4,1);

bounds.RightStance.params.pRightToe.lb = [-10,-10,-10]';
bounds.RightStance.params.pRightToe.ub =  [10,10,10]';
bounds.RightStance.params.pRightToe.x0 = zeros(3,1);

% bounds.RightStance.params.atime.lb = -10*ones(6*4,1);
% bounds.RightStance.params.atime.ub = 10*ones(6*4,1);
% bounds.RightStance.params.atime.x0 = zeros(6*4,1);

% bounds.RightStance.params.ptime.lb = [bounds.RightStance.time.tf.lb, bounds.RightStance.time.t0.lb];
% bounds.RightStance.params.ptime.ub = [bounds.RightStance.time.tf.ub, bounds.RightStance.time.t0.ub];
% bounds.RightStance.params.ptime.x0 = [bounds.RightStance.time.t0.x0, bounds.RightStance.time.tf.x0];
% 
% bounds.RightStance.time.kp = 100;
% bounds.RightStance.time.kd = 20;

%%  Right Impact
% bounds.RightImpact = model_bounds;
%% left stance
bounds.LeftStance = model_bounds;

bounds.LeftStance.time.tf.lb = 1.75;
bounds.LeftStance.time.tf.ub = 3;
bounds.LeftStance.time.tf.x0 = 2;

bounds.LeftStance.inputs.ConstraintWrench.fLeftToe.lb = -1000;
bounds.LeftStance.inputs.ConstraintWrench.fLeftToe.ub = 1000;
bounds.LeftStance.inputs.ConstraintWrench.fLeftToe.x0 = 100;

bounds.LeftStance.inputs.Control.u.lb = -100*ones(4,1);
bounds.LeftStance.inputs.Control.u.ub = 100*ones(4,1);
bounds.LeftStance.inputs.Control.u.x0 = zeros(4,1);

% bounds.LeftStance.params.pLeftToe.lb = -0*ones(3,1);
% bounds.LeftStance.params.pLeftToe.ub = 0*ones(3,1);
% bounds.LeftStance.params.pLeftToe.x0 = zeros(3,1);
bounds.LeftStance.params.pLeftToe.lb = [-10;-10;-10];
bounds.LeftStance.params.pLeftToe.ub = [10;10;10];
bounds.LeftStance.params.pLeftToe.x0 = zeros(3,1);
% 
% bounds.LeftStance.params.atime.lb = -10*ones(6*4,1);
% bounds.LeftStance.params.atime.ub = 10*ones(6*4,1);
% bounds.LeftStance.params.atime.x0 = zeros(6*4,1);

% bounds.LeftStance.params.ptime.lb = [bounds.LeftStance.time.tf.lb, bounds.RightStance.time.t0.lb];
% bounds.LeftStance.params.ptime.ub = [bounds.LeftStance.time.tf.ub, bounds.LeftStance.time.t0.ub];
% bounds.LeftStance.params.ptime.x0 = [bounds.LeftStance.time.t0.x0, bounds.LeftStance.time.tf.x0];
% 
% bounds.LeftStance.time.kp = 100;
% bounds.LeftStance.time.kd = 20;
%%
% % x_step=args.x_step;
% % y_step=args.y_step;
% % r_buff=args.r_buff;
% 
% common_bounds = model.getLimits();
% common_bounds.time.kp =100;
% common_bounds.time.kd = 20;
% 
% common_bounds.states.x.lb = [-10, 0.5, -1, 2, 0.5, 2, 0.5];
% common_bounds.states.x.ub = [10, 2, 1, 5, 2, 5, 2];
% common_bounds.states.dx.lb = -20*ones(1,7);
% common_bounds.states.dx.ub = 20*ones(1,7);
% common_bounds.states.ddx.lb = -100*ones(1,7);
% common_bounds.states.ddx.ub = 100*ones(1,7);
% 
% common_bounds.inputs.Control.u.lb = -100*ones(4,1);
% common_bounds.inputs.Control.u.ub = 100*ones(4,1);
% common_bounds.inputs.Control.u.x0 = zeros(4,1);
% 
% common_bounds.params.atime.lb = -10*ones(6*4,1);
% common_bounds.params.atime.ub = 10*ones(6*4,1);
% common_bounds.params.atime.x0 = zeros(6*4,1);
% 
% 
% bounds = struct();
% %% DS1
% bounds.DoubleSupportConstHeight=common_bounds;
% bounds.DoubleSupportConstHeight.time.t0.lb=0;
% bounds.DoubleSupportConstHeight.time.t0.ub = 0;
% bounds.DoubleSupportConstHeight.time.t0.x0 = 0;
% 
% bounds.DoubleSupportConstHeight.time.tf.lb = 0.25;
% bounds.DoubleSupportConstHeight.time.tf.ub = 0.75;
% bounds.DoubleSupportConstHeight.time.tf.x0 = 0.75;
% 
% % 
% bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fRightToe.lb = [-1e3;0;-1e3];
% bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fRightToe.ub =[1e3;1e3;1e3];
% bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fRightToe.x0 = [100;100;100];
% 
% % bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fLeftToe.lb = [-1e3;0;-1e3];
% % bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fLeftToe.ub =[1e3;1e3;1e3];
% % bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fLeftToe.x0 = [100;100;100];
% 
% bounds.DoubleSupportConstHeight.params.pRightToe.lb = -0*ones(3,1);
% bounds.DoubleSupportConstHeight.params.pRightToe.ub = 0*ones(3,1);
% bounds.DoubleSupportConstHeight.params.pRightToe.x0 = zeros(3,1);
% 
% 
% bounds.DoubleSupportConstHeight.params.ptime.lb = [bounds.DoubleSupportConstHeight.time.tf.lb, bounds.DoubleSupportConstHeight.time.t0.lb];
% bounds.DoubleSupportConstHeight.params.ptime.ub = [bounds.DoubleSupportConstHeight.time.tf.ub, bounds.DoubleSupportConstHeight.time.t0.ub];
% bounds.DoubleSupportConstHeight.params.ptime.x0 = [bounds.DoubleSupportConstHeight.time.t0.x0, bounds.DoubleSupportConstHeight.time.tf.x0];
% 
% %% RightStance
% bounds.RightStance=common_bounds;
% 
% bounds.RightStance.time.t0.lb=0;
% bounds.RightStance.time.t0.ub = 0;
% bounds.RightStance.time.t0.x0 = 0;
% 
% bounds.RightStance.time.tf.lb = 0.75;
% bounds.RightStance.time.tf.ub = 1.5;
% bounds.RightStance.time.tf.x0 = 1;
% 
% bounds.RightStance.inputs.ConstraintWrench.fRightToe.lb = [-1e3;0;-1e3];
% bounds.RightStance.inputs.ConstraintWrench.fRightToe.ub = [1e3;1e3;1e3];
% bounds.RightStance.inputs.ConstraintWrench.fRightToe.x0 = [100;100;100];
% 
% bounds.RightStance.params.pRightToe.lb = -0*ones(3,1);
% bounds.RightStance.params.pRightToe.ub = 0*ones(3,1);
% bounds.RightStance.params.pRightToe.x0 = zeros(3,1);
% 
% %% DS2
% bounds.DoubleSupportDiffHeight=common_bounds;
% 
% bounds.DoubleSupportDiffHeight.time.tf.lb = 1.5;
% bounds.DoubleSupportDiffHeight.time.tf.ub = 3;
% bounds.DoubleSupportDiffHeight.time.tf.x0 = 1.5;
% 
% % bounds.DoubleSupportDiffHeight.params.pRightToe.lb = -0*ones(3,1);
% % bounds.DoubleSupportDiffHeight.params.pRightToe.ub = 0*ones(3,1);
% % bounds.DoubleSupportDiffHeight.params.pRightToe.x0 = zeros(3,1);
% % 
% % bounds.DoubleSupportDiffHeight.inputs.ConstraintWrench.fRightToe.lb = [-1e3;0;-1e3];
% % bounds.DoubleSupportDiffHeight.inputs.ConstraintWrench.fRightToe.ub =[1e3;1e3;1e3];
% % bounds.DoubleSupportDiffHeight.inputs.ConstraintWrench.fRightToe.x0 = [100;100;100];
% 
% % bounds.DoubleSupportDiffHeight.inputs.ConstraintWrench.fLeftToe.lb = [-1e3;0;-1e3];
% % bounds.DoubleSupportDiffHeight.inputs.ConstraintWrench.fLeftToe.ub =[1e3;1e3;1e3];
% % bounds.DoubleSupportDiffHeight.inputs.ConstraintWrench.fLeftToe.x0 = [0;0;0];
% 
% %% left stance
% bounds.LeftStance=common_bounds;
% 
% bounds.LeftStance.time.tf.lb = 1.5;
% bounds.LeftStance.time.tf.ub = 3;
% bounds.LeftStance.time.tf.x0 = 1.5;
% 


end