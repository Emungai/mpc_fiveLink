/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:00:34 GMT-05:00
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
  double t8838;
  double t8843;
  double t4664;
  double t8844;
  double t2826;
  double t8842;
  double t8845;
  double t8846;
  double t8848;
  double t8849;
  double t8850;
  double t8851;
  double t4482;
  double t4625;
  double t8860;
  double t8861;
  double t8862;
  double t8847;
  double t8852;
  double t8853;
  double t8854;
  double t8855;
  double t8856;
  double t8857;
  double t8858;
  double t8859;
  double t8863;
  double t8864;
  double t8865;
  double t8866;
  double t8867;
  double t8868;
  double t8869;
  double t8870;
  double t8872;
  double t8873;
  double t8874;
  t8838 = Cos(var1[5]);
  t8843 = Sin(var1[2]);
  t4664 = Cos(var1[2]);
  t8844 = Sin(var1[5]);
  t2826 = Cos(var1[6]);
  t8842 = t4664*t8838;
  t8845 = -1.*t8843*t8844;
  t8846 = t8842 + t8845;
  t8848 = -1.*t8838*t8843;
  t8849 = -1.*t4664*t8844;
  t8850 = t8848 + t8849;
  t8851 = Sin(var1[6]);
  t4482 = -1.*t2826;
  t4625 = 1. + t4482;
  t8860 = -1.*t4664*t8838;
  t8861 = t8843*t8844;
  t8862 = t8860 + t8861;
  t8847 = 0.4*t4625*t8846;
  t8852 = -0.4*t8850*t8851;
  t8853 = t2826*t8846;
  t8854 = t8850*t8851;
  t8855 = t8853 + t8854;
  t8856 = 0.8*t8855;
  t8857 = t8847 + t8852 + t8856;
  t8858 = var2[0]*t8857;
  t8859 = 0.4*t4625*t8850;
  t8863 = -0.4*t8862*t8851;
  t8864 = t2826*t8850;
  t8865 = t8862*t8851;
  t8866 = t8864 + t8865;
  t8867 = 0.8*t8866;
  t8868 = t8859 + t8863 + t8867;
  t8869 = var2[2]*t8868;
  t8870 = t8858 + t8869;
  t8872 = t8838*t8843;
  t8873 = t4664*t8844;
  t8874 = t8872 + t8873;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t8870;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=t8870;
  p_output1[6]=(-0.4*t2826*t8846 + 0.4*t8851*t8874 + 0.8*(t8853 - 1.*t8851*t8874))*var2[0] + (-0.4*t2826*t8850 + 0.4*t8846*t8851 + 0.8*(-1.*t8846*t8851 + t8864))*var2[2];
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
