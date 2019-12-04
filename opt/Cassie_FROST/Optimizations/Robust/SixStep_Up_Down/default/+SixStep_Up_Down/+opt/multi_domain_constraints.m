function [nlp] = multi_domain_constraints(nlp, bounds)
%MULTI_DOMAIN_CONSTRAINTS  Add constraints that go across multiple domains
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
    
    %% Bezier symmetry
    [N,M] = size(rightStance.Plant.Params.atime);
    selected = SymVariable('s',[N,1]);
    a1  = SymVariable('a1',[N,M]);
    a2  = SymVariable('a2',[N,M]);
    constraint_matrix = repmat(selected,1,M) .* ...
        ([-a2(6:7,:);a2(8:10,:);-a2(1:2,:);a2(3:5,:)] - a1);
    constraint = constraint_matrix(:);
    BezierSymmetry = SymFunction('BezierSymmetry', constraint, {SymVariable(a1(:)),SymVariable(a2(:))}, selected);

    selected = ones(10,1);
    BezierSymmetry_cstr = NlpFunction('Name','BezierSymmetry',...
        'Dimension',N*M,...
        'lb', 0,...
        'ub', 0,...
        'Type','Linear',...
        'SymFun',BezierSymmetry,...
        'DepVariables',[nlp.Phase(1).OptVarTable.atime(end), leftStance.OptVarTable.atime(1)],...
        'AuxData',selected);

    addConstraint(rightStance, 'BezierSymmetry', 'last', BezierSymmetry_cstr);

    %% Up constraints
    % Setting up tau for UP to be the same using virtual constraints
    RUPparam = rightStanceUp1.OptVarTable.ptime;
    Rparam = rightStance.OptVarTable.ptime;
    name = ['pSymmetric_', rightStanceUp1.Name];
    
    a  = SymVariable('a',[RUPparam(1).Dimension, 1]);
    b  = SymVariable('b',[Rparam(1).Dimension, 1]);
    expr = a - b;
    func = SymFunction(name, expr, [{a}, {b}]);
    SetupConstraint(RUPparam, Rparam, name, func, rightStanceUp1, 1);
    
    % Setting up alpha for UP to be the same using virtual constraints
    RUPparam = rightStanceUp1.OptVarTable.atime;
    Rparam = rightStance.OptVarTable.atime;
    name = ['aSymmetric_', rightStanceUp1.Name];
    
    a  = SymVariable('a',[RUPparam(1).Dimension, 1]);
    b  = SymVariable('b',[Rparam(1).Dimension, 1]);
    expr = a - b;
    func = SymFunction(name, expr, [{a}, {b}]);
    SetupConstraint(RUPparam, Rparam, name, func, rightStanceUp1, 1);
    
    % Starting State X UP
    RUPparam = rightStanceUp1.OptVarTable.x;
    Rparam = rightStance.OptVarTable.x;
    name = ['StartingStateX_', rightStanceUp1.Name];
    
    a  = SymVariable('a',[RUPparam(1).Dimension, 1]);
    b  = SymVariable('b',[Rparam(1).Dimension, 1]);
    expr = a - b;
    func = SymFunction(name, expr(4:20), [{a}, {b}]);
    SetupConstraint(RUPparam, Rparam, name, func, rightStanceUp1, 1);
    
    % Starting State dX UP
    RUPparam = rightStanceUp1.OptVarTable.dx;
    Rparam = rightStance.OptVarTable.dx;
    name = ['StartingStatedX_', rightStanceUp1.Name];
    
    a  = SymVariable('a',[RUPparam(1).Dimension, 1]);
    b  = SymVariable('b',[Rparam(1).Dimension, 1]);
    expr = a - b;
    func = SymFunction(name, expr(4:20), [{a}, {b}]);
    SetupConstraint(RUPparam, Rparam, name, func, rightStanceUp1, 1);
    
    if strcmp(bounds.shared.convergance, 'constraint') || strcmp(bounds.shared.convergance, 'both')
        % Ending State X DOWN
        LUPparam = leftStanceUp2.OptVarTable.x;
        Lparam = leftStance.OptVarTable.x;
        name = ['EndingStateX_', leftStanceUp2.Name];

        a  = SymVariable('a',[LUPparam(end).Dimension, 1]);
        b  = SymVariable('b',[Lparam(end).Dimension, 1]);
        expr = a - b;
        func = SymFunction(name, expr(4:20), [{a}, {b}]);
        SetupConstraint(LUPparam, Lparam, name, func, leftStanceUp2, leftStanceUp2.NumNode);

        % Ending State dX UP
        LUPparam = leftStanceUp2.OptVarTable.dx;
        Lparam = leftStance.OptVarTable.dx;
        name = ['EndingStatedX_', leftStanceUp2.Name];

        a  = SymVariable('a',[LUPparam(end).Dimension, 1]);
        b  = SymVariable('b',[Lparam(end).Dimension, 1]);
        expr = a - b;
        func = SymFunction(name, expr(4:20), [{a}, {b}]);
        SetupConstraint(LUPparam, Lparam, name, func, leftStanceUp2, leftStanceUp2.NumNode);
    end

    %% DOWN constraints
    % Starting State X DOWN
    RDOWNparam = rightStanceDown1.OptVarTable.x;
    Rparam = rightStance.OptVarTable.x;
    name = ['StartingStateX_', rightStanceDown1.Name];
    
    a  = SymVariable('a',[RDOWNparam(1).Dimension, 1]);
    b  = SymVariable('b',[Rparam(end).Dimension, 1]);
    expr = a - b;
    func = SymFunction(name, expr, [{a}, {b}]);
    SetupConstraint(RDOWNparam, Rparam(end), name, func, rightStanceDown1, 1);
    
    % Starting State dX UP
    RDOWNparam = rightStanceDown1.OptVarTable.dx;
    Rparam = rightStance.OptVarTable.dx;
    name = ['StartingStatedX_', rightStanceDown1.Name];
    
    a  = SymVariable('a',[RDOWNparam(1).Dimension, 1]);
    b  = SymVariable('b',[Rparam(end).Dimension, 1]);
    expr = a - b;
    func = SymFunction(name, expr, [{a}, {b}]);
    SetupConstraint(RDOWNparam, Rparam(end), name, func, rightStanceDown1, 1);
    
    if strcmp(bounds.shared.convergance, 'constraint') || strcmp(bounds.shared.convergance, 'both')
        % Ending State X DOWN
        LDOWNparam = leftStanceDown2.OptVarTable.x;
        Lparam = leftStance.OptVarTable.x;
        name = ['EndingStateX_', leftStanceDown2.Name];

        a  = SymVariable('a',[LDOWNparam(end).Dimension, 1]);
        b  = SymVariable('b',[Lparam(end).Dimension, 1]);
        expr = a - b;
        func = SymFunction(name, expr(4:20), [{a}, {b}]);
        SetupConstraint(LDOWNparam, Lparam, name, func, leftStanceDown2, leftStanceDown2.NumNode);

        % Ending State dX DOWN
        LDOWNparam = leftStanceDown2.OptVarTable.dx;
        Lparam = leftStance.OptVarTable.dx;
        name = ['EndingStatedX_', leftStanceDown2.Name];

        a  = SymVariable('a',[LDOWNparam(end).Dimension, 1]);
        b  = SymVariable('b',[Lparam(end).Dimension, 1]);
        expr = a - b;
        func = SymFunction(name, expr(4:20), [{a}, {b}]);
        SetupConstraint(LDOWNparam, Lparam, name, func, leftStanceDown2, leftStanceDown2.NumNode);
    end
    
    %% State deviation costs for up
    
    if strcmp(bounds.shared.convergance, 'cost') || strcmp(bounds.shared.convergance, 'both')
        % Left Stance Up 1
        params = {leftStanceUp1.OptVarTable.x, leftStanceUp1.OptVarTable.dx, leftStance.OptVarTable.x, leftStance.OptVarTable.dx};
        weights = [zeros(4, 1); ones(16, 1); zeros(3, 1); ones(17, 1)];
        func = SixStep_Up_Down.costs.periodicity(leftStanceUp1);
        name = func.Name;
        SetupCost(params, name, func, leftStanceUp1, 1:leftStanceUp1.NumNode, weights);

        % Right Stance Up 2
        params = {rightStanceUp2.OptVarTable.x, rightStanceUp2.OptVarTable.dx, rightStance.OptVarTable.x, rightStance.OptVarTable.dx};
        weights = [zeros(4, 1); ones(16, 1); zeros(3, 1); ones(17, 1)];
        func = SixStep_Up_Down.costs.periodicity(rightStanceUp2);
        name = func.Name;
        SetupCost(params, name, func, rightStanceUp2, 1:rightStanceUp2.NumNode, weights);
        
        % Left Stance Up 2
        params = {leftStanceUp2.OptVarTable.x, leftStanceUp2.OptVarTable.dx, leftStance.OptVarTable.x, leftStance.OptVarTable.dx};
        weights = [zeros(4, 1); ones(16, 1); zeros(3, 1); ones(17, 1)];
        func = SixStep_Up_Down.costs.periodicity(leftStanceUp2);
        name = func.Name;
        SetupCost(params, name, func, leftStanceUp2, 1:leftStanceUp2.NumNode, weights);

        % Left Stance Down
        params = {leftStanceDown1.OptVarTable.x, leftStanceDown1.OptVarTable.dx, leftStance.OptVarTable.x, leftStance.OptVarTable.dx};
        weights = [zeros(4, 1); ones(16, 1); zeros(3, 1); ones(17, 1)];
        func = SixStep_Up_Down.costs.periodicity(leftStanceDown1);
        name = func.Name;
        SetupCost(params, name, func, leftStanceDown1, 1:leftStanceDown1.NumNode, weights);

        % Right Stance Down 2
        params = {rightStanceDown2.OptVarTable.x, rightStanceDown2.OptVarTable.dx, rightStance.OptVarTable.x, rightStance.OptVarTable.dx};
        weights = [zeros(4, 1); ones(16, 1); zeros(3, 1); ones(17, 1)];
        func = SixStep_Up_Down.costs.periodicity(rightStanceDown2);
        name = func.Name;
        SetupCost(params, name, func, rightStanceDown2, 1:rightStanceDown2.NumNode, weights);

        % Left Stance Down 2
        params = {leftStanceDown2.OptVarTable.x, leftStanceDown2.OptVarTable.dx, leftStance.OptVarTable.x, leftStance.OptVarTable.dx};
        weights = [zeros(4, 1); ones(16, 1); zeros(3, 1); ones(17, 1)];
        func = SixStep_Up_Down.costs.periodicity(leftStanceDown2);
        name = func.Name;
        SetupCost(params, name, func, leftStanceDown2, 1:leftStanceDown2.NumNode, weights);
    end
    
    %% Torque deviation costs for up
    
    if strcmp(bounds.shared.convergance, 'cost') || strcmp(bounds.shared.convergance, 'both')
        % Left Stance Up 1
        params = {leftStanceUp1.OptVarTable.u, leftStance.OptVarTable.u};
        weights = ones(10, 1);
        func = SixStep_Up_Down.costs.torque_periodicity(leftStanceUp1);
        name = func.Name;
        SetupCost(params, name, func, leftStanceUp1, 1:leftStanceUp1.NumNode, weights);

        % Right Stance Up 2
        params = {rightStanceUp2.OptVarTable.u, rightStance.OptVarTable.u};
        weights = ones(10, 1);
        func = SixStep_Up_Down.costs.torque_periodicity(rightStanceUp2);
        name = func.Name;
        SetupCost(params, name, func, rightStanceUp2, 1:rightStanceUp2.NumNode, weights);
        
        % Left Stance Up 2
        params = {leftStanceUp2.OptVarTable.u, leftStance.OptVarTable.u};
        weights = ones(10, 1);
        func = SixStep_Up_Down.costs.torque_periodicity(leftStanceUp2);
        name = func.Name;
        SetupCost(params, name, func, leftStanceUp2, 1:leftStanceUp2.NumNode, weights);

        % Left Stance Down 1
        params = {leftStanceDown1.OptVarTable.u, leftStance.OptVarTable.u};
        weights = ones(10, 1);
        func = SixStep_Up_Down.costs.torque_periodicity(leftStanceDown1);
        name = func.Name;
        SetupCost(params, name, func, leftStanceDown1, 1:leftStanceDown1.NumNode, weights);

        % Right Stance Down 2
        params = {rightStanceDown2.OptVarTable.u, rightStance.OptVarTable.u};
        weights = ones(10, 1);
        func = SixStep_Up_Down.costs.torque_periodicity(rightStanceDown2);
        name = func.Name;
        SetupCost(params, name, func, rightStanceDown2, 1:rightStanceDown2.NumNode, weights);

        % Left Stance Down 2
        params = {leftStanceDown2.OptVarTable.u, leftStance.OptVarTable.u};
        weights = ones(10, 1);
        func = SixStep_Up_Down.costs.torque_periodicity(leftStanceDown2);
        name = func.Name;
        SetupCost(params, name, func, leftStanceDown2, 1:leftStanceDown2.NumNode, weights);
    end
    
