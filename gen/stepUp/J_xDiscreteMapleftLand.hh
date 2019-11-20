/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:09:00 GMT-05:00
 */

#ifndef J_XDISCRETEMAPLEFTLAND_HH
#define J_XDISCRETEMAPLEFTLAND_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace leftLand
{

  void J_xDiscreteMapleftLand_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_xDiscreteMapleftLand(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 14, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_xDiscreteMapleftLand_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_XDISCRETEMAPLEFTLAND_HH
