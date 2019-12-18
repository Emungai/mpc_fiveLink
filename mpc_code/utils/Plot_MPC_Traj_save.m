function [] = Plot_MPC_Traj_save(Time,x_traj,X_REF_Original,u_cl,U_REF_Original,plot_q,plot_dq,plot_u,plot_title,args,save,save_dir,file_title,error)
blue = [0, 0.4470, 0.7410];
wdr = 2; 
wd = 1.5;
sz = 15;
sim_time = 1;
if plot_q
    figure1=figure % plot q
    subplot(3,3,1);
    plot(Time(1:size(X_REF_Original,2)),X_REF_Original(1,1:size(X_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--'); 
    if ~error
    hold on; line([0 sim_time],[args.lbx(1) args.lbx(1)],'LineStyle','--','color','r','LineWidth',wdr);
    hold on; line([0 sim_time],[args.ubx(1) args.ubx(1)],'LineStyle','--','color','r','LineWidth',wdr);
    end
    hold on; plot(Time,x_traj(1,:),'color',blue,'LineWidth',wd); title('$x$','interpreter','latex'); 
    grid on; set(gca,'FontSize',sz)
    
    subplot(3,3,2); 
    plot(Time(1:size(X_REF_Original,2)),X_REF_Original(2,1:size(X_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--');
    if ~error
    hold on; line([0 sim_time],[args.lbx(2) args.lbx(2)],'LineStyle','--','color','r','LineWidth',wdr);
    hold on; line([0 sim_time],[args.ubx(2) args.ubx(2)],'LineStyle','--','color','r','LineWidth',wdr);
    end
    hold on; plot(Time,x_traj(2,:),'color',blue,'LineWidth',wd); title('$z$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(3,3,3);
    plot(Time(1:size(X_REF_Original,2)),X_REF_Original(3,1:size(X_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--');
    if ~error
    hold on; line([0 sim_time],[args.lbx(3) args.lbx(3)],'LineStyle','--','color','r','LineWidth',wdr);
    hold on; line([0 sim_time],[args.ubx(3) args.ubx(3)],'LineStyle','--','color','r','LineWidth',wdr);
    end
    hold on; plot(Time,x_traj(3,:),'color',blue,'LineWidth',wd); title('$rot_Y$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(3,3,4);
    plot(Time(1:size(X_REF_Original,2)),X_REF_Original(4,1:size(X_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--'); 
    if ~error
    hold on; line([0 sim_time],[args.lbx(4) args.lbx(4)],'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(4) args.ubx(4)],'LineStyle','--','color','r','LineWidth',wdr);
    end    
hold on; plot(Time,x_traj(4,:),'color',blue,'LineWidth',wd); title('$q_{1R}$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(3,3,5);
    plot(Time(1:size(X_REF_Original,2)),X_REF_Original(5,1:size(X_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--'); 
    if ~error
    hold on; line([0 sim_time],[args.lbx(5) args.lbx(5)],'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(5) args.ubx(5)],'LineStyle','--','color','r','LineWidth',wdr);
    end    
hold on; plot(Time,x_traj(5,:),'color',blue,'LineWidth',wd); title('$q_{2R}$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(3,3,6);
    plot(Time(1:size(X_REF_Original,2)),X_REF_Original(6,1:size(X_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--'); 
    if ~error
    hold on; line([0 sim_time],[args.lbx(6) args.lbx(6)],'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(6) args.ubx(6)],'LineStyle','--','color','r','LineWidth',wdr);
    end    
hold on; plot(Time,x_traj(6,:),'color',blue,'LineWidth',wd); title('$q_{1L}$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(3,3,7);
    plot(Time(1:size(X_REF_Original,2)),X_REF_Original(7,1:size(X_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--'); 
   if ~error
    hold on; line([0 sim_time],[args.lbx(7) args.lbx(7)],'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(7) args.ubx(7)],'LineStyle','--','color','r','LineWidth',wdr);
   end   
hold on; plot(Time,x_traj(7,:),'color',blue,'LineWidth',wd); title('$q_{2L}$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
 if ~error
    legend('reference','constraints','NMPC trajectory');
    set(legend,...
        'Position',[0.409392268785169 0.188841051895204 0.16950092713185 0.105493865578861]);
 end
%     if isequal(plot_title,'error')
%         subplot(331); axis([0 1 -0.15 0.15]);
%         subplot(332); axis([0 1 -0.15 0.15]);
%         subplot(333); axis([0 1 -0.15 0.15]);
%         subplot(334); axis([0 1 -0.15 0.15]);
%         subplot(335); axis([0 1 -0.15 0.15]);
%         subplot(336); axis([0 1 -0.15 0.15]);
%         subplot(337); axis([0 1 -0.15 0.15]);
%     end
    sgtitle(plot_title+" positions");
    set(gcf,'color','w');
end

if plot_dq 
    figure2=figure % plot q
    subplot(3,3,1);
    plot(Time(1:size(X_REF_Original,2)),X_REF_Original(8,1:size(X_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--'); 
%     hold on; line([0 sim_time],[args.lbx(8) args.lbx(8)],'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(8) args.ubx(8)],'LineStyle','--','color','r','LineWidth',wdr);
    hold on; plot(Time,x_traj(8,:),'color',blue,'LineWidth',wd); title('$\dot{x}$','interpreter','latex'); 
    grid on; set(gca,'FontSize',sz)
    
    subplot(3,3,2); 
    plot(Time(1:size(X_REF_Original,2)),X_REF_Original(9,1:size(X_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--');
%     hold on; line([0 sim_time],[args.lbx(9) args.lbx(9)],'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(9) args.ubx(9)],'LineStyle','--','color','r','LineWidth',wdr);
    hold on; plot(Time,x_traj(9,:),'color',blue,'LineWidth',wd); title('$\dot{z}$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(3,3,3);
    plot(Time(1:size(X_REF_Original,2)),X_REF_Original(10,1:size(X_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--');
%     hold on; line([0 sim_time],[args.lbx(10) args.lbx(10)],'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(10) args.ubx(10)],'LineStyle','--','color','r','LineWidth',wdr);
    hold on; plot(Time,x_traj(10,:),'color',blue,'LineWidth',wd); title('$\dot{rot}_Y$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(3,3,4);
    plot(Time(1:size(X_REF_Original,2)),X_REF_Original(11,1:size(X_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--'); 
%     hold on; line([0 sim_time],[args.lbx(11) args.lbx(11)],'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(11) args.ubx(11)],'LineStyle','--','color','r','LineWidth',wdr);
    hold on; plot(Time,x_traj(11,:),'color',blue,'LineWidth',wd); title('$\dot{q}_{1R}$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(3,3,5);
    plot(Time(1:size(X_REF_Original,2)),X_REF_Original(12,1:size(X_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--'); 
%     hold on; line([0 sim_time],[args.lbx(12) args.lbx(12)],'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(12) args.ubx(12)],'LineStyle','--','color','r','LineWidth',wdr);
    hold on; plot(Time,x_traj(12,:),'color',blue,'LineWidth',wd); title('$\dot{q}_{2R}$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(3,3,6);
    plot(Time(1:size(X_REF_Original,2)),X_REF_Original(13,1:size(X_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--'); 
%     hold on; line([0 sim_time],[args.lbx(13) args.lbx(13)],'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(13) args.ubx(13)],'LineStyle','--','color','r','LineWidth',wdr);
    hold on; plot(Time,x_traj(13,:),'color',blue,'LineWidth',wd); title('$\dot{q}_{1L}$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(3,3,7);
    plot(Time(1:size(X_REF_Original,2)),X_REF_Original(14,1:size(X_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--'); 
%     hold on; line([0 sim_time],[args.lbx(14) args.lbx(14)],'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(14) args.ubx(14)],'LineStyle','--','color','r','LineWidth',wdr);
    hold on; plot(Time,x_traj(14,:),'color',blue,'LineWidth',wd); title('$\dot{q}_{2L}$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    if  ~error
    legend('reference','NMPC trajectory');
    set(legend,...
        'Position',[0.409392268785169 0.188841051895204 0.16950092713185 0.105493865578861]);
    end
    sgtitle(plot_title+" velocities");
    set(gcf,'color','w');
end

if plot_u
    figure3=figure % plot u
    subplot(2,2,1);
    plot(Time(1:size(U_REF_Original,2)),U_REF_Original(1,1:size(U_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--'); 
    hold on; plot(Time(1:end-1),u_cl(:,1),'color',blue,'LineWidth',wd); title('$u_{q_{1R}}$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(2,2,2);
    plot(Time(1:size(U_REF_Original,2)),U_REF_Original(2,1:size(U_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--'); 
    hold on; plot(Time(1:end-1),u_cl(:,2),'color',blue,'LineWidth',wd); title('$u_{q_{2R}}$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(2,2,3);
    plot(Time(1:size(U_REF_Original,2)),U_REF_Original(3,1:size(U_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--'); 
    hold on; plot(Time(1:end-1),u_cl(:,3),'color',blue,'LineWidth',wd); title('$u_{q_{1L}}$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(2,2,4);
    plot(Time(1:size(U_REF_Original,2)),U_REF_Original(4,1:size(U_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--'); 
    hold on; plot(Time(1:end-1),u_cl(:,4),'color',blue,'LineWidth',wd); title('$u_{q_{2L}}$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    if  ~error
    legend('reference','NMPC trajectory','location','best');
    end
    sgtitle(plot_title+" control inputs");
    set(gcf,'color','w');
    
end

%% saving the graphs
if save
    saveas(figure1,save_dir+file_title+"_positions"+".png")
    saveas(figure2,save_dir+file_title+"_velocities"+".png")
    saveas(figure3,save_dir+file_title+"_control_inputs"+".png")
end

end

