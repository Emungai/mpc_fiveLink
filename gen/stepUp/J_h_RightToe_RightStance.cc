/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:18:23 GMT-05:00
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
  double t11068;
  double t11070;
  double t11063;
  double t11071;
  double t9351;
  double t11069;
  double t11072;
  double t11073;
  double t11075;
  double t11076;
  double t11080;
  double t11081;
  double t9613;
  double t11052;
  double t11074;
  double t11082;
  double t11083;
  double t11084;
  double t11085;
  double t11086;
  double t11087;
  double t11089;
  double t11090;
  double t11091;
  double t11098;
  double t11099;
  double t11100;
  double t11097;
  double t11101;
  double t11102;
  double t11103;
  double t11104;
  double t11105;
  double t11106;
  t11068 = Cos(var1[3]);
  t11070 = Sin(var1[2]);
  t11063 = Cos(var1[2]);
  t11071 = Sin(var1[3]);
  t9351 = Cos(var1[4]);
  t11069 = t11063*t11068;
  t11072 = -1.*t11070*t11071;
  t11073 = t11069 + t11072;
  t11075 = -1.*t11068*t11070;
  t11076 = -1.*t11063*t11071;
  t11080 = t11075 + t11076;
  t11081 = Sin(var1[4]);
  t9613 = -1.*t9351;
  t11052 = 1. + t9613;
  t11074 = 0.4*t11052*t11073;
  t11082 = -0.4*t11080*t11081;
  t11083 = t9351*t11073;
  t11084 = t11080*t11081;
  t11085 = t11083 + t11084;
  t11086 = 0.8*t11085;
  t11087 = t11074 + t11082 + t11086;
  t11089 = t11068*t11070;
  t11090 = t11063*t11071;
  t11091 = t11089 + t11090;
  t11098 = -1.*t11063*t11068;
  t11099 = t11070*t11071;
  t11100 = t11098 + t11099;
  t11097 = 0.4*t11052*t11080;
  t11101 = -0.4*t11100*t11081;
  t11102 = t9351*t11080;
  t11103 = t11100*t11081;
  t11104 = t11102 + t11103;
  t11105 = 0.8*t11104;
  t11106 = t11097 + t11101 + t11105;
  p_output1[0]=1.;
  p_output1[1]=t11087;
  p_output1[2]=t11087;
  p_output1[3]=0.4*t11081*t11091 + 0.8*(t11083 - 1.*t11081*t11091) - 0.4*t11073*t9351;
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t11106;
  p_output1[8]=t11106;
  p_output1[9]=0.4*t11073*t11081 + 0.8*(-1.*t11073*t11081 + t11102) - 0.4*t11080*t9351;
  p_output1[10]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RightToe_RightStance.hh"

namespace Pattern[righStance, Blank[opt]]
{

void J_h_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
