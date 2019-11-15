/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:41:52 GMT-05:00
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
  double t8842;
  double t8844;
  double t8841;
  double t8855;
  double t3491;
  double t8843;
  double t8856;
  double t8857;
  double t8859;
  double t8860;
  double t8861;
  double t8862;
  double t8836;
  double t8840;
  double t8858;
  double t8863;
  double t8864;
  double t8865;
  double t8866;
  double t8867;
  double t8868;
  double t8872;
  double t8873;
  double t8874;
  double t8884;
  double t8891;
  double t8892;
  double t8893;
  double t8890;
  double t8894;
  double t8895;
  double t8896;
  double t8897;
  double t8898;
  t8842 = Cos(var1[5]);
  t8844 = Sin(var1[2]);
  t8841 = Cos(var1[2]);
  t8855 = Sin(var1[5]);
  t3491 = Cos(var1[6]);
  t8843 = t8841*t8842;
  t8856 = -1.*t8844*t8855;
  t8857 = t8843 + t8856;
  t8859 = -1.*t8842*t8844;
  t8860 = -1.*t8841*t8855;
  t8861 = t8859 + t8860;
  t8862 = Sin(var1[6]);
  t8836 = -1.*t3491;
  t8840 = 1. + t8836;
  t8858 = 0.4*t8840*t8857;
  t8863 = -0.4*t8861*t8862;
  t8864 = t3491*t8857;
  t8865 = t8861*t8862;
  t8866 = t8864 + t8865;
  t8867 = 0.8*t8866;
  t8868 = t8858 + t8863 + t8867;
  t8872 = t8842*t8844;
  t8873 = t8841*t8855;
  t8874 = t8872 + t8873;
  t8884 = t3491*t8861;
  t8891 = -1.*t8841*t8842;
  t8892 = t8844*t8855;
  t8893 = t8891 + t8892;
  t8890 = 0.4*t8840*t8861;
  t8894 = -0.4*t8893*t8862;
  t8895 = t8893*t8862;
  t8896 = t8884 + t8895;
  t8897 = 0.8*t8896;
  t8898 = t8890 + t8894 + t8897;
  p_output1[0]=var2[0] + t8868*var2[2] + t8868*var2[5] + (-0.4*t3491*t8857 + 0.4*t8862*t8874 + 0.8*(t8864 - 1.*t8862*t8874))*var2[6];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t8898*var2[2] + t8898*var2[5] + (-0.4*t3491*t8861 + 0.4*t8857*t8862 + 0.8*(-1.*t8857*t8862 + t8884))*var2[6];
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

namespace Pattern[DS1, Blank[opt]]
{

void dh_LeftToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
