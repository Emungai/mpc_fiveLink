/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:06:29 GMT-05:00
 */

#ifndef DXPLUSCONT_LEFTLIFTOFF_HH
#define DXPLUSCONT_LEFTLIFTOFF_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace leftLiftOff
{

  void dxPlusCont_leftLiftOff_raw(double *p_output1, const double *var1,const double *var2);

  inline void dxPlusCont_leftLiftOff(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 7, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dxPlusCont_leftLiftOff_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DXPLUSCONT_LEFTLIFTOFF_HH
