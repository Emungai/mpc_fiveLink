/*
 * Automatically Generated from Mathematica.
 * Tue 10 Dec 2019 22:13:16 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
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

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t1052;
  double t1054;
  double t1051;
  double t1055;
  double t1045;
  double t1053;
  double t1056;
  double t1057;
  double t1059;
  double t1060;
  double t1061;
  double t1062;
  double t1049;
  double t1050;
  double t1058;
  double t1063;
  double t1064;
  double t1065;
  double t1066;
  double t1067;
  double t1068;
  double t1070;
  double t1071;
  double t1072;
  double t1079;
  double t1080;
  double t1081;
  double t1078;
  double t1082;
  double t1083;
  double t1084;
  double t1085;
  double t1086;
  double t1087;
  t1052 = Cos(var1[3]);
  t1054 = Sin(var1[2]);
  t1051 = Cos(var1[2]);
  t1055 = Sin(var1[3]);
  t1045 = Cos(var1[4]);
  t1053 = t1051*t1052;
  t1056 = -1.*t1054*t1055;
  t1057 = t1053 + t1056;
  t1059 = -1.*t1052*t1054;
  t1060 = -1.*t1051*t1055;
  t1061 = t1059 + t1060;
  t1062 = Sin(var1[4]);
  t1049 = -1.*t1045;
  t1050 = 1. + t1049;
  t1058 = 0.4*t1050*t1057;
  t1063 = -0.4*t1061*t1062;
  t1064 = t1045*t1057;
  t1065 = t1061*t1062;
  t1066 = t1064 + t1065;
  t1067 = 0.8*t1066;
  t1068 = t1058 + t1063 + t1067;
  t1070 = t1052*t1054;
  t1071 = t1051*t1055;
  t1072 = t1070 + t1071;
  t1079 = -1.*t1051*t1052;
  t1080 = t1054*t1055;
  t1081 = t1079 + t1080;
  t1078 = 0.4*t1050*t1061;
  t1082 = -0.4*t1081*t1062;
  t1083 = t1045*t1061;
  t1084 = t1081*t1062;
  t1085 = t1083 + t1084;
  t1086 = 0.8*t1085;
  t1087 = t1078 + t1082 + t1086;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=t1068;
  p_output1[3]=t1068;
  p_output1[4]=-0.4*t1045*t1057 + 0.4*t1062*t1072 + 0.8*(t1064 - 1.*t1062*t1072);
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=1.;
  p_output1[16]=t1087;
  p_output1[17]=t1087;
  p_output1[18]=-0.4*t1045*t1061 + 0.4*t1057*t1062 + 0.8*(-1.*t1057*t1062 + t1083);
  p_output1[19]=0;
  p_output1[20]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_map_RightImpact.hh"

namespace SymFunction
{

void fRightToe_map_RightImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
