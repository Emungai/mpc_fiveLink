clear;
clc;
if isunix
    addpath('casadi-linux-matlabR2014b-v3.5.1');
else
    addpath('casadi-windows-matlabR2014b-3.5.1');
end
import casadi.*
x = SX.sym('x');
y = SX.sym('y');
z = SX.sym('z');
nlp = struct('x',[x;y;z], 'f',x^2+100*z^2, 'g',z+(1-x)^2-y);
S = nlpsol('S', 'ipopt', nlp);
disp(S)


%%
r = S('x0',[2.5,3.0,0.75],...
      'lbg',0,'ubg',0);
x_opt = r.x;
disp(x_opt)