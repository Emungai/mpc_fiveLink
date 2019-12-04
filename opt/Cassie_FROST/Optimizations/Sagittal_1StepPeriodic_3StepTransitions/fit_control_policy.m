%% Fit Control Policy

Library = load('three_step/local/output/GaitLibrary_PeriodicTransitions_Velocity_v1');
Periodic = Library.PeriodicLibrary.GaitLibrary;
Transitions = Library.TransitionLibrary;
 
%% Construct dataset
input = []; output = [];
for i=1:length(Periodic)
   N = length(Periodic{i}.tspan{1});
   velocity_true = repmat(Periodic{i}.velocity(1),1,N);
%    velocity_true = Periodic{i}.states{1}.dx(1,:);
%    velocity_desired = velocity_true;
   tau = Periodic{i}.tspan{1}./Periodic{i}.tspan{1}(end);
   input = horzcat(input, [velocity_true; tau]);
   output = horzcat(output, Periodic{i}.states{1}.dx(1:end,:));
%    output = horzcat(output, [Periodic{i}.states{1}.x(1:end,:); Periodic{i}.states{1}.dx(1:end,:)]);

%    velocity = Periodic{i}.velocity(1);
%    alpha = reshape(Bezier.bezfit(tau, Periodic{i}.states{1}.x, 5),[],1);
%    input = horzcat(input, velocity);
%    output = horzcat(output, alpha);
end
% 
% velocity_set = -1:0.2:1;
% for i=1:length(Transitions)
%    N = length(Transitions{i}.tspan{1});
% %    velocity_true = Transitions{i}.states{1}.dx(1,:);
%    velocity_true = repmat(Transitions{i}.initial_velocity,1,N);
%    velocity_desired = repmat(Transitions{i}.final_velocity,1,N);
% %    index = find(Transitions{i}.final_velocity==velocity_set);
% %    velocity_desired = Periodic{index}.states{1}.dx(1,:);
%    tau = Transitions{i}.tspan{1}./Transitions{i}.tspan{1}(end);
%    input = horzcat(input, [velocity_true; velocity_desired; tau]);
%    output = horzcat(output, Transitions{i}.states{1}.dx(1:end,:));
% end


%%

% v = Transitions{37}.states{1}.dx(1,:);
% v = Periodic{8}.states{1}.dx(1,:);
% vd = Periodic{8}.states{1}.dx(1,:);

v = 0.0*ones(1,21);
vd = 0.0*ones(1,21);
s = linspace(0,1,21);

phi = [v;vd;s];
x_est = pi_v12(phi);
% x_true = Transitions{37}.states{1}.x;
x_true = Periodic{6}.states{1}.x;

figure(3)
hold on; grid on;
plot(s, x_est)
plot(s, x_true, '--')


%%

v = 0.0*ones(1,21);
s = linspace(0,1,21);

x_est = pi_v8([v;s]);
x_true = Periodic{6}.states{1}.x;

figure(1)
hold on; grid on;
plot(s, x_est)
plot(s, x_true, '--')

                  
%%

v = 1;
s = linspace(0,1,21);
alpha = reshape(pi_v6(v),[],6);

x_est = []; x_true = [];
for i = 1:length(s)
    x_est = horzcat(x_est, Bezier.bezierv(alpha,s(i)));
end
x_true = Periodic{11}.states{1}.x;



figure(2)
hold on; grid on;
plot(s, x_est)
plot(s, x_true, '--')





