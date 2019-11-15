/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:18:18 GMT-05:00
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
  double t10997;
  double t10999;
  double t10996;
  double t11000;
  double t5782;
  double t10998;
  double t11001;
  double t11002;
  double t11004;
  double t11005;
  double t11006;
  double t11007;
  double t5785;
  double t10995;
  double t11015;
  double t11016;
  double t11017;
  double t11003;
  double t11008;
  double t11009;
  double t11010;
  double t11011;
  double t11012;
  double t11013;
  double t11014;
  double t11018;
  double t11019;
  double t11020;
  double t11021;
  double t11022;
  double t11023;
  double t11024;
  double t11025;
  double t11026;
  double t11035;
  double t11036;
  double t11037;
  double t11027;
  double t11028;
  double t11029;
  double t11030;
  double t11031;
  double t11032;
  double t11033;
  double t11034;
  double t11038;
  double t11039;
  double t11040;
  double t11041;
  double t11042;
  double t11043;
  double t11044;
  double t11045;
  double t11046;
  double t11047;
  double t11048;
  double t11049;
  double t11050;
  double t11051;
  t10997 = Cos(var1[5]);
  t10999 = Sin(var1[2]);
  t10996 = Cos(var1[2]);
  t11000 = Sin(var1[5]);
  t5782 = Cos(var1[6]);
  t10998 = -1.*t10996*t10997;
  t11001 = t10999*t11000;
  t11002 = t10998 + t11001;
  t11004 = t10997*t10999;
  t11005 = t10996*t11000;
  t11006 = t11004 + t11005;
  t11007 = Sin(var1[6]);
  t5785 = -1.*t5782;
  t10995 = 1. + t5785;
  t11015 = -1.*t10997*t10999;
  t11016 = -1.*t10996*t11000;
  t11017 = t11015 + t11016;
  t11003 = 0.4*t10995*t11002;
  t11008 = -0.4*t11006*t11007;
  t11009 = t5782*t11002;
  t11010 = t11006*t11007;
  t11011 = t11009 + t11010;
  t11012 = 0.8*t11011;
  t11013 = t11003 + t11008 + t11012;
  t11014 = var2[2]*t11013;
  t11018 = 0.4*t10995*t11017;
  t11019 = -0.4*t11002*t11007;
  t11020 = t5782*t11017;
  t11021 = t11002*t11007;
  t11022 = t11020 + t11021;
  t11023 = 0.8*t11022;
  t11024 = t11018 + t11019 + t11023;
  t11025 = var2[0]*t11024;
  t11026 = t11014 + t11025;
  t11035 = t10996*t10997;
  t11036 = -1.*t10999*t11000;
  t11037 = t11035 + t11036;
  t11027 = -0.4*t5782*t11002;
  t11028 = 0.4*t11017*t11007;
  t11029 = -1.*t11017*t11007;
  t11030 = t11009 + t11029;
  t11031 = 0.8*t11030;
  t11032 = t11027 + t11028 + t11031;
  t11033 = var2[2]*t11032;
  t11034 = -0.4*t5782*t11017;
  t11038 = 0.4*t11037*t11007;
  t11039 = -1.*t11037*t11007;
  t11040 = t11020 + t11039;
  t11041 = 0.8*t11040;
  t11042 = t11034 + t11038 + t11041;
  t11043 = var2[0]*t11042;
  t11044 = t11033 + t11043;
  t11045 = 0.4*t10995*t11037;
  t11046 = -0.4*t11017*t11007;
  t11047 = t5782*t11037;
  t11048 = t11017*t11007;
  t11049 = t11047 + t11048;
  t11050 = 0.8*t11049;
  t11051 = t11045 + t11046 + t11050;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t11026;
  p_output1[3]=t11026;
  p_output1[4]=t11044;
  p_output1[5]=t11051;
  p_output1[6]=t11024;
  p_output1[7]=t11026;
  p_output1[8]=t11026;
  p_output1[9]=t11044;
  p_output1[10]=t11051;
  p_output1[11]=t11024;
  p_output1[12]=t11044;
  p_output1[13]=t11044;
  p_output1[14]=(t11038 + 0.4*t11006*t5782 + 0.8*(t11039 - 1.*t11006*t5782))*var2[0] + (t11028 + 0.4*t11037*t5782 + 0.8*(t11029 - 1.*t11037*t5782))*var2[2];
  p_output1[15]=0.4*t11006*t11007 + 0.8*(-1.*t11006*t11007 + t11047) - 0.4*t11037*t5782;
  p_output1[16]=t11042;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fLeftToe_vec_RightStance.hh"

namespace Pattern[righStance, Blank[opt]]
{

void J_fLeftToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
