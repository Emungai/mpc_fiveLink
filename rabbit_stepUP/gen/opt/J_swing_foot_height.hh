/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:23:58 GMT-05:00
 */

#ifndef J_SWING_FOOT_HEIGHT_HH
#define J_SWING_FOOT_HEIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightStance
{

  void J_swing_foot_height_raw(double *p_output1, const double *var1);

  inline void J_swing_foot_height(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_swing_foot_height_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_SWING_FOOT_HEIGHT_HH
