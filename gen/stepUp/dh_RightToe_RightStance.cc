/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:18:26 GMT-05:00
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
  double t9546;
  double t11088;
  double t9544;
  double t11092;
  double t8538;
  double t9592;
  double t11093;
  double t11094;
  double t11096;
  double t11107;
  double t11108;
  double t11109;
  double t8548;
  double t9541;
  double t11095;
  double t11110;
  double t11111;
  double t11112;
  double t11113;
  double t11114;
  double t11115;
  double t11119;
  double t11120;
  double t11121;
  double t11131;
  double t11138;
  double t11139;
  double t11140;
  double t11137;
  double t11141;
  double t11142;
  double t11143;
  double t11144;
  double t11145;
  t9546 = Cos(var1[3]);
  t11088 = Sin(var1[2]);
  t9544 = Cos(var1[2]);
  t11092 = Sin(var1[3]);
  t8538 = Cos(var1[4]);
  t9592 = t9544*t9546;
  t11093 = -1.*t11088*t11092;
  t11094 = t9592 + t11093;
  t11096 = -1.*t9546*t11088;
  t11107 = -1.*t9544*t11092;
  t11108 = t11096 + t11107;
  t11109 = Sin(var1[4]);
  t8548 = -1.*t8538;
  t9541 = 1. + t8548;
  t11095 = 0.4*t9541*t11094;
  t11110 = -0.4*t11108*t11109;
  t11111 = t8538*t11094;
  t11112 = t11108*t11109;
  t11113 = t11111 + t11112;
  t11114 = 0.8*t11113;
  t11115 = t11095 + t11110 + t11114;
  t11119 = t9546*t11088;
  t11120 = t9544*t11092;
  t11121 = t11119 + t11120;
  t11131 = t8538*t11108;
  t11138 = -1.*t9544*t9546;
  t11139 = t11088*t11092;
  t11140 = t11138 + t11139;
  t11137 = 0.4*t9541*t11108;
  t11141 = -0.4*t11140*t11109;
  t11142 = t11140*t11109;
  t11143 = t11131 + t11142;
  t11144 = 0.8*t11143;
  t11145 = t11137 + t11141 + t11144;
  p_output1[0]=var2[0] + t11115*var2[2] + t11115*var2[3] + (0.4*t11109*t11121 + 0.8*(t11111 - 1.*t11109*t11121) - 0.4*t11094*t8538)*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t11145*var2[2] + t11145*var2[3] + (0.4*t11094*t11109 + 0.8*(-1.*t11094*t11109 + t11131) - 0.4*t11108*t8538)*var2[4];
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

#include "dh_RightToe_RightStance.hh"

namespace Pattern[righStance, Blank[opt]]
{

void dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
