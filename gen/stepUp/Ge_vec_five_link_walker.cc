/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:37 GMT-05:00
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
  double t601;
  double t614;
  double t635;
  double t639;
  double t664;
  double t665;
  double t672;
  double t682;
  double t709;
  double t738;
  double t741;
  double t742;
  double t750;
  double t752;
  double t753;
  double t754;
  double t758;
  double t760;
  double t768;
  double t770;
  double t772;
  double t777;
  double t680;
  double t686;
  double t705;
  double t707;
  double t743;
  double t744;
  double t745;
  double t746;
  double t747;
  double t748;
  double t749;
  double t801;
  double t805;
  double t806;
  double t759;
  double t761;
  double t763;
  double t764;
  double t778;
  double t780;
  double t781;
  double t793;
  double t794;
  double t795;
  double t796;
  double t838;
  double t839;
  double t2519;
  t601 = Sin(var1[2]);
  t614 = Cos(var1[3]);
  t635 = -1.*t614*t601;
  t639 = Cos(var1[2]);
  t664 = Sin(var1[3]);
  t665 = -1.*t639*t664;
  t672 = t635 + t665;
  t682 = Cos(var1[4]);
  t709 = -1.*t639*t614;
  t738 = t601*t664;
  t741 = t709 + t738;
  t742 = Sin(var1[4]);
  t750 = Cos(var1[5]);
  t752 = -1.*t750*t601;
  t753 = Sin(var1[5]);
  t754 = -1.*t639*t753;
  t758 = t752 + t754;
  t760 = Cos(var1[6]);
  t768 = -1.*t639*t750;
  t770 = t601*t753;
  t772 = t768 + t770;
  t777 = Sin(var1[6]);
  t680 = -7.33788*t672;
  t686 = -1.*t682;
  t705 = 1. + t686;
  t707 = 0.4*t705*t672;
  t743 = -0.4*t741*t742;
  t744 = t682*t672;
  t745 = t741*t742;
  t746 = t744 + t745;
  t747 = 0.64*t746;
  t748 = t707 + t743 + t747;
  t749 = -31.392000000000003*t748;
  t801 = t639*t614;
  t805 = -1.*t601*t664;
  t806 = t801 + t805;
  t759 = -7.33788*t758;
  t761 = -1.*t760;
  t763 = 1. + t761;
  t764 = 0.4*t763*t758;
  t778 = -0.4*t772*t777;
  t780 = t760*t758;
  t781 = t772*t777;
  t793 = t780 + t781;
  t794 = 0.64*t793;
  t795 = t764 + t778 + t794;
  t796 = -31.392000000000003*t795;
  t838 = t639*t750;
  t839 = -1.*t601*t753;
  t2519 = t838 + t839;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=28.252799999999997*t601 + t680 + t749 + t759 + t796;
  p_output1[3]=t680 + t749;
  p_output1[4]=-31.392000000000003*(-0.4*t672*t682 + 0.4*t742*t806 + 0.64*(t744 - 1.*t742*t806));
  p_output1[5]=t759 + t796;
  p_output1[6]=-31.392000000000003*(-0.4*t758*t760 + 0.4*t2519*t777 + 0.64*(-1.*t2519*t777 + t780));
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

#include "Ge_vec_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
