/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:27:33 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t2489;
  double t2485;
  double t2487;
  double t2491;
  double t2380;
  double t2488;
  double t2503;
  double t2504;
  double t2506;
  double t2507;
  double t2508;
  double t2509;
  double t2381;
  double t2401;
  double t2505;
  double t2510;
  double t2511;
  double t2512;
  double t2513;
  double t2517;
  double t2518;
  double t2520;
  double t2521;
  double t2522;
  t2489 = Cos(var1[2]);
  t2485 = Cos(var1[3]);
  t2487 = Sin(var1[2]);
  t2491 = Sin(var1[3]);
  t2380 = Cos(var1[4]);
  t2488 = -1.*t2485*t2487;
  t2503 = -1.*t2489*t2491;
  t2504 = t2488 + t2503;
  t2506 = -1.*t2489*t2485;
  t2507 = t2487*t2491;
  t2508 = t2506 + t2507;
  t2509 = Sin(var1[4]);
  t2381 = -1.*t2380;
  t2401 = 1. + t2381;
  t2505 = 0.4*t2401*t2504;
  t2510 = -0.4*t2508*t2509;
  t2511 = t2380*t2504;
  t2512 = t2508*t2509;
  t2513 = t2511 + t2512;
  t2517 = 0.8*t2513;
  t2518 = t2505 + t2510 + t2517;
  t2520 = t2489*t2485;
  t2521 = -1.*t2487*t2491;
  t2522 = t2520 + t2521;
  p_output1[0]=1.;
  p_output1[1]=t2518;
  p_output1[2]=t2518;
  p_output1[3]=-0.4*t2380*t2504 + 0.4*t2509*t2522 + 0.8*(t2511 - 1.*t2509*t2522);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_swing_foot_height_LeftStance.hh"

namespace LeftStance
{

void J_swing_foot_height_LeftStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
