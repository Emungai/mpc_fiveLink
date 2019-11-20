/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:10:09 GMT-05:00
 */

#ifndef Y_LEFTSTANCE_LEFTSTANCE_HH
#define Y_LEFTSTANCE_LEFTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace LeftStance
{

  void y_leftStance_LeftStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6);

  inline void y_leftStance_LeftStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4,const Eigen::VectorXd &var5,const Eigen::VectorXd &var6)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 7, 1);
    assert_size_matrix(var3, 24, 1);
    assert_size_matrix(var4, 2, 1);
    assert_size_matrix(var5, 1, 1);
    assert_size_matrix(var6, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    y_leftStance_LeftStance_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data(),var5.data(),var6.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // Y_LEFTSTANCE_LEFTSTANCE_HH
