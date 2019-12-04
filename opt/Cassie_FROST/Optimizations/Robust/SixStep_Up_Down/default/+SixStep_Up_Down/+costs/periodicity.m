function [ perodicity_fun ] = periodicity( nlp )
%periodicity constraint for periodicity
%   Creates SymFunction for a periodicity constraint
%
%   Author: Ross Hartley
%     Date: 2018-03-19

% Create function for periodicity constraint
weights  = SymVariable('w',[2*nlp.Plant.numState,1]);
X1  = SymVariable('xc',[nlp.Plant.numState,1]);
X2  = SymVariable('x',[nlp.Plant.numState,1]);
dX1  = SymVariable('dxc',[nlp.Plant.numState,1]);
dX2  = SymVariable('dx',[nlp.Plant.numState,1]);
cost = sum((weights.*([X2-X1; dX2-dX1])).^2);
perodicity_fun = SymFunction('perodicity_cost', cost, {X1,dX1,X2,dX2}, {weights});

end
