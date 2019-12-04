function right_stance(nlp, bounds, varargin)
    % Extract Plant
    domain = nlp.Plant;
    
    % Add Virtual Constraints
    domain.VirtualConstraints.time.imposeNLPConstraint(nlp, [bounds.time.kp, bounds.time.kd], [1,1]);
    
    %% Tau Boundary [0,1]
    addNodeConstraint(nlp, cassie.constraints.tau0(nlp), ...
        [{'T'},domain.VirtualConstraints.time.PhaseParamName], 'first', 0, 0, 'Nonlinear');
    addNodeConstraint(nlp, cassie.constraints.tauF(nlp), ...
        [{'T'},domain.VirtualConstraints.time.PhaseParamName], 'last', 0, 0, 'Nonlinear');
        
%     %% Swing Toe Pitch
%     addNodeConstraint(nlp, cassie.constraints.swing_toe_pitch(nlp), ...
%         {'x'}, 'first', 0, 0, 'Nonlinear');
%     
    %% Swing Toe Height
    addNodeConstraint(nlp, cassie.constraints.left_toe_height(nlp), ...
        {'x'}, 'all', 0, Inf, 'Nonlinear');
    
    %% Toe-to-Toe Distance  
    addNodeConstraint(nlp, cassie.constraints.step_width(nlp), ...
        {'x'}, 'all', bounds.toe_to_toe_width.lb, bounds.toe_to_toe_width.ub, 'Nonlinear');

    %% Pelvis-to-Toe Distance
    addNodeConstraint(nlp, cassie.constraints.distance_pelvis_to_stance_toe(nlp), ...
        {'x'}, 'all', bounds.distance_pelvis_to_stance_toe.lb, bounds.distance_pelvis_to_stance_toe.ub, 'Nonlinear');
    
    %% Swing Toe Velocity
    % Throughout all nodes
    addNodeConstraint(nlp, cassie.constraints.swing_toe_angular_velocity_x(nlp), ...
        {'x','dx'}, 'all', 0, 0, 'Nonlinear');
    addNodeConstraint(nlp, cassie.constraints.swing_toe_angular_velocity_z(nlp), ...
        {'x','dx'}, 'all', 0, 0, 'Nonlinear');
    
    %% Costs
    
    % Torque Cost
    addRunningCost(nlp, cassie.costs.torque(nlp), 'u');


end


