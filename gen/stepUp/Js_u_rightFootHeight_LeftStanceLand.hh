/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:27:12 GMT-05:00
 */

#ifndef JS_U_RIGHTFOOTHEIGHT_LEFTSTANCELAND_HH
#define JS_U_RIGHTFOOTHEIGHT_LEFTSTANCELAND_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace LeftStanceLand
{

  void Js_u_rightFootHeight_LeftStanceLand_raw(double *p_output1, const double *var1);

  inline void Js_u_rightFootHeight_LeftStanceLand(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 0, 0);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_u_rightFootHeight_LeftStanceLand_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_U_RIGHTFOOTHEIGHT_LEFTSTANCELAND_HH
