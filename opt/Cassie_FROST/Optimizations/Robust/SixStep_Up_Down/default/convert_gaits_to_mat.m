names = {
    'output_inplace',
    'output_forward_0p25',
    'output_forward_0p50',
    'output_forward_0p75',
    'output_forward_1p00',
    'output_backward_0p25',
    'output_backward_0p50',
    'output_backward_0p75',
    'output_backward_1p00',
    };

for i = 1:length(names)
    name = names{i};
    sol = loadjson(['local/', name, '.json']);
    [tspan, states, inputs, params] = exportSolution(nlp, sol);
    solution.x = sol;
    solution.tspan = tspan;
    solution.states = states;
    solution.inputs = inputs;
    solution.params = params;

    save(['local/', name, '.mat'], 'solution');
end
