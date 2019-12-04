function [ average_fun ] = average_left_knee_angle( nlp )
    X = cell(1,nlp.NumNode);
    for i = 1:nlp.NumNode
        X{i}  = SymVariable(['x',num2str(i)],[nlp.Plant.numState,1]);
        if i == 1
            average_angle = X{i}(10);
        else
            average_angle = average_angle + X{i}(10);
        end
    end
    average_angle = average_angle/nlp.NumNode;
    average_fun = SymFunction(['average_left_knee_angle_', nlp.Plant.Name], average_angle, X);
end
