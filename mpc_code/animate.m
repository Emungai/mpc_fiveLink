function [] = animate(t,x_traj,l)
    
    for i = 1:length(t)/2
        clf;
        x = x_traj(1,i);
        th = x_traj(2,i);
        
        %% Cart
        w = 1.5;
        h = 0.2;
        x_cart = x - w/2;
        y_cart = 0;

        pos = [x_cart y_cart w h];
        rectangle('Position',pos)
        
        %% Pole
        pos_pole = [x+l*cos(th-pi/2);
                    l*sin(th-pi/2)];    % theta axis points straight down in model so sub pi/2
                
        line([x pos_pole(1)],[h h+pos_pole(2)],'LineWidth',8);
            
        %% Reset
        axis([x-1.5 x+1.5 0 1])
        drawnow;
%         pause(0.001);
        
    end
end