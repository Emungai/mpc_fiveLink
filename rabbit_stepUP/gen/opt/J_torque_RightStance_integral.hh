/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:24:36 GMT-05:00
 */

#ifndef J_TORQUE_RIGHTSTANCE_INTEGRAL_HH
#define J_TORQUE_RIGHTSTANCE_INTEGRAL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightStance
{

  void J_torque_RightStance_integral_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void J_torque_RightStance_integral(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 4, 1);
    assert_size_matrix(var3, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_torque_RightStance_integral_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_TORQUE_RIGHTSTANCE_INTEGRAL_HH
