function plotOptTorques(model, nlp, solution, indices)
    
    act_joint_idx = find(arrayfun(@(x)~isempty(x.Actuator),model.Joints));
    
    if nargin < 4
        indices = act_joint_idx;
    else
        if isempty(indices), return; end
    end
    
    cont_domain_idx = find(cellfun(@(x)isa(x,'ContinuousDynamics'),{nlp.Phase.Plant}));
    joint_names = {model.Joints.Name};
    
    t = [];
    u_opt = []; u_lb = [];  u_ub = [];
    
    t_final = 0;
    for j=cont_domain_idx
        gait = struct();
        gait.tspan = solution.tspan{j};
        gait.states = solution.states{j};
        gait.inputs = solution.inputs{j};
        
        t = [t,(gait.tspan + t_final)];
        t_final = t(end);
        
        u_opt = [u_opt,gait.inputs.u];
        u_lb  = [u_lb,[nlp.Phase(j).OptVarTable.u.LowerBound]];
        u_ub  = [u_ub,[nlp.Phase(j).OptVarTable.u.UpperBound]];
    end
    
    
    ax = [];
    for i=1:length(indices)
        idx = indices(i);
        if ~ismember(idx,act_joint_idx)
            continue;
        end
        f = figure;clf;
        set(f, 'WindowStyle', 'docked');
        %         f.Position = [680 558 560 420];
        ax = [ax, axes(f)]; %#ok<LAXES,*AGROW>
        hold on;
        plot(t, u_opt(i,:), 'b');
        plot(t, u_lb(i,:), 'r--');
        plot(t, u_ub(i,:), 'g--');
        
        title('Torque');
        legend('u', 'lb', 'ub'); 
        
        
        
        
        f.Name = [joint_names{idx},'_torque'];
    end
    
    linkaxes(ax, 'x');
    
    
    
    
end