/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:07:02 GMT-05:00
 */

#ifndef J_PRIGHTSTANCECONT_RIGHTSTANCE_HH
#define J_PRIGHTSTANCECONT_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightStance
{

  void J_prightStanceCont_RightStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_prightStanceCont_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 2);
    assert_size_matrix(var2, 1, 2);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_prightStanceCont_RightStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_PRIGHTSTANCECONT_RIGHTSTANCE_HH
