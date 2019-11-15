/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:37:34 GMT-05:00
 */

#ifndef PLEFTTOECONT_DOUBLESUPPORTCONSTHEIGHT_HH
#define PLEFTTOECONT_DOUBLESUPPORTCONSTHEIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[DS1, Blank[opt]]
{

  void pLeftToeCont_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2);

  inline void pLeftToeCont_DoubleSupportConstHeight(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 3);
    assert_size_matrix(var2, 1, 3);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    pLeftToeCont_DoubleSupportConstHeight_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // PLEFTTOECONT_DOUBLESUPPORTCONSTHEIGHT_HH
