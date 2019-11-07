/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:27:08 GMT-05:00
 */

#ifndef U_RIGHTFOOTHEIGHT_LEFTSTANCELAND_HH
#define U_RIGHTFOOTHEIGHT_LEFTSTANCELAND_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace LeftStanceLand
{

  void u_rightFootHeight_LeftStanceLand_raw(double *p_output1, const double *var1);

  inline void u_rightFootHeight_LeftStanceLand(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    u_rightFootHeight_LeftStanceLand_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // U_RIGHTFOOTHEIGHT_LEFTSTANCELAND_HH
