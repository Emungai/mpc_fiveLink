function [] = Plot_MPC_RefPrev(Time,x_traj,X_REF1_Original,X_REF2_Original,...
    u_cl,U_REF1_Original,U_REF2_Original,...
    plot_q,plot_dq,plot_u)

if plot_q
    figure % plot q
    subplot(3,3,1);
    plot(Time,x_traj(1,:)); title('x'); 
    hold on; plot(Time(1:size(X_REF1_Original,2)),X_REF1_Original(1,1:size(X_REF1_Original,2)));
    hold on; plot(Time(1:size(X_REF2_Original,2)),X_REF2_Original(1,1:size(X_REF2_Original,2)));
    legend('x','x_{ref}','mpc','location','best');
    subplot(3,3,2); 
    plot(Time,x_traj(2,:)); title('z');
    hold on; plot(Time(1:size(X_REF1_Original,2)),X_REF1_Original(2,1:size(X_REF1_Original,2)));
    hold on; plot(Time(1:size(X_REF2_Original,2)),X_REF2_Original(2,1:size(X_REF2_Original,2)));
    legend('z','z_{ref}','mpc','location','best');
    subplot(3,3,3);
    plot(Time,x_traj(3,:)); title('rotY');
    hold on; plot(Time(1:size(X_REF1_Original,2)),X_REF1_Original(3,1:size(X_REF1_Original,2)));
    hold on; plot(Time(1:size(X_REF2_Original,2)),X_REF2_Original(3,1:size(X_REF2_Original,2)));
    legend('rotY','rotY{ref}','mpc','location','best');
    subplot(3,3,4);
    plot(Time,x_traj(4,:)); title('q1R');
    hold on; plot(Time(1:size(X_REF1_Original,2)),X_REF1_Original(4,1:size(X_REF1_Original,2))); 
    hold on; plot(Time(1:size(X_REF2_Original,2)),X_REF2_Original(4,1:size(X_REF2_Original,2)));
    legend('q1R','q1R_{ref}','location','best');
    subplot(3,3,5);
    plot(Time,x_traj(5,:)); title('q2R');
    hold on; plot(Time(1:size(X_REF1_Original,2)),X_REF1_Original(5,1:size(X_REF1_Original,2))); 
    hold on; plot(Time(1:size(X_REF2_Original,2)),X_REF2_Original(5,1:size(X_REF2_Original,2)));
    legend('q2R','q2R{ref}','location','best');
    subplot(3,3,6);
    plot(Time,x_traj(6,:)); title('q1L');
    hold on; plot(Time(1:size(X_REF1_Original,2)),X_REF1_Original(6,1:size(X_REF1_Original,2))); 
    hold on; plot(Time(1:size(X_REF2_Original,2)),X_REF2_Original(6,1:size(X_REF2_Original,2)));
    legend('q1L','q1L_{ref}','location','best');
    subplot(3,3,7);
    plot(Time,x_traj(7,:)); title('q2L');
    hold on; plot(Time(1:size(X_REF1_Original,2)),X_REF1_Original(7,1:size(X_REF1_Original,2))); 
    hold on; plot(Time(1:size(X_REF2_Original,2)),X_REF2_Original(7,1:size(X_REF2_Original,2)));
    legend('q2L','q2L{ref}','location','best');
end

