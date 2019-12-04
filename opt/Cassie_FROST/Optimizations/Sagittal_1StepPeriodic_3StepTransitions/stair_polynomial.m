function [ alpha_star ] = stair_polynomial( d, h, c, do, ho)
%STAIR_POLYNOMIAL Summary of this function goes here
%   Detailed explanation goes here

points = [0, 0;
          d/4, 0;
          d/2, c;
          d/2, h/2
          d/2, h+c;
          3*d/4, h;
          d, h];
points(:,1) = points(:,1) + do;
points(:,2) = points(:,2) + ho;

alpha0 = zeros(1,4);
cost_fun = @(alpha) cost(alpha, points);
nonlcon_fun = @(alpha) nonlcon(alpha, points);
alpha_star = fmincon(cost_fun, alpha0, [], [], [], [], [], [], nonlcon_fun);

% Plotting
f = @(x) alpha_star(1) + alpha_star(2).*x + alpha_star(3).*x.^2 + alpha_star(4).*x.^3;
t = linspace(do,d+do,100);

stairs = [0, 0;
          d/4, 0;
          d/2, 0;
          d/2, c;
          d/2, h/2
          d/2, h+c;
          d/2, h;
          3*d/4, h;
          d, h];
stairs(:,1) = stairs(:,1) + do;
stairs(:,2) = stairs(:,2) + ho;

figure(1);
grid on;
hold on;
plot(t, f(t), 'Linewidth', 2);
plot(stairs(:,1), stairs(:,2), 'Linewidth', 2)

end



function [ J ] = cost( alpha, points )
%COST Summary of this function goes here
%   Detailed explanation goes here

J = 0;
for i = 1:size(points,1)
    fx = 0;
    for j = 1:length(alpha)
       fx = fx + alpha(j)*points(i,1)^(j-1);
    end
    J = J + norm(fx - points(i,2));
end
    
end



function [ c, ceq ] = nonlcon( alpha, points )
%NONLCON Summary of this function goes here
%   Detailed explanation goes here

c = zeros(size(points,1),1);
for i = 1:size(points,1)
    fx = 0;
    for j = 1:length(alpha)
       fx = fx + alpha(j)*points(i,1)^(j-1);
    end
    c(i) = points(i,2) - fx;
end
    
ceq = [c(1); c(end)];
c([1,end]) = [];

end

