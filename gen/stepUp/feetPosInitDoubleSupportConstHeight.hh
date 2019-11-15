/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 15:30:45 GMT-05:00
 */

#ifndef FEETPOSINITDOUBLESUPPORTCONSTHEIGHT_HH
#define FEETPOSINITDOUBLESUPPORTCONSTHEIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[DS1, Blank[opt]]
{

  void feetPosInitDoubleSupportConstHeight_raw(double *p_output1, const double *var1);

  inline void feetPosInitDoubleSupportConstHeight(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    feetPosInitDoubleSupportConstHeight_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // FEETPOSINITDOUBLESUPPORTCONSTHEIGHT_HH
