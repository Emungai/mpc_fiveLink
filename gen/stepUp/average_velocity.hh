/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:19:34 GMT-05:00
 */

#ifndef AVERAGE_VELOCITY_HH
#define AVERAGE_VELOCITY_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[righStance, Blank[opt]]
{

  void average_velocity_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void average_velocity(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 7, 1);
    assert_size_matrix(var3, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    average_velocity_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // AVERAGE_VELOCITY_HH
