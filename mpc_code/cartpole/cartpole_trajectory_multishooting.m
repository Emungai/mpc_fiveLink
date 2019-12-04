%% Cartpole Regulator + Multiple shooting
clear; close all; clc
import casadi.*

%% Cartpole parameters
mc = 1;
mp = 1;
l = 0.5;
g = 9.81;

%% System Setup
DT = 0.005; %[s]
N = 400; % prediction horizon

% Symbolic variables
x = SX.sym('x'); theta = SX.sym('theta');
dx = SX.sym('dx'); dtheta = SX.sym('dtheta');
q = [x; theta]; dq = [dx; dtheta];
states = [q; dq]; n_s = length(states);

force = SX.sym('force');
controls = force; n_c = length(controls);

H = [mc+mp mp*l*cos(theta); mp*l*cos(theta) mp*l^2];
C = [0 -mp*l*dtheta*sin(theta); 0 0];
G = [0; mp*g*l*sin(theta)];
B = [1; 0];

rhs = [dq; H\(B*force-C*dq-G)]; % system r.h.s

f = Function('f',{states,controls},{rhs});  % nonlinear mapping function f(x,u)
U = SX.sym('U',n_c,N);                      % Decision variables (controls)
P = SX.sym('P',n_s + N*(n_s+n_c));          
% P = [xinit | x_0ref | u_0ref | x_1ref | u_1ref | ... | x_N-1ref | u_N-1ref]
% parameters (which include the initial state and the reference along the
% predicted trajectory (reference states and reference controls))

X = SX.sym('X',n_s,(N+1));                  
% A vector that represents the states over the optimization problem.

obj = 0; % Objective function
obj_new = 0;

g = [];  % constraints vector

Q = diag([10 10 0.01 0.01]);
Q_terminal = 100*diag([10 10 1 1]);
R = diag([0.1]); % weighing matrices (controls)

st  = X(:,1);        % initial state
g = [g;st-P(1:n_s)]; % initial condition constraints

%% Build Objective Function and Equality(Dynamics) Constraints
for k = 1:N
    st = X(:,k);  ctrl = U(:,k);
    
    if k < N
    % Running stage cost
    obj = obj + (st-P((k-1)*(n_s+n_c)+(n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s)))'*Q*(st-P((k-1)*(n_s+n_c)+(n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s))) + ...
        (ctrl-P((k-1)*(n_s+n_c)+(n_s+n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s+n_c)))'*R*(ctrl-P((k-1)*(n_s+n_c)+(n_s+n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s+n_c)));
    end
    
    st_next = X(:,k+1);
    f_value = f(st,ctrl);
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

args.lbg(1:n_s*(N+1)) = 0; % Equality constraints
args.ubg(1:n_s*(N+1)) = 0; % Equality constraints

args.lbx(1:n_s:n_s*(N+1),1) = -inf;             %state x lower bound
args.ubx(1:n_s:n_s*(N+1),1) = inf;              %state x upper bound
args.lbx(2:n_s:n_s*(N+1),1) = pi/2;             %state theta lower bound
args.ubx(2:n_s:n_s*(N+1),1) = 3*pi/2;           %state theta upper bound
args.lbx(3:n_s:n_s*(N+1),1) = -inf;             %state dx lower bound
args.ubx(3:n_s:n_s*(N+1),1) = inf;              %state dx upper bound
args.lbx(4:n_s:n_s*(N+1),1) = -inf;             %state dtheta lower bound
args.ubx(4:n_s:n_s*(N+1),1) = inf;              %state dtheta upper bound

force_max = 25; force_min = -force_max;
args.lbx(n_s*(N+1)+1:n_c:n_s*(N+1)+n_c*N,1) = force_min;    % force lower bound
args.ubx(n_s*(N+1)+1:n_c:n_s*(N+1)+n_c*N,1) = force_max;    % force upper bound

%% Load Reference Trajectory
load('cartpole_reference_trajectory1.mat');

%% ----------------------------------------------
% ALL OF THE ABOVE IS JUST A PROBLEM SET UP


% THE SIMULATION LOOP SHOULD START FROM HERE
%-------------------------------------------
t0 = 0;
x0 = [0.1 ; pi; 0; 0];    % initial condition.

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
while( (norm((x_traj(:,end)-X_REF(:,mpciter+1)),2) > 3e-2 || mpciter < 300)  && mpciter < sim_tim / DT)
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
    [t0, x0, u0] = shift(DT, t0, x0, u,f);
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
ss_error = norm((x_traj(:,end)-X_REF(:,mpciter+1)),2)
average_mpc_time = main_loop_time/(mpciter+1)
t(end+1) = t(end) + DT;

%%
close alL

if false
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



