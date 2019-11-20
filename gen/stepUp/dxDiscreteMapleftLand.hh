/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:09:04 GMT-05:00
 */

#ifndef DXDISCRETEMAPLEFTLAND_HH
#define DXDISCRETEMAPLEFTLAND_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace leftLand
{

  void dxDiscreteMapleftLand_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void dxDiscreteMapleftLand(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);
    assert_size_matrix(var3, 7, 1);
    assert_size_matrix(var4, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 7, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dxDiscreteMapleftLand_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DXDISCRETEMAPLEFTLAND_HH
