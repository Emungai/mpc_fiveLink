%% Cartpole Regulator + Multiple shooting
clear; close all; clc
if isunix
    addpath('../../casadi-linux-matlabR2014b-v3.5.1');
else
    addpath('../../casadi-windows-matlabR2014b-3.5.1');
end
import casadi.*

%% Cartpole parameters
mc = 1;
mp = 1;
l = 0.5;
g = 9.81;

%% System Setup
DT = 0.005; %[s]
N = 200; % prediction horizon

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

Q = diag([1 1 0.1 0.1]);
R = 0; % weighing matrices (controls)

st  = X(:,1);        % initial state
g = [g;st-P(1:n_s)]; % initial condition constraints

%% Build Objective Function and Equality(Dynamics) Constraints
for k = 1:N
    st = X(:,k);  ctrl = U(:,k);
  
    % Running stage cost
    obj = obj + (st-P((k-1)*(n_s+n_c)+(n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s)))'*Q*(st-P((k-1)*(n_s+n_c)+(n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s))) + ...
        (ctrl-P((k-1)*(n_s+n_c)+(n_s+n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s+n_c)))'*R*(ctrl-P((k-1)*(n_s+n_c)+(n_s+n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s+n_c)));
    
    st_next = X(:,k+1);
    f_value = f(st,ctrl);
    st_next_euler = st+ (DT*f_value);
    g = [g;st_next-st_next_euler]; % compute constraints
end

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
args.lbx(2:n_s:n_s*(N+1),1) = 3*pi/4;             %state theta lower bound
args.ubx(2:n_s:n_s*(N+1),1) = 5*pi/4;           %state theta upper bound
args.lbx(3:n_s:n_s*(N+1),1) = -2;             %state dx lower bound
args.ubx(3:n_s:n_s*(N+1),1) = 2;              %state dx upper bound
args.lbx(4:n_s:n_s*(N+1),1) = -0.5;             %state dtheta lower bound
args.ubx(4:n_s:n_s*(N+1),1) = 0.5;              %state dtheta upper bound

u_max = 10; u_min = -u_max;
args.lbx(n_s*(N+1)+1:n_c:n_s*(N+1)+n_c*N,1) = u_min;    % u lower bound
args.ubx(n_s*(N+1)+1:n_c:n_s*(N+1)+n_c*N,1) = u_max;    % u upper bound

%% Load Reference Trajectory
% load('cartpole_reference_trajectory1.mat');
ex1 = false;
if ex1
    load('cartpole_reference_trajectory_ex1.mat','X_REF','U_REF');
    X_REF_Original = X_REF;
    U_REF_Original = U_REF;
else
    load('cartpole_reference_trajectory_ex2.mat','X_REF','U_REF');
    X_REF_Original = X_REF;
    U_REF_Original = U_REF;
end

%% ----------------------------------------------
% ALL OF THE ABOVE IS JUST A PROBLEM SET UP


% THE SIMULATION LOOP SHOULD START FROM HERE
%-------------------------------------------
t0 = 0;
if ex1
    x0 = [0 ; pi; 0; 0] +...
         [0.2; 0; 0.3; -0.1];    % initial condition.
else
    x0 = [0.5 ; pi+0.4; 0.2; -0.1]+...
         [-0.2; -0.2; -0.2; 0.1];
end

x_traj(:,1) = x0; % xx contains the history of states
t(1) = t0;

u0 = zeros(N,n_c);
u0 = U_REF(1:N);

% X0 = repmat(x0,1,N+1)'; % initialization of the states decision variables
X0 = X_REF(:,1:N+1)';

sim_time = 10; % Maximum simulation time

% Start MPC
mpciter = 0;
xx1 = [];
u_cl=[];

% the main simulaton loop... it works as long as the error is greater
% than 10^-6 and the number of mpc steps is less than its maximum
% value.
main_loop = tic;
% while( (norm((x_traj(:,end)-X_REF(:,mpciter+1)),2) > 3e-2 || mpciter < 300)  && mpciter < sim_tim / DT)
while(mpciter < sim_time / DT)

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
    
    %% Shift X_REF and U_REF
    X_REF = [X_REF(:,2:end),X_REF(:,end)];
    U_REF = [U_REF(:,2:end),U_REF(:,end)];
    
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

%% SAVE Trajectory Tracking Results

if ex1
    save('cartpole_trajtrack_ex1'); 
