/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:19:40 GMT-05:00
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
  double t1040;
  double t1028;
  double t1029;
  double t1041;
  double t1017;
  double t1030;
  double t1045;
  double t1049;
  double t1050;
  double t1051;
  double t1063;
  double t1064;
  double t1065;
  double t1066;
  double t1067;
  double t1052;
  double t1053;
  double t1054;
  double t1076;
  double t1080;
  double t1081;
  double t1097;
  double t1099;
  double t1101;
  double t1102;
  double t1103;
  double t1112;
  double t1115;
  double t1118;
  double t1105;
  double t1108;
  double t1109;
  double t1110;
  double t1111;
  double t1119;
  double t1120;
  double t1121;
  double t1122;
  t1040 = Cos(var1[5]);
  t1028 = Cos(var1[6]);
  t1029 = Sin(var1[5]);
  t1041 = Sin(var1[6]);
  t1017 = Cos(var1[2]);
  t1030 = -1.*t1028*t1029;
  t1045 = -1.*t1040*t1041;
  t1049 = t1030 + t1045;
  t1050 = t1017*t1049;
  t1051 = Sin(var1[2]);
  t1063 = -1.*t1040*t1028;
  t1064 = t1029*t1041;
  t1065 = t1063 + t1064;
  t1066 = t1051*t1065;
  t1067 = t1050 + t1066;
  t1052 = t1040*t1028;
  t1053 = -1.*t1029*t1041;
  t1054 = t1052 + t1053;
  t1076 = -1.*t1051*t1049;
  t1080 = t1017*t1065;
  t1081 = t1076 + t1080;
  t1097 = -1.*t1028;
  t1099 = 1. + t1097;
  t1101 = 0.4*t1099;
  t1102 = 0.64*t1028;
  t1103 = t1101 + t1102;
  t1112 = t1040*t1103;
  t1115 = -0.24*t1029*t1041;
  t1118 = t1112 + t1115;
  t1105 = -0.24*t1040*t1041;
  t1108 = t1103*t1029;
  t1109 = 0.24*t1040*t1041;
  t1110 = t1108 + t1109;
  t1111 = t1110*t1054;
  t1119 = t1049*t1118;
  t1120 = t1028*t1029;
  t1121 = t1040*t1041;
  t1122 = t1120 + t1121;
  p_output1[0]=var2[6]*(-0.384*(t1050 - 1.*t1051*t1054)*var2[2] - 0.384*t1067*var2[5] - 0.384*t1067*var2[6]);
  p_output1[1]=var2[6]*(-0.384*(-1.*t1017*t1054 + t1076)*var2[2] - 0.384*t1081*var2[5] - 0.384*t1081*var2[6]);
  p_output1[2]=var2[6]*(-0.384*(t1054*(-1.*t1029*t1103 + t1105) + t1111 + t1119 + t1118*t1122)*var2[5] - 0.384*(t1054*(-0.24*t1028*t1029 + t1105) + t1111 + t1119 + (0.24*t1028*t1040 + t1115)*t1122)*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-0.384*(0.24*t1028*t1041 - 1.*t1041*t1103)*Power(var2[6],2);
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
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

#include "Ce1_vec7_five_link_walker.hh"

namespace LeftStance
{

void Ce1_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
