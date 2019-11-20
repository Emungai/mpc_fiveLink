/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:02:23 GMT-05:00
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
  double t9048;
  double t9036;
  double t9039;
  double t9054;
  double t8987;
  double t9047;
  double t9055;
  double t9059;
  double t9063;
  double t9064;
  double t9067;
  double t9068;
  double t9025;
  double t9026;
  double t9090;
  double t9093;
  double t9094;
  t9048 = Cos(var1[2]);
  t9036 = Cos(var1[3]);
  t9039 = Sin(var1[2]);
  t9054 = Sin(var1[3]);
  t8987 = Cos(var1[4]);
  t9047 = t9036*t9039;
  t9055 = t9048*t9054;
  t9059 = t9047 + t9055;
  t9063 = t9048*t9036;
  t9064 = -1.*t9039*t9054;
  t9067 = t9063 + t9064;
  t9068 = Sin(var1[4]);
  t9025 = -1.*t8987;
  t9026 = 1. + t9025;
  t9090 = -1.*t9036*t9039;
  t9093 = -1.*t9048*t9054;
  t9094 = t9090 + t9093;
  p_output1[0]=0.4*t9026*t9059 - 0.4*t9067*t9068 + 0.8*(t8987*t9059 + t9067*t9068) + var1[0] - 1.*var2[0];
  p_output1[1]=-1.*var2[1];
  p_output1[2]=0.4*t9026*t9067 - 0.4*t9068*t9094 + 0.8*(t8987*t9067 + t9068*t9094) + var1[1] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RightToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void h_RightToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
