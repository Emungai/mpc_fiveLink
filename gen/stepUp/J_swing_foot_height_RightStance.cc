/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:08:22 GMT-05:00
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
  double t4263;
  double t4186;
  double t4218;
  double t4352;
  double t356;
  double t4245;
  double t4358;
  double t4361;
  double t4380;
  double t4390;
  double t4401;
  double t4402;
  double t2720;
  double t4112;
  double t4375;
  double t4404;
  double t4410;
  double t4411;
  double t4455;
  double t4484;
  double t4493;
  double t4594;
  double t4615;
  double t4622;
  t4263 = Cos(var1[2]);
  t4186 = Cos(var1[5]);
  t4218 = Sin(var1[2]);
  t4352 = Sin(var1[5]);
  t356 = Cos(var1[6]);
  t4245 = -1.*t4186*t4218;
  t4358 = -1.*t4263*t4352;
  t4361 = t4245 + t4358;
  t4380 = -1.*t4263*t4186;
  t4390 = t4218*t4352;
  t4401 = t4380 + t4390;
  t4402 = Sin(var1[6]);
  t2720 = -1.*t356;
  t4112 = 1. + t2720;
  t4375 = 0.4*t4112*t4361;
  t4404 = -0.4*t4401*t4402;
  t4410 = t356*t4361;
  t4411 = t4401*t4402;
  t4455 = t4410 + t4411;
  t4484 = 0.8*t4455;
  t4493 = t4375 + t4404 + t4484;
  t4594 = t4263*t4186;
  t4615 = -1.*t4218*t4352;
  t4622 = t4594 + t4615;
  p_output1[0]=1.;
  p_output1[1]=t4493;
  p_output1[2]=t4493;
  p_output1[3]=-0.4*t356*t4361 + 0.4*t4402*t4622 + 0.8*(t4410 - 1.*t4402*t4622);
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

#include "J_swing_foot_height_RightStance.hh"

namespace RightStance
{

void J_swing_foot_height_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
