function [] = animate_traj(t,X_REF,x_traj,l)
    
    for i = 1:length(t)/2
        clf;
        x = x_traj(1,i);
        th = x_traj(2,i);
        x_ref = X_REF(1,i);
        th_ref = X_REF(2,i);
        
        
        %% Cart
        w = 1.5;
        h = 0.2;
        x_cart = x - w/2;
        y_cart = 0;
        xref_cart = x_ref - w/2;
        yref_cart = 0;

        pos = [x_cart y_cart w h];
        pos_ref = [xref_cart yref_cart w h];
        r = rectangle('Position',pos,'EdgeColor','b','LineWidth',2);
        r_ref = rectangle('Position',pos_ref,'EdgeColor','g','LineWidth',2,'LineStyle','--'); 
        
        %% Pole
        pos_pole = [x+l*cos(th-pi/2);
                    l*sin(th-pi/2)];    % theta axis points straight down in model so sub pi/2
                
        posref_pole = [x_ref+l*cos(th_ref-pi/2);
                    l*sin(th_ref-pi/2)];
        
        
        line([x pos_pole(1)],[h h+pos_pole(2)],'LineWidth',2);
        line([x_ref posref_pole(1)],[h h+posref_pole(2)],'LineWidth',2,'LineStyle','--','color','g')
        
        %% Reset
        axis([x-1.5 x+1.5 0 1])
        drawnow;
%         pause(0.001);
        
    end
end