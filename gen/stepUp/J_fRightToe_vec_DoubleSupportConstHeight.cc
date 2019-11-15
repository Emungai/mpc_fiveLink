/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 15:29:58 GMT-05:00
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
  double t5813;
  double t5816;
  double t5812;
  double t5817;
  double t5805;
  double t5814;
  double t5825;
  double t5827;
  double t5841;
  double t5845;
  double t5851;
  double t5852;
  double t5810;
  double t5811;
  double t5885;
  double t5886;
  double t5894;
  double t5828;
  double t5865;
  double t5867;
  double t5868;
  double t5874;
  double t5875;
  double t5883;
  double t5884;
  double t5899;
  double t5905;
  double t5906;
  double t5922;
  double t5924;
  double t5925;
  double t5938;
  double t5939;
  double t5943;
  double t9268;
  double t9269;
  double t9270;
  double t5944;
  double t5976;
  double t5977;
  double t9239;
  double t9242;
  double t9243;
  double t9244;
  double t9267;
  double t9274;
  double t9275;
  double t9277;
  double t9278;
  double t9280;
  double t9281;
  double t9283;
  double t9284;
  double t9287;
  double t9288;
  double t9289;
  double t9290;
  double t9291;
  double t9294;
  t5813 = Cos(var1[3]);
  t5816 = Sin(var1[2]);
  t5812 = Cos(var1[2]);
  t5817 = Sin(var1[3]);
  t5805 = Cos(var1[4]);
  t5814 = -1.*t5812*t5813;
  t5825 = t5816*t5817;
  t5827 = t5814 + t5825;
  t5841 = t5813*t5816;
  t5845 = t5812*t5817;
  t5851 = t5841 + t5845;
  t5852 = Sin(var1[4]);
  t5810 = -1.*t5805;
  t5811 = 1. + t5810;
  t5885 = -1.*t5813*t5816;
  t5886 = -1.*t5812*t5817;
  t5894 = t5885 + t5886;
  t5828 = 0.4*t5811*t5827;
  t5865 = -0.4*t5851*t5852;
  t5867 = t5805*t5827;
  t5868 = t5851*t5852;
  t5874 = t5867 + t5868;
  t5875 = 0.8*t5874;
  t5883 = t5828 + t5865 + t5875;
  t5884 = var2[2]*t5883;
  t5899 = 0.4*t5811*t5894;
  t5905 = -0.4*t5827*t5852;
  t5906 = t5805*t5894;
  t5922 = t5827*t5852;
  t5924 = t5906 + t5922;
  t5925 = 0.8*t5924;
  t5938 = t5899 + t5905 + t5925;
  t5939 = var2[0]*t5938;
  t5943 = t5884 + t5939;
  t9268 = t5812*t5813;
  t9269 = -1.*t5816*t5817;
  t9270 = t9268 + t9269;
  t5944 = -0.4*t5805*t5827;
  t5976 = 0.4*t5894*t5852;
  t5977 = -1.*t5894*t5852;
  t9239 = t5867 + t5977;
  t9242 = 0.8*t9239;
  t9243 = t5944 + t5976 + t9242;
  t9244 = var2[2]*t9243;
  t9267 = -0.4*t5805*t5894;
  t9274 = 0.4*t9270*t5852;
  t9275 = -1.*t9270*t5852;
  t9277 = t5906 + t9275;
  t9278 = 0.8*t9277;
  t9280 = t9267 + t9274 + t9278;
  t9281 = var2[0]*t9280;
  t9283 = t9244 + t9281;
  t9284 = 0.4*t5811*t9270;
  t9287 = -0.4*t5894*t5852;
  t9288 = t5805*t9270;
  t9289 = t5894*t5852;
  t9290 = t9288 + t9289;
  t9291 = 0.8*t9290;
  t9294 = t9284 + t9287 + t9291;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t5943;
  p_output1[3]=t5943;
  p_output1[4]=t9283;
  p_output1[5]=t9294;
  p_output1[6]=t5938;
  p_output1[7]=t5943;
  p_output1[8]=t5943;
  p_output1[9]=t9283;
  p_output1[10]=t9294;
  p_output1[11]=t5938;
  p_output1[12]=t9283;
  p_output1[13]=t9283;
  p_output1[14]=(0.4*t5805*t5851 + t9274 + 0.8*(-1.*t5805*t5851 + t9275))*var2[0] + (t5976 + 0.4*t5805*t9270 + 0.8*(t5977 - 1.*t5805*t9270))*var2[2];
  p_output1[15]=0.4*t5851*t5852 - 0.4*t5805*t9270 + 0.8*(-1.*t5851*t5852 + t9288);
  p_output1[16]=t9280;
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

#include "J_fRightToe_vec_DoubleSupportConstHeight.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_fRightToe_vec_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
