/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:18:42 GMT-05:00
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
  double t11414;
  double t11416;
  double t11406;
  double t11417;
  double t9402;
  double t11415;
  double t11418;
  double t11429;
  double t11431;
  double t11432;
  double t11433;
  double t11434;
  double t9418;
  double t9432;
  double t11430;
  double t11435;
  double t11436;
  double t11437;
  double t11438;
  double t11439;
  double t11440;
  double t11444;
  double t11445;
  double t11446;
  double t11456;
  double t11463;
  double t11464;
  double t11465;
  double t11462;
  double t11466;
  double t11467;
  double t11468;
  double t11469;
  double t11470;
  t11414 = Cos(var1[5]);
  t11416 = Sin(var1[2]);
  t11406 = Cos(var1[2]);
  t11417 = Sin(var1[5]);
  t9402 = Cos(var1[6]);
  t11415 = t11406*t11414;
  t11418 = -1.*t11416*t11417;
  t11429 = t11415 + t11418;
  t11431 = -1.*t11414*t11416;
  t11432 = -1.*t11406*t11417;
  t11433 = t11431 + t11432;
  t11434 = Sin(var1[6]);
  t9418 = -1.*t9402;
  t9432 = 1. + t9418;
  t11430 = 0.4*t9432*t11429;
  t11435 = -0.4*t11433*t11434;
  t11436 = t9402*t11429;
  t11437 = t11433*t11434;
  t11438 = t11436 + t11437;
  t11439 = 0.8*t11438;
  t11440 = t11430 + t11435 + t11439;
  t11444 = t11414*t11416;
  t11445 = t11406*t11417;
  t11446 = t11444 + t11445;
  t11456 = t9402*t11433;
  t11463 = -1.*t11406*t11414;
  t11464 = t11416*t11417;
  t11465 = t11463 + t11464;
  t11462 = 0.4*t9432*t11433;
  t11466 = -0.4*t11465*t11434;
  t11467 = t11465*t11434;
  t11468 = t11456 + t11467;
  t11469 = 0.8*t11468;
  t11470 = t11462 + t11466 + t11469;
  p_output1[0]=var2[0] + t11440*var2[2] + t11440*var2[5] + (0.4*t11434*t11446 + 0.8*(t11436 - 1.*t11434*t11446) - 0.4*t11429*t9402)*var2[6];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t11470*var2[2] + t11470*var2[5] + (0.4*t11429*t11434 + 0.8*(-1.*t11429*t11434 + t11456) - 0.4*t11433*t9402)*var2[6];
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

#include "dh_LeftToe_RightStance.hh"

namespace Pattern[righStance, Blank[opt]]
{

void dh_LeftToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
