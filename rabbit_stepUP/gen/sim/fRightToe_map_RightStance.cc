/*
 * Automatically Generated from Mathematica.
 * Wed 11 Dec 2019 12:21:23 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
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

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t364;
  double t366;
  double t359;
  double t367;
  double t338;
  double t365;
  double t368;
  double t369;
  double t371;
  double t372;
  double t373;
  double t374;
  double t346;
  double t347;
  double t370;
  double t375;
  double t376;
  double t377;
  double t378;
  double t379;
  double t380;
  double t382;
  double t383;
  double t384;
  double t391;
  double t392;
  double t393;
  double t390;
  double t394;
  double t395;
  double t396;
  double t397;
  double t398;
  double t399;
  t364 = Cos(var1[3]);
  t366 = Sin(var1[2]);
  t359 = Cos(var1[2]);
  t367 = Sin(var1[3]);
  t338 = Cos(var1[4]);
  t365 = t359*t364;
  t368 = -1.*t366*t367;
  t369 = t365 + t368;
  t371 = -1.*t364*t366;
  t372 = -1.*t359*t367;
  t373 = t371 + t372;
  t374 = Sin(var1[4]);
  t346 = -1.*t338;
  t347 = 1. + t346;
  t370 = 0.4*t347*t369;
  t375 = -0.4*t373*t374;
  t376 = t338*t369;
  t377 = t373*t374;
  t378 = t376 + t377;
  t379 = 0.8*t378;
  t380 = t370 + t375 + t379;
  t382 = t364*t366;
  t383 = t359*t367;
  t384 = t382 + t383;
  t391 = -1.*t359*t364;
  t392 = t366*t367;
  t393 = t391 + t392;
  t390 = 0.4*t347*t373;
  t394 = -0.4*t393*t374;
  t395 = t338*t373;
  t396 = t393*t374;
  t397 = t395 + t396;
  t398 = 0.8*t397;
  t399 = t390 + t394 + t398;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=t380;
  p_output1[3]=t380;
  p_output1[4]=-0.4*t338*t369 + 0.4*t374*t384 + 0.8*(t376 - 1.*t374*t384);
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=1.;
  p_output1[16]=t399;
  p_output1[17]=t399;
  p_output1[18]=-0.4*t338*t373 + 0.4*t369*t374 + 0.8*(-1.*t369*t374 + t395);
  p_output1[19]=0;
  p_output1[20]=0;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_map_RightStance.hh"

namespace SymFunction
{

void fRightToe_map_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
