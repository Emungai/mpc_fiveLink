/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:38:21 GMT-05:00
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
  double t910;
  double t889;
  double t890;
  double t911;
  double t878;
  double t895;
  double t915;
  double t919;
  double t920;
  double t921;
  double t933;
  double t934;
  double t935;
  double t940;
  double t944;
  double t922;
  double t923;
  double t924;
  double t953;
  double t957;
  double t958;
  double t981;
  double t983;
  double t985;
  double t986;
  double t987;
  double t996;
  double t999;
  double t1002;
  double t989;
  double t992;
  double t993;
  double t994;
  double t995;
  double t1003;
  double t1004;
  double t1005;
  double t1006;
  t910 = Cos(var1[3]);
  t889 = Cos(var1[4]);
  t890 = Sin(var1[3]);
  t911 = Sin(var1[4]);
  t878 = Cos(var1[2]);
  t895 = -1.*t889*t890;
  t915 = -1.*t910*t911;
  t919 = t895 + t915;
  t920 = t878*t919;
  t921 = Sin(var1[2]);
  t933 = -1.*t910*t889;
  t934 = t890*t911;
  t935 = t933 + t934;
  t940 = t921*t935;
  t944 = t920 + t940;
  t922 = t910*t889;
  t923 = -1.*t890*t911;
  t924 = t922 + t923;
  t953 = -1.*t921*t919;
  t957 = t878*t935;
  t958 = t953 + t957;
  t981 = -1.*t889;
  t983 = 1. + t981;
  t985 = 0.4*t983;
  t986 = 0.64*t889;
  t987 = t985 + t986;
  t996 = t910*t987;
  t999 = -0.24*t890*t911;
  t1002 = t996 + t999;
  t989 = -0.24*t910*t911;
  t992 = t987*t890;
  t993 = 0.24*t910*t911;
  t994 = t992 + t993;
  t995 = t994*t924;
  t1003 = t919*t1002;
  t1004 = t889*t890;
  t1005 = t910*t911;
  t1006 = t1004 + t1005;
  p_output1[0]=var2[4]*(-0.384*(t920 - 1.*t921*t924)*var2[2] - 0.384*t944*var2[3] - 0.384*t944*var2[4]);
  p_output1[1]=var2[4]*(-0.384*(-1.*t878*t924 + t953)*var2[2] - 0.384*t958*var2[3] - 0.384*t958*var2[4]);
  p_output1[2]=var2[4]*(-0.384*(t1003 + t1002*t1006 + t924*(-1.*t890*t987 + t989) + t995)*var2[3] - 0.384*(t1003 + t924*(-0.24*t889*t890 + t989) + t995 + t1006*(0.24*t889*t910 + t999))*var2[4]);
  p_output1[3]=-0.384*(0.24*t889*t911 - 1.*t911*t987)*Power(var2[4],2);
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce1_vec5_five_link_walker.hh"

namespace Pattern[DS1, Blank[opt]]
{

void Ce1_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
