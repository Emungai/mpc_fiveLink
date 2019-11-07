/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:37 GMT-05:00
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
  double t7750;
  double t2870;
  double t2987;
  double t8948;
  double t2830;
  double t4975;
  double t8949;
  double t8950;
  double t8966;
  double t8967;
  double t8968;
  double t8969;
  double t8971;
  double t9005;
  double t9006;
  double t9007;
  double t8980;
  double t8983;
  double t9004;
  double t9008;
  double t9009;
  double t9010;
  double t9011;
  double t9012;
  double t8965;
  double t8970;
  double t8972;
  double t8973;
  double t8977;
  double t8978;
  double t8979;
  double t9013;
  double t9014;
  double t9015;
  double t9018;
  double t9019;
  double t9020;
  double t9028;
  double t9029;
  double t9030;
  double t9031;
  double t9032;
  double t9033;
  double t9034;
  double t9043;
  double t9050;
  double t9051;
  double t9052;
  double t9053;
  double t9060;
  double t9061;
  double t9041;
  double t9042;
  double t9044;
  double t9045;
  double t9046;
  double t9047;
  double t9048;
  double t9062;
  double t9063;
  double t9067;
  t7750 = Cos(var1[2]);
  t2870 = Cos(var1[5]);
  t2987 = Sin(var1[2]);
  t8948 = Sin(var1[5]);
  t2830 = Cos(var1[6]);
  t4975 = -1.*t2870*t2987;
  t8949 = -1.*t7750*t8948;
  t8950 = t4975 + t8949;
  t8966 = t7750*t2870;
  t8967 = -1.*t2987*t8948;
  t8968 = t8966 + t8967;
  t8969 = Sin(var1[6]);
  t8971 = t2830*t8950;
  t9005 = -1.*t7750*t2870;
  t9006 = t2987*t8948;
  t9007 = t9005 + t9006;
  t8980 = -1.*t2830;
  t8983 = 1. + t8980;
  t9004 = 0.4*t8983*t8950;
  t9008 = -0.4*t9007*t8969;
  t9009 = t9007*t8969;
  t9010 = t8971 + t9009;
  t9011 = 0.8*t9010;
  t9012 = t9004 + t9008 + t9011;
  t8965 = -0.4*t2830*t8950;
  t8970 = 0.4*t8968*t8969;
  t8972 = -1.*t8968*t8969;
  t8973 = t8971 + t8972;
  t8977 = 0.8*t8973;
  t8978 = t8965 + t8970 + t8977;
  t8979 = var2[6]*t8978;
  t9013 = var2[2]*t9012;
  t9014 = var2[5]*t9012;
  t9015 = t8979 + t9013 + t9014;
  t9018 = t2870*t2987;
  t9019 = t7750*t8948;
  t9020 = t9018 + t9019;
  t9028 = 0.4*t8983*t8968;
  t9029 = -0.4*t8950*t8969;
  t9030 = t2830*t8968;
  t9031 = t8950*t8969;
  t9032 = t9030 + t9031;
  t9033 = 0.8*t9032;
  t9034 = t9028 + t9029 + t9033;
  t9043 = t2830*t9007;
  t9050 = 0.4*t8983*t9007;
  t9051 = -0.4*t9020*t8969;
  t9052 = t9020*t8969;
  t9053 = t9043 + t9052;
  t9060 = 0.8*t9053;
  t9061 = t9050 + t9051 + t9060;
  t9041 = -0.4*t2830*t9007;
  t9042 = 0.4*t8950*t8969;
  t9044 = -1.*t8950*t8969;
  t9045 = t9043 + t9044;
  t9046 = 0.8*t9045;
  t9047 = t9041 + t9042 + t9046;
  t9048 = var2[6]*t9047;
  t9062 = var2[2]*t9061;
  t9063 = var2[5]*t9061;
  t9067 = t9048 + t9062 + t9063;
  p_output1[0]=t9015;
  p_output1[1]=t9015;
  p_output1[2]=t8978*var2[2] + t8978*var2[5] + (t8970 + 0.4*t2830*t9020 + 0.8*(t8972 - 1.*t2830*t9020))*var2[6];
  p_output1[3]=1.;
  p_output1[4]=t9034;
  p_output1[5]=t9034;
  p_output1[6]=-0.4*t2830*t8968 + 0.4*t8969*t9020 + 0.8*(-1.*t8969*t9020 + t9030);
  p_output1[7]=t9067;
  p_output1[8]=t9067;
  p_output1[9]=t9047*var2[2] + t9047*var2[5] + (0.4*t2830*t8968 + t9042 + 0.8*(-1.*t2830*t8968 + t9044))*var2[6];
  p_output1[10]=1.;
  p_output1[11]=t9012;
  p_output1[12]=t9012;
  p_output1[13]=t8978;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_LeftToe_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void J_dh_LeftToe_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
