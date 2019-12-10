/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:23:15 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t8717;
  double t8714;
  double t8715;
  double t8718;
  double t2203;
  double t8716;
  double t8719;
  double t8720;
  double t8729;
  double t8730;
  double t8731;
  double t8732;
  double t8709;
  double t8710;
  double t8756;
  double t8757;
  double t8758;
  double t8755;
  double t8759;
  double t8760;
  double t8761;
  double t8762;
  double t8763;
  double t8764;
  double t8769;
  double t8770;
  double t8771;
  double t8772;
  double t8773;
  double t8774;
  double t8777;
  double t8778;
  double t8779;
  double t8780;
  double t8781;
  double t8782;
  double t8783;
  double t8796;
  double t8797;
  double t8798;
  double t8795;
  double t8799;
  double t8800;
  double t8801;
  double t8802;
  double t8803;
  double t8794;
  double t8804;
  double t8805;
  double t8806;
  double t8816;
  double t8818;
  double t8823;
  double t8824;
  double t8825;
  double t8826;
  double t8827;
  double t8833;
  double t8834;
  double t8835;
  double t8836;
  double t8837;
  double t8838;
  double t8832;
  double t8839;
  double t8840;
  double t8841;
  t8717 = Cos(var1[2]);
  t8714 = Cos(var1[3]);
  t8715 = Sin(var1[2]);
  t8718 = Sin(var1[3]);
  t2203 = Cos(var1[4]);
  t8716 = t8714*t8715;
  t8719 = t8717*t8718;
  t8720 = t8716 + t8719;
  t8729 = t8717*t8714;
  t8730 = -1.*t8715*t8718;
  t8731 = t8729 + t8730;
  t8732 = Sin(var1[4]);
  t8709 = -1.*t2203;
  t8710 = 1. + t8709;
  t8756 = -1.*t8714*t8715;
  t8757 = -1.*t8717*t8718;
  t8758 = t8756 + t8757;
  t8755 = 0.4*t8710*t8731;
  t8759 = -0.4*t8758*t8732;
  t8760 = t2203*t8731;
  t8761 = t8758*t8732;
  t8762 = t8760 + t8761;
  t8763 = 0.8*t8762;
  t8764 = t8755 + t8759 + t8763;
  t8769 = -0.4*t2203*t8731;
  t8770 = 0.4*t8720*t8732;
  t8771 = -1.*t8720*t8732;
  t8772 = t8760 + t8771;
  t8773 = 0.8*t8772;
  t8774 = t8769 + t8770 + t8773;
  t8777 = -0.4*t2203*t8758;
  t8778 = 0.4*t8731*t8732;
  t8779 = t2203*t8758;
  t8780 = -1.*t8731*t8732;
  t8781 = t8779 + t8780;
  t8782 = 0.8*t8781;
  t8783 = t8777 + t8778 + t8782;
  t8796 = -1.*t8717*t8714;
  t8797 = t8715*t8718;
  t8798 = t8796 + t8797;
  t8795 = 0.4*t8710*t8758;
  t8799 = -0.4*t8798*t8732;
  t8800 = t8798*t8732;
  t8801 = t8779 + t8800;
  t8802 = 0.8*t8801;
  t8803 = t8795 + t8799 + t8802;
  t8794 = var2[4]*t8783;
  t8804 = var2[2]*t8803;
  t8805 = var2[3]*t8803;
  t8806 = t8794 + t8804 + t8805;
  t8816 = 0.4*t8758*t8732;
  t8818 = -1.*t8758*t8732;
  t8823 = -0.4*t2203*t8798;
  t8824 = t2203*t8798;
  t8825 = t8824 + t8818;
  t8826 = 0.8*t8825;
  t8827 = t8823 + t8816 + t8826;
  t8833 = 0.4*t8710*t8798;
  t8834 = -0.4*t8720*t8732;
  t8835 = t8720*t8732;
  t8836 = t8824 + t8835;
  t8837 = 0.8*t8836;
  t8838 = t8833 + t8834 + t8837;
  t8832 = var2[4]*t8827;
  t8839 = var2[2]*t8838;
  t8840 = var2[3]*t8838;
  t8841 = t8832 + t8839 + t8840;
  p_output1[0]=0.4*t8710*t8720 - 0.4*t8731*t8732 + 0.8*(t2203*t8720 + t8731*t8732) + var1[0] + var2[0] + t8764*var2[2] + t8806*var2[2] + t8764*var2[3] + t8806*var2[3] + t8774*var2[4] + var2[4]*(t8783*var2[2] + t8783*var2[3] + (0.4*t2203*t8720 + t8778 + 0.8*(-1.*t2203*t8720 + t8780))*var2[4]) + var3[0] + t8764*var3[2] + t8764*var3[3] + t8774*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t8755 + t8759 + t8763 + t8794 + t8804 + t8805 + var1[1] + var2[1] + t8841*var2[2] + t8841*var2[3] + var2[4]*(t8827*var2[2] + t8827*var2[3] + (0.4*t2203*t8731 + t8816 + 0.8*(-1.*t2203*t8731 + t8818))*var2[4]) + var3[1] + t8803*var3[2] + t8803*var3[3] + t8783*var3[4] - 1.*var4[2];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_RightToe_RightStance.hh"

namespace RightStance
{

void ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
