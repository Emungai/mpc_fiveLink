/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:19:04 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t5589;
  double t5689;
  double t11641;
  double t11642;
  double t11643;
  double t11649;
  double t11650;
  double t11651;
  double t11652;
  double t11657;
  double t11658;
  double t11659;
  double t11640;
  double t11653;
  double t11655;
  double t11656;
  double t11661;
  double t11666;
  double t11667;
  double t11669;
  double t11671;
  double t11705;
  double t11707;
  double t11709;
  t5589 = -1.*var4[1];
  t5689 = var4[0] + t5589;
  t11641 = -1. + var5[0];
  t11642 = -1. + var6[0];
  t11643 = 1/t11642;
  t11649 = -1.*var1[0];
  t11650 = t11649 + var1[1];
  t11651 = t11641*t11643*t11650;
  t11652 = t5589 + var1[0] + t11651;
  t11657 = 1/t5689;
  t11658 = -1.*t11657*t11652;
  t11659 = 1. + t11658;
  t11640 = Power(t5689,-5);
  t11653 = Power(t11652,5);
  t11655 = Power(t5689,-4);
  t11656 = Power(t11652,4);
  t11661 = Power(t5689,-3);
  t11666 = Power(t11652,3);
  t11667 = Power(t11659,2);
  t11669 = Power(t5689,-2);
  t11671 = Power(t11652,2);
  t11705 = Power(t11659,3);
  t11707 = Power(t11659,4);
  t11709 = Power(t11659,5);
  p_output1[0]=var2[3] - 1.*t11709*var3[0] - 5.*t11652*t11657*t11707*var3[4] - 10.*t11669*t11671*t11705*var3[8] - 10.*t11661*t11666*t11667*var3[12] - 5.*t11655*t11656*t11659*var3[16] - 1.*t11640*t11653*var3[20];
  p_output1[1]=var2[4] - 1.*t11709*var3[1] - 5.*t11652*t11657*t11707*var3[5] - 10.*t11669*t11671*t11705*var3[9] - 10.*t11661*t11666*t11667*var3[13] - 5.*t11655*t11656*t11659*var3[17] - 1.*t11640*t11653*var3[21];
  p_output1[2]=var2[5] - 1.*t11709*var3[2] - 5.*t11652*t11657*t11707*var3[6] - 10.*t11669*t11671*t11705*var3[10] - 10.*t11661*t11666*t11667*var3[14] - 5.*t11655*t11656*t11659*var3[18] - 1.*t11640*t11653*var3[22];
  p_output1[3]=var2[6] - 1.*t11709*var3[3] - 5.*t11652*t11657*t11707*var3[7] - 10.*t11669*t11671*t11705*var3[11] - 10.*t11661*t11666*t11667*var3[15] - 5.*t11655*t11656*t11659*var3[19] - 1.*t11640*t11653*var3[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "y_time_RightStance.hh"

namespace Pattern[righStance, Blank[opt]]
{

void y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
