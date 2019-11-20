/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:07:23 GMT-05:00
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
  double t10542;
  double t10545;
  double t10540;
  double t10546;
  double t239;
  double t10543;
  double t10547;
  double t10548;
  double t10557;
  double t10566;
  double t10567;
  double t10568;
  double t2722;
  double t10522;
  double t10549;
  double t10574;
  double t10575;
  double t10579;
  double t10580;
  double t10581;
  double t10582;
  double t10587;
  double t10591;
  double t10592;
  double t10609;
  double t10610;
  double t10611;
  double t10608;
  double t10615;
  double t10616;
  double t10617;
  double t10621;
  double t10623;
  double t10625;
  t10542 = Cos(var1[3]);
  t10545 = Sin(var1[2]);
  t10540 = Cos(var1[2]);
  t10546 = Sin(var1[3]);
  t239 = Cos(var1[4]);
  t10543 = t10540*t10542;
  t10547 = -1.*t10545*t10546;
  t10548 = t10543 + t10547;
  t10557 = -1.*t10542*t10545;
  t10566 = -1.*t10540*t10546;
  t10567 = t10557 + t10566;
  t10568 = Sin(var1[4]);
  t2722 = -1.*t239;
  t10522 = 1. + t2722;
  t10549 = 0.4*t10522*t10548;
  t10574 = -0.4*t10567*t10568;
  t10575 = t239*t10548;
  t10579 = t10567*t10568;
  t10580 = t10575 + t10579;
  t10581 = 0.8*t10580;
  t10582 = t10549 + t10574 + t10581;
  t10587 = t10542*t10545;
  t10591 = t10540*t10546;
  t10592 = t10587 + t10591;
  t10609 = -1.*t10540*t10542;
  t10610 = t10545*t10546;
  t10611 = t10609 + t10610;
  t10608 = 0.4*t10522*t10567;
  t10615 = -0.4*t10611*t10568;
  t10616 = t239*t10567;
  t10617 = t10611*t10568;
  t10621 = t10616 + t10617;
  t10623 = 0.8*t10621;
  t10625 = t10608 + t10615 + t10623;
  p_output1[0]=1.;
  p_output1[1]=t10582;
  p_output1[2]=t10582;
  p_output1[3]=0.4*t10568*t10592 + 0.8*(t10575 - 1.*t10568*t10592) - 0.4*t10548*t239;
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t10625;
  p_output1[8]=t10625;
  p_output1[9]=0.4*t10548*t10568 + 0.8*(-1.*t10548*t10568 + t10616) - 0.4*t10567*t239;
  p_output1[10]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RightToe_RightStance.hh"

namespace RightStance
{

void J_h_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
