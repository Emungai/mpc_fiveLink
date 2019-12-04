function [ nlp ] = multi_domain_constraints( nlp )
%MULTI_DOMAIN_CONSTRAINTS  Add constraints that go across multiple domains

%% Average Velocity

% Create function for average_velocity_multi_domain constraint
T1  = SymVariable('t1',[2,1]);
T2  = SymVariable('t2',[2,1]);
X0  = SymVariable('x0',[nlp.Phase(1).Plant.numState,1]);
XF  = SymVariable('xF',[nlp.Phase(3).Plant.numState,1]);
avg_vel = (XF(1:2) - X0(1:2)) ./ (T1(2) + T2(2));
avg_vel_fun = SymFunction('average_velocity_multi_domain', avg_vel, {T1,X0,T2,XF});

velocity = [1.5; 0];
avg_vel_constr = NlpFunction('Name','average_velocity_multi_domain',...
    'Dimension',2,...
    'lb', velocity,...
    'ub', velocity,...
    'Type','Linear',...
    'SymFun',avg_vel_fun,...
    'DepVariables',[nlp.Phase(1).OptVarTable.T(1), nlp.Phase(1).OptVarTable.x(1), nlp.Phase(3).OptVarTable.T(end), nlp.Phase(3).OptVarTable.x(end)]);

addConstraint(nlp.Phase(1), 'average_velocity_multi_domain', 'first', avg_vel_constr);


end

