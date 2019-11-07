function LS_lift_constraints(nlp, bounds, varargin)
%% virtual constraints
args=varargin{1};
x_step=args.x_step;
y_step=args.y_step;
r_buff=args.r_buff;
system=nlp.Plant;
load_path=[];
system.VirtualConstraints.time.imposeNLPConstraint(nlp,[bounds.gains.kp,bounds.gains.kd],[1,1],load_path);

T  = SymVariable('t',[2, 1]);
    field_names = fieldnames(system.VirtualConstraints);
    for i = 1:length(field_names)
        p_name = system.VirtualConstraints.(field_names{i}).PhaseParamName;
        p = {SymVariable(tomatrix(system.VirtualConstraints.(field_names{i}).PhaseParams(:)))};
        tau_0 = SymFunction(['tau_0_',p_name,'_',system.Name], T(1) - p{1}(1), [{T},p]);
        tau_F = SymFunction(['tau_F_',p_name,'_',system.Name], T(2) - p{1}(2), [{T},p]);
        addNodeConstraint(nlp, tau_0, [{'T'},p_name], 'first', 0, 0, 'Nonlinear');
        addNodeConstraint(nlp, tau_F, [{'T'},p_name], 'last', 0, 0, 'Nonlinear');
    end
    %% other constraints    
    %right foot x and y
rightFoot=getCartesianPosition(system,system.ContactPoints.RightToe);
rFootPosCircle=(rightFoot(1)-(x_step+y_step)).^2+rightFoot(2).^2;
rFootPosCircle_fun=SymFunction(['rFootPosCircle',system.Name],rFootPosCircle,{system.States.x});

lb = bounds.constrBounds.rFootPos.lb;
ub = bounds.constrBounds.rFootPos.ub;
addNodeConstraint(nlp, rFootPosCircle_fun, {'x'}, 'all', lb, ub, 'NonLinear');
end