if plot_dq 
    figure % plot dq
    subplot(3,3,1);
    plot(Time,x_traj(8,:)); title('dx'); 
    hold on; plot(Time(1:size(X_REF1_Original,2)),X_REF1_Original(8,1:size(X_REF1_Original,2))); 
    hold on; plot(Time(1:size(X_REF2_Original,2)),X_REF2_Original(8,1:size(X_REF2_Original,2)));
    legend('dx','dx_{ref}','location','best');
    subplot(3,3,2); 
    plot(Time,x_traj(9,:)); title('dz');
    hold on; plot(Time(1:size(X_REF1_Original,2)),X_REF1_Original(9,1:size(X_REF1_Original,2)));
    hold on; plot(Time(1:size(X_REF2_Original,2)),X_REF2_Original(9,1:size(X_REF2_Original,2)));
    legend('dz','dz_{ref}','location','best');
    subplot(3,3,3);
    plot(Time,x_traj(10,:)); title('drotY');
    hold on; plot(Time(1:size(X_REF1_Original,2)),X_REF1_Original(10,1:size(X_REF1_Original,2)));
    hold on; plot(Time(1:size(X_REF2_Original,2)),X_REF2_Original(10,1:size(X_REF2_Original,2)));
    legend('drotY','drotY{ref}','location','best'); 
    subplot(3,3,4);
    plot(Time,x_traj(11,:)); title('dq1R');
    hold on; plot(Time(1:size(X_REF1_Original,2)),X_REF1_Original(11,1:size(X_REF1_Original,2))); 
    hold on; plot(Time(1:size(X_REF2_Original,2)),X_REF2_Original(11,1:size(X_REF2_Original,2)));
    legend('dq1R','dq1R_{ref}','location','best');  
    subplot(3,3,5);
    plot(Time,x_traj(12,:)); title('dq2R');
    hold on; plot(Time(1:size(X_REF1_Original,2)),X_REF1_Original(12,1:size(X_REF1_Original,2))); 
    hold on; plot(Time(1:size(X_REF2_Original,2)),X_REF2_Original(12,1:size(X_REF2_Original,2)));
    legend('dq2R','dq2R{ref}','location','best');  
    subplot(3,3,6);
    plot(Time,x_traj(13,:)); title('dq1L');
    hold on; plot(Time(1:size(X_REF1_Original,2)),X_REF1_Original(13,1:size(X_REF1_Original,2))); 
    hold on; plot(Time(1:size(X_REF2_Original,2)),X_REF2_Original(13,1:size(X_REF2_Original,2)));
    legend('dq1L','dq1L_{ref}','location','best');    
    subplot(3,3,7);
    plot(Time,x_traj(14,:)); title('dq2L');
    hold on; plot(Time(1:size(X_REF1_Original,2)),X_REF1_Original(14,1:size(X_REF1_Original,2))); 
    hold on; plot(Time(1:size(X_REF2_Original,2)),X_REF2_Original(14,1:size(X_REF2_Original,2)));
    legend('dq2L','dq2L{ref}','location','best');  
end

if plot_u
    figure % plot u
    subplot(2,2,1);
    plot(Time(1:end-1),u_cl(:,1)); title('u_q1R');
    hold on; plot(Time(1:size(U_REF1_Original,2)),U_REF1_Original(1,1:size(U_REF1_Original,2))); 
    hold on; plot(Time(1:size(U_REF2_Original,2)),U_REF2_Original(1,1:size(U_REF2_Original,2))); 
    legend('u_q1R','u_q1R_{ref}','location','best');
    subplot(2,2,2);
    plot(Time(1:end-1),u_cl(:,2)); title('u_q2R');
    hold on; plot(Time(1:size(U_REF1_Original,2)),U_REF1_Original(2,1:size(U_REF1_Original,2))); 
    hold on; plot(Time(1:size(U_REF2_Original,2)),U_REF2_Original(2,1:size(U_REF2_Original,2))); 
    legend('u_q2R','u_q2R_{ref}','location','best');
    subplot(2,2,3);
    plot(Time(1:end-1),u_cl(:,3)); title('u_q1L');
    hold on; plot(Time(1:size(U_REF1_Original,2)),U_REF1_Original(3,1:size(U_REF1_Original,2))); 
    hold on; plot(Time(1:size(U_REF2_Original,2)),U_REF2_Original(3,1:size(U_REF2_Original,2))); 
    legend('u_q1L','u_q1L_{ref}','location','best');
    subplot(2,2,4);
    plot(Time(1:end-1),u_cl(:,4)); title('u_q2L');
    hold on; plot(Time(1:size(U_REF1_Original,2)),U_REF1_Original(4,1:size(U_REF1_Original,2))); 
    hold on; plot(Time(1:size(U_REF2_Original,2)),U_REF2_Original(4,1:size(U_REF2_Original,2))); 
    legend('u_q2L','u_q2L_{ref}','location','best');
end


end

