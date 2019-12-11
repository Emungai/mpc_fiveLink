/*
 * Automatically Generated from Mathematica.
 * Wed 11 Dec 2019 12:20:52 GMT-05:00
 */

#ifndef YA_TIME_RIGHTSTANCE_HH
#define YA_TIME_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void ya_time_RightStance_raw(double *p_output1, const double *var1);

  inline void ya_time_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    ya_time_RightStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // YA_TIME_RIGHTSTANCE_HH
