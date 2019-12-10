/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:20:29 GMT-05:00
 */

#ifndef P_BASEPOSX_HH
#define P_BASEPOSX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void p_BasePosX_raw(double *p_output1, const double *var1);

  inline void p_BasePosX(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    p_BasePosX_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // P_BASEPOSX_HH
