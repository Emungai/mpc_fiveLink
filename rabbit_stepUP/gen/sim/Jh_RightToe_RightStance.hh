/*
 * Automatically Generated from Mathematica.
 * Mon 9 Dec 2019 23:19:31 GMT-05:00
 */

#ifndef JH_RIGHTTOE_RIGHTSTANCE_HH
#define JH_RIGHTTOE_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Jh_RightToe_RightStance_raw(double *p_output1, const double *var1);

  inline void Jh_RightToe_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 7);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Jh_RightToe_RightStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JH_RIGHTTOE_RIGHTSTANCE_HH
