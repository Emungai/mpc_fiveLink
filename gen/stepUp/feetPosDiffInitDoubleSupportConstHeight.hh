/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:22:49 GMT-05:00
 */

#ifndef FEETPOSDIFFINITDOUBLESUPPORTCONSTHEIGHT_HH
#define FEETPOSDIFFINITDOUBLESUPPORTCONSTHEIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DoubleSupportConstHeight
{

  void feetPosDiffInitDoubleSupportConstHeight_raw(double *p_output1, const double *var1);

  inline void feetPosDiffInitDoubleSupportConstHeight(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    feetPosDiffInitDoubleSupportConstHeight_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // FEETPOSDIFFINITDOUBLESUPPORTCONSTHEIGHT_HH
