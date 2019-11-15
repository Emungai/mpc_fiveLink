/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:38:55 GMT-05:00
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
  double t2395;
  double t2380;
  double t2381;
  double t2396;
  double t2400;
  double t2382;
  double t2397;
  double t2398;
  double t2356;
  double t2401;
  double t2405;
  double t2406;
  double t2476;
  double t2485;
  double t2487;
  double t2488;
  double t2489;
  double t2507;
  double t2508;
  double t2509;
  double t2399;
  double t2435;
  double t2517;
  double t2518;
  double t2519;
  double t2491;
  double t2503;
  double t2504;
  double t2505;
  double t2506;
  double t2510;
  double t2511;
  double t2512;
  double t2513;
  double t2520;
  double t2521;
  double t2522;
  double t2523;
  double t2524;
  double t2525;
  t2395 = Cos(var1[3]);
  t2380 = Cos(var1[4]);
  t2381 = Sin(var1[3]);
  t2396 = Sin(var1[4]);
  t2400 = Cos(var1[2]);
  t2382 = -1.*t2380*t2381;
  t2397 = -1.*t2395*t2396;
  t2398 = t2382 + t2397;
  t2356 = Sin(var1[2]);
  t2401 = t2395*t2380;
  t2405 = -1.*t2381*t2396;
  t2406 = t2401 + t2405;
  t2476 = -1.*t2380;
  t2485 = 1. + t2476;
  t2487 = 0.4*t2485;
  t2488 = 0.64*t2380;
  t2489 = t2487 + t2488;
  t2507 = t2395*t2489;
  t2508 = -0.24*t2381*t2396;
  t2509 = t2507 + t2508;
  t2399 = -1.*t2356*t2398;
  t2435 = t2400*t2398;
  t2517 = -1.*t2395*t2380;
  t2518 = t2381*t2396;
  t2519 = t2517 + t2518;
  t2491 = -0.24*t2395*t2396;
  t2503 = t2489*t2381;
  t2504 = 0.24*t2395*t2396;
  t2505 = t2503 + t2504;
  t2506 = t2505*t2406;
  t2510 = t2398*t2509;
  t2511 = t2380*t2381;
  t2512 = t2395*t2396;
  t2513 = t2511 + t2512;
  t2520 = t2400*t2519;
  t2521 = t2399 + t2520;
  t2522 = 0.384*var2[1]*t2521;
  t2523 = t2356*t2519;
  t2524 = t2435 + t2523;
  t2525 = 0.384*var2[0]*t2524;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.384*(-1.*t2356*t2406 + t2435)*var2[0] + 0.384*(t2399 - 1.*t2400*t2406)*var2[1])*var2[4];
  p_output1[3]=(t2522 + t2525 + 0.384*(t2406*(-1.*t2381*t2489 + t2491) + t2506 + t2510 + t2509*t2513)*var2[2])*var2[4];
  p_output1[4]=(t2522 + t2525 + 0.384*(t2406*(-0.24*t2380*t2381 + t2491) + t2506 + t2510 + (0.24*t2380*t2395 + t2508)*t2513)*var2[2] + 0.384*(0.24*t2380*t2396 - 1.*t2396*t2489)*var2[3])*var2[4];
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
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

#include "Ce3_vec5_five_link_walker.hh"

namespace Pattern[DS1, Blank[opt]]
{

void Ce3_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
