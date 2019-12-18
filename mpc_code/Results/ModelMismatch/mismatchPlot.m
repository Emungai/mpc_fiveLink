clear
load('0.05_ascend_mass1.mat');

x_traj = x_traj - X_REF_Original;
u_cl = u_cl' - U_REF_Original(:,1:end-1);

xtraj2 = load('0.05_ascend_mass0.9.mat','x_traj','u_cl');
% xtraj2 = load('0.05_ascend_mass1_B0.9.mat','x_traj','u_cl');
x_traj_04 = xtraj2.x_traj - X_REF_Original;
u04 = xtraj2.u_cl' - U_REF_Original(:,1:end-1);

xtraj3 = load('0.05_ascend_mass1.1.mat','x_traj','u_cl');
% xtraj3 = load('0.05_ascend_mass1_B1.1.mat','x_traj','u_cl');
x_traj_06 = xtraj3.x_traj - X_REF_Original;
u06 = xtraj3.u_cl' - U_REF_Original(:,1:end-1);

%%
clc; close all;
blue = [0, 0.4470, 0.7410];
or = [0.8500, 0.3250, 0.0980];
go = [0.75, 0.75, 0];
wdr = 1;
wd = 1;
sz = 15;
sim_time = 1;
%% q
figure % plot q
subplot(3,3,1);
plot(Time,x_traj(1,:),'color',blue,'LineWidth',wd); 
hold on; plot(Time,x_traj_04(1,:),'color',or,'LineWidth',wd);
hold on; plot(Time,x_traj_06(1,:),'color',go,'LineWidth',wd); title('$x$','interpreter','latex');
grid on; set(gca,'FontSize',sz)

subplot(3,3,2);
plot(Time,x_traj(2,:),'color',blue,'LineWidth',wd);
hold on; plot(Time,x_traj_04(2,:),'color',or,'LineWidth',wd);
hold on; plot(Time,x_traj_06(2,:),'color',go,'LineWidth',wd); title('$z$','interpreter','latex');
grid on; set(gca,'FontSize',sz)

subplot(3,3,3);
plot(Time,x_traj(3,:),'color',blue,'LineWidth',wd);
hold on; plot(Time,x_traj_04(3,:),'color',or,'LineWidth',wd);
hold on; plot(Time,x_traj_06(3,:),'color',go,'LineWidth',wd);title('$rot_Y$','interpreter','latex');
grid on; set(gca,'FontSize',sz)

subplot(3,3,4);
plot(Time,x_traj(4,:),'color',blue,'LineWidth',wd);
hold on; plot(Time,x_traj_04(4,:),'color',or,'LineWidth',wd);
hold on; plot(Time,x_traj_06(4,:),'color',go,'LineWidth',wd);title('$q_{1R}$','interpreter','latex');
grid on; set(gca,'FontSize',sz)

subplot(3,3,5);
plot(Time,x_traj(5,:),'color',blue,'LineWidth',wd);
hold on; plot(Time,x_traj_04(5,:),'color',or,'LineWidth',wd);
hold on; plot(Time,x_traj_06(5,:),'color',go,'LineWidth',wd);title('$q_{2R}$','interpreter','latex');
grid on; set(gca,'FontSize',sz)

subplot(3,3,6);
plot(Time,x_traj(6,:),'color',blue,'LineWidth',wd);
hold on; plot(Time,x_traj_04(6,:),'color',or,'LineWidth',wd);
hold on; plot(Time,x_traj_06(6,:),'color',go,'LineWidth',wd);title('$q_{1L}$','interpreter','latex');
grid on; set(gca,'FontSize',sz)

subplot(3,3,7);
plot(Time,x_traj(7,:),'color',blue,'LineWidth',wd);
hold on; plot(Time,x_traj_04(7,:),'color',or,'LineWidth',wd);
hold on; plot(Time,x_traj_06(7,:),'color',go,'LineWidth',wd);title('$q_{2L}$','interpreter','latex');
grid on; set(gca,'FontSize',sz)
legend({'Original D','0.9*D','1.1*D'});
set(legend,...
    'Position',[0.409392268785169 0.188841051895204 0.16950092713185 0.105493865578861]);

% if isequal(plot_title,'error')
%     subplot(331); axis([0 1 -0.15 0.15]);
%     subplot(332); axis([0 1 -0.15 0.15]);
%     subplot(333); axis([0 1 -0.15 0.15]);
%     subplot(334); axis([0 1 -0.15 0.15]);
%     subplot(335); axis([0 1 -0.15 0.15]);
%     subplot(336); axis([0 1 -0.15 0.15]);
%     subplot(337); axis([0 1 -0.15 0.15]);
% end
% sgtitle(plot_title+" positions");
set(gcf,'color','w');

