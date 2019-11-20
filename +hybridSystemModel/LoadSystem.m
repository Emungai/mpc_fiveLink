function [system] = LoadSystem(model,load_path,args)

% x_del=args.x_del;
% y_step=args.y_step;
%% defining domains
DS1=hybridSystemModel.domains.DoubleSupportConstHeight(model,load_path);
rightStance=hybridSystemModel.domains.RightStance(model,load_path);
leftStance=hybridSystemModel.domains.LeftStance(model,load_path);
% DS2=hybridSystemModel.domains.DoubleSupportDiffHeight(model,load_path);
% LS_lift=hybridSystemModel.domains.LeftStanceLift(model, load_path,x_del);
% LS_land=hybridSystemModel.domains.LeftStanceLand(model, load_path,y_step);
% DS2=hybridSystemModel.domains.DoubleSupportDiffHeight(model,load_path);

%% defining guard functions
g_land=RigidImpact('leftLand',rightStance,'leftFootHeight');
    % Relabeling Matrix
%     g_land.R = g_land.R(:,[1:3,6:7,4:5]);
g_land.addImpactConstraint(struct2array(leftStance.HolonomicConstraints),load_path);

g_lift=RigidImpact('leftLiftOff',DS1,'leftFootZForce');
g_lift.addImpactConstraint(struct2array(rightStance.HolonomicConstraints));

g_periodic=RigidImpact('rightLand',leftStance,'rightFootHeight');
g_periodic.addImpactConstraint(struct2array(DS1.HolonomicConstraints));
% 
% g_diffLevels=RigidImpact('LSland_DS2',LS_land,'rightFootHeight');
% g_diffLevels.addImpactConstraint(struct2array(DS2.HolonomicConstraints));
%% defining the system
system=HybridSystem('rabbit');
%defined the nodes
system=addVertex(system,'DoubleSupportConstHeight','Domain',DS1);
system=addVertex(system,'RightStance','Domain',rightStance);
% system=addVertex(system,'LeftStanceLand','Domain',LS_land);
% system=addVertex(system,'DoubleSupportDiffHeight','Domain',DS2);
system=addVertex(system,'LeftStance','Domain',leftStance);

%relating nodes to edges
% srcs={'DoubleSupportConstHeight','LeftStanceLift','LeftStanceLand'};
% tars={'LeftStanceLift','LeftStanceLand','DoubleSupportDiffHeight'};

srcs={'DoubleSupportConstHeight','RightStance','LeftStance'};
tars={'RightStance','LeftStance','DoubleSupportConstHeight'};

% srcs={'RightStance'};
% tars={'LeftStance'};

%define the edges
system=addEdge(system,srcs,tars);
% system = setEdgeProperties(system, srcs, tars, ...
%     'Guard', {g_lift,g_land});
system = setEdgeProperties(system, srcs, tars, ...
    'Guard', {g_lift,g_land,g_periodic});
%% define the constraint functions
DS1.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.DSConst_constraints;
rightStance.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.right_stance_constraints;
leftStance.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.left_stance_constraints;
% g_land.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.right_impact_constraints;

% DS1.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.DS1_constraints;
% LS_lift.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.LS_lift_constraints;
% LS_land.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.LS_land_constraints;
% DS2.UserNlpConstraint=@hybridSystemModel.domains.constraintFuncs.DS2_constraints;

end