/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:21:12 GMT-05:00
 */

#ifndef JS_CE3_VEC3_FIVE_LINK_WALKER_HH
#define JS_CE3_VEC3_FIVE_LINK_WALKER_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace LeftStance
{

  void Js_Ce3_vec3_five_link_walker_raw(double *p_output1, const double *var1);

  inline void Js_Ce3_vec3_five_link_walker(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 40, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_Ce3_vec3_five_link_walker_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_CE3_VEC3_FIVE_LINK_WALKER_HH
