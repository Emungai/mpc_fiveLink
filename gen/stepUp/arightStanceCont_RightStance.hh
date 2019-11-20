/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:06:55 GMT-05:00
 */

#ifndef ARIGHTSTANCECONT_RIGHTSTANCE_HH
#define ARIGHTSTANCECONT_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightStance
{

  void arightStanceCont_RightStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void arightStanceCont_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 24);
    assert_size_matrix(var2, 1, 24);

	
    // - Outputs
    assert_size_matrix(p_output1, 24, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    arightStanceCont_RightStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // ARIGHTSTANCECONT_RIGHTSTANCE_HH
