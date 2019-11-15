/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:41:59 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t8924;
  double t8921;
  double t8922;
  double t8925;
  double t3705;
  double t8923;
  double t8926;
  double t8927;
  double t8936;
  double t8937;
  double t8938;
  double t8939;
  double t8916;
  double t8917;
  double t8963;
  double t8964;
  double t8965;
  double t8962;
  double t8966;
  double t8967;
  double t8968;
  double t8969;
  double t8970;
  double t8971;
  double t8976;
  double t8977;
  double t8978;
  double t8979;
  double t8980;
  double t8981;
  double t8984;
  double t8985;
  double t8986;
  double t8987;
  double t8988;
  double t8989;
  double t8990;
  double t9003;
  double t9004;
  double t9005;
  double t9002;
  double t9006;
  double t9007;
  double t9008;
  double t9009;
  double t9010;
  double t9001;
  double t9011;
  double t9012;
  double t9013;
  double t9023;
  double t9025;
  double t9030;
  double t9031;
  double t9032;
  double t9033;
  double t9034;
  double t9040;
  double t9041;
  double t9042;
  double t9043;
  double t9044;
  double t9045;
  double t9039;
  double t9046;
  double t9047;
  double t9048;
  t8924 = Cos(var1[2]);
  t8921 = Cos(var1[5]);
  t8922 = Sin(var1[2]);
  t8925 = Sin(var1[5]);
  t3705 = Cos(var1[6]);
  t8923 = t8921*t8922;
  t8926 = t8924*t8925;
  t8927 = t8923 + t8926;
  t8936 = t8924*t8921;
  t8937 = -1.*t8922*t8925;
  t8938 = t8936 + t8937;
  t8939 = Sin(var1[6]);
  t8916 = -1.*t3705;
  t8917 = 1. + t8916;
  t8963 = -1.*t8921*t8922;
  t8964 = -1.*t8924*t8925;
  t8965 = t8963 + t8964;
  t8962 = 0.4*t8917*t8938;
  t8966 = -0.4*t8965*t8939;
  t8967 = t3705*t8938;
  t8968 = t8965*t8939;
  t8969 = t8967 + t8968;
  t8970 = 0.8*t8969;
  t8971 = t8962 + t8966 + t8970;
  t8976 = -0.4*t3705*t8938;
  t8977 = 0.4*t8927*t8939;
  t8978 = -1.*t8927*t8939;
  t8979 = t8967 + t8978;
  t8980 = 0.8*t8979;
  t8981 = t8976 + t8977 + t8980;
  t8984 = -0.4*t3705*t8965;
  t8985 = 0.4*t8938*t8939;
  t8986 = t3705*t8965;
  t8987 = -1.*t8938*t8939;
  t8988 = t8986 + t8987;
  t8989 = 0.8*t8988;
  t8990 = t8984 + t8985 + t8989;
  t9003 = -1.*t8924*t8921;
  t9004 = t8922*t8925;
  t9005 = t9003 + t9004;
  t9002 = 0.4*t8917*t8965;
  t9006 = -0.4*t9005*t8939;
  t9007 = t9005*t8939;
  t9008 = t8986 + t9007;
  t9009 = 0.8*t9008;
  t9010 = t9002 + t9006 + t9009;
  t9001 = var2[6]*t8990;
  t9011 = var2[2]*t9010;
  t9012 = var2[5]*t9010;
  t9013 = t9001 + t9011 + t9012;
  t9023 = 0.4*t8965*t8939;
  t9025 = -1.*t8965*t8939;
  t9030 = -0.4*t3705*t9005;
  t9031 = t3705*t9005;
  t9032 = t9031 + t9025;
  t9033 = 0.8*t9032;
  t9034 = t9030 + t9023 + t9033;
  t9040 = 0.4*t8917*t9005;
  t9041 = -0.4*t8927*t8939;
  t9042 = t8927*t8939;
  t9043 = t9031 + t9042;
  t9044 = 0.8*t9043;
  t9045 = t9040 + t9041 + t9044;
  t9039 = var2[6]*t9034;
  t9046 = var2[2]*t9045;
  t9047 = var2[5]*t9045;
  t9048 = t9039 + t9046 + t9047;
  p_output1[0]=0.4*t8917*t8927 - 0.4*t8938*t8939 + 0.8*(t3705*t8927 + t8938*t8939) + var1[0] + var2[0] + t8971*var2[2] + t9013*var2[2] + t8971*var2[5] + t9013*var2[5] + t8981*var2[6] + var2[6]*(t8990*var2[2] + t8990*var2[5] + (0.4*t3705*t8927 + t8985 + 0.8*(-1.*t3705*t8927 + t8987))*var2[6]) + var3[0] + t8971*var3[2] + t8971*var3[5] + t8981*var3[6] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t8962 + t8966 + t8970 + t9001 + t9011 + t9012 + var1[1] + var2[1] + t9048*var2[2] + t9048*var2[5] + var2[6]*(t9034*var2[2] + t9034*var2[5] + (0.4*t3705*t8938 + t9023 + 0.8*(-1.*t3705*t8938 + t9025))*var2[6]) + var3[1] + t9010*var3[2] + t9010*var3[5] + t8990*var3[6] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_LeftToe_DoubleSupportConstHeight.hh"

namespace Pattern[DS1, Blank[opt]]
{

void ddh_LeftToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
