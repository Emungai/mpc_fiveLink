%% Ankle
min_angle = inf;
max_angle = -inf;
for i = 1:2
%for i = 1:size(solution.states)
    if isempty(solution.tspan{i})
        continue;
    end
    
    min_angle = min([min(rad2deg(solution.states{i}.x(13, :))), min(rad2deg(solution.states{i}.x(20, :))), min_angle]);
    max_angle = max([max(rad2deg(solution.states{i}.x(13, :))), max(rad2deg(solution.states{i}.x(20, :))), max_angle]);
end
range = max_angle - min_angle;

display(min_angle);
display(max_angle);
display(range);

%% Hip Rotation
min_angle = inf;
max_angle = -inf;
for i = 1:4
%for i = 1:size(solution.states)
    if isempty(solution.tspan{i})
        continue;
    end
    
    min_angle = min([min(rad2deg(solution.states{i}.x(8, :))), min(rad2deg(solution.states{i}.x(15, :))), min_angle]);
    max_angle = max([max(rad2deg(solution.states{i}.x(8, :))), max(rad2deg(solution.states{i}.x(15, :))), max_angle]);
end
range = max_angle - min_angle;

display(min_angle);
display(max_angle);
display(range);