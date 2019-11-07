/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:25:07 GMT-05:00
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
  double t6426;
  double t6402;
  double t6413;
  double t6427;
  double t2916;
  double t6417;
  double t6478;
  double t6479;
  double t6481;
  double t6482;
  double t6486;
  double t6487;
  double t5885;
  double t6223;
  double t6498;
  double t6499;
  double t6505;
  double t6480;
  double t6488;
  double t6489;
  double t6490;
  double t6491;
  double t6492;
  double t6493;
  double t6497;
  double t6506;
  double t6507;
  double t6508;
  double t6509;
  double t6510;
  double t6511;
  double t6512;
  t6426 = Cos(var1[2]);
  t6402 = Cos(var1[3]);
  t6413 = Sin(var1[2]);
  t6427 = Sin(var1[3]);
  t2916 = Cos(var1[4]);
  t6417 = t6402*t6413;
  t6478 = t6426*t6427;
  t6479 = t6417 + t6478;
  t6481 = t6426*t6402;
  t6482 = -1.*t6413*t6427;
  t6486 = t6481 + t6482;
  t6487 = Sin(var1[4]);
  t5885 = -1.*t2916;
  t6223 = 1. + t5885;
  t6498 = -1.*t6402*t6413;
  t6499 = -1.*t6426*t6427;
  t6505 = t6498 + t6499;
  t6480 = 0.4*t6223*t6479;
  t6488 = -0.4*t6486*t6487;
  t6489 = t2916*t6479;
  t6490 = t6486*t6487;
  t6491 = t6489 + t6490;
  t6492 = 0.8*t6491;
  t6493 = -0.35 + var1[0] + t6480 + t6488 + t6492;
  t6497 = 0.4*t6223*t6486;
  t6506 = -0.4*t6505*t6487;
  t6507 = t2916*t6486;
  t6508 = t6505*t6487;
  t6509 = t6507 + t6508;
  t6510 = 0.8*t6509;
  t6511 = t6497 + t6506 + t6510;
  t6512 = 2.*t6511*t6493;
  p_output1[0]=2.*t6493;
  p_output1[1]=t6512;
  p_output1[2]=t6512;
  p_output1[3]=2.*t6493*(-0.4*t2916*t6486 + 0.4*t6479*t6487 + 0.8*(-1.*t6479*t6487 + t6507));
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

#include "J_rFootPosCircleLeftStanceLift.hh"

namespace LeftStanceLift
{

void J_rFootPosCircleLeftStanceLift_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
