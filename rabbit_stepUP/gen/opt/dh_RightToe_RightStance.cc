/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:23:10 GMT-05:00
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
  double t8636;
  double t8638;
  double t8635;
  double t8649;
  double t2285;
  double t8637;
  double t8650;
  double t8651;
  double t8653;
  double t8654;
  double t8655;
  double t8656;
  double t8630;
  double t8634;
  double t8652;
  double t8657;
  double t8658;
  double t8659;
  double t8660;
  double t8661;
  double t8662;
  double t8666;
  double t8667;
  double t8668;
  double t8678;
  double t8685;
  double t8686;
  double t8687;
  double t8684;
  double t8688;
  double t8689;
  double t8690;
  double t8691;
  double t8692;
  t8636 = Cos(var1[3]);
  t8638 = Sin(var1[2]);
  t8635 = Cos(var1[2]);
  t8649 = Sin(var1[3]);
  t2285 = Cos(var1[4]);
  t8637 = t8635*t8636;
  t8650 = -1.*t8638*t8649;
  t8651 = t8637 + t8650;
  t8653 = -1.*t8636*t8638;
  t8654 = -1.*t8635*t8649;
  t8655 = t8653 + t8654;
  t8656 = Sin(var1[4]);
  t8630 = -1.*t2285;
  t8634 = 1. + t8630;
  t8652 = 0.4*t8634*t8651;
  t8657 = -0.4*t8655*t8656;
  t8658 = t2285*t8651;
  t8659 = t8655*t8656;
  t8660 = t8658 + t8659;
  t8661 = 0.8*t8660;
  t8662 = t8652 + t8657 + t8661;
  t8666 = t8636*t8638;
  t8667 = t8635*t8649;
  t8668 = t8666 + t8667;
  t8678 = t2285*t8655;
  t8685 = -1.*t8635*t8636;
  t8686 = t8638*t8649;
  t8687 = t8685 + t8686;
  t8684 = 0.4*t8634*t8655;
  t8688 = -0.4*t8687*t8656;
  t8689 = t8687*t8656;
  t8690 = t8678 + t8689;
  t8691 = 0.8*t8690;
  t8692 = t8684 + t8688 + t8691;
  p_output1[0]=var2[0] + t8662*var2[2] + t8662*var2[3] + (-0.4*t2285*t8651 + 0.4*t8656*t8668 + 0.8*(t8658 - 1.*t8656*t8668))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t8692*var2[2] + t8692*var2[3] + (-0.4*t2285*t8655 + 0.4*t8651*t8656 + 0.8*(-1.*t8651*t8656 + t8678))*var2[4];
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

namespace RightStance
{

void dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
