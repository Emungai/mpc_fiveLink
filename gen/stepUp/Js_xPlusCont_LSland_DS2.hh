/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:27:29 GMT-05:00
 */

#ifndef JS_XPLUSCONT_LSLAND_DS2_HH
#define JS_XPLUSCONT_LSLAND_DS2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[LSland, Blank[DS2]]
{

  void Js_xPlusCont_LSland_DS2_raw(double *p_output1, const double *var1);

  inline void Js_xPlusCont_LSland_DS2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 14, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_xPlusCont_LSland_DS2_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_XPLUSCONT_LSLAND_DS2_HH
