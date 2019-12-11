function dJ = JacobianDot_notorso(x,z,rotY,q1R,q2R,q1L,q2L,dx,dz,drotY,dq1R,dq2R,dq1L,dq2L)

dJr1 = [0, 0, dq2R*((-2*cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)))/5 + (2*(cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)) - (cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R))*sin(q2R)))/5) + drotY*((2*(1 - cos(q2R))*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)))/5 - (2*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)) + (-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R))*sin(q2R)))/5) + dq1R*((2*(1 - cos(q2R))*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)))/5 - (2*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)) + (-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R))*sin(q2R)))/5), dq2R*((-2*cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)))/5 + (2*(cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)) - (cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R))*sin(q2R)))/5) + drotY*((2*(1 - cos(q2R))*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)))/5 - (2*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)) + (-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R))*sin(q2R)))/5) + dq1R*((2*(1 - cos(q2R))*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)))/5 - (2*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)) + (-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R))*sin(q2R)))/5), drotY*((-2*cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)))/5 + (2*(cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)) - (cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R))*sin(q2R)))/5) + dq1R*((-2*cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)))/5 + (2*(cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)) - (cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R))*sin(q2R)))/5) + dq2R*((2*cos(q2R)*(cos(q1R)*sin(rotY) + cos(rotY)*sin(q1R)))/5 + (2*(cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R))*sin(q2R))/5 + (4*(-(cos(q2R)*(cos(q1R)*sin(rotY) + cos(rotY)*sin(q1R))) - (cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R))*sin(q2R)))/5), 0, 0];
% dJr2 = [0, 0, 0, 0, 0, 0, 0];
dJr3 = [0, 0, dq2R*((-2*cos(q2R)*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R)))/5 + (2*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R)) - (-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R))*sin(q2R)))/5) + drotY*((2*(1 - cos(q2R))*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R)))/5 - (2*(cos(q1R)*sin(rotY) + cos(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R)) + (cos(q1R)*sin(rotY) + cos(rotY)*sin(q1R))*sin(q2R)))/5) + dq1R*((2*(1 - cos(q2R))*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R)))/5 - (2*(cos(q1R)*sin(rotY) + cos(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R)) + (cos(q1R)*sin(rotY) + cos(rotY)*sin(q1R))*sin(q2R)))/5), dq2R*((-2*cos(q2R)*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R)))/5 + (2*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R)) - (-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R))*sin(q2R)))/5) + drotY*((2*(1 - cos(q2R))*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R)))/5 - (2*(cos(q1R)*sin(rotY) + cos(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R)) + (cos(q1R)*sin(rotY) + cos(rotY)*sin(q1R))*sin(q2R)))/5) + dq1R*((2*(1 - cos(q2R))*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R)))/5 - (2*(cos(q1R)*sin(rotY) + cos(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R)) + (cos(q1R)*sin(rotY) + cos(rotY)*sin(q1R))*sin(q2R)))/5), dq2R*((2*cos(q2R)*(cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R)))/5 + (2*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R))*sin(q2R))/5 + (4*(-(cos(q2R)*(cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R))) - (-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R))*sin(q2R)))/5) + drotY*((-2*cos(q2R)*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R)))/5 + (2*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R)) - (-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R))*sin(q2R)))/5) + dq1R*((-2*cos(q2R)*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R)))/5 + (2*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R)) - (-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R))*sin(q2R)))/5), 0, 0];

dJ = [dJr1; dJr3];

end

