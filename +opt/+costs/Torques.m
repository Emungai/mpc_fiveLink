function Torques(nlp, system)
%% DoubleSupportConstHeight
DS1Model=system.Gamma.Nodes.Domain{1}
uDS1 = DS1Model.Inputs.Control.u;
u2DS1 = tovector(norm(uDS1).^2);
u2DS1_fun = SymFunction(['torques_' DS1Model.Name],u2DS1,{uDS1});
dsStance = getPhaseIndex(nlp,'DoubleSupportConstHeight');
addRunningCost(nlp.Phase(dsStance),u2DS1_fun,{'u'});
%% Right Stance
rStanceModel=system.Gamma.Nodes.Domain{2};
ur = rStanceModel.Inputs.Control.u;
u2r = tovector(norm(ur).^2);
u2r_fun = SymFunction(['torques_' rStanceModel.Name],u2r,{ur});
rightStance = getPhaseIndex(nlp,'RightStance');
addRunningCost(nlp.Phase(rightStance),u2r_fun,{'u'});
%% Left Stance
DS2Model=system.Gamma.Nodes.Domain{3};
uDS2 = DS2Model.Inputs.Control.u;
u2DS2 = tovector(norm(uDS2).^2);
u2DS2_fun = SymFunction(['torques_' DS2Model.Name],u2DS2,{uDS2});
ds2Stance = getPhaseIndex(nlp,'LeftStance');
addRunningCost(nlp.Phase(ds2Stance),u2DS2_fun,{'u'});

% DS2Model=system.Gamma.Nodes.Domain{2};
% uDS2 = DS2Model.Inputs.Control.u;
% u2DS2 = tovector(norm(uDS2).^2);
% u2DS2_fun = SymFunction(['torques_' DS2Model.Name],u2DS2,{uDS2});
% ds2Stance = getPhaseIndex(nlp,'DoubleSupportDiffHeight');
% addRunningCost(nlp.Phase(ds2Stance),u2DS2_fun,{'u'});
%%
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
