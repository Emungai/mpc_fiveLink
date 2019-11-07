/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:43 GMT-05:00
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
  double t7962;
  double t7970;
  double t7957;
  double t7973;
  double t7724;
  double t7967;
  double t7976;
  double t7981;
  double t8025;
  double t8218;
  double t8219;
  double t8837;
  double t7881;
  double t7946;
  double t9640;
  double t9645;
  double t9649;
  double t7984;
  double t8889;
  double t9151;
  double t9555;
  double t9601;
  double t9605;
  double t9606;
  double t9628;
  double t9629;
  double t9652;
  double t9655;
  double t9656;
  double t9659;
  double t9660;
  double t9661;
  double t9662;
  double t9665;
  double t9669;
  double t9670;
  double t9673;
  t7962 = Cos(var1[5]);
  t7970 = Sin(var1[2]);
  t7957 = Cos(var1[2]);
  t7973 = Sin(var1[5]);
  t7724 = Cos(var1[6]);
  t7967 = t7957*t7962;
  t7976 = -1.*t7970*t7973;
  t7981 = t7967 + t7976;
  t8025 = -1.*t7962*t7970;
  t8218 = -1.*t7957*t7973;
  t8219 = t8025 + t8218;
  t8837 = Sin(var1[6]);
  t7881 = -1.*t7724;
  t7946 = 1. + t7881;
  t9640 = -1.*t7957*t7962;
  t9645 = t7970*t7973;
  t9649 = t9640 + t9645;
  t7984 = 0.4*t7946*t7981;
  t8889 = -0.4*t8219*t8837;
  t9151 = t7724*t7981;
  t9555 = t8219*t8837;
  t9601 = t9151 + t9555;
  t9605 = 0.8*t9601;
  t9606 = t7984 + t8889 + t9605;
  t9628 = var2[0]*t9606;
  t9629 = 0.4*t7946*t8219;
  t9652 = -0.4*t9649*t8837;
  t9655 = t7724*t8219;
  t9656 = t9649*t8837;
  t9659 = t9655 + t9656;
  t9660 = 0.8*t9659;
  t9661 = t9629 + t9652 + t9660;
  t9662 = var2[2]*t9661;
  t9665 = t9628 + t9662;
  t9669 = t7962*t7970;
  t9670 = t7957*t7973;
  t9673 = t9669 + t9670;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t9665;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=t9665;
  p_output1[6]=(-0.4*t7724*t7981 + 0.4*t8837*t9673 + 0.8*(t9151 - 1.*t8837*t9673))*var2[0] + (-0.4*t7724*t8219 + 0.4*t7981*t8837 + 0.8*(-1.*t7981*t8837 + t9655))*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fLeftToe_vec_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void fLeftToe_vec_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
