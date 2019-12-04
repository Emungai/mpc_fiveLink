function flight(nlp, bounds, varargin)
    % Extract Plant
    domain = nlp.Plant;
    
    % Add Virtual Constraints
    domain.VirtualConstraints.time.imposeNLPConstraint(nlp, [bounds.time.kp, bounds.time.kd], [1,1]);
    
    %% Tau Boundary [0,1]
    addNodeConstraint(nlp, cassie.constraints.tau0(nlp), ...
        [{'T'},domain.VirtualConstraints.time.PhaseParamName], 'first', 0, 0, 'Nonlinear');
    addNodeConstraint(nlp, cassie.constraints.tauF(nlp), ...
        [{'T'},domain.VirtualConstraints.time.PhaseParamName], 'last', 0, 0, 'Nonlinear');
    
    %% Both Toe Heights
    addNodeConstraint(nlp, cassie.constraints.left_toe_height(nlp), ...
        {'x'}, 'all', 0, Inf, 'Nonlinear');
    addNodeConstraint(nlp, cassie.constraints.right_toe_height(nlp), ...
        {'x'}, 'all', 0, Inf, 'Nonlinear');
            
    %% Costs
    
    % Torque Cost
    addRunningCost(nlp, cassie.costs.torque(nlp), 'u');
    

end


