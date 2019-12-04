function [ average_fun ] = average_right_knee_angle( nlp )
    X = cell(1,nlp.NumNode);
    for i = 1:nlp.NumNode
        X{i}  = SymVariable(['x',num2str(i)],[nlp.Plant.numState,1]);
        if i == 1
            average_angle = X{i}(17);
        else
            average_angle = average_angle + X{i}(17);
        end
    end
    average_angle = average_angle/nlp.NumNode;
    average_fun = SymFunction(['average_right_knee_angle_', nlp.Plant.Name], average_angle, X);
end
