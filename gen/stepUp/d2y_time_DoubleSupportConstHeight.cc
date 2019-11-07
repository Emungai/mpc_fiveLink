/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:22:30 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  double t188;
  double t574;
  double t599;
  double t679;
  double t681;
  double t693;
  double t697;
  double t698;
  double t704;
  double t3103;
  double t5838;
  double t9529;
  double t10193;
  double t10218;
  double t10474;
  double t10522;
  double t11064;
  double t11910;
  double t12116;
  double t12117;
  double t12230;
  double t13320;
  double t13400;
  double t13421;
  t188 = -1.*var6[1];
  t574 = var6[0] + t188;
  t599 = Power(t574,-5);
  t679 = -1. + var7[0];
  t681 = -1. + var8[0];
  t693 = 1/t681;
  t697 = -1.*var1[0];
  t698 = t697 + var1[1];
  t704 = t679*t693*t698;
  t3103 = t188 + var1[0] + t704;
  t5838 = Power(t3103,3);
  t9529 = Power(t574,-4);
  t10193 = Power(t3103,2);
  t10218 = 1/t574;
  t10474 = -1.*t10218*t3103;
  t10522 = 1. + t10474;
  t11064 = Power(t574,-3);
  t11910 = Power(t10522,2);
  t12116 = Power(t574,-2);
  t12117 = Power(t10522,3);
  t12230 = Power(t3103,4);
  t13320 = Power(t10522,4);
  t13400 = Power(t3103,5);
  t13421 = Power(t10522,5);
  p_output1[0]=var4[3] - 20.*t12116*t12117*var5[0] + 40.*t12116*t12117*var5[4] - 60.*t11064*t11910*t3103*var5[4] - 20.*t12116*t12117*var5[8] + 120.*t11064*t11910*t3103*var5[8] - 60.*t10193*t10522*t9529*var5[8] - 60.*t11064*t11910*t3103*var5[12] - 20.*t5838*t599*var5[12] + 120.*t10193*t10522*t9529*var5[12] + 40.*t5838*t599*var5[16] - 60.*t10193*t10522*t9529*var5[16] - 20.*t5838*t599*var5[20] + (var2[3] - 1.*t13421*var5[0] - 5.*t10218*t13320*t3103*var5[4] - 10.*t10193*t12116*t12117*var5[8] - 10.*t11064*t11910*t5838*var5[12] - 5.*t10522*t12230*t9529*var5[16] - 1.*t13400*t599*var5[20])*var9[0] + (var3[3] + 5.*t10218*t13320*var5[0] - 5.*t10218*t13320*var5[4] + 20.*t12116*t12117*t3103*var5[4] + 30.*t10193*t11064*t11910*var5[8] - 20.*t12116*t12117*t3103*var5[8] - 30.*t10193*t11064*t11910*var5[12] + 20.*t10522*t5838*t9529*var5[12] + 5.*t12230*t599*var5[16] - 20.*t10522*t5838*t9529*var5[16] - 5.*t12230*t599*var5[20])*var9[1];
  p_output1[1]=var4[4] - 20.*t12116*t12117*var5[1] + 40.*t12116*t12117*var5[5] - 60.*t11064*t11910*t3103*var5[5] - 20.*t12116*t12117*var5[9] + 120.*t11064*t11910*t3103*var5[9] - 60.*t10193*t10522*t9529*var5[9] - 60.*t11064*t11910*t3103*var5[13] - 20.*t5838*t599*var5[13] + 120.*t10193*t10522*t9529*var5[13] + 40.*t5838*t599*var5[17] - 60.*t10193*t10522*t9529*var5[17] - 20.*t5838*t599*var5[21] + (var2[4] - 1.*t13421*var5[1] - 5.*t10218*t13320*t3103*var5[5] - 10.*t10193*t12116*t12117*var5[9] - 10.*t11064*t11910*t5838*var5[13] - 5.*t10522*t12230*t9529*var5[17] - 1.*t13400*t599*var5[21])*var9[0] + (var3[4] + 5.*t10218*t13320*var5[1] - 5.*t10218*t13320*var5[5] + 20.*t12116*t12117*t3103*var5[5] + 30.*t10193*t11064*t11910*var5[9] - 20.*t12116*t12117*t3103*var5[9] - 30.*t10193*t11064*t11910*var5[13] + 20.*t10522*t5838*t9529*var5[13] + 5.*t12230*t599*var5[17] - 20.*t10522*t5838*t9529*var5[17] - 5.*t12230*t599*var5[21])*var9[1];
  p_output1[2]=var4[5] - 20.*t12116*t12117*var5[2] + 40.*t12116*t12117*var5[6] - 60.*t11064*t11910*t3103*var5[6] - 20.*t12116*t12117*var5[10] + 120.*t11064*t11910*t3103*var5[10] - 60.*t10193*t10522*t9529*var5[10] - 60.*t11064*t11910*t3103*var5[14] - 20.*t5838*t599*var5[14] + 120.*t10193*t10522*t9529*var5[14] + 40.*t5838*t599*var5[18] - 60.*t10193*t10522*t9529*var5[18] - 20.*t5838*t599*var5[22] + (var2[5] - 1.*t13421*var5[2] - 5.*t10218*t13320*t3103*var5[6] - 10.*t10193*t12116*t12117*var5[10] - 10.*t11064*t11910*t5838*var5[14] - 5.*t10522*t12230*t9529*var5[18] - 1.*t13400*t599*var5[22])*var9[0] + (var3[5] + 5.*t10218*t13320*var5[2] - 5.*t10218*t13320*var5[6] + 20.*t12116*t12117*t3103*var5[6] + 30.*t10193*t11064*t11910*var5[10] - 20.*t12116*t12117*t3103*var5[10] - 30.*t10193*t11064*t11910*var5[14] + 20.*t10522*t5838*t9529*var5[14] + 5.*t12230*t599*var5[18] - 20.*t10522*t5838*t9529*var5[18] - 5.*t12230*t599*var5[22])*var9[1];
  p_output1[3]=var4[6] - 20.*t12116*t12117*var5[3] + 40.*t12116*t12117*var5[7] - 60.*t11064*t11910*t3103*var5[7] - 20.*t12116*t12117*var5[11] + 120.*t11064*t11910*t3103*var5[11] - 60.*t10193*t10522*t9529*var5[11] - 60.*t11064*t11910*t3103*var5[15] - 20.*t5838*t599*var5[15] + 120.*t10193*t10522*t9529*var5[15] + 40.*t5838*t599*var5[19] - 60.*t10193*t10522*t9529*var5[19] - 20.*t5838*t599*var5[23] + (var2[6] - 1.*t13421*var5[3] - 5.*t10218*t13320*t3103*var5[7] - 10.*t10193*t12116*t12117*var5[11] - 10.*t11064*t11910*t5838*var5[15] - 5.*t10522*t12230*t9529*var5[19] - 1.*t13400*t599*var5[23])*var9[0] + (var3[6] + 5.*t10218*t13320*var5[3] - 5.*t10218*t13320*var5[7] + 20.*t12116*t12117*t3103*var5[7] + 30.*t10193*t11064*t11910*var5[11] - 20.*t12116*t12117*t3103*var5[11] - 30.*t10193*t11064*t11910*var5[15] + 20.*t10522*t5838*t9529*var5[15] + 5.*t12230*t599*var5[19] - 20.*t10522*t5838*t9529*var5[19] - 5.*t12230*t599*var5[23])*var9[1];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8,*var9;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 9)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Nine input(s) required (var1,var2,var3,var4,var5,var6,var7,var8,var9).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }
  mrows = mxGetM(prhs[8]);
  ncols = mxGetN(prhs[8]);
  if( !mxIsDouble(prhs[8]) || mxIsComplex(prhs[8]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var9 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
  var9 = mxGetPr(prhs[8]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8,var9);


}

#else // MATLAB_MEX_FILE

#include "d2y_time_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void d2y_time_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE
