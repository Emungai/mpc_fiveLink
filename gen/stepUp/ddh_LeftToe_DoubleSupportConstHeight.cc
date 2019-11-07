/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:21:59 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t4952;
  double t4944;
  double t4947;
  double t5090;
  double t4931;
  double t4948;
  double t5094;
  double t5105;
  double t7368;
  double t7371;
  double t7649;
  double t7701;
  double t4932;
  double t4943;
  double t9681;
  double t9703;
  double t10216;
  double t9473;
  double t10221;
  double t10226;
  double t10233;
  double t10234;
  double t10252;
  double t10256;
  double t11825;
  double t11917;
  double t11929;
  double t12050;
  double t12066;
  double t12077;
  double t12129;
  double t12246;
  double t14308;
  double t14364;
  double t14370;
  double t14417;
  double t14428;
  double t14760;
  double t14764;
  double t14765;
  double t14759;
  double t14766;
  double t14777;
  double t14799;
  double t14800;
  double t14801;
  double t14757;
  double t14811;
  double t14833;
  double t14845;
  double t18180;
  double t18185;
  double t18190;
  double t18191;
  double t18199;
  double t18200;
  double t18201;
  double t18224;
  double t18225;
  double t18226;
  double t18227;
  double t18228;
  double t18229;
  double t18223;
  double t18230;
  double t18231;
  double t18232;
  t4952 = Cos(var1[2]);
  t4944 = Cos(var1[5]);
  t4947 = Sin(var1[2]);
  t5090 = Sin(var1[5]);
  t4931 = Cos(var1[6]);
  t4948 = t4944*t4947;
  t5094 = t4952*t5090;
  t5105 = t4948 + t5094;
  t7368 = t4952*t4944;
  t7371 = -1.*t4947*t5090;
  t7649 = t7368 + t7371;
  t7701 = Sin(var1[6]);
  t4932 = -1.*t4931;
  t4943 = 1. + t4932;
  t9681 = -1.*t4944*t4947;
  t9703 = -1.*t4952*t5090;
  t10216 = t9681 + t9703;
  t9473 = 0.4*t4943*t7649;
  t10221 = -0.4*t10216*t7701;
  t10226 = t4931*t7649;
  t10233 = t10216*t7701;
  t10234 = t10226 + t10233;
  t10252 = 0.8*t10234;
  t10256 = t9473 + t10221 + t10252;
  t11825 = -0.4*t4931*t7649;
  t11917 = 0.4*t5105*t7701;
  t11929 = -1.*t5105*t7701;
  t12050 = t10226 + t11929;
  t12066 = 0.8*t12050;
  t12077 = t11825 + t11917 + t12066;
  t12129 = -0.4*t4931*t10216;
  t12246 = 0.4*t7649*t7701;
  t14308 = t4931*t10216;
  t14364 = -1.*t7649*t7701;
  t14370 = t14308 + t14364;
  t14417 = 0.8*t14370;
  t14428 = t12129 + t12246 + t14417;
  t14760 = -1.*t4952*t4944;
  t14764 = t4947*t5090;
  t14765 = t14760 + t14764;
  t14759 = 0.4*t4943*t10216;
  t14766 = -0.4*t14765*t7701;
  t14777 = t14765*t7701;
  t14799 = t14308 + t14777;
  t14800 = 0.8*t14799;
  t14801 = t14759 + t14766 + t14800;
  t14757 = var2[6]*t14428;
  t14811 = var2[2]*t14801;
  t14833 = var2[5]*t14801;
  t14845 = t14757 + t14811 + t14833;
  t18180 = 0.4*t10216*t7701;
  t18185 = -1.*t10216*t7701;
  t18190 = -0.4*t4931*t14765;
  t18191 = t4931*t14765;
  t18199 = t18191 + t18185;
  t18200 = 0.8*t18199;
  t18201 = t18190 + t18180 + t18200;
  t18224 = 0.4*t4943*t14765;
  t18225 = -0.4*t5105*t7701;
  t18226 = t5105*t7701;
  t18227 = t18191 + t18226;
  t18228 = 0.8*t18227;
  t18229 = t18224 + t18225 + t18228;
  t18223 = var2[6]*t18201;
  t18230 = var2[2]*t18229;
  t18231 = var2[5]*t18229;
  t18232 = t18223 + t18230 + t18231;
  p_output1[0]=0.4*t4943*t5105 - 0.4*t7649*t7701 + 0.8*(t4931*t5105 + t7649*t7701) + var1[0] + var2[0] + t10256*var2[2] + t14845*var2[2] + t10256*var2[5] + t14845*var2[5] + t12077*var2[6] + var2[6]*(t14428*var2[2] + t14428*var2[5] + (t12246 + 0.4*t4931*t5105 + 0.8*(t14364 - 1.*t4931*t5105))*var2[6]) + var3[0] + t10256*var3[2] + t10256*var3[5] + t12077*var3[6] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t10221 + t10252 + t14757 + t14811 + t14833 + t9473 + var1[1] + var2[1] + t18232*var2[2] + t18232*var2[5] + var2[6]*(t18201*var2[2] + t18201*var2[5] + (t18180 + 0.4*t4931*t7649 + 0.8*(t18185 - 1.*t4931*t7649))*var2[6]) + var3[1] + t14801*var3[2] + t14801*var3[5] + t14428*var3[6] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_LeftToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void ddh_LeftToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