end

function SetupConstraint(Rparam, Lparam, name, func, domain, n_nodes)
    for i = n_nodes
        cstr = struct();
        
        cstr.lb = 0;
        cstr.ub = 0;
        cstr.Type = 'Linear';
        cstr.Name = name;
        cstr.SymFun = func;
        cstr.AuxData = [];
        
        if strcmp(Rparam(1).Name,'T') && ~domain.Options.DistributeTimeVariable % time variable
            cstr.DepVariables = vertcat(Rparam(1), Lparam(1));
        elseif isParam(domain.Plant, Rparam(1).Name) && ~domain.Options.DistributeParameters
            cstr.DepVariables = vertcat(Rparam(1), Lparam(1));
        else
            cstr.DepVariables = vertcat(Rparam(i), Lparam(i));
        end
        
        domain.addConstraint(name, i, cstr);
    end
end

function SetupCost(params, name, func, domain, n_nodes, auxdata)
    for i = n_nodes
        cstr = struct();
        
        cstr.Type = 'Nonlinear';
        cstr.Name = name;
        cstr.SymFun = func;
        cstr.AuxData = auxdata;
        
        current_params = [];
        for j = 1:length(params)
            current_params = vertcat(current_params, params{j}(i));
        end
        cstr.DepVariables = current_params;
        
        domain.addCost(name, i, cstr);
    end
end
