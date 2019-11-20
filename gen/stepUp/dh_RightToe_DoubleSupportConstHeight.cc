/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:02:29 GMT-05:00
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
  double t9104;
  double t9109;
  double t4394;
  double t9110;
  double t131;
  double t9108;
  double t9111;
  double t9112;
  double t9124;
  double t9125;
  double t9126;
  double t9127;
  double t299;
  double t393;
  double t9123;
  double t9128;
  double t9129;
  double t9130;
  double t9131;
  double t9132;
  double t9133;
  double t9137;
  double t9138;
  double t9139;
  double t9149;
  double t9156;
  double t9157;
  double t9158;
  double t9155;
  double t9159;
  double t9160;
  double t9161;
  double t9162;
  double t9163;
  t9104 = Cos(var1[3]);
  t9109 = Sin(var1[2]);
  t4394 = Cos(var1[2]);
  t9110 = Sin(var1[3]);
  t131 = Cos(var1[4]);
  t9108 = t4394*t9104;
  t9111 = -1.*t9109*t9110;
  t9112 = t9108 + t9111;
  t9124 = -1.*t9104*t9109;
  t9125 = -1.*t4394*t9110;
  t9126 = t9124 + t9125;
  t9127 = Sin(var1[4]);
  t299 = -1.*t131;
  t393 = 1. + t299;
  t9123 = 0.4*t393*t9112;
  t9128 = -0.4*t9126*t9127;
  t9129 = t131*t9112;
  t9130 = t9126*t9127;
  t9131 = t9129 + t9130;
  t9132 = 0.8*t9131;
  t9133 = t9123 + t9128 + t9132;
  t9137 = t9104*t9109;
  t9138 = t4394*t9110;
  t9139 = t9137 + t9138;
  t9149 = t131*t9126;
  t9156 = -1.*t4394*t9104;
  t9157 = t9109*t9110;
  t9158 = t9156 + t9157;
  t9155 = 0.4*t393*t9126;
  t9159 = -0.4*t9158*t9127;
  t9160 = t9158*t9127;
  t9161 = t9149 + t9160;
  t9162 = 0.8*t9161;
  t9163 = t9155 + t9159 + t9162;
  p_output1[0]=var2[0] + t9133*var2[2] + t9133*var2[3] + (-0.4*t131*t9112 + 0.4*t9127*t9139 + 0.8*(t9129 - 1.*t9127*t9139))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t9163*var2[2] + t9163*var2[3] + (-0.4*t131*t9126 + 0.4*t9112*t9127 + 0.8*(-1.*t9112*t9127 + t9149))*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RightToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void dh_RightToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
