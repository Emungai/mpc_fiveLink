/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:43:03 GMT-05:00
 */

#ifndef JS_FEETPOSDIFFINITDOUBLESUPPORTCONSTHEIGHT_HH
#define JS_FEETPOSDIFFINITDOUBLESUPPORTCONSTHEIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[DS1, Blank[opt]]
{

  void Js_feetPosDiffInitDoubleSupportConstHeight_raw(double *p_output1, const double *var1);

  inline void Js_feetPosDiffInitDoubleSupportConstHeight(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 5, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_feetPosDiffInitDoubleSupportConstHeight_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_FEETPOSDIFFINITDOUBLESUPPORTCONSTHEIGHT_HH
