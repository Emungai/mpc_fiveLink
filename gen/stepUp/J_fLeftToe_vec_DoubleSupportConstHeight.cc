/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:41:16 GMT-05:00
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
  double t3449;
  double t3454;
  double t3447;
  double t3456;
  double t3306;
  double t3450;
  double t3459;
  double t3460;
  double t3463;
  double t3503;
  double t3504;
  double t3505;
  double t3412;
  double t3427;
  double t3599;
  double t3652;
  double t3655;
  double t3462;
  double t3546;
  double t3585;
  double t3586;
  double t3588;
  double t3589;
  double t3592;
  double t3598;
  double t3656;
  double t3659;
  double t3663;
  double t3669;
  double t3698;
  double t3699;
  double t3703;
  double t3716;
  double t3717;
  double t3759;
  double t3760;
  double t3783;
  double t3727;
  double t3729;
  double t3732;
  double t3739;
  double t3745;
  double t3746;
  double t3747;
  double t3749;
  double t3784;
  double t3844;
  double t8357;
  double t8359;
  double t8366;
  double t8367;
  double t8430;
  double t8431;
  double t8435;
  double t8439;
  double t8443;
  double t8444;
  double t8445;
  double t8446;
  t3449 = Cos(var1[5]);
  t3454 = Sin(var1[2]);
  t3447 = Cos(var1[2]);
  t3456 = Sin(var1[5]);
  t3306 = Cos(var1[6]);
  t3450 = -1.*t3447*t3449;
  t3459 = t3454*t3456;
  t3460 = t3450 + t3459;
  t3463 = t3449*t3454;
  t3503 = t3447*t3456;
  t3504 = t3463 + t3503;
  t3505 = Sin(var1[6]);
  t3412 = -1.*t3306;
  t3427 = 1. + t3412;
  t3599 = -1.*t3449*t3454;
  t3652 = -1.*t3447*t3456;
  t3655 = t3599 + t3652;
  t3462 = 0.4*t3427*t3460;
  t3546 = -0.4*t3504*t3505;
  t3585 = t3306*t3460;
  t3586 = t3504*t3505;
  t3588 = t3585 + t3586;
  t3589 = 0.8*t3588;
  t3592 = t3462 + t3546 + t3589;
  t3598 = var2[2]*t3592;
  t3656 = 0.4*t3427*t3655;
  t3659 = -0.4*t3460*t3505;
  t3663 = t3306*t3655;
  t3669 = t3460*t3505;
  t3698 = t3663 + t3669;
  t3699 = 0.8*t3698;
  t3703 = t3656 + t3659 + t3699;
  t3716 = var2[0]*t3703;
  t3717 = t3598 + t3716;
  t3759 = t3447*t3449;
  t3760 = -1.*t3454*t3456;
  t3783 = t3759 + t3760;
  t3727 = -0.4*t3306*t3460;
  t3729 = 0.4*t3655*t3505;
  t3732 = -1.*t3655*t3505;
  t3739 = t3585 + t3732;
  t3745 = 0.8*t3739;
  t3746 = t3727 + t3729 + t3745;
  t3747 = var2[2]*t3746;
  t3749 = -0.4*t3306*t3655;
  t3784 = 0.4*t3783*t3505;
  t3844 = -1.*t3783*t3505;
  t8357 = t3663 + t3844;
  t8359 = 0.8*t8357;
  t8366 = t3749 + t3784 + t8359;
  t8367 = var2[0]*t8366;
  t8430 = t3747 + t8367;
  t8431 = 0.4*t3427*t3783;
  t8435 = -0.4*t3655*t3505;
  t8439 = t3306*t3783;
  t8443 = t3655*t3505;
  t8444 = t8439 + t8443;
  t8445 = 0.8*t8444;
  t8446 = t8431 + t8435 + t8445;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t3717;
  p_output1[3]=t3717;
  p_output1[4]=t8430;
  p_output1[5]=t8446;
  p_output1[6]=t3703;
  p_output1[7]=t3717;
  p_output1[8]=t3717;
  p_output1[9]=t8430;
  p_output1[10]=t8446;
  p_output1[11]=t3703;
  p_output1[12]=t8430;
  p_output1[13]=t8430;
  p_output1[14]=(0.4*t3306*t3504 + t3784 + 0.8*(-1.*t3306*t3504 + t3844))*var2[0] + (t3729 + 0.4*t3306*t3783 + 0.8*(t3732 - 1.*t3306*t3783))*var2[2];
  p_output1[15]=0.4*t3504*t3505 - 0.4*t3306*t3783 + 0.8*(-1.*t3504*t3505 + t8439);
  p_output1[16]=t8366;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fLeftToe_vec_DoubleSupportConstHeight.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_fLeftToe_vec_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
