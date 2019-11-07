/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:24:14 GMT-05:00
 */

#ifndef JS_H_LEFTTOE_LEFTSTANCELIFT_HH
#define JS_H_LEFTTOE_LEFTSTANCELIFT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace LeftStanceLift
{

  void Js_h_LeftToe_LeftStanceLift_raw(double *p_output1, const double *var1);

  inline void Js_h_LeftToe_LeftStanceLift(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 11, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_h_LeftToe_LeftStanceLift_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_H_LEFTTOE_LEFTSTANCELIFT_HH
