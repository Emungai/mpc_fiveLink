/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:09:29 GMT-05:00
 */

#ifndef JS_PLEFTSTANCECONT_LEFTSTANCE_HH
#define JS_PLEFTSTANCECONT_LEFTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace LeftStance
{

  void Js_pleftStanceCont_LeftStance_raw(double *p_output1, const double *var1);

  inline void Js_pleftStanceCont_LeftStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_pleftStanceCont_LeftStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_PLEFTSTANCECONT_LEFTSTANCE_HH
