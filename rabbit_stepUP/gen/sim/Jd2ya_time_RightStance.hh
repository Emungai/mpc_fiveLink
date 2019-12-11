/*
 * Automatically Generated from Mathematica.
 * Wed 11 Dec 2019 12:21:07 GMT-05:00
 */

#ifndef JD2YA_TIME_RIGHTSTANCE_HH
#define JD2YA_TIME_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Jd2ya_time_RightStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void Jd2ya_time_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 14);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Jd2ya_time_RightStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JD2YA_TIME_RIGHTSTANCE_HH
