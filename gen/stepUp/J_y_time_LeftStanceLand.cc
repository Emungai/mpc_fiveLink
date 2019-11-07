/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:26:42 GMT-05:00
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
  double t2608;
  double t2614;
  double t2652;
  double t2665;
  double t2667;
  double t2671;
  double t2672;
  double t2673;
  double t2674;
  double t2675;
  double t2681;
  double t2682;
  double t2683;
  double t2686;
  double t2687;
  double t6866;
  double t6883;
  double t6885;
  double t6943;
  double t6944;
  double t6876;
  double t6877;
  double t6879;
  double t6880;
  double t6881;
  double t6882;
  double t6884;
  t2608 = -1.*var4[1];
  t2614 = var4[0] + t2608;
  t2652 = Power(t2614,-5);
  t2665 = t2608 + var1[0];
  t2667 = Power(t2665,4);
  t2671 = Power(t2614,-4);
  t2672 = Power(t2665,3);
  t2673 = 1/t2614;
  t2674 = -1.*t2673*t2665;
  t2675 = 1. + t2674;
  t2681 = Power(t2614,-3);
  t2682 = Power(t2665,2);
  t2683 = Power(t2675,2);
  t2686 = Power(t2614,-2);
  t2687 = Power(t2675,3);
  t6866 = Power(t2675,4);
  t6883 = Power(t2665,5);
  t6885 = Power(t2614,-6);
  t6943 = -1.*t2686*t2665;
  t6944 = t2673 + t6943;
  t6876 = Power(t2675,5);
  t6877 = -1.*t6876;
  t6879 = -5.*t2673*t2665*t6866;
  t6880 = -10.*t2686*t2682*t2687;
  t6881 = -10.*t2681*t2672*t2683;
  t6882 = -5.*t2671*t2667*t2675;
  t6884 = -1.*t2652*t6883;
  p_output1[0]=5.*t2673*t6866*var3[0] + 20.*t2665*t2686*t2687*var3[4] - 5.*t2673*t6866*var3[4] + 30.*t2681*t2682*t2683*var3[8] - 20.*t2665*t2686*t2687*var3[8] + 20.*t2671*t2672*t2675*var3[12] - 30.*t2681*t2682*t2683*var3[12] + 5.*t2652*t2667*var3[16] - 20.*t2671*t2672*t2675*var3[16] - 5.*t2652*t2667*var3[20];
  p_output1[1]=1.;
  p_output1[2]=t6877;
  p_output1[3]=t6879;
  p_output1[4]=t6880;
  p_output1[5]=t6881;
  p_output1[6]=t6882;
  p_output1[7]=t6884;
  p_output1[8]=-5.*t2665*t2686*t6866*var3[0] - 20.*t2681*t2682*t2687*var3[4] + 5.*t2665*t2686*t6866*var3[4] - 30.*t2671*t2672*t2683*var3[8] + 20.*t2681*t2682*t2687*var3[8] - 20.*t2652*t2667*t2675*var3[12] + 30.*t2671*t2672*t2683*var3[12] + 20.*t2652*t2667*t2675*var3[16] - 5.*t6883*t6885*var3[16] + 5.*t6883*t6885*var3[20];
  p_output1[9]=-5.*t6866*t6944*var3[0] + 5.*t2673*t6866*var3[4] - 5.*t2665*t2686*t6866*var3[4] - 20.*t2665*t2673*t2687*t6944*var3[4] - 20.*t2681*t2682*t2687*var3[8] + 20.*t2665*t2686*t2687*var3[8] - 30.*t2682*t2683*t2686*t6944*var3[8] - 30.*t2671*t2672*t2683*var3[12] + 30.*t2681*t2682*t2683*var3[12] - 20.*t2672*t2675*t2681*t6944*var3[12] - 20.*t2652*t2667*t2675*var3[16] + 20.*t2671*t2672*t2675*var3[16] - 5.*t2667*t2671*t6944*var3[16] + 5.*t2652*t2667*var3[20] - 5.*t6883*t6885*var3[20];
  p_output1[10]=5.*t2673*t6866*var3[1] + 20.*t2665*t2686*t2687*var3[5] - 5.*t2673*t6866*var3[5] + 30.*t2681*t2682*t2683*var3[9] - 20.*t2665*t2686*t2687*var3[9] + 20.*t2671*t2672*t2675*var3[13] - 30.*t2681*t2682*t2683*var3[13] + 5.*t2652*t2667*var3[17] - 20.*t2671*t2672*t2675*var3[17] - 5.*t2652*t2667*var3[21];
  p_output1[11]=1.;
  p_output1[12]=t6877;
  p_output1[13]=t6879;
  p_output1[14]=t6880;
  p_output1[15]=t6881;
  p_output1[16]=t6882;
  p_output1[17]=t6884;
  p_output1[18]=-5.*t2665*t2686*t6866*var3[1] - 20.*t2681*t2682*t2687*var3[5] + 5.*t2665*t2686*t6866*var3[5] - 30.*t2671*t2672*t2683*var3[9] + 20.*t2681*t2682*t2687*var3[9] - 20.*t2652*t2667*t2675*var3[13] + 30.*t2671*t2672*t2683*var3[13] + 20.*t2652*t2667*t2675*var3[17] - 5.*t6883*t6885*var3[17] + 5.*t6883*t6885*var3[21];
  p_output1[19]=-5.*t6866*t6944*var3[1] + 5.*t2673*t6866*var3[5] - 5.*t2665*t2686*t6866*var3[5] - 20.*t2665*t2673*t2687*t6944*var3[5] - 20.*t2681*t2682*t2687*var3[9] + 20.*t2665*t2686*t2687*var3[9] - 30.*t2682*t2683*t2686*t6944*var3[9] - 30.*t2671*t2672*t2683*var3[13] + 30.*t2681*t2682*t2683*var3[13] - 20.*t2672*t2675*t2681*t6944*var3[13] - 20.*t2652*t2667*t2675*var3[17] + 20.*t2671*t2672*t2675*var3[17] - 5.*t2667*t2671*t6944*var3[17] + 5.*t2652*t2667*var3[21] - 5.*t6883*t6885*var3[21];
  p_output1[20]=5.*t2673*t6866*var3[2] + 20.*t2665*t2686*t2687*var3[6] - 5.*t2673*t6866*var3[6] + 30.*t2681*t2682*t2683*var3[10] - 20.*t2665*t2686*t2687*var3[10] + 20.*t2671*t2672*t2675*var3[14] - 30.*t2681*t2682*t2683*var3[14] + 5.*t2652*t2667*var3[18] - 20.*t2671*t2672*t2675*var3[18] - 5.*t2652*t2667*var3[22];
  p_output1[21]=1.;
  p_output1[22]=t6877;
  p_output1[23]=t6879;
  p_output1[24]=t6880;
  p_output1[25]=t6881;
  p_output1[26]=t6882;
  p_output1[27]=t6884;
  p_output1[28]=-5.*t2665*t2686*t6866*var3[2] - 20.*t2681*t2682*t2687*var3[6] + 5.*t2665*t2686*t6866*var3[6] - 30.*t2671*t2672*t2683*var3[10] + 20.*t2681*t2682*t2687*var3[10] - 20.*t2652*t2667*t2675*var3[14] + 30.*t2671*t2672*t2683*var3[14] + 20.*t2652*t2667*t2675*var3[18] - 5.*t6883*t6885*var3[18] + 5.*t6883*t6885*var3[22];
  p_output1[29]=-5.*t6866*t6944*var3[2] + 5.*t2673*t6866*var3[6] - 5.*t2665*t2686*t6866*var3[6] - 20.*t2665*t2673*t2687*t6944*var3[6] - 20.*t2681*t2682*t2687*var3[10] + 20.*t2665*t2686*t2687*var3[10] - 30.*t2682*t2683*t2686*t6944*var3[10] - 30.*t2671*t2672*t2683*var3[14] + 30.*t2681*t2682*t2683*var3[14] - 20.*t2672*t2675*t2681*t6944*var3[14] - 20.*t2652*t2667*t2675*var3[18] + 20.*t2671*t2672*t2675*var3[18] - 5.*t2667*t2671*t6944*var3[18] + 5.*t2652*t2667*var3[22] - 5.*t6883*t6885*var3[22];
  p_output1[30]=5.*t2673*t6866*var3[3] + 20.*t2665*t2686*t2687*var3[7] - 5.*t2673*t6866*var3[7] + 30.*t2681*t2682*t2683*var3[11] - 20.*t2665*t2686*t2687*var3[11] + 20.*t2671*t2672*t2675*var3[15] - 30.*t2681*t2682*t2683*var3[15] + 5.*t2652*t2667*var3[19] - 20.*t2671*t2672*t2675*var3[19] - 5.*t2652*t2667*var3[23];
  p_output1[31]=1.;
  p_output1[32]=t6877;
  p_output1[33]=t6879;
  p_output1[34]=t6880;
  p_output1[35]=t6881;
  p_output1[36]=t6882;
  p_output1[37]=t6884;
  p_output1[38]=-5.*t2665*t2686*t6866*var3[3] - 20.*t2681*t2682*t2687*var3[7] + 5.*t2665*t2686*t6866*var3[7] - 30.*t2671*t2672*t2683*var3[11] + 20.*t2681*t2682*t2687*var3[11] - 20.*t2652*t2667*t2675*var3[15] + 30.*t2671*t2672*t2683*var3[15] + 20.*t2652*t2667*t2675*var3[19] - 5.*t6883*t6885*var3[19] + 5.*t6883*t6885*var3[23];
  p_output1[39]=-5.*t6866*t6944*var3[3] + 5.*t2673*t6866*var3[7] - 5.*t2665*t2686*t6866*var3[7] - 20.*t2665*t2673*t2687*t6944*var3[7] - 20.*t2681*t2682*t2687*var3[11] + 20.*t2665*t2686*t2687*var3[11] - 30.*t2682*t2683*t2686*t6944*var3[11] - 30.*t2671*t2672*t2683*var3[15] + 30.*t2681*t2682*t2683*var3[15] - 20.*t2672*t2675*t2681*t6944*var3[15] - 20.*t2652*t2667*t2675*var3[19] + 20.*t2671*t2672*t2675*var3[19] - 5.*t2667*t2671*t6944*var3[19] + 5.*t2652*t2667*var3[23] - 5.*t6883*t6885*var3[23];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_time_LeftStanceLand.hh"

namespace LeftStanceLand
{

void J_y_time_LeftStanceLand_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
