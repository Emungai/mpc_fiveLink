function [A_dynamics,B_dynamics] = Compute_Linearized_Dynamics();


syms x z rotY q1R q2R q1L q2L real
syms dx dz drotY dq1R dq2R dq1L dq2L real
syms u_q1R u_q2R u_q1L u_q2L real
q = [x z rotY q1R q2R q1L q2L]';
dq = [dx dz drotY dq1R dq2R dq1L dq2L]';
u_ctrl = [u_q1R; u_q2R; u_q1L; u_q2L];

Mmat = Mmat_notorso(x,z,rotY,q1R,q2R,q1L,q2L); % 7x7
G = GravityVector_notorso(x,z,rotY,q1R,q2R,q1L,q2L); %7x1
B = 50*[zeros(3,4); eye(4)];    % Multiply by 50 b/c of gear reduction


f = [dq; Mmat\(B*u_ctrl-G)]; % system r.h.s



end