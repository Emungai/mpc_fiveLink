/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 15:29:56 GMT-05:00
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
  double t5637;
  double t5670;
  double t5575;
  double t5671;
  double t5321;
  double t5651;
  double t5694;
  double t5697;
  double t5718;
  double t5722;
  double t5726;
  double t5733;
  double t5383;
  double t5564;
  double t5772;
  double t5781;
  double t5782;
  double t5716;
  double t5734;
  double t5745;
  double t5746;
  double t5749;
  double t5751;
  double t5764;
  double t5766;
  double t5769;
  double t5785;
  double t5787;
  double t5794;
  double t5795;
  double t5798;
  double t5800;
  double t5801;
  double t5802;
  double t5807;
  double t5808;
  double t5809;
  t5637 = Cos(var1[3]);
  t5670 = Sin(var1[2]);
  t5575 = Cos(var1[2]);
  t5671 = Sin(var1[3]);
  t5321 = Cos(var1[4]);
  t5651 = t5575*t5637;
  t5694 = -1.*t5670*t5671;
  t5697 = t5651 + t5694;
  t5718 = -1.*t5637*t5670;
  t5722 = -1.*t5575*t5671;
  t5726 = t5718 + t5722;
  t5733 = Sin(var1[4]);
  t5383 = -1.*t5321;
  t5564 = 1. + t5383;
  t5772 = -1.*t5575*t5637;
  t5781 = t5670*t5671;
  t5782 = t5772 + t5781;
  t5716 = 0.4*t5564*t5697;
  t5734 = -0.4*t5726*t5733;
  t5745 = t5321*t5697;
  t5746 = t5726*t5733;
  t5749 = t5745 + t5746;
  t5751 = 0.8*t5749;
  t5764 = t5716 + t5734 + t5751;
  t5766 = var2[0]*t5764;
  t5769 = 0.4*t5564*t5726;
  t5785 = -0.4*t5782*t5733;
  t5787 = t5321*t5726;
  t5794 = t5782*t5733;
  t5795 = t5787 + t5794;
  t5798 = 0.8*t5795;
  t5800 = t5769 + t5785 + t5798;
  t5801 = var2[2]*t5800;
  t5802 = t5766 + t5801;
  t5807 = t5637*t5670;
  t5808 = t5575*t5671;
  t5809 = t5807 + t5808;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t5802;
  p_output1[3]=t5802;
  p_output1[4]=(-0.4*t5321*t5697 + 0.4*t5733*t5809 + 0.8*(t5745 - 1.*t5733*t5809))*var2[0] + (-0.4*t5321*t5726 + 0.4*t5697*t5733 + 0.8*(-1.*t5697*t5733 + t5787))*var2[2];
  p_output1[5]=0;
  p_output1[6]=0;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_vec_DoubleSupportConstHeight.hh"

namespace Pattern[DS1, Blank[opt]]
{

void fRightToe_vec_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
