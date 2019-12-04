%% Five-Link Walker Trajectory Tracking + Multiple shooting
clear; close all; clc
import casadi.*

%% System Setup
DT = 0.005; %[s]
N = 400; % prediction horizon
%% Load Reference Trajectory
param=load(fullfile('C:\Users\gibso\Box Sync\Box Sync\Courses\Github\mpc_fiveLink\opt\trajectories\stepUp\singleDomain\opt_traj_3-Dec-2019-18-07-22-0500_Rabbit.mat'));
addpath('C:\Users\gibso\Box Sync\Box Sync\Courses\Github\mpc_fiveLink\opt');
trajRef=calculations.referenceTrajBez(param.gait,DT);
X_REF = [trajRef.x; trajRef.dx];
U_REF = trajRef.u;

%% CasADi symbolics
% Symbolic state variables [x,z,roty,q1R,q2R,q1L,q2L]
x_tilde = SX.sym('x');
z_tilde = SX.sym('z');
rotY_tilde = SX.sym('rotY');
q1R_tilde = SX.sym('q1R');
q2R_tilde = SX.sym('q2R');
q1L_tilde = SX.sym('q1L');
q2L_tilde = SX.sym('q2L');
dx_tilde = SX.sym('dx');
dz_tilde = SX.sym('dz');
drotY_tilde = SX.sym('drotY');
dq1R_tilde = SX.sym('dq1R');
dq2R_tilde = SX.sym('dq2R');
dq1L_tilde = SX.sym('dq1L');
dq2L_tilde = SX.sym('dq2L');

q_tilde = [x_tilde; z_tilde; rotY_tilde; q1R_tilde; q2R_tilde; q1L_tilde; q2L_tilde];
dq_tilde = [dx_tilde; dz_tilde; drotY_tilde; dq1R_tilde; dq2R_tilde; dq1L_tilde; dq2L_tilde];
states_tilde = [q_tilde; dq_tilde];
n_s = length(states_tilde);

% Symbolic Control variables
u_q1R = SX.sym('u_q1R'); u_q2R = SX.sym('u_q2R'); 
u_q1L = SX.sym('u_q1L'); u_q2L = SX.sym('u_q2L');
u_ctrl_tilde = [u_q1R; u_q2R; u_q1L; u_q2L];
n_c = length(u_ctrl_tilde);

% Linearized Dynamics (dx = A * x_tilde + B * u_tilde)
Mmat = Mmat_notorso(x_tilde,z_tilde,rotY_tilde,q1R_tilde,q2R_tilde,q1L_tilde,q2L_tilde); % 7x7
G = GravityVector_notorso(x_tilde,z_tilde,rotY_tilde,q1R_tilde,q2R_tilde,q1L_tilde,q2L_tilde); %7x1
B = 50*[zeros(3,4); eye(4)];    % Multiply by 50 b/c of gear reduction

rhs = [dq_tilde; Mmat\(B*u_ctrl_tilde-G)]; % system r.h.s
A = jacobian(rhs,states_tilde);
B = jacobian(rhs,u_ctrl_tilde);
rhs = A*states_tilde + B*u_ctrl_tilde;    % Remember to change how equality constraints g are constructed since (x = x_ref + x_tilde, u = u_ref + u_tilde)

A_func = Function('A_Lin',{states_tilde,u_ctrl_tilde},{A});
B_func = Function('B_Lin',{states_tilde,u_ctrl_tilde},{B});
[A_num,B_num] = LinearizedDynamics();

f_linearized = Function('f_linearized',{states_tilde,u_ctrl_tilde},{rhs});  % nonlinear mapping function f(x,u)
U = SX.sym('U',n_c,N);                      % Decision variables (controls)
P = SX.sym('P',n_s + N*(n_s+n_c));          
% P = [xinit | x_0ref | u_0ref | x_1ref | u_1ref | ... | x_N-1ref | u_N-1ref]
% parameters (which include the initial state and the reference along the
% predicted trajectory (reference states and reference controls))

X = SX.sym('X',n_s,(N+1));                  
% A vector that represents the states over the optimization problem.

