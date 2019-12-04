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

