/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:41 GMT-05:00
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
  double t748;
  double t759;
  double t745;
  double t770;
  double t613;
  double t749;
  double t781;
  double t795;
  double t797;
  double t799;
  double t800;
  double t801;
  double t680;
  double t738;
  double t838;
  double t2586;
  double t2597;
  double t796;
  double t826;
  double t827;
  double t828;
  double t829;
  double t830;
  double t832;
  double t833;
  double t834;
  double t2617;
  double t2621;
  double t5698;
  double t6214;
  double t7162;
  double t7642;
  double t7644;
  double t7715;
  double t7734;
  double t7741;
  double t7750;
  t748 = Cos(var1[3]);
  t759 = Sin(var1[2]);
  t745 = Cos(var1[2]);
  t770 = Sin(var1[3]);
  t613 = Cos(var1[4]);
  t749 = t745*t748;
  t781 = -1.*t759*t770;
  t795 = t749 + t781;
  t797 = -1.*t748*t759;
  t799 = -1.*t745*t770;
  t800 = t797 + t799;
  t801 = Sin(var1[4]);
  t680 = -1.*t613;
  t738 = 1. + t680;
  t838 = -1.*t745*t748;
  t2586 = t759*t770;
  t2597 = t838 + t2586;
  t796 = 0.4*t738*t795;
  t826 = -0.4*t800*t801;
  t827 = t613*t795;
  t828 = t800*t801;
  t829 = t827 + t828;
  t830 = 0.8*t829;
  t832 = t796 + t826 + t830;
  t833 = var2[0]*t832;
  t834 = 0.4*t738*t800;
  t2617 = -0.4*t2597*t801;
  t2621 = t613*t800;
  t5698 = t2597*t801;
  t6214 = t2621 + t5698;
  t7162 = 0.8*t6214;
  t7642 = t834 + t2617 + t7162;
  t7644 = var2[2]*t7642;
  t7715 = t833 + t7644;
  t7734 = t748*t759;
  t7741 = t745*t770;
  t7750 = t7734 + t7741;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t7715;
  p_output1[3]=t7715;
  p_output1[4]=(-0.4*t613*t795 + 0.4*t7750*t801 + 0.8*(-1.*t7750*t801 + t827))*var2[0] + (-0.4*t613*t800 + 0.4*t795*t801 + 0.8*(t2621 - 1.*t795*t801))*var2[2];
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

#include "fRightToe_vec_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void fRightToe_vec_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
