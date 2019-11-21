function [system] = LoadSystem(model,load_path,args)

%% defining domains
DS1=hybridSystemModel.domains.DoubleSupportConstHeight(model,load_path);
rightStance=hybridSystemModel.domains.RightStance(model,load_path);
leftStance=hybridSystemModel.domains.LeftStance(model,load_path);


%% defining guard functions
g_lift=RigidImpact('leftLiftOff',DS1,'leftFootZForce');
g_lift.addImpactConstraint(struct2array(rightStance.HolonomicConstraints));

g_land=RigidImpact('leftLand',rightStance,'leftFootHeight');

g_land.addImpactConstraint(struct2array(leftStance.HolonomicConstraints),load_path);


g_periodic=RigidImpact('rightLand',leftStance,'rightFootHeight');
g_periodic.addImpactConstraint(struct2array(DS1.HolonomicConstraints));

%% defining the system
system=HybridSystem('rabbit');
%defined the nodes
system=addVertex(system,'DoubleSupportConstHeight','Domain',DS1);
system=addVertex(system,'RightStance','Domain',rightStance);

system=addVertex(system,'LeftStance','Domain',leftStance);

%relating nodes to edges


srcs={'DoubleSupportConstHeight','RightStance','LeftStance'};
tars={'RightStance','LeftStance','RightStance'};


%define the edges
system=addEdge(system,srcs,tars);

system = setEdgeProperties(system, srcs, tars, ...
    'Guard', {g_lift,g_land,g_periodic});
%% define the constraint functions
DS1.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.DSConst_constraints;
rightStance.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.right_stance_constraints;
leftStance.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.left_stance_constraints;
end