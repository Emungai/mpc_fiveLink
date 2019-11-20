/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:19:39 GMT-05:00
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
  double t955;
  double t988;
  double t926;
  double t946;
  double t925;
  double t945;
  double t956;
  double t962;
  double t978;
  double t979;
  double t980;
  double t1012;
  double t1013;
  double t1014;
  double t932;
  double t951;
  double t952;
  double t954;
  double t990;
  double t991;
  double t1007;
  double t1022;
  double t1023;
  double t1024;
  double t1015;
  double t1018;
  double t1019;
  double t1020;
  double t1021;
  double t1025;
  double t1031;
  double t1032;
  double t1033;
  double t1008;
  double t1009;
  double t1010;
  double t1034;
  double t1035;
  double t1036;
  double t1037;
  double t1038;
  double t1039;
  double t1026;
  double t1057;
  double t1058;
  double t1059;
  double t1060;
  double t1027;
  double t1061;
  double t1046;
  double t1047;
  double t1048;
  double t1011;
  double t1016;
  double t1070;
  double t1042;
  double t1043;
  double t1044;
  double t1071;
  double t1072;
  double t1073;
  double t1090;
  double t1091;
  double t1092;
  double t1082;
  double t1083;
  double t1084;
  double t1086;
  double t1087;
  double t1088;
  double t1089;
  double t1093;
  double t1113;
  double t1114;
  double t1098;
  double t1116;
  double t1117;
  double t1100;
  t955 = Cos(var1[6]);
  t988 = Sin(var1[6]);
  t926 = Sin(var1[2]);
  t946 = Sin(var1[5]);
  t925 = Cos(var1[5]);
  t945 = Cos(var1[2]);
  t956 = -1.*t955;
  t962 = 1. + t956;
  t978 = 0.4*t962;
  t979 = 0.64*t955;
  t980 = t978 + t979;
  t1012 = t925*t955;
  t1013 = -1.*t946*t988;
  t1014 = t1012 + t1013;
  t932 = -1.*t925*t926;
  t951 = -1.*t945*t946;
  t952 = t932 + t951;
  t954 = 0.748*t952;
  t990 = t980*t988;
  t991 = -0.24*t955*t988;
  t1007 = t990 + t991;
  t1022 = -1.*t955*t946;
  t1023 = -1.*t925*t988;
  t1024 = t1022 + t1023;
  t1015 = t945*t1014;
  t1018 = t980*t955;
  t1019 = Power(t988,2);
  t1020 = 0.24*t1019;
  t1021 = t1018 + t1020;
  t1025 = t945*t1024;
  t1031 = t926*t1024;
  t1032 = t1031 + t1015;
  t1033 = 3.2*t1007*t1032;
  t1008 = t955*t946;
  t1009 = t925*t988;
  t1010 = t1008 + t1009;
  t1034 = -1.*t925*t955;
  t1035 = t946*t988;
  t1036 = t1034 + t1035;
  t1037 = t926*t1036;
  t1038 = t1025 + t1037;
  t1039 = 3.2*t1021*t1038;
  t1026 = -1.*t926*t1014;
  t1057 = -1.*t945*t925;
  t1058 = t926*t946;
  t1059 = t1057 + t1058;
  t1060 = 0.748*t1059;
  t1027 = t1025 + t1026;
  t1061 = -1.*t926*t1024;
  t1046 = Power(t955,2);
  t1047 = -0.24*t1046;
  t1048 = t1018 + t1047;
  t1011 = -1.*t926*t1010;
  t1016 = t1011 + t1015;
  t1070 = 3.2*t1007*t1027;
  t1042 = -1.*t980*t988;
  t1043 = 0.24*t955*t988;
  t1044 = t1042 + t1043;
  t1071 = t945*t1036;
  t1072 = t1061 + t1071;
  t1073 = 3.2*t1021*t1072;
  t1090 = t925*t980;
  t1091 = -0.24*t946*t988;
  t1092 = t1090 + t1091;
  t1082 = -1.*t980*t946;
  t1083 = -0.24*t925*t988;
  t1084 = t1082 + t1083;
  t1086 = t980*t946;
  t1087 = 0.24*t925*t988;
  t1088 = t1086 + t1087;
  t1089 = t1088*t1014;
  t1093 = t1024*t1092;
  t1113 = -0.24*t955*t946;
  t1114 = t1113 + t1083;
  t1098 = -1.*t1024*t1088;
  t1116 = 0.24*t925*t955;
  t1117 = t1116 + t1091;
  t1100 = -1.*t1092*t1036;
  p_output1[0]=var2[5]*(-0.5*(3.2*t1007*t1016 + 3.2*t1021*t1027 + t954)*var2[2] - 0.5*(t1033 + t1039 + t954)*var2[5] - 0.5*(t1033 + t1039 + 3.2*t1032*t1044 + 3.2*t1048*(t1014*t926 + t1010*t945))*var2[6]);
  p_output1[1]=var2[5]*(-0.5*(t1060 + 3.2*t1007*(t1026 - 1.*t1010*t945) + 3.2*t1021*(t1061 - 1.*t1014*t945))*var2[2] - 0.5*(t1060 + t1070 + t1073)*var2[5] - 0.5*(3.2*t1027*t1044 + 3.2*t1016*t1048 + t1070 + t1073)*var2[6]);
  p_output1[2]=var2[5]*(-0.5*(3.2*t1021*(t1014*t1084 + t1089 + t1010*t1092 + t1093) + 3.2*t1007*(-1.*t1024*t1084 - 1.*t1014*t1092 + t1098 + t1100))*var2[5] - 0.5*(3.2*t1044*(t1010*t1088 + t1014*t1092) + 3.2*t1048*(-1.*t1014*t1088 - 1.*t1024*t1092) + 3.2*t1021*(t1089 + t1093 + t1014*t1114 + t1010*t1117) + 3.2*t1007*(t1098 + t1100 - 1.*t1024*t1114 - 1.*t1014*t1117))*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-0.5*(6.4*t1021*t1044 + 6.4*t1007*t1048)*var2[5]*var2[6];
  p_output1[6]=-0.384*t1044*var2[5]*var2[6];
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

#include "Ce1_vec6_five_link_walker.hh"

namespace LeftStance
{

void Ce1_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
