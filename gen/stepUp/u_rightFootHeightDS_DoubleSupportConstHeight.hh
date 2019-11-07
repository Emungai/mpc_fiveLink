/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:23:02 GMT-05:00
 */

#ifndef U_RIGHTFOOTHEIGHTDS_DOUBLESUPPORTCONSTHEIGHT_HH
#define U_RIGHTFOOTHEIGHTDS_DOUBLESUPPORTCONSTHEIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DoubleSupportConstHeight
{

  void u_rightFootHeightDS_DoubleSupportConstHeight_raw(double *p_output1, const double *var1);

  inline void u_rightFootHeightDS_DoubleSupportConstHeight(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    u_rightFootHeightDS_DoubleSupportConstHeight_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // U_RIGHTFOOTHEIGHTDS_DOUBLESUPPORTCONSTHEIGHT_HH
