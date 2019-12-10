/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:23:25 GMT-05:00
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
  double t8938;
  double t8882;
  double t8892;
  double t8897;
  double t8934;
  double t8936;
  double t8939;
  double t8940;
  double t8941;
  double t8942;
  double t8943;
  double t8944;
  double t8949;
  double t8952;
  double t8953;
  double t8954;
  double t8955;
  double t8956;
  double t8959;
  double t8960;
  double t8961;
  double t8964;
  double t8965;
  double t8968;
  double t8989;
  double t8991;
  double t9005;
  double t9006;
  double t8983;
  double t8984;
  double t8985;
  double t8986;
  double t8987;
  double t8988;
  double t8990;
  t8938 = -1.*var4[1];
  t8882 = -1. + var5[0];
  t8892 = -1. + var6[0];
  t8897 = 1/t8892;
  t8934 = -1.*t8882*t8897;
  t8936 = 1. + t8934;
  t8939 = var4[0] + t8938;
  t8940 = Power(t8939,-5);
  t8941 = -1.*var1[0];
  t8942 = t8941 + var1[1];
  t8943 = t8882*t8897*t8942;
  t8944 = t8938 + var1[0] + t8943;
  t8949 = Power(t8944,4);
  t8952 = Power(t8939,-4);
  t8953 = Power(t8944,3);
  t8954 = 1/t8939;
  t8955 = -1.*t8954*t8944;
  t8956 = 1. + t8955;
  t8959 = Power(t8939,-3);
  t8960 = Power(t8944,2);
  t8961 = Power(t8956,2);
  t8964 = Power(t8939,-2);
  t8965 = Power(t8956,3);
  t8968 = Power(t8956,4);
  t8989 = Power(t8944,5);
  t8991 = Power(t8939,-6);
  t9005 = -1.*t8964*t8944;
  t9006 = t8954 + t9005;
  t8983 = Power(t8956,5);
  t8984 = -1.*t8983;
  t8985 = -5.*t8954*t8944*t8968;
  t8986 = -10.*t8964*t8960*t8965;
  t8987 = -10.*t8959*t8953*t8961;
  t8988 = -5.*t8952*t8949*t8956;
  t8990 = -1.*t8940*t8989;
  p_output1[0]=5.*t8936*t8954*t8968*var3[0] + 20.*t8936*t8944*t8964*t8965*var3[4] - 5.*t8936*t8954*t8968*var3[4] + 30.*t8936*t8959*t8960*t8961*var3[8] - 20.*t8936*t8944*t8964*t8965*var3[8] + 20.*t8936*t8952*t8953*t8956*var3[12] - 30.*t8936*t8959*t8960*t8961*var3[12] + 5.*t8936*t8940*t8949*var3[16] - 20.*t8936*t8952*t8953*t8956*var3[16] - 5.*t8936*t8940*t8949*var3[20];
  p_output1[1]=5.*t8882*t8897*t8954*t8968*var3[0] + 20.*t8882*t8897*t8944*t8964*t8965*var3[4] - 5.*t8882*t8897*t8954*t8968*var3[4] + 30.*t8882*t8897*t8959*t8960*t8961*var3[8] - 20.*t8882*t8897*t8944*t8964*t8965*var3[8] + 20.*t8882*t8897*t8952*t8953*t8956*var3[12] - 30.*t8882*t8897*t8959*t8960*t8961*var3[12] + 5.*t8882*t8897*t8940*t8949*var3[16] - 20.*t8882*t8897*t8952*t8953*t8956*var3[16] - 5.*t8882*t8897*t8940*t8949*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t8984;
  p_output1[4]=t8985;
  p_output1[5]=t8986;
  p_output1[6]=t8987;
  p_output1[7]=t8988;
  p_output1[8]=t8990;
  p_output1[9]=-5.*t8944*t8964*t8968*var3[0] - 20.*t8959*t8960*t8965*var3[4] + 5.*t8944*t8964*t8968*var3[4] - 30.*t8952*t8953*t8961*var3[8] + 20.*t8959*t8960*t8965*var3[8] - 20.*t8940*t8949*t8956*var3[12] + 30.*t8952*t8953*t8961*var3[12] + 20.*t8940*t8949*t8956*var3[16] - 5.*t8989*t8991*var3[16] + 5.*t8989*t8991*var3[20];
  p_output1[10]=-5.*t8968*t9006*var3[0] + 5.*t8954*t8968*var3[4] - 5.*t8944*t8964*t8968*var3[4] - 20.*t8944*t8954*t8965*t9006*var3[4] - 20.*t8959*t8960*t8965*var3[8] + 20.*t8944*t8964*t8965*var3[8] - 30.*t8960*t8961*t8964*t9006*var3[8] - 30.*t8952*t8953*t8961*var3[12] + 30.*t8959*t8960*t8961*var3[12] - 20.*t8953*t8956*t8959*t9006*var3[12] - 20.*t8940*t8949*t8956*var3[16] + 20.*t8952*t8953*t8956*var3[16] - 5.*t8949*t8952*t9006*var3[16] + 5.*t8940*t8949*var3[20] - 5.*t8989*t8991*var3[20];
  p_output1[11]=5.*t8936*t8954*t8968*var3[1] + 20.*t8936*t8944*t8964*t8965*var3[5] - 5.*t8936*t8954*t8968*var3[5] + 30.*t8936*t8959*t8960*t8961*var3[9] - 20.*t8936*t8944*t8964*t8965*var3[9] + 20.*t8936*t8952*t8953*t8956*var3[13] - 30.*t8936*t8959*t8960*t8961*var3[13] + 5.*t8936*t8940*t8949*var3[17] - 20.*t8936*t8952*t8953*t8956*var3[17] - 5.*t8936*t8940*t8949*var3[21];
  p_output1[12]=5.*t8882*t8897*t8954*t8968*var3[1] + 20.*t8882*t8897*t8944*t8964*t8965*var3[5] - 5.*t8882*t8897*t8954*t8968*var3[5] + 30.*t8882*t8897*t8959*t8960*t8961*var3[9] - 20.*t8882*t8897*t8944*t8964*t8965*var3[9] + 20.*t8882*t8897*t8952*t8953*t8956*var3[13] - 30.*t8882*t8897*t8959*t8960*t8961*var3[13] + 5.*t8882*t8897*t8940*t8949*var3[17] - 20.*t8882*t8897*t8952*t8953*t8956*var3[17] - 5.*t8882*t8897*t8940*t8949*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t8984;
  p_output1[15]=t8985;
  p_output1[16]=t8986;
  p_output1[17]=t8987;
  p_output1[18]=t8988;
  p_output1[19]=t8990;
  p_output1[20]=-5.*t8944*t8964*t8968*var3[1] - 20.*t8959*t8960*t8965*var3[5] + 5.*t8944*t8964*t8968*var3[5] - 30.*t8952*t8953*t8961*var3[9] + 20.*t8959*t8960*t8965*var3[9] - 20.*t8940*t8949*t8956*var3[13] + 30.*t8952*t8953*t8961*var3[13] + 20.*t8940*t8949*t8956*var3[17] - 5.*t8989*t8991*var3[17] + 5.*t8989*t8991*var3[21];
  p_output1[21]=-5.*t8968*t9006*var3[1] + 5.*t8954*t8968*var3[5] - 5.*t8944*t8964*t8968*var3[5] - 20.*t8944*t8954*t8965*t9006*var3[5] - 20.*t8959*t8960*t8965*var3[9] + 20.*t8944*t8964*t8965*var3[9] - 30.*t8960*t8961*t8964*t9006*var3[9] - 30.*t8952*t8953*t8961*var3[13] + 30.*t8959*t8960*t8961*var3[13] - 20.*t8953*t8956*t8959*t9006*var3[13] - 20.*t8940*t8949*t8956*var3[17] + 20.*t8952*t8953*t8956*var3[17] - 5.*t8949*t8952*t9006*var3[17] + 5.*t8940*t8949*var3[21] - 5.*t8989*t8991*var3[21];
  p_output1[22]=5.*t8936*t8954*t8968*var3[2] + 20.*t8936*t8944*t8964*t8965*var3[6] - 5.*t8936*t8954*t8968*var3[6] + 30.*t8936*t8959*t8960*t8961*var3[10] - 20.*t8936*t8944*t8964*t8965*var3[10] + 20.*t8936*t8952*t8953*t8956*var3[14] - 30.*t8936*t8959*t8960*t8961*var3[14] + 5.*t8936*t8940*t8949*var3[18] - 20.*t8936*t8952*t8953*t8956*var3[18] - 5.*t8936*t8940*t8949*var3[22];
  p_output1[23]=5.*t8882*t8897*t8954*t8968*var3[2] + 20.*t8882*t8897*t8944*t8964*t8965*var3[6] - 5.*t8882*t8897*t8954*t8968*var3[6] + 30.*t8882*t8897*t8959*t8960*t8961*var3[10] - 20.*t8882*t8897*t8944*t8964*t8965*var3[10] + 20.*t8882*t8897*t8952*t8953*t8956*var3[14] - 30.*t8882*t8897*t8959*t8960*t8961*var3[14] + 5.*t8882*t8897*t8940*t8949*var3[18] - 20.*t8882*t8897*t8952*t8953*t8956*var3[18] - 5.*t8882*t8897*t8940*t8949*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t8984;
  p_output1[26]=t8985;
  p_output1[27]=t8986;
  p_output1[28]=t8987;
  p_output1[29]=t8988;
  p_output1[30]=t8990;
  p_output1[31]=-5.*t8944*t8964*t8968*var3[2] - 20.*t8959*t8960*t8965*var3[6] + 5.*t8944*t8964*t8968*var3[6] - 30.*t8952*t8953*t8961*var3[10] + 20.*t8959*t8960*t8965*var3[10] - 20.*t8940*t8949*t8956*var3[14] + 30.*t8952*t8953*t8961*var3[14] + 20.*t8940*t8949*t8956*var3[18] - 5.*t8989*t8991*var3[18] + 5.*t8989*t8991*var3[22];
  p_output1[32]=-5.*t8968*t9006*var3[2] + 5.*t8954*t8968*var3[6] - 5.*t8944*t8964*t8968*var3[6] - 20.*t8944*t8954*t8965*t9006*var3[6] - 20.*t8959*t8960*t8965*var3[10] + 20.*t8944*t8964*t8965*var3[10] - 30.*t8960*t8961*t8964*t9006*var3[10] - 30.*t8952*t8953*t8961*var3[14] + 30.*t8959*t8960*t8961*var3[14] - 20.*t8953*t8956*t8959*t9006*var3[14] - 20.*t8940*t8949*t8956*var3[18] + 20.*t8952*t8953*t8956*var3[18] - 5.*t8949*t8952*t9006*var3[18] + 5.*t8940*t8949*var3[22] - 5.*t8989*t8991*var3[22];
  p_output1[33]=5.*t8936*t8954*t8968*var3[3] + 20.*t8936*t8944*t8964*t8965*var3[7] - 5.*t8936*t8954*t8968*var3[7] + 30.*t8936*t8959*t8960*t8961*var3[11] - 20.*t8936*t8944*t8964*t8965*var3[11] + 20.*t8936*t8952*t8953*t8956*var3[15] - 30.*t8936*t8959*t8960*t8961*var3[15] + 5.*t8936*t8940*t8949*var3[19] - 20.*t8936*t8952*t8953*t8956*var3[19] - 5.*t8936*t8940*t8949*var3[23];
  p_output1[34]=5.*t8882*t8897*t8954*t8968*var3[3] + 20.*t8882*t8897*t8944*t8964*t8965*var3[7] - 5.*t8882*t8897*t8954*t8968*var3[7] + 30.*t8882*t8897*t8959*t8960*t8961*var3[11] - 20.*t8882*t8897*t8944*t8964*t8965*var3[11] + 20.*t8882*t8897*t8952*t8953*t8956*var3[15] - 30.*t8882*t8897*t8959*t8960*t8961*var3[15] + 5.*t8882*t8897*t8940*t8949*var3[19] - 20.*t8882*t8897*t8952*t8953*t8956*var3[19] - 5.*t8882*t8897*t8940*t8949*var3[23];
  p_output1[35]=1.;
  p_output1[36]=t8984;
  p_output1[37]=t8985;
  p_output1[38]=t8986;
  p_output1[39]=t8987;
  p_output1[40]=t8988;
  p_output1[41]=t8990;
  p_output1[42]=-5.*t8944*t8964*t8968*var3[3] - 20.*t8959*t8960*t8965*var3[7] + 5.*t8944*t8964*t8968*var3[7] - 30.*t8952*t8953*t8961*var3[11] + 20.*t8959*t8960*t8965*var3[11] - 20.*t8940*t8949*t8956*var3[15] + 30.*t8952*t8953*t8961*var3[15] + 20.*t8940*t8949*t8956*var3[19] - 5.*t8989*t8991*var3[19] + 5.*t8989*t8991*var3[23];
  p_output1[43]=-5.*t8968*t9006*var3[3] + 5.*t8954*t8968*var3[7] - 5.*t8944*t8964*t8968*var3[7] - 20.*t8944*t8954*t8965*t9006*var3[7] - 20.*t8959*t8960*t8965*var3[11] + 20.*t8944*t8964*t8965*var3[11] - 30.*t8960*t8961*t8964*t9006*var3[11] - 30.*t8952*t8953*t8961*var3[15] + 30.*t8959*t8960*t8961*var3[15] - 20.*t8953*t8956*t8959*t9006*var3[15] - 20.*t8940*t8949*t8956*var3[19] + 20.*t8952*t8953*t8956*var3[19] - 5.*t8949*t8952*t9006*var3[19] + 5.*t8940*t8949*var3[23] - 5.*t8989*t8991*var3[23];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_time_RightStance.hh"

namespace RightStance
{

void J_y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
