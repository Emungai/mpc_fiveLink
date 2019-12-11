/*
 * Automatically Generated from Mathematica.
 * Wed 11 Dec 2019 12:57:59 GMT-05:00
 */

#ifndef JS_SWING_FOOT_HEIGHT_HH
#define JS_SWING_FOOT_HEIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightStance
{

  void Js_swing_foot_height_raw(double *p_output1, const double *var1);

  inline void Js_swing_foot_height(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_swing_foot_height_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_SWING_FOOT_HEIGHT_HH
