function right_stance_up_1(nlp, bounds, varargin)
    % Extract Plant
    domain = nlp.Plant;
    
    % Add Virtual Constraints
    domain.VirtualConstraints.time.imposeNLPConstraint(nlp, [bounds.time.kp, bounds.time.kd], [1,1]);
    
    %% Costs
    
    % Torque Cost
    % addRunningCost(nlp, cassie.costs.torque(nlp), 'u');
end


