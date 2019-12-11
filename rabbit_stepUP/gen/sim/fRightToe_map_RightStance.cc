/*
 * Automatically Generated from Mathematica.
 * Tue 10 Dec 2019 22:13:14 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t981;
  double t983;
  double t976;
  double t984;
  double t955;
  double t982;
  double t985;
  double t986;
  double t988;
  double t989;
  double t990;
  double t991;
  double t963;
  double t964;
  double t987;
  double t992;
  double t993;
  double t994;
  double t995;
  double t996;
  double t997;
  double t999;
  double t1000;
  double t1001;
  double t1008;
  double t1009;
  double t1010;
  double t1007;
  double t1011;
  double t1012;
  double t1013;
  double t1014;
  double t1015;
  double t1016;
  t981 = Cos(var1[3]);
  t983 = Sin(var1[2]);
  t976 = Cos(var1[2]);
  t984 = Sin(var1[3]);
  t955 = Cos(var1[4]);
  t982 = t976*t981;
  t985 = -1.*t983*t984;
  t986 = t982 + t985;
  t988 = -1.*t981*t983;
  t989 = -1.*t976*t984;
  t990 = t988 + t989;
  t991 = Sin(var1[4]);
  t963 = -1.*t955;
  t964 = 1. + t963;
  t987 = 0.4*t964*t986;
  t992 = -0.4*t990*t991;
  t993 = t955*t986;
  t994 = t990*t991;
  t995 = t993 + t994;
  t996 = 0.8*t995;
  t997 = t987 + t992 + t996;
  t999 = t981*t983;
  t1000 = t976*t984;
  t1001 = t999 + t1000;
  t1008 = -1.*t976*t981;
  t1009 = t983*t984;
  t1010 = t1008 + t1009;
  t1007 = 0.4*t964*t990;
  t1011 = -0.4*t1010*t991;
  t1012 = t955*t990;
  t1013 = t1010*t991;
  t1014 = t1012 + t1013;
  t1015 = 0.8*t1014;
  t1016 = t1007 + t1011 + t1015;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=t997;
  p_output1[3]=t997;
  p_output1[4]=-0.4*t955*t986 + 0.4*t1001*t991 + 0.8*(-1.*t1001*t991 + t993);
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=1.;
  p_output1[16]=t1016;
  p_output1[17]=t1016;
  p_output1[18]=-0.4*t955*t990 + 0.4*t986*t991 + 0.8*(t1012 - 1.*t986*t991);
  p_output1[19]=0;
  p_output1[20]=0;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_map_RightStance.hh"

namespace SymFunction
{

void fRightToe_map_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
