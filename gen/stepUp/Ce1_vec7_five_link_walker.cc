/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:08 GMT-05:00
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
  double t12238;
  double t7156;
  double t7857;
  double t12260;
  double t2678;
  double t7889;
  double t12261;
  double t12262;
  double t12272;
  double t12273;
  double t12286;
  double t12287;
  double t12288;
  double t12294;
  double t12295;
  double t12277;
  double t12281;
  double t12282;
  double t12300;
  double t12308;
  double t12309;
  double t12317;
  double t12326;
  double t12327;
  double t12328;
  double t12329;
  double t12340;
  double t12341;
  double t12342;
  double t12333;
  double t12336;
  double t12337;
  double t12338;
  double t12339;
  double t12343;
  double t12344;
  double t12347;
  double t12350;
  t12238 = Cos(var1[5]);
  t7156 = Cos(var1[6]);
  t7857 = Sin(var1[5]);
  t12260 = Sin(var1[6]);
  t2678 = Cos(var1[2]);
  t7889 = -1.*t7156*t7857;
  t12261 = -1.*t12238*t12260;
  t12262 = t7889 + t12261;
  t12272 = t2678*t12262;
  t12273 = Sin(var1[2]);
  t12286 = -1.*t12238*t7156;
  t12287 = t7857*t12260;
  t12288 = t12286 + t12287;
  t12294 = t12273*t12288;
  t12295 = t12272 + t12294;
  t12277 = t12238*t7156;
  t12281 = -1.*t7857*t12260;
  t12282 = t12277 + t12281;
  t12300 = -1.*t12273*t12262;
  t12308 = t2678*t12288;
  t12309 = t12300 + t12308;
  t12317 = -1.*t7156;
  t12326 = 1. + t12317;
  t12327 = 0.4*t12326;
  t12328 = 0.64*t7156;
  t12329 = t12327 + t12328;
  t12340 = t12238*t12329;
  t12341 = -0.24*t7857*t12260;
  t12342 = t12340 + t12341;
  t12333 = -0.24*t12238*t12260;
  t12336 = t12329*t7857;
  t12337 = 0.24*t12238*t12260;
  t12338 = t12336 + t12337;
  t12339 = t12338*t12282;
  t12343 = t12262*t12342;
  t12344 = t7156*t7857;
  t12347 = t12238*t12260;
  t12350 = t12344 + t12347;
  p_output1[0]=var2[6]*(-0.384*(t12272 - 1.*t12273*t12282)*var2[2] - 0.384*t12295*var2[5] - 0.384*t12295*var2[6]);
  p_output1[1]=var2[6]*(-0.384*(t12300 - 1.*t12282*t2678)*var2[2] - 0.384*t12309*var2[5] - 0.384*t12309*var2[6]);
  p_output1[2]=var2[6]*(-0.384*(t12339 + t12343 + t12342*t12350 + t12282*(t12333 - 1.*t12329*t7857))*var2[5] - 0.384*(t12339 + t12343 + t12350*(t12341 + 0.24*t12238*t7156) + t12282*(t12333 - 0.24*t7156*t7857))*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-0.384*(-1.*t12260*t12329 + 0.24*t12260*t7156)*Power(var2[6],2);
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

#include "Ce1_vec7_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void Ce1_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
