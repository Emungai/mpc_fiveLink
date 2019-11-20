/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:10:11 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t3078;
  double t4602;
  double t8901;
  double t8903;
  double t8919;
  double t10543;
  double t10557;
  double t10579;
  double t10581;
  double t10582;
  double t10608;
  double t10610;
  double t10617;
  double t11956;
  double t11960;
  double t12006;
  double t12016;
  double t12018;
  double t12036;
  double t12037;
  double t12010;
  double t12011;
  double t12012;
  double t12013;
  double t12014;
  double t12015;
  double t12017;
  t3078 = -1.*var4[1];
  t4602 = var4[0] + t3078;
  t8901 = Power(t4602,-5);
  t8903 = t3078 + var1[0];
  t8919 = Power(t8903,4);
  t10543 = Power(t4602,-4);
  t10557 = Power(t8903,3);
  t10579 = 1/t4602;
  t10581 = -1.*t10579*t8903;
  t10582 = 1. + t10581;
  t10608 = Power(t4602,-3);
  t10610 = Power(t8903,2);
  t10617 = Power(t10582,2);
  t11956 = Power(t4602,-2);
  t11960 = Power(t10582,3);
  t12006 = Power(t10582,4);
  t12016 = Power(t8903,5);
  t12018 = Power(t4602,-6);
  t12036 = -1.*t11956*t8903;
  t12037 = t10579 + t12036;
  t12010 = Power(t10582,5);
  t12011 = -1.*t12010;
  t12012 = -5.*t10579*t8903*t12006;
  t12013 = -10.*t11956*t10610*t11960;
  t12014 = -10.*t10608*t10557*t10617;
  t12015 = -5.*t10543*t8919*t10582;
  t12017 = -1.*t8901*t12016;
  p_output1[0]=5.*t10579*t12006*var3[0] - 5.*t10579*t12006*var3[4] + 20.*t11956*t11960*t8903*var3[4] + 30.*t10608*t10610*t10617*var3[8] - 20.*t11956*t11960*t8903*var3[8] + 20.*t10543*t10557*t10582*var3[12] - 30.*t10608*t10610*t10617*var3[12] - 20.*t10543*t10557*t10582*var3[16] + 5.*t8901*t8919*var3[16] - 5.*t8901*t8919*var3[20];
  p_output1[1]=1.;
  p_output1[2]=t12011;
  p_output1[3]=t12012;
  p_output1[4]=t12013;
  p_output1[5]=t12014;
  p_output1[6]=t12015;
  p_output1[7]=t12017;
  p_output1[8]=-5.*t11956*t12006*t8903*var3[0] - 20.*t10608*t10610*t11960*var3[4] + 5.*t11956*t12006*t8903*var3[4] - 30.*t10543*t10557*t10617*var3[8] + 20.*t10608*t10610*t11960*var3[8] + 30.*t10543*t10557*t10617*var3[12] - 20.*t10582*t8901*t8919*var3[12] - 5.*t12016*t12018*var3[16] + 20.*t10582*t8901*t8919*var3[16] + 5.*t12016*t12018*var3[20];
  p_output1[9]=-5.*t12006*t12037*var3[0] + 5.*t10579*t12006*var3[4] - 5.*t11956*t12006*t8903*var3[4] - 20.*t10579*t11960*t12037*t8903*var3[4] - 20.*t10608*t10610*t11960*var3[8] - 30.*t10610*t10617*t11956*t12037*var3[8] + 20.*t11956*t11960*t8903*var3[8] - 30.*t10543*t10557*t10617*var3[12] + 30.*t10608*t10610*t10617*var3[12] - 20.*t10557*t10582*t10608*t12037*var3[12] + 20.*t10543*t10557*t10582*var3[16] - 5.*t10543*t12037*t8919*var3[16] - 20.*t10582*t8901*t8919*var3[16] - 5.*t12016*t12018*var3[20] + 5.*t8901*t8919*var3[20];
  p_output1[10]=5.*t10579*t12006*var3[1] - 5.*t10579*t12006*var3[5] + 20.*t11956*t11960*t8903*var3[5] + 30.*t10608*t10610*t10617*var3[9] - 20.*t11956*t11960*t8903*var3[9] + 20.*t10543*t10557*t10582*var3[13] - 30.*t10608*t10610*t10617*var3[13] - 20.*t10543*t10557*t10582*var3[17] + 5.*t8901*t8919*var3[17] - 5.*t8901*t8919*var3[21];
  p_output1[11]=1.;
  p_output1[12]=t12011;
  p_output1[13]=t12012;
  p_output1[14]=t12013;
  p_output1[15]=t12014;
  p_output1[16]=t12015;
  p_output1[17]=t12017;
  p_output1[18]=-5.*t11956*t12006*t8903*var3[1] - 20.*t10608*t10610*t11960*var3[5] + 5.*t11956*t12006*t8903*var3[5] - 30.*t10543*t10557*t10617*var3[9] + 20.*t10608*t10610*t11960*var3[9] + 30.*t10543*t10557*t10617*var3[13] - 20.*t10582*t8901*t8919*var3[13] - 5.*t12016*t12018*var3[17] + 20.*t10582*t8901*t8919*var3[17] + 5.*t12016*t12018*var3[21];
  p_output1[19]=-5.*t12006*t12037*var3[1] + 5.*t10579*t12006*var3[5] - 5.*t11956*t12006*t8903*var3[5] - 20.*t10579*t11960*t12037*t8903*var3[5] - 20.*t10608*t10610*t11960*var3[9] - 30.*t10610*t10617*t11956*t12037*var3[9] + 20.*t11956*t11960*t8903*var3[9] - 30.*t10543*t10557*t10617*var3[13] + 30.*t10608*t10610*t10617*var3[13] - 20.*t10557*t10582*t10608*t12037*var3[13] + 20.*t10543*t10557*t10582*var3[17] - 5.*t10543*t12037*t8919*var3[17] - 20.*t10582*t8901*t8919*var3[17] - 5.*t12016*t12018*var3[21] + 5.*t8901*t8919*var3[21];
  p_output1[20]=5.*t10579*t12006*var3[2] - 5.*t10579*t12006*var3[6] + 20.*t11956*t11960*t8903*var3[6] + 30.*t10608*t10610*t10617*var3[10] - 20.*t11956*t11960*t8903*var3[10] + 20.*t10543*t10557*t10582*var3[14] - 30.*t10608*t10610*t10617*var3[14] - 20.*t10543*t10557*t10582*var3[18] + 5.*t8901*t8919*var3[18] - 5.*t8901*t8919*var3[22];
  p_output1[21]=1.;
  p_output1[22]=t12011;
  p_output1[23]=t12012;
  p_output1[24]=t12013;
  p_output1[25]=t12014;
  p_output1[26]=t12015;
  p_output1[27]=t12017;
  p_output1[28]=-5.*t11956*t12006*t8903*var3[2] - 20.*t10608*t10610*t11960*var3[6] + 5.*t11956*t12006*t8903*var3[6] - 30.*t10543*t10557*t10617*var3[10] + 20.*t10608*t10610*t11960*var3[10] + 30.*t10543*t10557*t10617*var3[14] - 20.*t10582*t8901*t8919*var3[14] - 5.*t12016*t12018*var3[18] + 20.*t10582*t8901*t8919*var3[18] + 5.*t12016*t12018*var3[22];
  p_output1[29]=-5.*t12006*t12037*var3[2] + 5.*t10579*t12006*var3[6] - 5.*t11956*t12006*t8903*var3[6] - 20.*t10579*t11960*t12037*t8903*var3[6] - 20.*t10608*t10610*t11960*var3[10] - 30.*t10610*t10617*t11956*t12037*var3[10] + 20.*t11956*t11960*t8903*var3[10] - 30.*t10543*t10557*t10617*var3[14] + 30.*t10608*t10610*t10617*var3[14] - 20.*t10557*t10582*t10608*t12037*var3[14] + 20.*t10543*t10557*t10582*var3[18] - 5.*t10543*t12037*t8919*var3[18] - 20.*t10582*t8901*t8919*var3[18] - 5.*t12016*t12018*var3[22] + 5.*t8901*t8919*var3[22];
  p_output1[30]=5.*t10579*t12006*var3[3] - 5.*t10579*t12006*var3[7] + 20.*t11956*t11960*t8903*var3[7] + 30.*t10608*t10610*t10617*var3[11] - 20.*t11956*t11960*t8903*var3[11] + 20.*t10543*t10557*t10582*var3[15] - 30.*t10608*t10610*t10617*var3[15] - 20.*t10543*t10557*t10582*var3[19] + 5.*t8901*t8919*var3[19] - 5.*t8901*t8919*var3[23];
  p_output1[31]=1.;
  p_output1[32]=t12011;
  p_output1[33]=t12012;
  p_output1[34]=t12013;
  p_output1[35]=t12014;
  p_output1[36]=t12015;
  p_output1[37]=t12017;
  p_output1[38]=-5.*t11956*t12006*t8903*var3[3] - 20.*t10608*t10610*t11960*var3[7] + 5.*t11956*t12006*t8903*var3[7] - 30.*t10543*t10557*t10617*var3[11] + 20.*t10608*t10610*t11960*var3[11] + 30.*t10543*t10557*t10617*var3[15] - 20.*t10582*t8901*t8919*var3[15] - 5.*t12016*t12018*var3[19] + 20.*t10582*t8901*t8919*var3[19] + 5.*t12016*t12018*var3[23];
  p_output1[39]=-5.*t12006*t12037*var3[3] + 5.*t10579*t12006*var3[7] - 5.*t11956*t12006*t8903*var3[7] - 20.*t10579*t11960*t12037*t8903*var3[7] - 20.*t10608*t10610*t11960*var3[11] - 30.*t10610*t10617*t11956*t12037*var3[11] + 20.*t11956*t11960*t8903*var3[11] - 30.*t10543*t10557*t10617*var3[15] + 30.*t10608*t10610*t10617*var3[15] - 20.*t10557*t10582*t10608*t12037*var3[15] + 20.*t10543*t10557*t10582*var3[19] - 5.*t10543*t12037*t8919*var3[19] - 20.*t10582*t8901*t8919*var3[19] - 5.*t12016*t12018*var3[23] + 5.*t8901*t8919*var3[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_leftStance_LeftStance.hh"

namespace LeftStance
{

void J_y_leftStance_LeftStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