else
    save('cartpole_trajtrack_ex2');
end


%%
close alL

if false
    animate_traj(t,X_REF,x_traj,l);
end

if true
    sz = 15;
    width = 2;
    figure
    subplot(2,3,1);
    plot(t(1:mpciter),X_REF_Original(1,1:mpciter),'LineStyle','--','color','g','LineWidth',width); xlim([0 sim_time]);
    hold on; line([0 sim_time],[args.lbx(1) args.lbx(1)],'LineStyle','--','color','r','LineWidth',width);
    hold on; line([0 sim_time],[args.ubx(1) args.ubx(1)],'LineStyle','--','color','r','LineWidth',width);
    hold on; plot(t,x_traj(1,:),'LineWidth',width,'color',[0, 0.4470, 0.7410]); title('$\mathbf{x}$','interpreter','latex','FontSize',sz); grid on;
    xlabel('Time [sec]'); ylabel('$x\ [m]$','interpreter','latex');
    set(gca,'FontSize',sz)
    
    subplot(2,3,2);
    plot(t(1:mpciter),X_REF_Original(2,1:mpciter),'LineStyle','--','color','g','LineWidth',width); xlim([0 sim_time]);
    hold on; line([0 sim_time],[args.lbx(2) args.lbx(2)],'LineStyle','--','color','r','LineWidth',width)
    hold on; line([0 sim_time],[args.ubx(2) args.ubx(2)],'LineStyle','--','color','r','LineWidth',width)
    hold on; plot(t,x_traj(2,:),'LineWidth',width,'color',[0, 0.4470, 0.7410]); title('$\mathbf{\theta}$','interpreter','latex','FontSize',sz); grid on;
    xlabel('Time [sec]');ylabel('$\theta\ [rad]$','interpreter','latex');
    set(gca,'FontSize',sz)
    
    subplot(2,3,4);
    plot(t(1:mpciter),X_REF_Original(3,1:mpciter),'LineStyle','--','color','g','LineWidth',width); xlim([0 sim_time]);
    hold on; line([0 sim_time],[args.lbx(3) args.lbx(3)],'LineStyle','--','color','r','LineWidth',width)
    hold on; line([0 sim_time],[args.ubx(3) args.ubx(3)],'LineStyle','--','color','r','LineWidth',width)
    hold on; plot(t,x_traj(3,:),'LineWidth',width,'color',[0, 0.4470, 0.7410]); title('$\mathbf{\dot{x}}$','interpreter','latex','FontSize',sz); grid on;
    xlabel('Time [sec]'); ylabel('$\dot{x}\ [m/s]$','interpreter','latex');
    set(gca,'FontSize',sz)
    
    subplot(2,3,5);
    plot(t(1:mpciter),X_REF_Original(4,1:mpciter),'LineStyle','--','color','g','LineWidth',width); xlim([0 sim_time]);
    hold on; line([0 sim_time],[args.lbx(4) args.lbx(4)],'LineStyle','--','color','r','LineWidth',width)
    hold on; line([0 sim_time],[args.ubx(4) args.ubx(4)],'LineStyle','--','color','r','LineWidth',width)
    hold on; plot(t,x_traj(4,:),'LineWidth',width,'color',[0, 0.4470, 0.7410]); title('$\mathbf{\dot{\theta}}$','interpreter','latex','FontSize',sz); grid on;
    xlabel('Time [sec]'); ylabel('$\dot{\theta}\ [rad/s]$','interpreter','latex');
    set(gca,'FontSize',sz);
    
    subplot(2,3,3);
    plot(t(1:mpciter),U_REF_Original(1,1:mpciter),'LineStyle','--','color','g','LineWidth',width)
    hold on; line([0 sim_time],[u_min u_min],'LineStyle','--','color','r','LineWidth',width)
    hold on; line([0 sim_time],[u_max u_max],'LineStyle','--','color','r','LineWidth',width)
    hold on; stairs(t(1:end-1),u_cl,'LineWidth',width,'color',[0, 0.4470, 0.7410]); title('$\mathbf{u}$','interpreter','latex','FontSize',sz); grid on;
    xlabel('Time [sec]'); ylabel('$u\ [Nm]$','interpreter','latex');
    set(gca,'FontSize',sz)
    set(gcf,'color','w');

%     sgtitle('Cart-pole Regulator Example 1');
end