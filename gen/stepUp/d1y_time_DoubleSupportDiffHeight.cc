/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:29:04 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t303;
  double t915;
  double t917;
  double t937;
  double t938;
  double t951;
  double t952;
  double t976;
  double t980;
  double t982;
  double t983;
  double t987;
  double t989;
  double t990;
  double t995;
  double t996;
  double t1000;
  double t1006;
  double t1009;
  double t1035;
  double t1051;
  double t1054;
  t303 = -1.*var5[1];
  t915 = var5[0] + t303;
  t917 = Power(t915,-5);
  t937 = -1. + var6[0];
  t938 = -1. + var7[0];
  t951 = 1/t938;
  t952 = -1.*var1[0];
  t976 = t952 + var1[1];
  t980 = t937*t951*t976;
  t982 = t303 + var1[0] + t980;
  t983 = Power(t982,4);
  t987 = Power(t915,-4);
  t989 = Power(t982,3);
  t990 = 1/t915;
  t995 = -1.*t990*t982;
  t996 = 1. + t995;
  t1000 = Power(t915,-3);
  t1006 = Power(t982,2);
  t1009 = Power(t996,2);
  t1035 = Power(t915,-2);
  t1051 = Power(t996,3);
  t1054 = Power(t996,4);
  p_output1[0]=var3[3] + 5.*t1054*t990*var4[0] + 20.*t1035*t1051*t982*var4[4] - 5.*t1054*t990*var4[4] + 30.*t1000*t1006*t1009*var4[8] - 20.*t1035*t1051*t982*var4[8] - 30.*t1000*t1006*t1009*var4[12] + 20.*t987*t989*t996*var4[12] + 5.*t917*t983*var4[16] - 20.*t987*t989*t996*var4[16] - 5.*t917*t983*var4[20];
  p_output1[1]=var3[4] + 5.*t1054*t990*var4[1] + 20.*t1035*t1051*t982*var4[5] - 5.*t1054*t990*var4[5] + 30.*t1000*t1006*t1009*var4[9] - 20.*t1035*t1051*t982*var4[9] - 30.*t1000*t1006*t1009*var4[13] + 20.*t987*t989*t996*var4[13] + 5.*t917*t983*var4[17] - 20.*t987*t989*t996*var4[17] - 5.*t917*t983*var4[21];
  p_output1[2]=var3[5] + 5.*t1054*t990*var4[2] + 20.*t1035*t1051*t982*var4[6] - 5.*t1054*t990*var4[6] + 30.*t1000*t1006*t1009*var4[10] - 20.*t1035*t1051*t982*var4[10] - 30.*t1000*t1006*t1009*var4[14] + 20.*t987*t989*t996*var4[14] + 5.*t917*t983*var4[18] - 20.*t987*t989*t996*var4[18] - 5.*t917*t983*var4[22];
  p_output1[3]=var3[6] + 5.*t1054*t990*var4[3] + 20.*t1035*t1051*t982*var4[7] - 5.*t1054*t990*var4[7] + 30.*t1000*t1006*t1009*var4[11] - 20.*t1035*t1051*t982*var4[11] - 30.*t1000*t1006*t1009*var4[15] + 20.*t987*t989*t996*var4[15] + 5.*t917*t983*var4[19] - 20.*t987*t989*t996*var4[19] - 5.*t917*t983*var4[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "d1y_time_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void d1y_time_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
