function Torques(nlp, system)
%% DoubleSupportConstHeight
ds1=system.Gamma.Nodes.Domain{1}
uds1=ds1.Inputs.Control.u;
T  = SymVariable('t',[2, 1]);
Lds1 = tovector(norm(uds1).^2)./(T(2) - T(1));
Lds1_fun= SymFunction(['torque_' ds1.Name],Lds1,{uds1,T});
ds1_phase = getPhaseIndex(nlp,'DoubleSupportConstHeight');
addRunningCost(nlp.Phase(ds1_phase),Lds1_fun,{'u','T'});
%% LeftStanceLift
ls1=system.Gamma.Nodes.Domain{1}
uls1=ls1.Inputs.Control.u;
T  = SymVariable('t',[2, 1]);
Lls1 = tovector(norm(uls1).^2)./(T(2) - T(1));
Lls1_fun= SymFunction(['torque_' ls1.Name],Lls1,{uls1,T});
ls1_phase = getPhaseIndex(nlp,'LeftStanceLift');
addRunningCost(nlp.Phase(ls1_phase),Lls1_fun,{'u','T'});
% %% LeftStanceLand
% ls2=system.Gamma.Nodes.Domain{1}
% uls2=ls2.Inputs.Control.u;
% T  = SymVariable('t',[2, 1]);
% Lls2 = tovector(norm(uls2).^2)./(T(2) - T(1));
% Lls2_fun= SymFunction(['torque_' ls2.Name],Lls2,{uls2,T});
% ls2_phase = getPhaseIndex(nlp,'LeftStanceLand');
% addRunningCost(nlp.Phase(ls2_phase),Lls2_fun,{'u','T'});
% %% DoubleSupportDiffHeight
% ds2=system.Gamma.Nodes.Domain{1}
% uds2=ds2.Inputs.Control.u;
% T  = SymVariable('t',[2, 1]);
% Lds2 = tovector(norm(uds2).^2)./(T(2) - T(1));
% Lds2_fun= SymFunction(['torque_' ds2.Name],Lds2,{uds2,T});
% ds2_phase = getPhaseIndex(nlp,'DoubleSupportDiffHeight');
% addRunningCost(nlp.Phase(ds2_phase),Lds2_fun,{'u','T'});
%%
nlp.update;
end
