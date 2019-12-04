function G = GravityVector_notorso(x,z,rotY,q1R,q2R,q1L,q2L)
% Fvec = -C(q,dq)*dq - G(q)
G11 = 0;
G21 =  -313.92  ;
G31 =  28.252799999999997*sin(rotY) - 7.33788*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)) - 31.392000000000003*((2*(1 - cos(q2R))*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)))/5 - (2*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R))*sin(q2R))/5 + (16*(cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)) + (-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R))*sin(q2R)))/25) - 7.33788*(-(cos(q1L)*sin(rotY)) - cos(rotY)*sin(q1L)) - 31.392000000000003*((2*(1 - cos(q2L))*(-(cos(q1L)*sin(rotY)) - cos(rotY)*sin(q1L)))/5 - (2*(-(cos(rotY)*cos(q1L)) + sin(rotY)*sin(q1L))*sin(q2L))/5 + (16*(cos(q2L)*(-(cos(q1L)*sin(rotY)) - cos(rotY)*sin(q1L)) + (-(cos(rotY)*cos(q1L)) + sin(rotY)*sin(q1L))*sin(q2L)))/25)  ;
G41 =  -7.33788*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)) - 31.392000000000003*((2*(1 - cos(q2R))*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)))/5 - (2*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R))*sin(q2R))/5 + (16*(cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)) + (-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R))*sin(q2R)))/25)  ;
G51 =  -31.392000000000003*((-2*cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)))/5 + (2*(cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R))*sin(q2R))/5 + (16*(cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)) - (cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R))*sin(q2R)))/25)  ;
G61 =  -7.33788*(-(cos(q1L)*sin(rotY)) - cos(rotY)*sin(q1L)) - 31.392000000000003*((2*(1 - cos(q2L))*(-(cos(q1L)*sin(rotY)) - cos(rotY)*sin(q1L)))/5 - (2*(-(cos(rotY)*cos(q1L)) + sin(rotY)*sin(q1L))*sin(q2L))/5 + (16*(cos(q2L)*(-(cos(q1L)*sin(rotY)) - cos(rotY)*sin(q1L)) + (-(cos(rotY)*cos(q1L)) + sin(rotY)*sin(q1L))*sin(q2L)))/25)  ;
G71 =  -31.392000000000003*((-2*cos(q2L)*(-(cos(q1L)*sin(rotY)) - cos(rotY)*sin(q1L)))/5 + (2*(cos(rotY)*cos(q1L) - sin(rotY)*sin(q1L))*sin(q2L))/5 + (16*(cos(q2L)*(-(cos(q1L)*sin(rotY)) - cos(rotY)*sin(q1L)) - (cos(rotY)*cos(q1L) - sin(rotY)*sin(q1L))*sin(q2L)))/25)  ;

G = -[G11; G21; G31; G41; G51; G61; G71]; % Fvec = -C(q,dq)*dq - G(q)

return

end



