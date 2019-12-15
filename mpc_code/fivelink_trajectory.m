%% Five-Link Trajectory Tracking + Multiple shooting
clear; clc; 
if isunix
    addpath('../casadi-linux-matlabR2014b-v3.5.1');
else
    addpath('../casadi-windows-matlabR2014b-3.5.1');
end
import casadi.*
addpath('dynamics/');
addpath('utils/');
addpath('../rabbit_stepUp/');   % for animations
addpath('../rabbit_stepUp/gen/kinematics');
%% System Setup
DT = 0.005; %[s]
N = 10; % prediction horizon

%% Load Reference Trajectory
cur = pwd;
% trajName = 'one_sec_traj_9-Dec-2019-21-39-45-0500.mat';
% param=load(['..\rabbit_stepUp\trajectories\stepUp\singleDomain\',trajName]);

trajName = '0.05_ascend.mat';
param=load(['..\rabbit_stepUp\trajectories\stepUp\singleDomain\variousStepHeightsAscend\',trajName]);
addpath('..\rabbit_stepUp');
trajRef=calculations.referenceTrajBez(param.gait,DT);
X_REF_Original = [trajRef.x; trajRef.dx];
U_REF_Original = trajRef.u;

X_REF = X_REF_Original;
U_REF = U_REF_Original;


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
U = SX.sym('U',n_c,N+1);                      % Decision variables (controls)
P = SX.sym('P',n_s + (N+1)*(n_s+n_c));          
% P = [xinit | x_0ref | u_0ref | x_1ref | u_1ref | ... | x_Nref | u_Nref]
% parameters (which include the initial state and the reference along the
% predicted trajectory (reference states and reference controls))

X = SX.sym('X',n_s,(N+1));                  
% A vector that represents the states over the optimization problem.

g = [];  % constraints vector

Qx= diag([1 1 1 1 1 1 1]);
Qdx= 1*diag([1 1 1 1 1 1 1]);
Q=blkdiag(Qx,Qdx);
Q_terminal = Q;
% Q_terminal = 1000*blkdiag(eye(7), zeros(7,7));
R = 1*eye(n_c); % weighing matrices (controls)

%% Build Objective Function and Equality(Dynamics) Constraints
st  = X(:,1);        % initial state
objVector = SX.sym('objVector',N+1,1);
for k = 1:N+1
    st = X(:,k);  ctrl = U(:,k);
    % Running stage cost (stop before last state/control to impose terminal
    % cost
    if k < N+1
        objVector(k,1) = (st - P((k-1)*(n_s+n_c)+(n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s)) )'*Q*(st-P((k-1)*(n_s+n_c)+(n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s))) + ...
            (ctrl - P((k-1)*(n_s+n_c)+(n_s+n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s+n_c)) )'*R*(ctrl-P((k-1)*(n_s+n_c)+(n_s+n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s+n_c)));
    end
end
% Terminal cost
objVector(k,1) = (st - P((k-1)*(n_s+n_c)+(n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s)) )'*Q_terminal*(st-P((k-1)*(n_s+n_c)+(n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s)));
% Sum objective function -> scalar
obj = sum(objVector); 

%% Build Equality Constraints (G)
st  = X(:,1);        % initial state
g = [g;st-P(1:n_s)]; % initial condition constraints
for k = 1:N+1
    st = X(:,k);  ctrl = U(:,k);
    if k < N+1
        st_next = X(:,k+1);
        f_value = f(st,ctrl);
        st_next_euler = st+ (DT*f_value);
        g = [g;st_next-st_next_euler]; % compute constraints
    end
end

%% NLP Settings
% make the decision variable one column  vector
OPT_variables = [reshape(X,n_s*(N+1),1);reshape(U,n_c*(N+1),1)];

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
args.lbx(8:n_s:n_s*(N+1),1) = -20;             
args.ubx(8:n_s:n_s*(N+1),1) = 20;              
args.lbx(9:n_s:n_s*(N+1),1) = -20;               
args.ubx(9:n_s:n_s*(N+1),1) = 20;              
args.lbx(10:n_s:n_s*(N+1),1) = -20;             
args.ubx(10:n_s:n_s*(N+1),1) = 20;             
args.lbx(11:n_s:n_s*(N+1),1) = -20;           
args.ubx(11:n_s:n_s*(N+1),1) = 20;              
args.lbx(12:n_s:n_s*(N+1),1) = -20;             
args.ubx(12:n_s:n_s*(N+1),1) = 20;             
args.lbx(13:n_s:n_s*(N+1),1) = -20;          
args.ubx(13:n_s:n_s*(N+1),1) = 20;              
args.lbx(14:n_s:n_s*(N+1),1) = -20;             
args.ubx(14:n_s:n_s*(N+1),1) = 20;  

% Control inequalities
% torque_max =param.bounds.RightStance.inputs.Control.u.ub ; torque_min =param.bounds.RightStance.inputs.Control.u.lb;
torque_max = 10; torque_min = -10;

args.lbx(n_s*(N+1)+1:n_c:n_s*(N+1)+n_c*(N+1),1) = torque_min;    % u_q1R lower bound
args.ubx(n_s*(N+1)+1:n_c:n_s*(N+1)+n_c*(N+1),1) = torque_max;   
args.lbx(n_s*(N+1)+2:n_c:n_s*(N+1)+n_c*(N+1),1) = torque_min;    % u_q2R lower bound
args.ubx(n_s*(N+1)+2:n_c:n_s*(N+1)+n_c*(N+1),1) = torque_max;    
args.lbx(n_s*(N+1)+3:n_c:n_s*(N+1)+n_c*(N+1),1) = torque_min;    % u_q1L lower bound
args.ubx(n_s*(N+1)+3:n_c:n_s*(N+1)+n_c*(N+1),1) = torque_max;    
args.lbx(n_s*(N+1)+4:n_c:n_s*(N+1)+n_c*(N+1),1) = torque_min;    % u_q2L lower bound
args.ubx(n_s*(N+1)+4:n_c:n_s*(N+1)+n_c*(N+1),1) = torque_max;    

% Remember Decision Variables are stored as {x0,...,xN,u0,...,u_N-1] for
% figuring out indexing of args.lbx/ubx


%% MPC Calculation
t0 = 0;
Time(1) = t0;
t_final = DT * (size(X_REF_Original,2)-1);

% trajName2 = '0.05_ascend.mat';
% param2=load(['..\rabbit_stepUp\trajectories\stepUp\singleDomain\variousStepHeightsAscend\',trajName2]);
% x0 = [param2.gait(1).states.x(:,1); param2.gait(1).states.dx(:,1)] + ...
%      [0; 0; 0; 0; 0; 0; 0;
%       0; 0; 0; 0; 0; 0; 0];    % initial condition. 14X1
x0 = [param.gait(1).states.x(:,1); param.gait(1).states.dx(:,1)] + ...
 [0; 0; 0; 0; 0; 0; 0;
  0; 0; 0; 0; 0; 0; 0];    % initial condition. 14X1

x_traj(:,1) = x0; % xx contains the history of states


U_DEC = zeros(N+1,n_c);

X_DEC = repmat(x0,1,N+1)'; % initialization of the states decision variables

sim_time = 1; % Maximum simulation time

% Start MPC
mpciter = 0;
solMPC={};
xx1 = [];
u_cl=[];

% the main simulaton loop... it works as long as the error is greater
% than 10^-6 and the number of mpc steps is less than its maximum
% value.

x_ref_reg = X_REF(:,floor(10));
u_ref_reg = U_REF(:,floor(10));
X_REF_REG = repmat(x_ref_reg,1,ceil(sim_time+1)*size(X_REF,2));
U_REF_REG = repmat(u_ref_reg,1,ceil(sim_time+1)*size(U_REF,2));

main_loop = tic;
% while( (norm((x_traj(:,end)-X_REF(:,mpciter+1)),2) > 3e-2 || mpciter < 300)  && mpciter < sim_time / DT)
while(mpciter < sim_time / DT) 
    %% Shrinking Horizon Check
    if round(Time(end) + DT * N,3) > t_final
        % Shrink horizon
        N_new = round( (t_final - Time(end)) / DT );

        % modify lbx/ubx and lbg/ubg size when pred_horizon decreases
        lbg_temp = args.lbg(1:n_s*(N_new + 1));
        ubg_temp = args.ubg(1:n_s*(N_new + 1));
        lbx_temp = [args.lbx(1:(N_new+1)*n_s); args.lbx(n_s*(N+1)+1:n_s*(N+1)+n_c*(N_new+1))];
        ubx_temp = [args.ubx(1:(N_new+1)*n_s); args.ubx(n_s*(N+1)+1:n_s*(N+1)+n_c*(N_new+1))];    
        args.lbg = lbg_temp;
        args.ubg = ubg_temp;
        args.lbx = lbx_temp;
        args.ubx = ubx_temp;   

        
        % Update new prediction horizon
        N = N_new;
      
        obj = sum(objVector(1:N+1));
        OPT_variables = [reshape(X(:,1:N+1),n_s*(N+1),1);reshape(U(:,1:N+1),n_c*(N+1),1)];
        g = g(1:n_s*(N+1));
        P = P(1: (N+2)*n_s + (N+1)*n_c);
        nlp_prob = struct('f', obj, 'x', OPT_variables, 'g', g, 'p', P);
        solver = nlpsol('solver', 'ipopt', nlp_prob,opts);
    end
    
    %% Update parameters with correct reference
    args.p=[];
    args.p(1:n_s) = x0; % initial condition of the robot posture
    for k = 1:N+1 %new - set the reference to track             
        args.p((k-1)*(n_s+n_c)+(n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s)) = ...
            X_REF(:,k);
        
        args.p((k-1)*(n_s+n_c)+(n_s+n_s+1):(k-1)*(n_s+n_c)+(n_s+n_s+n_c)) =...
            U_REF(:,k);        
    end
    
    % warm start
    args.x0  = [reshape(X_DEC(1:N+1,:)',n_s*(N+1),1);reshape(U_DEC(1:N+1,:)',n_c*(N+1),1)];
    
    %% Solve MPC with CasADi NLP solver
    sol = solver('x0', args.x0, 'lbx', args.lbx, 'ubx', args.ubx,...
        'lbg', args.lbg, 'ubg', args.ubg,'p',args.p);
    
    %% Extract solutions
    u = reshape(full(sol.x(n_s*(N+1)+1:end))',n_c,N+1)'; % get controls only from the solution
%     solMPC.xx1(:,1:n_s,mpciter+1)= reshape(full(sol.x(1:n_s*(N+1)))',n_s,N+1)'; % get solution TRAJECTORY
    u_cl= [u_cl ; u(1,:)];              % only use first control value
    Time(mpciter+1) = t0;
    
    %% Apply the control and guess next solution by shifting
    [t0, x0, U_DEC] = shift(DT, t0, x0, u,f);
    x_traj(:,mpciter+2) = x0;
    X_DEC = reshape(full(sol.x(1:n_s*(N+1)))',n_s,N+1)'; % get solution TRAJECTORY
    
    % Shift trajectory to initialize the next step
    X_DEC = [X_DEC(2:end,:);X_DEC(end,:)];   % initialize with next step and add on last state twice
    
    if mod(mpciter,10) == 0
        disp("mpciter = " + mpciter)
    end
    mpciter = mpciter + 1;
    %% Shift X_REF and U_REF
    X_REF = [X_REF(:,2:end),X_REF(:,end)];
    U_REF = [U_REF(:,2:end),U_REF(:,end)];
    
end
main_loop_time = toc(main_loop);
if false
    traj_total_error = norm(x_traj - X_REF_Original);
    traj_pos_error = norm(x_traj(1:7,:) - X_REF_Original(1:7,:));
    traj_vel_error = norm(x_traj(8:end,:) - X_REF_Original(8:end,:));
end
average_mpc_time = main_loop_time/(mpciter+1);
disp("Average MPC Time = " + average_mpc_time);
Time(end+1) = Time(end) + DT;

%% Error and toe pos
X_error = x_traj - X_REF_Original;
U_error = u_cl - U_REF_Original(:,1:end-1)';

swingPosEnd = leftToePos(x_traj(1:7,end));
disp("End position of swing foot: ")
disp(swingPosEnd);



%% Plot results
plot_q = true;
plot_dq = false;
plot_u = false;
if (false)
    Plot_MPC_Traj(Time,x_traj,X_REF_Original,u_cl,U_REF_Original,plot_q,plot_dq,plot_u); 
end

% plot error
    Plot_MPC_Traj(Time,X_error,X_error,U_error,U_error,plot_q,plot_dq,plot_u); 


%% Animation
animateTraj = true;
animateRef = false;
if true
   Animate_MPC_Traj(Time,X_REF_Original,x_traj,animateTraj,animateRef) 
end






