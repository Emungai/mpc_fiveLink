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

