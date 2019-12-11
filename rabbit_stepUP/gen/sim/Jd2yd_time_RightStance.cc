/*
 * Automatically Generated from Mathematica.
 * Tue 10 Dec 2019 22:13:07 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
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

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t939;
  double t940;
  double t946;
  double t947;
  double t951;
  double t958;
  double t959;
  double t960;
  double t961;
  double t962;
  double t966;
  double t967;
  double t971;
  double t972;
  t939 = -1.*var3[1];
  t940 = var3[0] + t939;
  t946 = Power(t940,-5);
  t947 = t939 + var1[0];
  t951 = Power(t947,3);
  t958 = Power(t940,-4);
  t959 = Power(t947,2);
  t960 = 1/t940;
  t961 = -1.*t960*t947;
  t962 = 1. + t961;
  t966 = Power(t940,-3);
  t967 = Power(t962,2);
  t971 = Power(t940,-2);
  t972 = Power(t962,3);
  p_output1[0]=20.*t971*t972*var2[0] + 60.*t947*t966*t967*var2[4] - 40.*t971*t972*var2[4] + 60.*t958*t959*t962*var2[8] - 120.*t947*t966*t967*var2[8] + 20.*t971*t972*var2[8] + 20.*t946*t951*var2[12] - 120.*t958*t959*t962*var2[12] + 60.*t947*t966*t967*var2[12] - 40.*t946*t951*var2[16] + 60.*t958*t959*t962*var2[16] + 20.*t946*t951*var2[20];
  p_output1[1]=20.*t971*t972*var2[1] + 60.*t947*t966*t967*var2[5] - 40.*t971*t972*var2[5] + 60.*t958*t959*t962*var2[9] - 120.*t947*t966*t967*var2[9] + 20.*t971*t972*var2[9] + 20.*t946*t951*var2[13] - 120.*t958*t959*t962*var2[13] + 60.*t947*t966*t967*var2[13] - 40.*t946*t951*var2[17] + 60.*t958*t959*t962*var2[17] + 20.*t946*t951*var2[21];
  p_output1[2]=20.*t971*t972*var2[2] + 60.*t947*t966*t967*var2[6] - 40.*t971*t972*var2[6] + 60.*t958*t959*t962*var2[10] - 120.*t947*t966*t967*var2[10] + 20.*t971*t972*var2[10] + 20.*t946*t951*var2[14] - 120.*t958*t959*t962*var2[14] + 60.*t947*t966*t967*var2[14] - 40.*t946*t951*var2[18] + 60.*t958*t959*t962*var2[18] + 20.*t946*t951*var2[22];
  p_output1[3]=20.*t971*t972*var2[3] + 60.*t947*t966*t967*var2[7] - 40.*t971*t972*var2[7] + 60.*t958*t959*t962*var2[11] - 120.*t947*t966*t967*var2[11] + 20.*t971*t972*var2[11] + 20.*t946*t951*var2[15] - 120.*t958*t959*t962*var2[15] + 60.*t947*t966*t967*var2[15] - 40.*t946*t951*var2[19] + 60.*t958*t959*t962*var2[19] + 20.*t946*t951*var2[23];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "Jd2yd_time_RightStance.hh"

namespace SymFunction
{

void Jd2yd_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
