function [] = Plot_MPC_Traj_linear(Time,x_traj,X_REF_Original,u_cl,U_REF_Original,plot_q,plot_dq,plot_u)

if plot_q
    figure % plot q
    subplot(3,3,1);
    plot(Time,x_traj(1,1:length(Time))); title('x'); 
    hold on; plot(Time(1:length(Time)),X_REF_Original(1,1:length(Time))); 
    legend('x','x_{ref}','location','best');
    subplot(3,3,2); 
    plot(Time,x_traj(2,1:length(Time))); title('z');
    hold on; plot(Time(1:length(Time)),X_REF_Original(2,1:length(Time)));
    legend('z','z_{ref}','location','best');
    subplot(3,3,3);
    plot(Time,x_traj(3,1:length(Time))); title('rotY');
    hold on; plot(Time(1:length(Time)),X_REF_Original(3,1:length(Time)));
    legend('rotY','rotY{ref}','location','best');
    subplot(3,3,4);
    plot(Time,x_traj(4,1:length(Time))); title('q1R');
    hold on; plot(Time(1:length(Time)),X_REF_Original(4,1:length(Time))); 
    legend('q1R','q1R_{ref}','location','best');
    subplot(3,3,5);
    plot(Time,x_traj(5,1:length(Time))); title('q2R');
    hold on; plot(Time(1:length(Time)),X_REF_Original(5,1:length(Time))); 
    legend('q2R','q2R{ref}','location','best');
    subplot(3,3,6);
    plot(Time,x_traj(6,1:length(Time))); title('q1L');
    hold on; plot(Time(1:length(Time)),X_REF_Original(6,1:length(Time))); 
    legend('q1L','q1L_{ref}','location','best');
    subplot(3,3,7);
    plot(Time,x_traj(7,1:length(Time))); title('q2L');
    hold on; plot(Time(1:length(Time)),X_REF_Original(7,1:length(Time))); 
    legend('q2L','q2L{ref}','location','best');
end

if plot_dq 
    figure % plot dq
    subplot(3,3,1);
    plot(Time,x_traj(8,1:length(Time))); title('dx'); 
    hold on; plot(Time(1:length(Time)),X_REF_Original(8,1:length(Time))); 
    legend('dx','dx_{ref}','location','best');
    subplot(3,3,2); 
    plot(Time,x_traj(9,1:length(Time))); title('dz');
    hold on; plot(Time(1:length(Time)),X_REF_Original(9,1:length(Time)));
    legend('dz','dz_{ref}','location','best');
    subplot(3,3,3);
    plot(Time,x_traj(10,1:length(Time))); title('drotY');
    hold on; plot(Time(1:length(Time)),X_REF_Original(10,1:length(Time)));
    legend('drotY','drotY{ref}','location','best'); 
    subplot(3,3,4);
    plot(Time,x_traj(11,1:length(Time))); title('dq1R');
    hold on; plot(Time(1:length(Time)),X_REF_Original(11,1:length(Time))); 
    legend('dq1R','dq1R_{ref}','location','best');  
    subplot(3,3,5);
    plot(Time,x_traj(12,1:length(Time))); title('dq2R');
    hold on; plot(Time(1:length(Time)),X_REF_Original(12,1:length(Time))); 
    legend('dq2R','dq2R{ref}','location','best');  
    subplot(3,3,6);
    plot(Time,x_traj(13,1:length(Time))); title('dq1L');
    hold on; plot(Time(1:length(Time)),X_REF_Original(13,1:length(Time))); 
    legend('dq1L','dq1L_{ref}','location','best');    
    subplot(3,3,7);
    plot(Time,x_traj(14,1:length(Time))); title('dq2L');
    hold on; plot(Time(1:length(Time)),X_REF_Original(14,1:length(Time))); 
    legend('dq2L','dq2L{ref}','location','best');  
end

if plot_u
    figure % plot u
    subplot(2,2,1);
    plot(Time(1:end),u_cl(:,1)); title('u_q1R');
    hold on; plot(Time(1:length(Time)),U_REF_Original(1,1:length(Time))); 
    legend('u_q1R','u_q1R_{ref}','location','best');
    subplot(2,2,2);
    plot(Time(1:end),u_cl(:,2)); title('u_q2R');
    hold on; plot(Time(1:length(Time)),U_REF_Original(2,1:length(Time))); 
    legend('u_q2R','u_q2R_{ref}','location','best');
    subplot(2,2,3);
    plot(Time(1:end),u_cl(:,3)); title('u_q1L');
    hold on; plot(Time(1:length(Time)),U_REF_Original(3,1:length(Time))); 
    legend('u_q1L','u_q1L_{ref}','location','best');
    subplot(2,2,4);
    plot(Time(1:end),u_cl(:,4)); title('u_q2L');
    hold on; plot(Time(1:length(Time)),U_REF_Original(4,1:length(Time))); 
    legend('u_q2L','u_q2L_{ref}','location','best');
end


end

