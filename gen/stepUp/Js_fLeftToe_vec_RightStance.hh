/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:18:20 GMT-05:00
 */

#ifndef JS_FLEFTTOE_VEC_RIGHTSTANCE_HH
#define JS_FLEFTTOE_VEC_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[righStance, Blank[opt]]
{

  void Js_fLeftToe_vec_RightStance_raw(double *p_output1, const double *var1);

  inline void Js_fLeftToe_vec_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 17, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_fLeftToe_vec_RightStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_FLEFTTOE_VEC_RIGHTSTANCE_HH
