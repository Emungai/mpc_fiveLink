/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:19 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t5745;
  double t5764;
  double t5118;
  double t5765;
  double t2545;
  double t5746;
  double t5766;
  double t5767;
  double t5772;
  double t5773;
  double t5774;
  double t5775;
  double t3063;
  double t4950;
  double t5768;
  double t5776;
  double t5777;
  double t5778;
  double t5779;
  double t5780;
  double t5781;
  double t5785;
  double t5786;
  double t5787;
  double t5797;
  double t5806;
  double t5807;
  double t5808;
  double t5805;
  double t5809;
  double t5810;
  double t5812;
  double t5813;
  double t5814;
  t5745 = Cos(var1[3]);
  t5764 = Sin(var1[2]);
  t5118 = Cos(var1[2]);
  t5765 = Sin(var1[3]);
  t2545 = Cos(var1[4]);
  t5746 = t5118*t5745;
  t5766 = -1.*t5764*t5765;
  t5767 = t5746 + t5766;
  t5772 = -1.*t5745*t5764;
  t5773 = -1.*t5118*t5765;
  t5774 = t5772 + t5773;
  t5775 = Sin(var1[4]);
  t3063 = -1.*t2545;
  t4950 = 1. + t3063;
  t5768 = 0.4*t4950*t5767;
  t5776 = -0.4*t5774*t5775;
  t5777 = t2545*t5767;
  t5778 = t5774*t5775;
  t5779 = t5777 + t5778;
  t5780 = 0.8*t5779;
  t5781 = t5768 + t5776 + t5780;
  t5785 = t5745*t5764;
  t5786 = t5118*t5765;
  t5787 = t5785 + t5786;
  t5797 = t2545*t5774;
  t5806 = -1.*t5118*t5745;
  t5807 = t5764*t5765;
  t5808 = t5806 + t5807;
  t5805 = 0.4*t4950*t5774;
  t5809 = -0.4*t5808*t5775;
  t5810 = t5808*t5775;
  t5812 = t5797 + t5810;
  t5813 = 0.8*t5812;
  t5814 = t5805 + t5809 + t5813;
  p_output1[0]=var2[0] + t5781*var2[2] + t5781*var2[3] + (-0.4*t2545*t5767 + 0.4*t5775*t5787 + 0.8*(t5777 - 1.*t5775*t5787))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t5814*var2[2] + t5814*var2[3] + (-0.4*t2545*t5774 + 0.4*t5767*t5775 + 0.8*(-1.*t5767*t5775 + t5797))*var2[4];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RightToe_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void dh_RightToe_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
