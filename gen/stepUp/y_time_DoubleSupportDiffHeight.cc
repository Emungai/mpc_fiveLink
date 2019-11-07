/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:58 GMT-05:00
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
  double t813;
  double t814;
  double t816;
  double t817;
  double t818;
  double t819;
  double t820;
  double t821;
  double t822;
  double t841;
  double t842;
  double t843;
  double t815;
  double t823;
  double t825;
  double t840;
  double t884;
  double t885;
  double t886;
  double t888;
  double t889;
  double t890;
  double t895;
  double t897;
  t813 = -1.*var4[1];
  t814 = var4[0] + t813;
  t816 = -1. + var5[0];
  t817 = -1. + var6[0];
  t818 = 1/t817;
  t819 = -1.*var1[0];
  t820 = t819 + var1[1];
  t821 = t816*t818*t820;
  t822 = t813 + var1[0] + t821;
  t841 = 1/t814;
  t842 = -1.*t841*t822;
  t843 = 1. + t842;
  t815 = Power(t814,-5);
  t823 = Power(t822,5);
  t825 = Power(t814,-4);
  t840 = Power(t822,4);
  t884 = Power(t814,-3);
  t885 = Power(t822,3);
  t886 = Power(t843,2);
  t888 = Power(t814,-2);
  t889 = Power(t822,2);
  t890 = Power(t843,3);
  t895 = Power(t843,4);
  t897 = Power(t843,5);
  p_output1[0]=var2[3] - 1.*t897*var3[0] - 5.*t822*t841*t895*var3[4] - 10.*t888*t889*t890*var3[8] - 10.*t884*t885*t886*var3[12] - 5.*t825*t840*t843*var3[16] - 1.*t815*t823*var3[20];
  p_output1[1]=var2[4] - 1.*t897*var3[1] - 5.*t822*t841*t895*var3[5] - 10.*t888*t889*t890*var3[9] - 10.*t884*t885*t886*var3[13] - 5.*t825*t840*t843*var3[17] - 1.*t815*t823*var3[21];
  p_output1[2]=var2[5] - 1.*t897*var3[2] - 5.*t822*t841*t895*var3[6] - 10.*t888*t889*t890*var3[10] - 10.*t884*t885*t886*var3[14] - 5.*t825*t840*t843*var3[18] - 1.*t815*t823*var3[22];
  p_output1[3]=var2[6] - 1.*t897*var3[3] - 5.*t822*t841*t895*var3[7] - 10.*t888*t889*t890*var3[11] - 10.*t884*t885*t886*var3[15] - 5.*t825*t840*t843*var3[19] - 1.*t815*t823*var3[23];
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

#include "y_time_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void y_time_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
