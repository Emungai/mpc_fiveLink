/*
 * Automatically Generated from Mathematica.
 * Tue 10 Dec 2019 22:13:15 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1005;
  double t1017;
  double t1004;
  double t1018;
  double t998;
  double t1006;
  double t1019;
  double t1020;
  double t1022;
  double t1023;
  double t1024;
  double t1025;
  double t1002;
  double t1003;
  double t1034;
  double t1035;
  double t1036;
  double t1021;
  double t1026;
  double t1027;
  double t1028;
  double t1029;
  double t1030;
  double t1031;
  double t1032;
  double t1033;
  double t1037;
  double t1038;
  double t1039;
  double t1040;
  double t1041;
  double t1042;
  double t1043;
  double t1044;
  double t1046;
  double t1047;
  double t1048;
  t1005 = Cos(var1[3]);
  t1017 = Sin(var1[2]);
  t1004 = Cos(var1[2]);
  t1018 = Sin(var1[3]);
  t998 = Cos(var1[4]);
  t1006 = t1004*t1005;
  t1019 = -1.*t1017*t1018;
  t1020 = t1006 + t1019;
  t1022 = -1.*t1005*t1017;
  t1023 = -1.*t1004*t1018;
  t1024 = t1022 + t1023;
  t1025 = Sin(var1[4]);
  t1002 = -1.*t998;
  t1003 = 1. + t1002;
  t1034 = -1.*t1004*t1005;
  t1035 = t1017*t1018;
  t1036 = t1034 + t1035;
  t1021 = 0.4*t1003*t1020;
  t1026 = -0.4*t1024*t1025;
  t1027 = t998*t1020;
  t1028 = t1024*t1025;
  t1029 = t1027 + t1028;
  t1030 = 0.8*t1029;
  t1031 = t1021 + t1026 + t1030;
  t1032 = var2[0]*t1031;
  t1033 = 0.4*t1003*t1024;
  t1037 = -0.4*t1036*t1025;
  t1038 = t998*t1024;
  t1039 = t1036*t1025;
  t1040 = t1038 + t1039;
  t1041 = 0.8*t1040;
  t1042 = t1033 + t1037 + t1041;
  t1043 = var2[2]*t1042;
  t1044 = t1032 + t1043;
  t1046 = t1005*t1017;
  t1047 = t1004*t1018;
  t1048 = t1046 + t1047;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t1044;
  p_output1[3]=t1044;
  p_output1[4]=(0.4*t1025*t1048 + 0.8*(t1027 - 1.*t1025*t1048) - 0.4*t1020*t998)*var2[0] + (0.4*t1020*t1025 + 0.8*(-1.*t1020*t1025 + t1038) - 0.4*t1024*t998)*var2[2];
  p_output1[5]=0;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
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

#include "fRightToe_vec_RightStance.hh"

namespace SymFunction
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
