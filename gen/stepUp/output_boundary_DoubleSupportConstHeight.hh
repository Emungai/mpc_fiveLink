/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:03:33 GMT-05:00
 */

#ifndef OUTPUT_BOUNDARY_DOUBLESUPPORTCONSTHEIGHT_HH
#define OUTPUT_BOUNDARY_DOUBLESUPPORTCONSTHEIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DoubleSupportConstHeight
{

  void output_boundary_DoubleSupportConstHeight_raw(double *p_output1, const double *var1);

  inline void output_boundary_DoubleSupportConstHeight(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    output_boundary_DoubleSupportConstHeight_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // OUTPUT_BOUNDARY_DOUBLESUPPORTCONSTHEIGHT_HH
