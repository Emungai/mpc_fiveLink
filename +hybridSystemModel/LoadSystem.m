function [system] = LoadSystem(model,load_path,args)

x_del=args.x_del;
y_step=args.y_step;
%% defining domains
DS1=hybridSystemModel.domains.DoubleSupportConstHeight(model,load_path);
LS_lift=hybridSystemModel.domains.LeftStanceLift(model, load_path,x_del);
LS_land=hybridSystemModel.domains.LeftStanceLand(model, load_path,y_step);
DS2=hybridSystemModel.domains.DoubleSupportDiffHeight(model,load_path);

%% defining guard functions
g_lift=RigidImpact('ds1_LSlift',DS1,'rightFootHeightDS');
g_lift.addImpactConstraint(struct2array(LS_lift.HolonomicConstraints));

g_land=RigidImpact('LSlift_LSland',LS_lift,'rightFootLength');
g_land.addImpactConstraint(struct2array(LS_land.HolonomicConstraints));

g_diffLevels=RigidImpact('LSland_DS2',LS_land,'rightFootHeight');
g_diffLevels.addImpactConstraint(struct2array(DS2.HolonomicConstraints));
%% defining the system
system=HybridSystem('rabbit');
%defined the nodes
system=addVertex(system,'DoubleSupportConstHeight','Domain',DS1);
system=addVertex(system,'LeftStanceLift','Domain',LS_lift);
system=addVertex(system,'LeftStanceLand','Domain',LS_land);
system=addVertex(system,'DoubleSupportDiffHeight','Domain',DS2);

%relating nodes to edges
srcs={'DoubleSupportConstHeight','LeftStanceLift','LeftStanceLand'};
tars={'LeftStanceLift','LeftStanceLand','DoubleSupportDiffHeight'};

%define the edges
system=addEdge(system,srcs,tars);
system = setEdgeProperties(system, srcs, tars, ...
    'Guard', {g_lift,g_land,g_diffLevels});
%% define the constraint functions
DS1.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.DS1_constraints;
LS_lift.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.LS_lift_constraints;
LS_land.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.LS_land_constraints;
DS2.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.DS2_constraints;

end