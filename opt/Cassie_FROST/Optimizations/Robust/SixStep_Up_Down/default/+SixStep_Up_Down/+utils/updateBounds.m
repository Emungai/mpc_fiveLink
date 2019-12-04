function updateBounds(nlp, bounds)
    nlp.updateVariableBounds(bounds);
    % nlp.updateConstraintBounds(bounds);
    
    rightStance = nlp.Phase(1);
    leftStance = nlp.Phase(3);
    rightStanceUp1 = nlp.Phase(5);
    leftStanceUp1 = nlp.Phase(7);
    rightStanceUp2 = nlp.Phase(9);
    leftStanceUp2 = nlp.Phase(11);
    rightStanceDown1 = nlp.Phase(13);
    leftStanceDown1 = nlp.Phase(15);
    rightStanceDown2 = nlp.Phase(17);
    leftStanceDown2 = nlp.Phase(19);
    
    %% Update step lengths
    localBounds = bounds.RightStance;
    rightStance.updateConstrProp('step_length_RightStance', 'last', 'lb', localBounds.step_length.lb, 'ub', localBounds.step_length.ub);
    localBounds = bounds.LeftStance;
    leftStance.updateConstrProp('step_length_LeftStance', 'last', 'lb', localBounds.step_length.lb, 'ub', localBounds.step_length.ub);
    localBounds = bounds.LeftStanceUp1;
    leftStanceUp1.updateConstrProp('step_length_LeftStance', 'last', 'lb', localBounds.step_length.lb, 'ub', localBounds.step_length.ub);
    localBounds = bounds.RightStanceUp2;
    rightStanceUp2.updateConstrProp('step_length_RightStance', 'last', 'lb', localBounds.step_length.lb, 'ub', localBounds.step_length.ub);
    localBounds = bounds.LeftStanceUp2;
    leftStanceUp2.updateConstrProp('step_length_LeftStance', 'last', 'lb', localBounds.step_length.lb, 'ub', localBounds.step_length.ub);
    localBounds = bounds.LeftStanceDown1;
    leftStanceDown1.updateConstrProp('step_length_LeftStance', 'last', 'lb', localBounds.step_length.lb, 'ub', localBounds.step_length.ub);
    localBounds = bounds.RightStanceDown2;
    rightStanceDown2.updateConstrProp('step_length_RightStance', 'last', 'lb', localBounds.step_length.lb, 'ub', localBounds.step_length.ub);
    localBounds = bounds.LeftStanceDown2;
    leftStanceDown2.updateConstrProp('step_length_LeftStance', 'last', 'lb', localBounds.step_length.lb, 'ub', localBounds.step_length.ub);
    
    %% Update foot clearances
    up_offset = bounds.shared.up_offset;
    for i = 1:rightStanceUp1.NumNode
        if i < floor(rightStanceUp1.NumNode/2)
            rightStanceUp1.updateConstrProp('u_leftToeHeight_cassie', i, 'lb', 0, 'ub', inf);
        elseif i ~= rightStanceUp1.NumNode
            rightStanceUp1.updateConstrProp('u_leftToeHeight_cassie', i, 'lb', up_offset, 'ub', inf);
        else
            rightStanceUp1.updateConstrProp('u_leftToeHeight_cassie', i, 'lb', up_offset, 'ub', up_offset);
        end
    end
    for i = 1:leftStanceUp1.NumNode
        if i < floor(leftStanceUp1.NumNode/2)
            leftStanceUp1.updateConstrProp('u_rightToeHeight_cassie', i, 'lb', 0, 'ub', inf);
        elseif i ~= leftStanceUp1.NumNode
            leftStanceUp1.updateConstrProp('u_rightToeHeight_cassie', i, 'lb', up_offset, 'ub', inf);
        else
            leftStanceUp1.updateConstrProp('u_rightToeHeight_cassie', i, 'lb', up_offset, 'ub', up_offset);
        end
    end
    for i = 1:rightStanceUp2.NumNode
        if i ~= rightStanceUp2.NumNode
            rightStanceUp2.updateConstrProp('u_leftToeHeight_cassie', i, 'lb', up_offset, 'ub', inf);
        else
            rightStanceUp2.updateConstrProp('u_leftToeHeight_cassie', i, 'lb', up_offset, 'ub', up_offset);
        end
    end
    for i = 1:leftStanceUp2.NumNode
        if i ~= leftStanceUp2.NumNode
            leftStanceUp2.updateConstrProp('u_rightToeHeight_cassie', i, 'lb', up_offset, 'ub', inf);
        else
            leftStanceUp2.updateConstrProp('u_rightToeHeight_cassie', i, 'lb', up_offset, 'ub', up_offset);
        end
    end
    
    down_offset = bounds.shared.down_offset;
    for i = 1:rightStanceDown1.NumNode
        if i ~= rightStanceDown1.NumNode
            rightStanceDown1.updateConstrProp('u_leftToeHeight_cassie', i, 'lb', down_offset, 'ub', inf);
        else
            rightStanceDown1.updateConstrProp('u_leftToeHeight_cassie', i, 'lb', down_offset, 'ub', down_offset);
        end
    end
    for i = 1:leftStanceDown1.NumNode
        if i < floor(leftStanceDown1.NumNode/2)
            leftStanceDown1.updateConstrProp('u_rightToeHeight_cassie', i, 'lb', 0, 'ub', inf);
        elseif i ~= leftStanceDown1.NumNode
            leftStanceDown1.updateConstrProp('u_rightToeHeight_cassie', i, 'lb', down_offset, 'ub', inf);
        else
            leftStanceDown1.updateConstrProp('u_rightToeHeight_cassie', i, 'lb', down_offset, 'ub', down_offset);
        end
    end
    for i = 1:rightStanceDown2.NumNode
        if i ~= rightStanceDown2.NumNode
            rightStanceDown2.updateConstrProp('u_leftToeHeight_cassie', i, 'lb', down_offset, 'ub', inf);
        else
            rightStanceDown2.updateConstrProp('u_leftToeHeight_cassie', i, 'lb', down_offset, 'ub', down_offset);
        end
    end
    for i = 1:leftStanceDown2.NumNode
        if i ~= leftStanceDown2.NumNode
            leftStanceDown2.updateConstrProp('u_rightToeHeight_LeftStance', i, 'lb', down_offset, 'ub', inf);
        else
            leftStanceDown2.updateConstrProp('u_rightToeHeight_LeftStance', i, 'lb', down_offset, 'ub', down_offset);
        end
    end
    
    %% Update state deviation weights
    % Update state deviation cost weights
    if strcmp(bounds.shared.convergance, 'cost') || strcmp(bounds.shared.convergance, 'both')
        for i = 1:leftStanceUp1.NumNode
            default_weight = bounds.LeftStanceUp1.cost_weights.per_state;
            node_weight = bounds.LeftStanceUp1.cost_weights.per_domain(i);
            leftStanceUp1.CostTable.perodicity_cost(i).setAuxdata(default_weight .* node_weight);
        end
        for i = 1:rightStanceUp2.NumNode
            default_weight = bounds.RightStanceUp2.cost_weights.per_state;
            node_weight = bounds.RightStanceUp2.cost_weights.per_domain(i);
            rightStanceUp2.CostTable.perodicity_cost(i).setAuxdata(default_weight .* node_weight);
        end
        for i = 1:leftStanceUp2.NumNode
            default_weight = bounds.LeftStanceUp2.cost_weights.per_state;
            node_weight = bounds.LeftStanceUp2.cost_weights.per_domain(i);
            leftStanceUp2.CostTable.perodicity_cost(i).setAuxdata(default_weight .* node_weight);
        end
        for i = 1:leftStanceDown1.NumNode
            default_weight = bounds.LeftStanceDown1.cost_weights.per_state;
            node_weight = bounds.LeftStanceDown1.cost_weights.per_domain(i);
            leftStanceDown1.CostTable.perodicity_cost(i).setAuxdata(default_weight .* node_weight);
        end
        for i = 1:rightStanceDown2.NumNode
            default_weight = bounds.RightStanceDown2.cost_weights.per_state;
            node_weight = bounds.RightStanceDown2.cost_weights.per_domain(i);
            rightStanceDown2.CostTable.perodicity_cost(i).setAuxdata(default_weight .* node_weight);
        end
        for i = 1:leftStanceDown2.NumNode
            default_weight = bounds.LeftStanceDown2.cost_weights.per_state;
            node_weight = bounds.LeftStanceDown2.cost_weights.per_domain(i);
            leftStanceDown2.CostTable.perodicity_cost(i).setAuxdata(default_weight .* node_weight);
        end
    end

    % Update state deviation cost weights
    if strcmp(bounds.shared.convergance, 'cost') || strcmp(bounds.shared.convergance, 'both')
        for i = 1:leftStanceUp1.NumNode
            default_weight = bounds.LeftStanceUp1.cost_weights.per_torque;
            node_weight = bounds.LeftStanceUp1.cost_weights.per_domain(i);
            leftStanceUp1.CostTable.torque_periodicity_cost(i).setAuxdata(default_weight .* node_weight);
        end
        for i = 1:rightStanceUp2.NumNode
            default_weight = bounds.RightStanceUp2.cost_weights.per_torque;
            node_weight = bounds.RightStanceUp2.cost_weights.per_domain(i);
            rightStanceUp2.CostTable.torque_periodicity_cost(i).setAuxdata(default_weight .* node_weight);
        end
        for i = 1:leftStanceUp2.NumNode
            default_weight = bounds.LeftStanceUp2.cost_weights.per_torque;
            node_weight = bounds.LeftStanceUp2.cost_weights.per_domain(i);
            leftStanceUp2.CostTable.torque_periodicity_cost(i).setAuxdata(default_weight .* node_weight);
        end
        for i = 1:leftStanceDown1.NumNode
            default_weight = bounds.LeftStanceDown1.cost_weights.per_torque;
            node_weight = bounds.LeftStanceDown1.cost_weights.per_domain(i);
            leftStanceDown1.CostTable.torque_periodicity_cost(i).setAuxdata(default_weight .* node_weight);
        end
        for i = 1:rightStanceDown2.NumNode
            default_weight = bounds.RightStanceDown2.cost_weights.per_torque;
            node_weight = bounds.RightStanceDown2.cost_weights.per_domain(i);
            rightStanceDown2.CostTable.torque_periodicity_cost(i).setAuxdata(default_weight .* node_weight);
        end
        for i = 1:leftStanceDown2.NumNode
            default_weight = bounds.LeftStanceDown2.cost_weights.per_torque;
            node_weight = bounds.LeftStanceDown2.cost_weights.per_domain(i);
            leftStanceDown2.CostTable.torque_periodicity_cost(i).setAuxdata(default_weight .* node_weight);
        end
    end
    
    nlp.update;
end
