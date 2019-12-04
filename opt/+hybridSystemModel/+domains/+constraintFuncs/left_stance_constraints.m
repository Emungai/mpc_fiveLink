function left_stance_constraints(nlp, bounds, varargin)
    DOF = 7;
    domain = nlp.Plant;
    load_path=[];

    domain.VirtualConstraints.leftStance.imposeNLPConstraint(nlp, [bounds.gains.kp, bounds.gains.kd], [1,1], load_path);
    
    % tau boundary [0,1]
    T_name = nlp.OptVarTable.T(1).Name;
    T  = SymVariable(lower(T_name),[nlp.OptVarTable.T(1).Dimension,1]);
    p_name = nlp.OptVarTable.pleftStance(1).Name;
    p  = SymVariable(lower(p_name),[nlp.OptVarTable.pleftStance(1).Dimension,1]);
    tau_0 = SymFunction(['tau_0_',domain.Name], T(1) - p(2), {T,p});
    tau_F = SymFunction(['tau_F_',domain.Name], T(2) - p(1), {T,p});
    addNodeConstraint(nlp, tau_0, {T_name,p_name}, 'first', 0, 0, 'Nonlinear');
    addNodeConstraint(nlp, tau_F, {T_name,p_name}, 'last', 0, 0, 'Nonlinear');
    
    % output boundary 
    y_pos = domain.VirtualConstraints.leftStance;
    y_bound_idx = str_indices({'q1_right','q2_right','q1_left',...
        'q2_left'},y_pos.OutputLabel);
    
    y_bound = y_pos.ActualOutput(y_bound_idx);
    lb = [-2*pi,-2*pi,-2*pi,-2*pi]';
    ub = [2*pi,2*pi,2*pi,2*pi]';
    y_bound_fun = SymFunction(['output_boundary_',domain.Name], y_bound, {domain.States.x});
    addNodeConstraint(nlp, y_bound_fun, {'x'}, 'all', lb, ub,'Linear');
    
%     % average velocity
%     velocity_desired = 0.05;
%     DOF = 7;
% %     T  = SymVariable('t',[2,1]);
% %     X0  = SymVariable('x0',[DOF,1]);
% %     XF  = SymVariable('xF',[DOF,1]);
% %     avg_vel = (XF(1) - X0(1)) / (T(2) - T(1));
% %     avg_vel_fun = SymFunction(['average_velocity_',domain.Name], avg_vel, {T,X0,XF});
% %     
% %     avg_vel_cstr = NlpFunction('Name',['average_velocity_',domain.Name],...
% %         'Dimension',1,...
% %         'lb', velocity_desired,...
% %         'ub', velocity_desired+0.6,...
% %         'Type','Nonlinear',...
% %         'SymFun',avg_vel_fun,...
% %         'DepVariables',[nlp.OptVarTable.T(1); nlp.OptVarTable.x(1); nlp.OptVarTable.x(end)]);    
% %     
% %     addConstraint(nlp, ['average_velocity_',domain.Name], 'last', avg_vel_cstr);
%     
    % Swing Foot Clearance
    X  = SymVariable('x',[DOF,1]);
    swingFootHeight = SymFunction(['rightFootSwing',domain.Name], nlp.Plant.EventFuncs.rightFootHeight.ConstrExpr, {X});
    addNodeConstraint(nlp, swingFootHeight, {'x'}, floor(nlp.NumNode/2), 0.1, Inf,'Linear');

% %swing foot x position
% rightFoot=getCartesianPosition(domain, domain.ContactPoints.RightToe);
% % leftFoot=getCartesianPosition(domain, domain.ContactPoints.LeftToe);
% rightFootX_fun=SymFunction(['rightFootSwingX',domain.Name],rightFoot(1),{domain.States.x});
% lb = bounds.constrBounds.rightFootX.lb;
% ub = bounds.constrBounds.rightFootX.ub;
% addNodeConstraint(nlp, rightFootX_fun, {'x'}, 'last', lb, ub, 'NonLinear');
% % 
% rightFoot=getCartesianPosition(domain, domain.ContactPoints.RightToe);
% 
%     position_desired = 0.01;
%     DOF = 7;
%     X0  = SymVariable('x0',[DOF,1]);
%     XF  = SymVariable('xF',[DOF,1]);
%     rightFoot_first=subs(rightFoot,domain.States.x,X0);
%     rightFoot_end=subs(rightFoot,domain.States.x,XF);
%     pos = (rightFoot_end(1) - rightFoot_first(1)) ;
%     pos_fun = SymFunction(['rightFootPosX_',domain.Name], pos, {X0,XF});
%     
%     pos_cstr = NlpFunction('Name',['rightFootPosX_',domain.Name],...
%         'Dimension',1,...
%         'lb', position_desired,...
%         'ub', position_desired+0.6,...
%         'Type','Nonlinear',...
%         'SymFun',pos_fun,...
%         'DepVariables',[nlp.OptVarTable.x(1); nlp.OptVarTable.x(end)]);    
%     
%     addConstraint(nlp, ['rightFootPosX_',domain.Name], 'last', pos_cstr);

end