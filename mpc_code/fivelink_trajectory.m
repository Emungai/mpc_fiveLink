%% Cartpole Regulator + Multiple shooting
clear; close all; clc
import casadi.*
addpath('../../casadi-windows-matlabR2014b-3.5.1');
addpath('dynamics/');
%% System Setup
DT = 0.005; %[s]
N = 10; % prediction horizon

%% Load Reference Trajectory
cur = pwd;
% trajName = 'one_sec_traj_9-Dec-2019-21-39-45-0500.mat';
trajName = 'one_sec_nocoriolis_9-Dec-2019-22-23-15-0500.mat';
param=load(['..\rabbit_stepUp\trajectories\stepUp\singleDomain\',trajName]);
addpath('..\rabbit_stepUp');
trajRef=calculations.referenceTrajBez(param.gait,DT);
X_REF = [trajRef.x; trajRef.dx];
U_REF = trajRef.u;


%% CasADi symbolic setup
% Symbolic state variables [x,z,roty,q1R,q2R,q1L,q2L]
x = SX.sym('x');
z = SX.sym('z');
rotY = SX.sym('rotY');
q1R = SX.sym('q1R');
q2R = SX.sym('q2R');
q1L = SX.sym('q1L');
q2L = SX.sym('q2L');
dx = SX.sym('dx');
dz = SX.sym('dz');
drotY = SX.sym('drotY');
dq1R = SX.sym('dq1R');
dq2R = SX.sym('dq2R');
dq1L = SX.sym('dq1L');
dq2L = SX.sym('dq2L');

q = [x; z; rotY; q1R; q2R; q1L; q2L];
dq = [dx; dz; drotY; dq1R; dq2R; dq1L; dq2L];
states = [q; dq];
n_s = length(states);

% Symbolic Control variables
u_q1R = SX.sym('u_q1R');
u_q2R = SX.sym('u_q2R'); 
u_q1L = SX.sym('u_q1L');
u_q2L = SX.sym('u_q2L');
u_ctrl = [u_q1R; u_q2R; u_q1L; u_q2L];

n_c = length(u_ctrl);

% Dynamics (Mmat*ddq + G = B*u)~ ignoring coriolis for now
Mmat = Mmat_notorso(x,z,rotY,q1R,q2R,q1L,q2L); % 7x7
G = GravityVector_notorso(x,z,rotY,q1R,q2R,q1L,q2L); %7x1
B = 50*[zeros(3,4); eye(4)];    % Multiply by 50 b/c of gear reduction
Jac = Jacobian_notorso(x,z,rotY,q1R,q2R,q1L,q2L);
dJac = JacobianDot_notorso(x,z,rotY,q1R,q2R,q1L,q2L,dx,dz,drotY,dq1R,dq2R,dq1L,dq2L);

Fv = G;
Gv_u = B*u_ctrl;
Gv = Gv_u;
X_inv = Jac*(Mmat\Jac');
lambda = -X_inv \ (dJac*dq + Jac*(Mmat\(Fv + Gv)));
Gv_c = Jac'*lambda;
Gv = Gv + Gv_c;

rhs = [dq; Mmat\(Fv + Gv)]; % system r.h.s

f = Function('f',{states,u_ctrl},{rhs});  % nonlinear mapping function f(x,u)
M_Func = Function('M_func',{states},{Mmat});
G_Func = Function('G_func',{states},{G});
J_Func = Function('J_func',{states},{Jac});
dJ_Func = Function('dJ_func',{states},{dJac});
Lambda_Func = Function('Lambda_Func',{states,u_ctrl},{lambda});
% Dynamics check
% xcheck = ones(14,1);
xcheck = [ -0.4411
    0.6369
    0.1461
    2.1372
    0.5050
    3.0630
    0.7034
    1.3407
    0.9220
   -0.3917
    2.4647
    0.0547
   -1.7130
    2.2426];
ucheck = [0.0543
   -0.1570
   -0.1899
   -0.1876];
% M_Func(xcheck)
% G_Func(xcheck)
% J_Func(xcheck)
% dJ_Func(xcheck)
% Lambda_Func(xcheck,ucheck)
% f(xcheck,ucheck)



U = SX.sym('U',n_c,N);                      % Decision variables (controls)
P = SX.sym('P',n_s + N*(n_s+n_c));          
% P = [xinit | x_0ref | u_0ref | x_1ref | u_1ref | ... | x_N-1ref | u_N-1ref]
% parameters (which include the initial state and the reference along the
% predicted trajectory (reference states and reference controls))

X = SX.sym('X',n_s,(N+1));                  
% A vector that represents the states over the optimization problem.

obj = 0; % Objective function
g = [];  % constraints vector

Qx= diag([1 1 1 1 1 1 1]);
Qdx= 0*eye(n_s/2);

Q=blkdiag(Qx,Qdx);
% Q_terminal = [   -0.7584    0.8656   -7.8374    1.9785    0.4227   -2.6156   -1.7504   -5.1162    2.8324  -13.3248   -0.5759   -1.3113   -3.4692   -1.1094;
%     0.7587    2.2676   -4.4204   -0.0621    4.8910   -1.8552   -0.6727    2.1244    8.0445   -7.3401   -2.1954    2.5135   -2.3070   -0.6239;
%     2.2751   -1.5590    5.5302    1.2138    0.0344    6.2101    0.3768    7.8621   -4.9991    3.5811    0.6693    0.2589    4.0505    0.2063;
%     1.9165    1.2955    8.9236    1.7760    0.7191    2.2826    6.6817   11.3470    5.3480   21.5484    6.5641    2.4089    5.5172    5.1351];
% Q_terminal from lqr

R = diag([0.1 0.1 0.1 0.1]); % weighing matrices (controls)

st  = X(:,1);        % initial state
g = [g;st-P(1:n_s)]; % initial condition constraints

%% Build Objective Function and Equality(Dynamics) Constraints
for k = 1:N
    st = X(:,k);  ctrl = U(:,k);
    
%     if k < N
    % Running stage cost (stop before last state/control to impose terminal
    % cost
    obj = obj + (st-P((k-1)*(n_s+n_c)+(n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s)))'*Q*(st-P((k-1)*(n_s+n_c)+(n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s))) + ...
        (ctrl-P((k-1)*(n_s+n_c)+(n_s+n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s+n_c)))'*R*(ctrl-P((k-1)*(n_s+n_c)+(n_s+n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s+n_c)));
%     end
    
    st_next = X(:,k+1);
    f_value = f(st,ctrl);
    st_next_euler = st+ (DT*f_value);
    g = [g;st_next-st_next_euler]; % compute constraints
end
% Terminal Stage Cost
% obj = obj + (st-P((N-1)*(n_s+n_c)+(n_s+1):(N-1)*(n_s+n_c)+(n_s+n_s)))'*Q_terminal*(st-P((N-1)*(n_s+n_c)+(n_s+1):(N-1)*(n_s+n_c)+(n_s+n_s)));

%% NLP Settings
% make the decision variable one column  vector
OPT_variables = [reshape(X,n_s*(N+1),1);reshape(U,n_c*N,1)];

nlp_prob = struct('f', obj, 'x', OPT_variables, 'g', g, 'p', P);

opts = struct;
opts.ipopt.max_iter = 2000;
opts.ipopt.print_level =0;%0,3
opts.print_time = 0;
opts.ipopt.acceptable_tol =1e-8;
opts.ipopt.acceptable_obj_change_tol = 1e-6;

solver = nlpsol('solver', 'ipopt', nlp_prob,opts);

args = struct;

% Equality Constraints ~ Dynamics
args.lbg(1:n_s*(N+1)) = 0;
args.ubg(1:n_s*(N+1)) = 0; 

% State inequalities
args.lbx(1:n_s:n_s*(N+1),1) = param.bounds.RightStance.states.x.lb(1);             %state x lower bound
args.ubx(1:n_s:n_s*(N+1),1) = param.bounds.RightStance.states.x.ub(1);              %state x upper bound
args.lbx(2:n_s:n_s*(N+1),1) = param.bounds.RightStance.states.x.lb(2);                %state z lower bound
args.ubx(2:n_s:n_s*(N+1),1) = param.bounds.RightStance.states.x.ub(2);              %state z upper bound
args.lbx(3:n_s:n_s*(N+1),1) = param.bounds.RightStance.states.x.lb(3);              %state roty lower bound
args.ubx(3:n_s:n_s*(N+1),1) = param.bounds.RightStance.states.x.ub(3);               %state roty upper bound
args.lbx(4:n_s:n_s*(N+1),1) = param.bounds.RightStance.states.x.lb(4);             %state q1R lower bound
args.ubx(4:n_s:n_s*(N+1),1) = param.bounds.RightStance.states.x.ub(4);              %state q1R upper bound
args.lbx(5:n_s:n_s*(N+1),1) = param.bounds.RightStance.states.x.lb(5);             %state q2R lower bound
args.ubx(5:n_s:n_s*(N+1),1) = param.bounds.RightStance.states.x.ub(5);              %state q2R upper bound
args.lbx(6:n_s:n_s*(N+1),1) = param.bounds.RightStance.states.x.lb(6);             %state q1L lower bound
args.ubx(6:n_s:n_s*(N+1),1) = param.bounds.RightStance.states.x.ub(6);              %state q1L upper bound
args.lbx(7:n_s:n_s*(N+1),1) = param.bounds.RightStance.states.x.lb(7);             %state q2L lower bound
args.ubx(7:n_s:n_s*(N+1),1) = param.bounds.RightStance.states.x.ub(7);   

%velocity bounds
args.lbx(8:n_s:n_s*(N+1),1) = -inf;             
args.ubx(8:n_s:n_s*(N+1),1) = inf;              
args.lbx(9:n_s:n_s*(N+1),1) = -inf;               
args.ubx(9:n_s:n_s*(N+1),1) = inf;              
args.lbx(10:n_s:n_s*(N+1),1) = -inf;             
args.ubx(10:n_s:n_s*(N+1),1) = inf;             
args.lbx(11:n_s:n_s*(N+1),1) = -inf;           
args.ubx(11:n_s:n_s*(N+1),1) = inf;              
args.lbx(12:n_s:n_s*(N+1),1) = -inf;             
args.ubx(12:n_s:n_s*(N+1),1) = inf;             
args.lbx(13:n_s:n_s*(N+1),1) = -inf;          
args.ubx(13:n_s:n_s*(N+1),1) = inf;              
args.lbx(14:n_s:n_s*(N+1),1) = -inf;             
args.ubx(14:n_s:n_s*(N+1),1) = inf;  

% Control inequalities
% torque_max =param.bounds.RightStance.inputs.Control.u.ub ; torque_min =param.bounds.RightStance.inputs.Control.u.lb;
torque_max = 10; torque_min = -10;

args.lbx(n_s*(N+1)+1:n_c:n_s*(N+1)+n_c*N,1) = torque_min;    % u_q1R lower bound
args.ubx(n_s*(N+1)+1:n_c:n_s*(N+1)+n_c*N,1) = torque_max;   
args.lbx(n_s*(N+1)+2:n_c:n_s*(N+1)+n_c*N,1) = torque_min;    % u_q2R lower bound
args.ubx(n_s*(N+1)+2:n_c:n_s*(N+1)+n_c*N,1) = torque_max;    
args.lbx(n_s*(N+1)+3:n_c:n_s*(N+1)+n_c*N,1) = torque_min;    % u_q1L lower bound
args.ubx(n_s*(N+1)+3:n_c:n_s*(N+1)+n_c*N,1) = torque_max;    
args.lbx(n_s*(N+1)+4:n_c:n_s*(N+1)+n_c*N,1) = torque_min;    % u_q2L lower bound
args.ubx(n_s*(N+1)+4:n_c:n_s*(N+1)+n_c*N,1) = torque_max;    

% Remember Decision Variables are stored as {x0,...,xN,u0,...,u_N-1] for
% figuring out indexing of args.lbx/ubx


%% MPC Calculation
t0 = 0;
x0 = [param.gait(1).states.x(:,1); param.gait(1).states.dx(:,1)];    % initial condition. 14X1

x_traj(:,1) = x0; % xx contains the history of states
t(1) = t0;

U_DEC = zeros(N,n_c);

X_DEC = repmat(x0,1,N+1)'; % initialization of the states decision variables

sim_tim = 1; % Maximum simulation time

% Start MPC
mpciter = 0;
xx1 = [];
u_cl=[];

% the main simulaton loop... it works as long as the error is greater
% than 10^-6 and the number of mpc steps is less than its maximum
% value.
main_loop = tic;
while( (norm((x_traj(:,end)-X_REF(:,mpciter+1)),2) > 3e-2 || mpciter < 300)  && mpciter < sim_tim / DT)
    %% Set Parameter vector and Decision Variables    
    args.p(1:n_s) = x0; % initial condition of the robot posture
    for k = 1:N %new - set the reference to track             
        args.p((k-1)*(n_s+n_c)+(n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s)) = ...
            X_REF(:,k);
        
        args.p((k-1)*(n_s+n_c)+(n_s+n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s+n_c)) =...
            U_REF(:,k);
    end
    
    args.x0  = [reshape(X_DEC',n_s*(N+1),1);reshape(U_DEC',n_c*N,1)];
    
    %% Solve MPC with CasADi NLP solver
    sol = solver('x0', args.x0, 'lbx', args.lbx, 'ubx', args.ubx,...
        'lbg', args.lbg, 'ubg', args.ubg,'p',args.p);
    
    %% Extract solutions
    u = reshape(full(sol.x(n_s*(N+1)+1:end))',n_c,N)'; % get controls only from the solution
    xx1(:,1:n_s,mpciter+1)= reshape(full(sol.x(1:n_s*(N+1)))',n_s,N+1)'; % get solution TRAJECTORY
    u_cl= [u_cl ; u(1,:)];              % only use first control value
    t(mpciter+1) = t0;
    
    %% Apply the control and guess next solution by shifting
    [t0, x0, U_DEC] = shift(DT, t0, x0, u,f);
    x_traj(:,mpciter+2) = x0;
    X_DEC = reshape(full(sol.x(1:n_s*(N+1)))',n_s,N+1)'; % get solution TRAJECTORY
    
    % Shift trajectory to initialize the next step
    X_DEC = [X_DEC(2:end,:);X_DEC(end,:)];   % initialize with next step and add on last state twice
    
%     mpciter
    if mod(mpciter,1) == 0
        mpciter
    end
    mpciter = mpciter + 1;
    
    %% Shift X_REF and U_REF
    X_REF = [X_REF(:,2:end)];
    U_REF = [U_REF(:,2:end)];
    
end
main_loop_time = toc(main_loop);
ss_error = norm((x_traj(:,end)-X_REF(:,mpciter+1)),2)
average_mpc_time = main_loop_time/(mpciter+1)
t(end+1) = t(end) + DT;

%% Plot results
if true
    figure
    subplot(3,3,1);
    plot(t,x_traj(1,:)); title('x'); 
    hold on; plot(t(1:mpciter),X_REF(1,1:mpciter)); 
    legend('x','x_{ref}');
    subplot(3,3,2); 
    plot(t,x_traj(2,:)); title('z');
    hold on; plot(t(1:mpciter),X_REF(2,1:mpciter));
    legend('z','z_{ref}');
    subplot(3,3,3);
    plot(t,x_traj(3,:)); title('rotY');
    hold on; plot(t(1:mpciter),X_REF(3,1:mpciter));
    legend('rotY','rotY{ref}');
    subplot(3,3,4);
    plot(t,x_traj(4,:)); title('q1R');
    hold on; plot(t(1:mpciter),X_REF(4,1:mpciter)); 
    legend('q1R','q1R_{ref}');
    subplot(3,3,5);
    plot(t,x_traj(5,:)); title('q2R');
    hold on; plot(t(1:mpciter),X_REF(5,1:mpciter)); 
    legend('q2R','q2R{ref}');
    subplot(3,3,6);
    plot(t,x_traj(6,:)); title('q1L');
    hold on; plot(t(1:mpciter),X_REF(6,1:mpciter)); 
    legend('q1L','q1L_{ref}');
    subplot(3,3,7);
    plot(t,x_traj(7,:)); title('q2L');
    hold on; plot(t(1:mpciter),X_REF(7,1:mpciter)); 
    legend('q2L','q2L{ref}');
    
    figure
    subplot(3,3,1);
    plot(t,x_traj(8,:)); title('dx'); 
    hold on; plot(t(1:mpciter),X_REF(8,1:mpciter)); 
    legend('dx','dx_{ref}');
    subplot(3,3,2); 
    plot(t,x_traj(9,:)); title('dz');
    hold on; plot(t(1:mpciter),X_REF(9,1:mpciter));
    legend('dz','dz_{ref}');
    
    subplot(3,3,3);
    plot(t,x_traj(10,:)); title('drotY');
    hold on; plot(t(1:mpciter),X_REF(10,1:mpciter));
    legend('drotY','drotY{ref}');
    
    subplot(3,3,4);
    plot(t,x_traj(11,:)); title('dq1R');
    hold on; plot(t(1:mpciter),X_REF(11,1:mpciter)); 
    legend('dq1R','dq1R_{ref}');
    
    subplot(3,3,5);
    plot(t,x_traj(12,:)); title('dq2R');
    hold on; plot(t(1:mpciter),X_REF(12,1:mpciter)); 
    legend('dq2R','dq2R{ref}');
    
    subplot(3,3,6);
    plot(t,x_traj(13,:)); title('dq1L');
    hold on; plot(t(1:mpciter),X_REF(13,1:mpciter)); 
    legend('dq1L','dq1L_{ref}');
    
    subplot(3,3,7);
    plot(t,x_traj(14,:)); title('dq2L');
    hold on; plot(t(1:mpciter),X_REF(14,1:mpciter)); 
    legend('dq2L','dq2L{ref}');
    
    figure 
    subplot(2,2,1);
    plot(t(1:end-1),u_cl(:,1)); title('u_q1R');
    hold on; plot(t(1:mpciter),U_REF(1,1:mpciter)); 
    legend('u_q1R','u_q1R_{ref}');
    subplot(2,2,2);
    plot(t(1:end-1),u_cl(:,2)); title('u_q2R');
    hold on; plot(t(1:mpciter),U_REF(2,1:mpciter)); 
    legend('u_q2R','u_q2R_{ref}');
    subplot(2,2,3);
    plot(t(1:end-1),u_cl(:,3)); title('u_q1L');
    hold on; plot(t(1:mpciter),U_REF(3,1:mpciter)); 
    legend('u_q1L','u_q1L_{ref}');
    subplot(2,2,4);
    plot(t(1:end-1),u_cl(:,4)); title('u_q2L');
    hold on; plot(t(1:mpciter),U_REF(4,1:mpciter)); 
    legend('u_q2L','u_q2L_{ref}');
    
    
end

%% Plotting during simulation
% if false
%     figure
%     subplot(3,3,1);
%     plot(t,x_traj(1,1:end-1)); title('x'); 
%     hold on; plot(t(1:mpciter),X_REF(1,1:mpciter)); 
%     legend('x','x_{ref}');
%     subplot(3,3,2); 
%     plot(t,x_traj(2,1:end-1)); title('z');
%     hold on; plot(t(1:mpciter),X_REF(2,1:mpciter));
%     legend('z','z_{ref}');
%     subplot(3,3,3);
%     plot(t,x_traj(3,1:end-1)); title('rotY');
%     hold on; plot(t(1:mpciter),X_REF(3,1:mpciter));
%     legend('rotY','rotY{ref}');
%     subplot(3,3,4);
%     plot(t,x_traj(4,1:end-1)); title('q1R');
%     hold on; plot(t(1:mpciter),X_REF(4,1:mpciter)); 
%     legend('q1R','q1R_{ref}');
%     subplot(3,3,5);
%     plot(t,x_traj(5,1:end-1)); title('q2R');
%     hold on; plot(t(1:mpciter),X_REF(5,1:mpciter)); 
%     legend('q2R','q2R{ref}');
%     subplot(3,3,6);
%     plot(t,x_traj(6,1:end-1)); title('q1L');
%     hold on; plot(t(1:mpciter),X_REF(6,1:mpciter)); 
%     legend('q1L','q1L_{ref}');
%     subplot(3,3,7);
%     plot(t,x_traj(7,1:end-1)); title('q2L');
%     hold on; plot(t(1:mpciter),X_REF(7,1:mpciter)); 
%     legend('q2L','q2L{ref}');
%     
%     figure
%     subplot(3,3,1);
%     plot(t,x_traj(8,1:end-1)); title('dx'); 
%     hold on; plot(t(1:mpciter),X_REF(8,1:mpciter)); 
%     legend('dx','dx_{ref}');
%     subplot(3,3,2); 
%     plot(t,x_traj(9,1:end-1)); title('dz');
%     hold on; plot(t(1:mpciter),X_REF(9,1:mpciter));
%     legend('dz','dz_{ref}');
%     
%     subplot(3,3,3);
%     plot(t,x_traj(10,1:end-1)); title('drotY');
%     hold on; plot(t(1:mpciter),X_REF(10,1:mpciter));
%     legend('drotY','drotY{ref}');
%     
%     subplot(3,3,4);
%     plot(t,x_traj(11,1:end-1)); title('dq1R');
%     hold on; plot(t(1:mpciter),X_REF(11,1:mpciter)); 
%     legend('dq1R','dq1R_{ref}');
%     
%     subplot(3,3,5);
%     plot(t,x_traj(12,1:end-1)); title('dq2R');
%     hold on; plot(t(1:mpciter),X_REF(12,1:mpciter)); 
%     legend('dq2R','dq2R{ref}');
%     
%     subplot(3,3,6);
%     plot(t,x_traj(13,1:end-1)); title('dq1L');
%     hold on; plot(t(1:mpciter),X_REF(13,1:mpciter)); 
%     legend('dq1L','dq1L_{ref}');
%     
%     subplot(3,3,7);
%     plot(t,x_traj(14,1:end-1)); title('dq2L');
%     hold on; plot(t(1:mpciter),X_REF(14,1:mpciter)); 
%     legend('dq2L','dq2L{ref}');
% end
%     %%
% if false
%     figure 
%     subplot(2,2,1);
%     plot(t(1:end-1),u_cl(:,1)); title('u_q1R');
%     hold on; plot(t(1:mpciter),U_REF(1,1:mpciter)); 
%     legend('u_q1R','u_q1R_{ref}');
%     subplot(2,2,2);
%     plot(t(1:end-1),u_cl(:,2)); title('u_q2R');
%     hold on; plot(t(1:mpciter),U_REF(2,1:mpciter)); 
%     legend('u_q2R','u_q2R_{ref}');
%     subplot(2,2,3);
%     plot(t(1:end-1),u_cl(:,3)); title('u_q1L');
%     hold on; plot(t(1:mpciter),U_REF(3,1:mpciter)); 
%     legend('u_q1L','u_q1L_{ref}');
%     subplot(2,2,4);
%     plot(t(1:end-1),u_cl(:,4)); title('u_q2L');
%     hold on; plot(t(1:mpciter),U_REF(4,1:mpciter)); 
%     legend('u_q2L','u_q2L_{ref}');
%     
%     
% end
% 
% 
