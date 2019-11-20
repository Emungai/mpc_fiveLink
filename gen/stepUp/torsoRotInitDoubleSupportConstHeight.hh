/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 19:17:21 GMT-05:00
 */

#ifndef TORSOROTINITDOUBLESUPPORTCONSTHEIGHT_HH
#define TORSOROTINITDOUBLESUPPORTCONSTHEIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DoubleSupportConstHeight
{

  void torsoRotInitDoubleSupportConstHeight_raw(double *p_output1, const double *var1);

  inline void torsoRotInitDoubleSupportConstHeight(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    torsoRotInitDoubleSupportConstHeight_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // TORSOROTINITDOUBLESUPPORTCONSTHEIGHT_HH
