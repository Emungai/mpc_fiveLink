% Load bounds

% params = {
%     'bounds_inplace',       SixStep_Up_Down.utils.getBounds(robot, 'step_length', +0.0, 'st_knee_vel', [-deg2rad( 5), deg2rad( 5)]),
%     'bounds_forward_0p25',  SixStep_Up_Down.utils.getBounds(robot, 'step_length', +0.1, 'st_knee_vel', [-deg2rad( 5), deg2rad( 5)]),
%     'bounds_forward_0p50',  SixStep_Up_Down.utils.getBounds(robot, 'step_length', +0.2, 'st_knee_vel', [-deg2rad(10), deg2rad(10)]),
%     'bounds_forward_0p75',  SixStep_Up_Down.utils.getBounds(robot, 'step_length', +0.3, 'st_knee_vel', [-deg2rad(10), deg2rad(10)]),
%     'bounds_forward_1p00',  SixStep_Up_Down.utils.getBounds(robot, 'step_length', +0.4, 'st_knee_vel', [-deg2rad(10), deg2rad(10)]),
%     'bounds_backward_0p25', SixStep_Up_Down.utils.getBounds(robot, 'step_length', -0.1, 'st_knee_vel', [-deg2rad(10), deg2rad(10)]),
%     'bounds_backward_0p50', SixStep_Up_Down.utils.getBounds(robot, 'step_length', -0.2, 'st_knee_vel', [-deg2rad(10), deg2rad(10)]),
%     'bounds_backward_0p75', SixStep_Up_Down.utils.getBounds(robot, 'step_length', -0.3, 'st_knee_vel', [-deg2rad(10), deg2rad(10)]),
%     'bounds_backward_1p00', SixStep_Up_Down.utils.getBounds(robot, 'step_length', -0.4, 'st_knee_vel', [-deg2rad(10), deg2rad(10)]),
%     };

params = {
    'bounds_inplace',       SixStep_Up_Down.utils.getBounds(robot, 'step_length', +0.0, 'st_knee_vel', [-deg2rad( 5), deg2rad( 5)], 'avg_st_knee_pos', [deg2rad(-75), deg2rad(-74)]),
    'bounds_forward_0p25',  SixStep_Up_Down.utils.getBounds(robot, 'step_length', +0.1, 'st_knee_vel', [-deg2rad( 5), deg2rad( 5)], 'avg_st_knee_pos', [deg2rad(-75), deg2rad(-74)]),
    'bounds_forward_0p50',  SixStep_Up_Down.utils.getBounds(robot, 'step_length', +0.2, 'st_knee_vel', [-deg2rad(10), deg2rad(10)], 'avg_st_knee_pos', [deg2rad(-75), deg2rad(-74)]),
    'bounds_forward_0p75',  SixStep_Up_Down.utils.getBounds(robot, 'step_length', +0.3, 'st_knee_vel', [-deg2rad(10), deg2rad(10)], 'avg_st_knee_pos', [deg2rad(-75), deg2rad(-74)]),
    'bounds_forward_1p00',  SixStep_Up_Down.utils.getBounds(robot, 'step_length', +0.4, 'st_knee_vel', [-deg2rad(10), deg2rad(10)], 'avg_st_knee_pos', [deg2rad(-75), deg2rad(-74)]),
    'bounds_backward_0p25', SixStep_Up_Down.utils.getBounds(robot, 'step_length', -0.1, 'st_knee_vel', [-deg2rad(10), deg2rad(10)], 'avg_st_knee_pos', [deg2rad(-75), deg2rad(-74)]),
    'bounds_backward_0p50', SixStep_Up_Down.utils.getBounds(robot, 'step_length', -0.2, 'st_knee_vel', [-deg2rad(10), deg2rad(10)], 'avg_st_knee_pos', [deg2rad(-75), deg2rad(-74)]),
    'bounds_backward_0p75', SixStep_Up_Down.utils.getBounds(robot, 'step_length', -0.3, 'st_knee_vel', [-deg2rad(10), deg2rad(10)], 'avg_st_knee_pos', [deg2rad(-75), deg2rad(-74)]),
    'bounds_backward_1p00', SixStep_Up_Down.utils.getBounds(robot, 'step_length', -0.4, 'st_knee_vel', [-deg2rad(10), deg2rad(10)], 'avg_st_knee_pos', [deg2rad(-75), deg2rad(-74)]),
    };

% params = {
%     'bounds_inplace_hip_restricted', SixStep_Up_Down.utils.getBounds(robot, 'hip_rot_joint', [deg2rad(-0.2904), deg2rad(0.2847)], 'step_length', +0.0, 'st_knee_vel', [-deg2rad( 5), deg2rad( 5)], 'avg_st_knee_pos', [deg2rad(-75), deg2rad(-74)])
%     };

for i = 1:size(params, 1)
    bounds = params{i, 2};
    
    % Update Bounds
    nlp = SixStep_Up_Down.opt.multi_domain_constraints(nlp, bounds);
    nlp.update;

    SixStep_Up_Down.utils.updateBounds(nlp, bounds);

    solver = IpoptApplication(nlp);

    % Creating the JSON files
    load(fullfile(SixStep_Up_Down.getRootPath, 'local', 'res', 'funcs'))
    name = params{i, 1};
    frost_c.createBoundsFile(solver, funcs, data_path, name);
    save(['local/', name], 'bounds');
    
    fprintf('Done with %s\n', name);
end