%% dx
figure % plot q
subplot(3,3,1);
plot(Time,x_traj(8,:),'color',blue,'LineWidth',wd);
hold on; plot(Time,x_traj_04(8,:),'color',or,'LineWidth',wd);
hold on; plot(Time,x_traj_06(8,:),'color',go,'LineWidth',wd);title('$\dot{x}$','interpreter','latex');
grid on; set(gca,'FontSize',sz)

subplot(3,3,2);
plot(Time,x_traj(9,:),'color',blue,'LineWidth',wd);
hold on; plot(Time,x_traj_04(9,:),'color',or,'LineWidth',wd);
hold on; plot(Time,x_traj_06(9,:),'color',go,'LineWidth',wd);title('$\dot{z}$','interpreter','latex');
grid on; set(gca,'FontSize',sz)

subplot(3,3,3);
plot(Time,x_traj(10,:),'color',blue,'LineWidth',wd);
hold on; plot(Time,x_traj_04(10,:),'color',or,'LineWidth',wd);
hold on; plot(Time,x_traj_06(10,:),'color',go,'LineWidth',wd);title('$\dot{rot}_Y$','interpreter','latex');
grid on; set(gca,'FontSize',sz)

subplot(3,3,4);
plot(Time,x_traj(11,:),'color',blue,'LineWidth',wd);
hold on; plot(Time,x_traj_04(11,:),'color',or,'LineWidth',wd);
hold on; plot(Time,x_traj_06(11,:),'color',go,'LineWidth',wd);title('$\dot{q}_{1R}$','interpreter','latex');
grid on; set(gca,'FontSize',sz)

subplot(3,3,5);
plot(Time,x_traj(12,:),'color',blue,'LineWidth',wd);
hold on; plot(Time,x_traj_04(12,:),'color',or,'LineWidth',wd);
hold on; plot(Time,x_traj_06(12,:),'color',go,'LineWidth',wd);title('$\dot{q}_{2R}$','interpreter','latex');
grid on; set(gca,'FontSize',sz)

subplot(3,3,6);
plot(Time,x_traj(13,:),'color',blue,'LineWidth',wd);
hold on; plot(Time,x_traj_04(13,:),'color',or,'LineWidth',wd);
hold on; plot(Time,x_traj_06(13,:),'color',go,'LineWidth',wd);title('$\dot{q}_{1L}$','interpreter','latex');
grid on; set(gca,'FontSize',sz)

subplot(3,3,7);
plot(Time,x_traj(14,:),'color',blue,'LineWidth',wd);
hold on; plot(Time,x_traj_04(14,:),'color',or,'LineWidth',wd);
hold on; plot(Time,x_traj_06(14,:),'color',go,'LineWidth',wd);title('$\dot{q}_{2L}$','interpreter','latex');
grid on; set(gca,'FontSize',sz)
legend({'Original D','0.9*D','1.1*D'});
set(legend,...
    'Position',[0.409392268785169 0.188841051895204 0.16950092713185 0.105493865578861]);

% sgtitle(plot_title+" velocities");
set(gcf,'color','w');


%% plot u
u_cl = u_cl';
u04 = u04';
u06 = u06';
figure %
subplot(2,2,1);
plot(Time(1:end-1),u_cl(:,1),'color',blue,'LineWidth',wd);
hold on; plot(Time(1:end-1),u04(:,1),'color',or,'LineWidth',wd);
hold on; plot(Time(1:end-1),u06(:,1),'color',go,'LineWidth',wd); title('$u_{q_{1R}}$','interpreter','latex');
grid on; set(gca,'FontSize',sz)

subplot(2,2,2);
plot(Time(1:end-1),u_cl(:,2),'color',blue,'LineWidth',wd);
hold on; plot(Time(1:end-1),u04(:,2),'color',or,'LineWidth',wd);
hold on; plot(Time(1:end-1),u06(:,2),'color',go,'LineWidth',wd);title('$u_{q_{2R}}$','interpreter','latex');
grid on; set(gca,'FontSize',sz)

subplot(2,2,3);
plot(Time(1:end-1),u_cl(:,3),'color',blue,'LineWidth',wd);
hold on; plot(Time(1:end-1),u04(:,3),'color',or,'LineWidth',wd);
hold on; plot(Time(1:end-1),u06(:,3),'color',go,'LineWidth',wd);title('$u_{q_{1L}}$','interpreter','latex');
grid on; set(gca,'FontSize',sz)

subplot(2,2,4);
plot(Time(1:end-1),u_cl(:,4),'color',blue,'LineWidth',wd);
hold on; plot(Time(1:end-1),u04(:,4),'color',or,'LineWidth',wd);
hold on; plot(Time(1:end-1),u06(:,4),'color',go,'LineWidth',wd);title('$u_{q_{2L}}$','interpreter','latex');
grid on; set(gca,'FontSize',sz)

legend({'Original D','0.9*D','1.1*D'},'location','best');
set(gcf,'color','w');