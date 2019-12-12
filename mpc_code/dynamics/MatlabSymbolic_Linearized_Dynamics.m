function [A_dynamics,B_dynamics] = MatlabSymbolic_Linearized_Dynamics()


%% Five-Link Walker
if false
    syms x z rotY q1R q2R q1L q2L real
    syms dx dz drotY dq1R dq2R dq1L dq2L real
    syms u_q1R u_q2R u_q1L u_q2L real
    q = [x z rotY q1R q2R q1L q2L]';
    dq = [dx dz drotY dq1R dq2R dq1L dq2L]';
    u_ctrl = [u_q1R; u_q2R; u_q1L; u_q2L];

    Mmat = Mmat_notorso(x,z,rotY,q1R,q2R,q1L,q2L); % 7x7
    G = GravityVector_notorso(x,z,rotY,q1R,q2R,q1L,q2L); %7x1
    B = 50*[zeros(3,4); eye(4)];    % Multiply by 50 b/c of gear reduction

    tic
    f = [dq; Mmat\(B*u_ctrl-G)]; % system r.h.s
    toc
end

%% Cartpole
if true
    % Symbolics and parameters
    syms x theta dx dtheta real
    syms u real
    q = [x theta]';
    dq = [dx dtheta]';
    mc = 1;
    mp = 1;
    l = 0.5;
    g = 9.81;

    % Euler-Lagrange Matrices
    Mmat = [mc+mp mp*l*cos(theta); mp*l*cos(theta) mp*l^2];
    C = [0 -mp*l*dtheta*sin(theta); 0 0];
    G = [0; mp*g*l*sin(theta)];
    B = [1; 0];
    tic
    rhs = [dq; Mmat\(B*u-C*dq-G)]; % system r.h.s
    toc
end

end