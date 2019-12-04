% old=rand(1217,1);
iterExceed=1;
while iterExceed==1
   solver = IpoptApplication(nlp);
% solver.Options.ipopt.max_iter = 800; %800  %cutting down the number of iterations//////////////////
% solver.Options.ipopt.tol = 5e-1;
% solver.Options.ipopt.compl_inf_tol = 5e+4;
% solver.Options.ipopt.constr_viol_tol = 5e-4;
% solver.Options.ipopt.dual_inf_tol = 1e+4 ;
% Run Optimization

tic 
[sol, info] = optimize(solver,old); 
toc
[tspan, states, inputs, params] = exportSolution(nlp, sol);
gait = struct(... 
    'tspan', tspan,... 
    'states', states,... 
    'inputs', inputs,...                                                                                                                        
    'params', params);
if info.status==-1
    iterExceed=1;
elseif info.status==0 || info.status==1
    'optimal solution found'
    break
    iterExceed=0;
else
    'infeasible'
    iterExceed=0;
    break
end
 old=sol;
end
%%
SAVE_SOLUTION = 1;
    CHARACTER_NAME = '';
    MODEL_NAME='Rabbit';
    if SAVE_SOLUTION
        data_name = char(datetime('now','TimeZone','local','Format','d-MMM-y-HH-mm-ssZ'));%'local/longer_double_support_wider_step_dummy';

        name = [CHARACTER_NAME, '_', data_name, '_', MODEL_NAME];
 
        save_dir = fullfile(cur, 'trajectories\stepUp');
 
        if ~exist(save_dir,'dir'), mkdir(save_dir); end

        if info.status ~= -1
            file_name = [name, '.mat'];
            fprintf('Saving gait %s\n', file_name);
        else
            file_name = [name, '_failed.mat'];
            fprintf('Saving (failed) gait %s\n', file_name);
        end

        save(fullfile(save_dir, file_name), 'gait', 'sol', 'info', 'bounds');
    end