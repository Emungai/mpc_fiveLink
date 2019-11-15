/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:43:00 GMT-05:00
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
  double t2801;
  double t2842;
  double t2486;
  double t2901;
  double t231;
  double t2832;
  double t2945;
  double t2958;
  double t3190;
  double t3201;
  double t3207;
  double t3212;
  double t3245;
  double t3263;
  double t3236;
  double t3261;
  double t3265;
  double t3272;
  double t3278;
  double t3280;
  double t3283;
  double t3284;
  double t353;
  double t2365;
  double t3094;
  double t3213;
  double t3214;
  double t3215;
  double t3219;
  double t3220;
  double t3339;
  double t3354;
  double t3356;
  double t3237;
  double t3239;
  double t3274;
  double t3286;
  double t3315;
  double t3317;
  double t3320;
  double t3321;
  double t3382;
  double t3383;
  double t3385;
  t2801 = Cos(var1[3]);
  t2842 = Sin(var1[2]);
  t2486 = Cos(var1[2]);
  t2901 = Sin(var1[3]);
  t231 = Cos(var1[4]);
  t2832 = t2486*t2801;
  t2945 = -1.*t2842*t2901;
  t2958 = t2832 + t2945;
  t3190 = -1.*t2801*t2842;
  t3201 = -1.*t2486*t2901;
  t3207 = t3190 + t3201;
  t3212 = Sin(var1[4]);
  t3245 = Cos(var1[5]);
  t3263 = Sin(var1[5]);
  t3236 = Cos(var1[6]);
  t3261 = t2486*t3245;
  t3265 = -1.*t2842*t3263;
  t3272 = t3261 + t3265;
  t3278 = -1.*t3245*t2842;
  t3280 = -1.*t2486*t3263;
  t3283 = t3278 + t3280;
  t3284 = Sin(var1[6]);
  t353 = -1.*t231;
  t2365 = 1. + t353;
  t3094 = 0.4*t2365*t2958;
  t3213 = -0.4*t3207*t3212;
  t3214 = t231*t2958;
  t3215 = t3207*t3212;
  t3219 = t3214 + t3215;
  t3220 = 0.8*t3219;
  t3339 = t2801*t2842;
  t3354 = t2486*t2901;
  t3356 = t3339 + t3354;
  t3237 = -1.*t3236;
  t3239 = 1. + t3237;
  t3274 = -0.4*t3239*t3272;
  t3286 = 0.4*t3283*t3284;
  t3315 = t3236*t3272;
  t3317 = t3283*t3284;
  t3320 = t3315 + t3317;
  t3321 = -0.8*t3320;
  t3382 = t3245*t2842;
  t3383 = t2486*t3263;
  t3385 = t3382 + t3383;
  p_output1[0]=t3094 + t3213 + t3220 + t3274 + t3286 + t3321;
  p_output1[1]=t3094 + t3213 + t3220;
  p_output1[2]=-0.4*t231*t2958 + 0.4*t3212*t3356 + 0.8*(t3214 - 1.*t3212*t3356);
  p_output1[3]=t3274 + t3286 + t3321;
  p_output1[4]=0.4*t3236*t3272 - 0.4*t3284*t3385 - 0.8*(t3315 - 1.*t3284*t3385);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_feetPosDiffInitDoubleSupportConstHeight.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_feetPosDiffInitDoubleSupportConstHeight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
