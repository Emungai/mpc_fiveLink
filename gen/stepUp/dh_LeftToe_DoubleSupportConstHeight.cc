/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:21:53 GMT-05:00
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
  double t18117;
  double t18119;
  double t18083;
  double t18130;
  double t13628;
  double t18118;
  double t18135;
  double t18136;
  double t18138;
  double t18139;
  double t18140;
  double t18141;
  double t18073;
  double t18081;
  double t18137;
  double t18142;
  double t18143;
  double t18144;
  double t18145;
  double t18146;
  double t18147;
  double t18151;
  double t18152;
  double t18153;
  double t18163;
  double t18170;
  double t18171;
  double t18172;
  double t18169;
  double t18173;
  double t18174;
  double t18175;
  double t18176;
  double t18177;
  t18117 = Cos(var1[5]);
  t18119 = Sin(var1[2]);
  t18083 = Cos(var1[2]);
  t18130 = Sin(var1[5]);
  t13628 = Cos(var1[6]);
  t18118 = t18083*t18117;
  t18135 = -1.*t18119*t18130;
  t18136 = t18118 + t18135;
  t18138 = -1.*t18117*t18119;
  t18139 = -1.*t18083*t18130;
  t18140 = t18138 + t18139;
  t18141 = Sin(var1[6]);
  t18073 = -1.*t13628;
  t18081 = 1. + t18073;
  t18137 = 0.4*t18081*t18136;
  t18142 = -0.4*t18140*t18141;
  t18143 = t13628*t18136;
  t18144 = t18140*t18141;
  t18145 = t18143 + t18144;
  t18146 = 0.8*t18145;
  t18147 = t18137 + t18142 + t18146;
  t18151 = t18117*t18119;
  t18152 = t18083*t18130;
  t18153 = t18151 + t18152;
  t18163 = t13628*t18140;
  t18170 = -1.*t18083*t18117;
  t18171 = t18119*t18130;
  t18172 = t18170 + t18171;
  t18169 = 0.4*t18081*t18140;
  t18173 = -0.4*t18172*t18141;
  t18174 = t18172*t18141;
  t18175 = t18163 + t18174;
  t18176 = 0.8*t18175;
  t18177 = t18169 + t18173 + t18176;
  p_output1[0]=var2[0] + t18147*var2[2] + t18147*var2[5] + (-0.4*t13628*t18136 + 0.4*t18141*t18153 + 0.8*(t18143 - 1.*t18141*t18153))*var2[6];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t18177*var2[2] + t18177*var2[5] + (-0.4*t13628*t18140 + 0.4*t18136*t18141 + 0.8*(-1.*t18136*t18141 + t18163))*var2[6];
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

#include "dh_LeftToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void dh_LeftToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