obj = 0; % Objective function
g = [];  % constraints vector

Q = eye(n_s);
Q_terminal = Q;
R = diag([0.1 0.1 0.1 0.1]); % weighing matrices (controls)

[K_lqr,P_lqr,Eigens_lqr] = lqr(A_num,B_num,Q,R);

st  = X(:,1);        % initial state
g = [g;st-P(1:n_s)]; % initial condition constraints

%% Build Objective Function and Equality(Dynamics) Constraints
for k = 1:N
    st = X(:,k);  ctrl = U(:,k);
    
    if k < N
    % Running stage cost (stop before last state/control to impose terminal
    % cost
    obj = obj + (st-P((k-1)*(n_s+n_c)+(n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s)))'*Q*(st-P((k-1)*(n_s+n_c)+(n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s))) + ...
        (ctrl-P((k-1)*(n_s+n_c)+(n_s+n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s+n_c)))'*R*(ctrl-P((k-1)*(n_s+n_c)+(n_s+n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s+n_c)));
    end
    
    st_next = X(:,k+1);
    f_value = f_linearized(st,ctrl);
    st_next_euler = st+ (DT*f_value);
    g = [g;st_next-st_next_euler]; % compute constraints
end
% Terminal Stage Cost
obj = obj + (st-P((N-1)*(n_s+n_c)+(n_s+1):(N-1)*(n_s+n_c)+(n_s+n_s)))'*Q_terminal*(st-P((N-1)*(n_s+n_c)+(n_s+1):(N-1)*(n_s+n_c)+(n_s+n_s)));

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
args.lbx(1:n_s:n_s*(N+1),1) = -inf;             %state x lower bound
args.ubx(1:n_s:n_s*(N+1),1) = inf;              %state x upper bound
args.lbx(2:n_s:n_s*(N+1),1) = 0;                %state z lower bound
args.ubx(2:n_s:n_s*(N+1),1) = inf;              %state z upper bound
args.lbx(3:n_s:n_s*(N+1),1) = -pi;              %state roty lower bound
args.ubx(3:n_s:n_s*(N+1),1) = pi;               %state roty upper bound
args.lbx(4:n_s:n_s*(N+1),1) = -inf;             %state q1R lower bound
args.ubx(4:n_s:n_s*(N+1),1) = inf;              %state q1R upper bound
args.lbx(5:n_s:n_s*(N+1),1) = -inf;             %state q2R lower bound
args.ubx(5:n_s:n_s*(N+1),1) = inf;              %state q2R upper bound
args.lbx(6:n_s:n_s*(N+1),1) = -inf;             %state q1L lower bound
args.ubx(6:n_s:n_s*(N+1),1) = inf;              %state q1L upper bound
args.lbx(7:n_s:n_s*(N+1),1) = -inf;             %state q2L lower bound
args.ubx(7:n_s:n_s*(N+1),1) = inf;              %state q2L upper bound

% Control inequalities
torque_max = inf; torque_min = -torque_max;
args.lbx(n_s*(N+1)+1:n_c:n_s*(N+1)+n_c*N,1) = torque_min;    % force lower bound
args.ubx(n_s*(N+1)+1:n_c:n_s*(N+1)+n_c*N,1) = torque_max;    % force upper bound
args.lbx(n_s*(N+1)+2:n_c:n_s*(N+1)+n_c*N,1) = torque_min;    % force lower bound
args.ubx(n_s*(N+1)+2:n_c:n_s*(N+1)+n_c*N,1) = torque_max;    % force upper bound
args.lbx(n_s*(N+1)+3:n_c:n_s*(N+1)+n_c*N,1) = torque_min;    % force lower bound
args.ubx(n_s*(N+1)+3:n_c:n_s*(N+1)+n_c*N,1) = torque_max;    % force upper bound
args.lbx(n_s*(N+1)+4:n_c:n_s*(N+1)+n_c*N,1) = torque_min;    % force lower bound
args.ubx(n_s*(N+1)+4:n_c:n_s*(N+1)+n_c*N,1) = torque_max;    % force upper bound

% Remember Decision Variables are stored as {x0,...,xN,u0,...,u_N-1] for
% figuring out indexing of args.lbx/ubx

%% Load Reference Trajectory
load('fivelink_reference_trajectory1.mat');

%% MPC Calculation and Simulation
t0 = 0;
x0 = zeros(14,1);    % initial condition.

x_traj(:,1) = x0; % xx contains the history of states
t(1) = t0;

u0 = zeros(N,n_c);
u0 = U_REF(1:N);

% X0 = repmat(x0,1,N+1)'; % initialization of the states decision variables
X0 = X_REF(:,1:N+1)';

sim_tim = 10; % Maximum simulation time

% Start MPC
mpciter = 0;
xx1 = [];
u_cl=[];

% the main simulaton loop... it works as long as the error is greater
% than 10^-6 and the number of mpc steps is less than its maximum
% value.
main_loop = tic;
while( (norm(x_traj(:,end)) > 3e-2 || mpciter < 300)  && mpciter < sim_tim / DT)
    %% Set Parameter vector and Decision Variables    
    args.p(1:n_s) = x0; % initial condition of the robot posture
    for k = 1:N %new - set the reference to track             
        args.p((k-1)*(n_s+n_c)+(n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s)) = ...
            X_REF(:,k);
        
        args.p((k-1)*(n_s+n_c)+(n_s+n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s+n_c)) =...
            U_REF(:,k);
    end
    
    args.x0  = [reshape(X0',n_s*(N+1),1);reshape(u0',n_c*N,1)];
    
    %% Solve MPC with CasADi NLP solver
    sol = solver('x0', args.x0, 'lbx', args.lbx, 'ubx', args.ubx,...
        'lbg', args.lbg, 'ubg', args.ubg,'p',args.p);
    
    %% Extract solutions
    u = reshape(full(sol.x(n_s*(N+1)+1:end))',n_c,N)'; % get controls only from the solution
    xx1(:,1:n_s,mpciter+1)= reshape(full(sol.x(1:n_s*(N+1)))',n_s,N+1)'; % get solution TRAJECTORY
    u_cl= [u_cl ; u(1,:)];              % only use first control value
    t(mpciter+1) = t0;
    
    %% Apply the control and guess next solution by shifting
    [t0, x0, u0] = shift(DT, t0, x0, u,f_linearized);
    x_traj(:,mpciter+2) = x0;
    X0 = reshape(full(sol.x(1:n_s*(N+1)))',n_s,N+1)'; % get solution TRAJECTORY
    
    % Shift trajectory to initialize the next step
    X0 = [X0(2:end,:);X0(end,:)];   % initialize with next step and add on last state twice
    
%     mpciter
    if mod(mpciter,50) == 0
        mpciter
    end
    mpciter = mpciter + 1;
end
main_loop_time = toc(main_loop);
ss_error = norm(x_traj(:,end))
average_mpc_time = main_loop_time/(mpciter+1)
t(end+1) = t(end) + DT;

%%
close alL

if true
    animate_traj(t,X_REF,x_traj,l);
end
if true
    figure
    subplot(2,2,1);
    plot(t,x_traj(1,:)); title('x'); 
    hold on; plot(t(1:mpciter),X_REF(1,1:mpciter)); 
    legend('x','x_{ref}');
    subplot(2,2,2); 
    plot(t,x_traj(2,:)); title('\theta');
    hold on; plot(t(1:mpciter),X_REF(2,1:mpciter));
    legend('\theta','\theta_{ref}');
    subplot(2,2,3);
    plot(t,x_traj(3,:)); title('dx');
    hold on; plot(t(1:mpciter),X_REF(3,1:mpciter));
    legend('dx','dx_{ref}');
    subplot(2,2,4);
    plot(t,x_traj(4,:)); title('d \theta');
    hold on; plot(t(1:mpciter),X_REF(4,1:mpciter)); 
    legend('d \theta','d \theta_{ref}');
    
    figure 
    plot(t(1:end-1),u_cl); title('Force');
    hold on; plot(t(1:mpciter),U_REF(1,1:mpciter)); 
    legend('F','F_{ref}');
end



