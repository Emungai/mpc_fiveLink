function Torques(nlp, system)
%% DoubleSupportConstHeight
% DS1Model=system.Gamma.Nodes.Domain{1}
% uDS1 = DS1Model.Inputs.Control.u;
% u2DS1 = tovector(norm(uDS1).^2);
% u2DS1_fun = SymFunction(['torques_' DS1Model.Name],u2DS1,{uDS1});
% dsStance = getPhaseIndex(nlp,'DoubleSupportConstHeight');
% addRunningCost(nlp.Phase(dsStance),u2DS1_fun,{'u'});
%% Right Stance
rStanceModel=system.Gamma.Nodes.Domain{1};
ur = rStanceModel.Inputs.Control.u;
u2r = tovector(norm(ur).^2);
u2r_fun = SymFunction(['torques_' rStanceModel.Name],u2r,{ur});
rightStance = getPhaseIndex(nlp,'RightStance');
addRunningCost(nlp.Phase(rightStance),u2r_fun,{'u'});
%% Left Stance
DS2Model=system.Gamma.Nodes.Domain{2};
uDS2 = DS2Model.Inputs.Control.u;
u2DS2 = tovector(norm(uDS2).^2);
u2DS2_fun = SymFunction(['torques_' DS2Model.Name],u2DS2,{uDS2});
ds2Stance = getPhaseIndex(nlp,'LeftStance');
addRunningCost(nlp.Phase(ds2Stance),u2DS2_fun,{'u'});


%%
nlp.update;
end
