/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:24 GMT-05:00
 */

#ifndef DDH_RIGHTTOE_DOUBLESUPPORTDIFFHEIGHT_HH
#define DDH_RIGHTTOE_DOUBLESUPPORTDIFFHEIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DoubleSupportDiffHeight
{

  void ddh_RightToe_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void ddh_RightToe_DoubleSupportDiffHeight(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);
    assert_size_matrix(var3, 7, 1);
    assert_size_matrix(var4, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    ddh_RightToe_DoubleSupportDiffHeight_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DDH_RIGHTTOE_DOUBLESUPPORTDIFFHEIGHT_HH
