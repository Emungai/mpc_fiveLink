/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:21:17 GMT-05:00
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
  double t2756;
  double t153;
  double t425;
  double t3592;
  double t3994;
  double t426;
  double t3873;
  double t3892;
  double t94;
  double t3999;
  double t4034;
  double t4036;
  double t3896;
  double t4199;
  double t4303;
  double t4324;
  double t4334;
  double t4344;
  double t4355;
  double t4374;
  double t4379;
  double t4385;
  double t4393;
  double t4396;
  double t4407;
  double t4041;
  double t4046;
  double t4408;
  double t4432;
  double t4433;
  double t4473;
  double t4476;
  double t4477;
  double t4748;
  double t4766;
  double t4767;
  double t7500;
  double t7538;
  double t7545;
  double t7546;
  double t7558;
  double t7788;
  double t7789;
  double t7790;
  double t4479;
  double t4481;
  double t4561;
  double t4604;
  double t4616;
  double t4648;
  double t7565;
  double t7566;
  double t7567;
  double t7786;
  double t7839;
  double t7842;
  double t7817;
  double t7825;
  double t7941;
  double t7942;
  double t7943;
  double t7944;
  double t7945;
  double t7923;
  double t7924;
  double t7836;
  double t7845;
  double t7849;
  double t7850;
  double t7851;
  double t7852;
  double t7853;
  double t7916;
  double t7917;
  double t7918;
  double t7919;
  double t7920;
  double t7921;
  double t7922;
  double t7931;
  double t7932;
  double t7969;
  double t7970;
  double t7971;
  double t7962;
  double t7963;
  double t7964;
  double t7948;
  double t7949;
  t2756 = Cos(var1[3]);
  t153 = Cos(var1[4]);
  t425 = Sin(var1[3]);
  t3592 = Sin(var1[4]);
  t3994 = Cos(var1[2]);
  t426 = -1.*t153*t425;
  t3873 = -1.*t2756*t3592;
  t3892 = t426 + t3873;
  t94 = Sin(var1[2]);
  t3999 = t2756*t153;
  t4034 = -1.*t425*t3592;
  t4036 = t3999 + t4034;
  t3896 = -1.*t94*t3892;
  t4199 = -1.*t3994*t3892;
  t4303 = -1.*t2756*t153;
  t4324 = t425*t3592;
  t4334 = t4303 + t4324;
  t4344 = t3994*t4334;
  t4355 = t3896 + t4344;
  t4374 = 0.384*var2[0]*t4355;
  t4379 = -1.*t94*t4334;
  t4385 = t4199 + t4379;
  t4393 = 0.384*var2[1]*t4385;
  t4396 = t4374 + t4393;
  t4407 = var2[4]*t4396;
  t4041 = -1.*t3994*t4036;
  t4046 = t3896 + t4041;
  t4408 = t3994*t3892;
  t4432 = -1.*t94*t4036;
  t4433 = t4408 + t4432;
  t4473 = t153*t425;
  t4476 = t2756*t3592;
  t4477 = t4473 + t4476;
  t4748 = -1.*t153;
  t4766 = 1. + t4748;
  t4767 = 0.4*t4766;
  t7500 = 0.64*t153;
  t7538 = t4767 + t7500;
  t7545 = -1.*t7538*t425;
  t7546 = -0.24*t2756*t3592;
  t7558 = t7545 + t7546;
  t7788 = t2756*t7538;
  t7789 = -0.24*t425*t3592;
  t7790 = t7788 + t7789;
  t4479 = t94*t4477;
  t4481 = t4479 + t4344;
  t4561 = 0.384*var2[0]*t4481;
  t4604 = t3994*t4477;
  t4616 = t4604 + t4379;
  t4648 = 0.384*var2[1]*t4616;
  t7565 = t7538*t425;
  t7566 = 0.24*t2756*t3592;
  t7567 = t7565 + t7566;
  t7786 = t3892*t7567;
  t7839 = -0.24*t153*t425;
  t7842 = t7839 + t7546;
  t7817 = 0.24*t425*t3592;
  t7825 = t7790*t4334;
  t7941 = t7558*t4036;
  t7942 = t7567*t4036;
  t7943 = t3892*t7790;
  t7944 = t4477*t7790;
  t7945 = t7941 + t7942 + t7943 + t7944;
  t7923 = t94*t4334;
  t7924 = t4408 + t7923;
  t7836 = t3892*t7558;
  t7845 = t3892*t7842;
  t7849 = t7842*t4477;
  t7850 = t4036*t7790;
  t7851 = 0.24*t2756*t153;
  t7852 = t7851 + t7789;
  t7853 = t4036*t7852;
  t7916 = -0.24*t2756*t153;
  t7917 = t7916 + t7817;
  t7918 = t4036*t7917;
  t7919 = t7836 + t7845 + t7786 + t7849 + t7850 + t7853 + t7918 + t7825;
  t7920 = 0.384*var2[2]*t7919;
  t7921 = t4561 + t4648 + t7920;
  t7922 = var2[4]*t7921;
  t7931 = 0.384*var2[4]*t7924;
  t7932 = 0.384*var2[4]*t4355;
  t7969 = -1.*t7538*t3592;
  t7970 = 0.24*t153*t3592;
  t7971 = t7969 + t7970;
  t7962 = t7842*t4036;
  t7963 = t4477*t7852;
  t7964 = t7962 + t7942 + t7943 + t7963;
  t7948 = 0.384*var2[1]*t4355;
  t7949 = 0.384*var2[0]*t7924;
  p_output1[0]=(0.384*t4046*var2[0] + 0.384*(t4199 + t4036*t94)*var2[1])*var2[4];
  p_output1[1]=t4407;
  p_output1[2]=t4407;
  p_output1[3]=0.384*t4433*var2[4];
  p_output1[4]=0.384*t4046*var2[4];
  p_output1[5]=0.384*t4433*var2[0] + 0.384*t4046*var2[1];
  p_output1[6]=t4407;
  p_output1[7]=(t4561 + t4648 + 0.384*(2.*t3892*t7558 + t4477*t7558 + t7786 + 2.*t4036*t7790 + t4036*(-1.*t2756*t7538 + t7817) + t7825)*var2[2])*var2[4];
  p_output1[8]=t7922;
  p_output1[9]=t7931;
  p_output1[10]=t7932;
  p_output1[11]=0.384*t7945*var2[4];
  p_output1[12]=t7948 + t7949 + 0.384*t7945*var2[2];
  p_output1[13]=t4407;
  p_output1[14]=t7922;
  p_output1[15]=(t4561 + t4648 + 0.384*(t7786 + t7825 + 2.*t3892*t7842 + t7849 + 2.*t4036*t7852 + t7918)*var2[2] + 0.384*(0.24*Power(t153,2) - 1.*t153*t7538)*var2[3])*var2[4];
  p_output1[16]=t7931;
  p_output1[17]=t7932;
  p_output1[18]=0.384*t7964*var2[4];
  p_output1[19]=0.384*t7971*var2[4];
  p_output1[20]=t7948 + t7949 + 0.384*t7964*var2[2] + 0.384*t7971*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec5_five_link_walker.hh"

namespace LeftStance
{

void J_Ce3_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
