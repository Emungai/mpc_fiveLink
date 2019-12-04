function bridge_impact_1(nlp, src, tar, bounds, varargin)
        
    % First call the class method
    nlp.Plant.rigidImpactConstraint(nlp, src, tar, bounds, varargin{:});
    
    % Remove all constraints
    removeConstraint(nlp,'tContDomain');
    removeConstraint(nlp,['xDiscreteMap' nlp.Plant.Name]);
    removeConstraint(nlp,['dxDiscreteMap' nlp.Plant.Name]);
end
