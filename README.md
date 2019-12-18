# mpc_fiveLink

The stair climbing trajectories (ascent and descent) can be found in the rabbit_stepUp/trajectories/stepUp/singleDomain directory. The Trajectory Tracking NMPC code is found in the mpc_code/ directory. The steps needed to run this code are outlined below.
* To run the code open the fivelink_trajectory.m file and run. 
  * This should generate an ascending gait controller for a step height of 0.05 m. Modify the 'stpheight' and 'dir' variables to select a different trajectory. 
* Additional fivelink~.m files are included for perturbation and comparsion analysis. 
  * The resultant trajectories are stored in the mpc_code/Results directory. 
  * After loading one of these trajectories, the Plot_MPC_traj.m and Animate_MPC_Traj.m function in the mpc_code/utils/ directory can be used to view the results.

A report describing our methodology for structuring and computing the TT-NMPC controller is included [here](https://github.com/Emungai/mpc_fiveLink/blob/master/MPC_FiveLink_Report.pdf). 

