/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:02:31 GMT-05:00
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
  double t9135;
  double t4536;
  double t4674;
  double t9136;
  double t4286;
  double t9134;
  double t9140;
  double t9141;
  double t9143;
  double t9144;
  double t9145;
  double t9146;
  double t9148;
  double t9167;
  double t9168;
  double t9169;
  double t9164;
  double t9165;
  double t9166;
  double t9170;
  double t9171;
  double t9172;
  double t9173;
  double t9174;
  double t9142;
  double t9147;
  double t9150;
  double t9151;
  double t9152;
  double t9153;
  double t9154;
  double t9175;
  double t9176;
  double t9177;
  double t9180;
  double t9181;
  double t9182;
  double t9190;
  double t9191;
  double t9192;
  double t9193;
  double t9194;
  double t9195;
  double t9196;
  double t9205;
  double t9211;
  double t9212;
  double t9213;
  double t9214;
  double t9215;
  double t9216;
  double t9203;
  double t9204;
  double t9206;
  double t9207;
  double t9208;
  double t9209;
  double t9210;
  double t9217;
  double t9218;
  double t9219;
  t9135 = Cos(var1[2]);
  t4536 = Cos(var1[3]);
  t4674 = Sin(var1[2]);
  t9136 = Sin(var1[3]);
  t4286 = Cos(var1[4]);
  t9134 = -1.*t4536*t4674;
  t9140 = -1.*t9135*t9136;
  t9141 = t9134 + t9140;
  t9143 = t9135*t4536;
  t9144 = -1.*t4674*t9136;
  t9145 = t9143 + t9144;
  t9146 = Sin(var1[4]);
  t9148 = t4286*t9141;
  t9167 = -1.*t9135*t4536;
  t9168 = t4674*t9136;
  t9169 = t9167 + t9168;
  t9164 = -1.*t4286;
  t9165 = 1. + t9164;
  t9166 = 0.4*t9165*t9141;
  t9170 = -0.4*t9169*t9146;
  t9171 = t9169*t9146;
  t9172 = t9148 + t9171;
  t9173 = 0.8*t9172;
  t9174 = t9166 + t9170 + t9173;
  t9142 = -0.4*t4286*t9141;
  t9147 = 0.4*t9145*t9146;
  t9150 = -1.*t9145*t9146;
  t9151 = t9148 + t9150;
  t9152 = 0.8*t9151;
  t9153 = t9142 + t9147 + t9152;
  t9154 = var2[4]*t9153;
  t9175 = var2[2]*t9174;
  t9176 = var2[3]*t9174;
  t9177 = t9154 + t9175 + t9176;
  t9180 = t4536*t4674;
  t9181 = t9135*t9136;
  t9182 = t9180 + t9181;
  t9190 = 0.4*t9165*t9145;
  t9191 = -0.4*t9141*t9146;
  t9192 = t4286*t9145;
  t9193 = t9141*t9146;
  t9194 = t9192 + t9193;
  t9195 = 0.8*t9194;
  t9196 = t9190 + t9191 + t9195;
  t9205 = t4286*t9169;
  t9211 = 0.4*t9165*t9169;
  t9212 = -0.4*t9182*t9146;
  t9213 = t9182*t9146;
  t9214 = t9205 + t9213;
  t9215 = 0.8*t9214;
  t9216 = t9211 + t9212 + t9215;
  t9203 = -0.4*t4286*t9169;
  t9204 = 0.4*t9141*t9146;
  t9206 = -1.*t9141*t9146;
  t9207 = t9205 + t9206;
  t9208 = 0.8*t9207;
  t9209 = t9203 + t9204 + t9208;
  t9210 = var2[4]*t9209;
  t9217 = var2[2]*t9216;
  t9218 = var2[3]*t9216;
  t9219 = t9210 + t9217 + t9218;
  p_output1[0]=t9177;
  p_output1[1]=t9177;
  p_output1[2]=t9153*var2[2] + t9153*var2[3] + (t9147 + 0.4*t4286*t9182 + 0.8*(t9150 - 1.*t4286*t9182))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t9196;
  p_output1[5]=t9196;
  p_output1[6]=-0.4*t4286*t9145 + 0.4*t9146*t9182 + 0.8*(-1.*t9146*t9182 + t9192);
  p_output1[7]=t9219;
  p_output1[8]=t9219;
  p_output1[9]=t9209*var2[2] + t9209*var2[3] + (0.4*t4286*t9145 + t9204 + 0.8*(-1.*t4286*t9145 + t9206))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t9174;
  p_output1[12]=t9174;
  p_output1[13]=t9153;
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

#include "J_dh_RightToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_dh_RightToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
