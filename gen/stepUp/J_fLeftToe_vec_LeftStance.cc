/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:09:44 GMT-05:00
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
  double t8876;
  double t8880;
  double t8875;
  double t8881;
  double t2848;
  double t8878;
  double t8882;
  double t8886;
  double t8889;
  double t8890;
  double t8891;
  double t8892;
  double t8597;
  double t8871;
  double t8911;
  double t8912;
  double t8913;
  double t8887;
  double t8895;
  double t8897;
  double t8898;
  double t8902;
  double t8904;
  double t8909;
  double t8910;
  double t8917;
  double t8918;
  double t8920;
  double t8922;
  double t8925;
  double t11192;
  double t11207;
  double t11242;
  double t11262;
  double t11318;
  double t11320;
  double t11325;
  double t11275;
  double t11281;
  double t11287;
  double t11288;
  double t11304;
  double t11308;
  double t11314;
  double t11315;
  double t11329;
  double t11332;
  double t11337;
  double t11341;
  double t11345;
  double t11352;
  double t11355;
  double t11362;
  double t11367;
  double t11368;
  double t11371;
  double t11372;
  double t11373;
  double t11374;
  t8876 = Cos(var1[5]);
  t8880 = Sin(var1[2]);
  t8875 = Cos(var1[2]);
  t8881 = Sin(var1[5]);
  t2848 = Cos(var1[6]);
  t8878 = -1.*t8875*t8876;
  t8882 = t8880*t8881;
  t8886 = t8878 + t8882;
  t8889 = t8876*t8880;
  t8890 = t8875*t8881;
  t8891 = t8889 + t8890;
  t8892 = Sin(var1[6]);
  t8597 = -1.*t2848;
  t8871 = 1. + t8597;
  t8911 = -1.*t8876*t8880;
  t8912 = -1.*t8875*t8881;
  t8913 = t8911 + t8912;
  t8887 = 0.4*t8871*t8886;
  t8895 = -0.4*t8891*t8892;
  t8897 = t2848*t8886;
  t8898 = t8891*t8892;
  t8902 = t8897 + t8898;
  t8904 = 0.8*t8902;
  t8909 = t8887 + t8895 + t8904;
  t8910 = var2[2]*t8909;
  t8917 = 0.4*t8871*t8913;
  t8918 = -0.4*t8886*t8892;
  t8920 = t2848*t8913;
  t8922 = t8886*t8892;
  t8925 = t8920 + t8922;
  t11192 = 0.8*t8925;
  t11207 = t8917 + t8918 + t11192;
  t11242 = var2[0]*t11207;
  t11262 = t8910 + t11242;
  t11318 = t8875*t8876;
  t11320 = -1.*t8880*t8881;
  t11325 = t11318 + t11320;
  t11275 = -0.4*t2848*t8886;
  t11281 = 0.4*t8913*t8892;
  t11287 = -1.*t8913*t8892;
  t11288 = t8897 + t11287;
  t11304 = 0.8*t11288;
  t11308 = t11275 + t11281 + t11304;
  t11314 = var2[2]*t11308;
  t11315 = -0.4*t2848*t8913;
  t11329 = 0.4*t11325*t8892;
  t11332 = -1.*t11325*t8892;
  t11337 = t8920 + t11332;
  t11341 = 0.8*t11337;
  t11345 = t11315 + t11329 + t11341;
  t11352 = var2[0]*t11345;
  t11355 = t11314 + t11352;
  t11362 = 0.4*t8871*t11325;
  t11367 = -0.4*t8913*t8892;
  t11368 = t2848*t11325;
  t11371 = t8913*t8892;
  t11372 = t11368 + t11371;
  t11373 = 0.8*t11372;
  t11374 = t11362 + t11367 + t11373;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t11262;
  p_output1[3]=t11262;
  p_output1[4]=t11355;
  p_output1[5]=t11374;
  p_output1[6]=t11207;
  p_output1[7]=t11262;
  p_output1[8]=t11262;
  p_output1[9]=t11355;
  p_output1[10]=t11374;
  p_output1[11]=t11207;
  p_output1[12]=t11355;
  p_output1[13]=t11355;
  p_output1[14]=(t11329 + 0.4*t2848*t8891 + 0.8*(t11332 - 1.*t2848*t8891))*var2[0] + (t11281 + 0.4*t11325*t2848 + 0.8*(t11287 - 1.*t11325*t2848))*var2[2];
  p_output1[15]=-0.4*t11325*t2848 + 0.4*t8891*t8892 + 0.8*(t11368 - 1.*t8891*t8892);
  p_output1[16]=t11345;
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

#include "J_fLeftToe_vec_LeftStance.hh"

namespace LeftStance
{

void J_fLeftToe_vec_LeftStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
