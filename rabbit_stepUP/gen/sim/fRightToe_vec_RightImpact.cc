/*
 * Automatically Generated from Mathematica.
 * Mon 9 Dec 2019 23:20:02 GMT-05:00
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
  double t754;
  double t766;
  double t753;
  double t767;
  double t747;
  double t755;
  double t768;
  double t769;
  double t771;
  double t772;
  double t773;
  double t774;
  double t751;
  double t752;
  double t783;
  double t784;
  double t785;
  double t770;
  double t775;
  double t776;
  double t777;
  double t778;
  double t779;
  double t780;
  double t781;
  double t782;
  double t786;
  double t787;
  double t788;
  double t789;
  double t790;
  double t791;
  double t792;
  double t793;
  double t795;
  double t796;
  double t797;
  t754 = Cos(var1[3]);
  t766 = Sin(var1[2]);
  t753 = Cos(var1[2]);
  t767 = Sin(var1[3]);
  t747 = Cos(var1[4]);
  t755 = t753*t754;
  t768 = -1.*t766*t767;
  t769 = t755 + t768;
  t771 = -1.*t754*t766;
  t772 = -1.*t753*t767;
  t773 = t771 + t772;
  t774 = Sin(var1[4]);
  t751 = -1.*t747;
  t752 = 1. + t751;
  t783 = -1.*t753*t754;
  t784 = t766*t767;
  t785 = t783 + t784;
  t770 = 0.4*t752*t769;
  t775 = -0.4*t773*t774;
  t776 = t747*t769;
  t777 = t773*t774;
  t778 = t776 + t777;
  t779 = 0.8*t778;
  t780 = t770 + t775 + t779;
  t781 = var2[0]*t780;
  t782 = 0.4*t752*t773;
  t786 = -0.4*t785*t774;
  t787 = t747*t773;
  t788 = t785*t774;
  t789 = t787 + t788;
  t790 = 0.8*t789;
  t791 = t782 + t786 + t790;
  t792 = var2[2]*t791;
  t793 = t781 + t792;
  t795 = t754*t766;
  t796 = t753*t767;
  t797 = t795 + t796;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t793;
  p_output1[3]=t793;
  p_output1[4]=(-0.4*t747*t769 + 0.4*t774*t797 + 0.8*(t776 - 1.*t774*t797))*var2[0] + (-0.4*t747*t773 + 0.4*t769*t774 + 0.8*(-1.*t769*t774 + t787))*var2[2];
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

#include "fRightToe_vec_RightImpact.hh"

namespace SymFunction
{

void fRightToe_vec_RightImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
