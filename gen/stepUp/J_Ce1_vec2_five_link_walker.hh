/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:54 GMT-05:00
 */

#ifndef J_CE1_VEC2_FIVE_LINK_WALKER_HH
#define J_CE1_VEC2_FIVE_LINK_WALKER_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DoubleSupportConstHeight
{

  void J_Ce1_vec2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_Ce1_vec2_five_link_walker(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 61, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_Ce1_vec2_five_link_walker_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_CE1_VEC2_FIVE_LINK_WALKER_HH
