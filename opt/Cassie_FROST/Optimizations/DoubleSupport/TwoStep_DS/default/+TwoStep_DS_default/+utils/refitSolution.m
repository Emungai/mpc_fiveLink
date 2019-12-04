function [ x_new ] = refitSolution( nlp_old, nlp_new, x_old )
%REFITSOLUTION Summary of this function goes here
%   Detailed explanation goes here

assert(length(nlp_old.Phase) == length(nlp_new.Phase))

phase_new = nlp_new.Phase;
phase_old = nlp_old.Phase;
n_phase_new = length(phase_new);

x_new = zeros(sum([nlp_new.VariableArray.Dimension]), 1);
for n = 1:n_phase_new
    % Extract trajectory of old variables and resample to new ones
    var_names = fields(phase_new(n).OptVarTable); var_names = var_names(1:end-3);
    for i = 1:length(var_names)
        var_old = x_old( vertcat(phase_old(n).OptVarTable.(var_names{i}).Indices) );
        M = size(var_old,1)/phase_old(n).NumNode;
        var_old = reshape(var_old, M, []);
        if phase_old(n).NumNode > 1
            var_new = interp1(1:phase_old(n).NumNode, var_old', linspace(1, phase_old(n).NumNode, phase_new(n).NumNode))';
        else
            var_new = var_old;
        end
        x_new( vertcat(phase_new(n).OptVarTable.(var_names{i}).Indices) ) = reshape(var_new, [], 1);
    end
end

end