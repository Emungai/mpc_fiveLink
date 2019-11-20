/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:03:41 GMT-05:00
 */

#ifndef JS_U_LEFTFOOTZFORCE_DOUBLESUPPORTCONSTHEIGHT_HH
#define JS_U_LEFTFOOTZFORCE_DOUBLESUPPORTCONSTHEIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DoubleSupportConstHeight
{

  void Js_u_leftFootZForce_DoubleSupportConstHeight_raw(double *p_output1, const double *var1);

  inline void Js_u_leftFootZForce_DoubleSupportConstHeight(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_u_leftFootZForce_DoubleSupportConstHeight_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_U_LEFTFOOTZFORCE_DOUBLESUPPORTCONSTHEIGHT_HH
