function [system] = LoadSystem_phase1(model,load_path,args)

x_del=args.x_del;
y_step=args.y_step;
%% defining domains
DS1=hybridSystemModel.domains.DoubleSupportConstHeight(model,load_path);
LS_lift=hybridSystemModel.domains.LeftStanceLift(model, load_path,x_del);

%% defining guard functions
g_lift=RigidImpact('ds1_LSlift',DS1,'rightFootHeightDS');
g_lift.addImpactConstraint(struct2array(LS_lift.HolonomicConstraints));


%% defining the system
system=HybridSystem('rabbit');
%defined the nodes
system=addVertex(system,'DoubleSupportConstHeight','Domain',DS1);
system=addVertex(system,'LeftStanceLift','Domain',LS_lift);


%relating nodes to edges
srcs={'DoubleSupportConstHeight'};
tars={'LeftStanceLift'};

%define the edges
system=addEdge(system,srcs,tars);
system = setEdgeProperties(system, srcs, tars, ...
    'Guard', {g_lift});
%% define the constraint functions
DS1.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.DS1_constraints;
LS_lift.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.LS_lift_constraints;

end