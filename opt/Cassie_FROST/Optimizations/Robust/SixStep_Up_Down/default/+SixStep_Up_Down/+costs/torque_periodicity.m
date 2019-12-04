function [ perodicity_fun ] = torque_periodicity( nlp )
%periodicity constraint for periodicity
%   Creates SymFunction for a periodicity constraint
%
%   Author: Ross Hartley
%     Date: 2018-03-19

% Create function for periodicity constraint
weights  = SymVariable('w',[nlp.Plant.Inputs.Control.u.length,1]);
X1  = SymVariable('uc',[nlp.Plant.Inputs.Control.u.length,1]);
X2  = SymVariable('u',[nlp.Plant.Inputs.Control.u.length,1]);
cost = sum((weights.*(X2-X1)).^2);
perodicity_fun = SymFunction('torque_periodicity_cost', cost, {X1,X2}, {weights});

end
