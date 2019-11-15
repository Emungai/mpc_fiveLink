/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:05:28 GMT-05:00
 */

#ifndef TORQUES2_DOUBLESUPPORTCONSTHEIGHT_INTEGRAL_HH
#define TORQUES2_DOUBLESUPPORTCONSTHEIGHT_INTEGRAL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[DS1, Blank[opt]]
{

  void torques2_DoubleSupportConstHeight_integral_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void torques2_DoubleSupportConstHeight_integral(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 4, 1);
    assert_size_matrix(var3, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    torques2_DoubleSupportConstHeight_integral_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // TORQUES2_DOUBLESUPPORTCONSTHEIGHT_INTEGRAL_HH
