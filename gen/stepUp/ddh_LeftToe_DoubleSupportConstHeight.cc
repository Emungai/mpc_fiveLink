/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:02:51 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t9506;
  double t9500;
  double t9504;
  double t9507;
  double t4357;
  double t9505;
  double t9508;
  double t9509;
  double t9518;
  double t9519;
  double t9520;
  double t9521;
  double t4718;
  double t9499;
  double t9545;
  double t9546;
  double t9547;
  double t9544;
  double t9548;
  double t9549;
  double t9550;
  double t9551;
  double t9552;
  double t9553;
  double t9558;
  double t9559;
  double t9560;
  double t9561;
  double t9562;
  double t9563;
  double t9566;
  double t9567;
  double t9568;
  double t9569;
  double t9570;
  double t9571;
  double t9572;
  double t9585;
  double t9586;
  double t9587;
  double t9584;
  double t9588;
  double t9589;
  double t9590;
  double t9591;
  double t9592;
  double t9583;
  double t9593;
  double t9594;
  double t9595;
  double t9605;
  double t9607;
  double t9612;
  double t9613;
  double t9614;
  double t9615;
  double t9616;
  double t9622;
  double t9623;
  double t9624;
  double t9625;
  double t9626;
  double t9627;
  double t9621;
  double t9628;
  double t9629;
  double t9630;
  t9506 = Cos(var1[2]);
  t9500 = Cos(var1[5]);
  t9504 = Sin(var1[2]);
  t9507 = Sin(var1[5]);
  t4357 = Cos(var1[6]);
  t9505 = t9500*t9504;
  t9508 = t9506*t9507;
  t9509 = t9505 + t9508;
  t9518 = t9506*t9500;
  t9519 = -1.*t9504*t9507;
  t9520 = t9518 + t9519;
  t9521 = Sin(var1[6]);
  t4718 = -1.*t4357;
  t9499 = 1. + t4718;
  t9545 = -1.*t9500*t9504;
  t9546 = -1.*t9506*t9507;
  t9547 = t9545 + t9546;
  t9544 = 0.4*t9499*t9520;
  t9548 = -0.4*t9547*t9521;
  t9549 = t4357*t9520;
  t9550 = t9547*t9521;
  t9551 = t9549 + t9550;
  t9552 = 0.8*t9551;
  t9553 = t9544 + t9548 + t9552;
  t9558 = -0.4*t4357*t9520;
  t9559 = 0.4*t9509*t9521;
  t9560 = -1.*t9509*t9521;
  t9561 = t9549 + t9560;
  t9562 = 0.8*t9561;
  t9563 = t9558 + t9559 + t9562;
  t9566 = -0.4*t4357*t9547;
  t9567 = 0.4*t9520*t9521;
  t9568 = t4357*t9547;
  t9569 = -1.*t9520*t9521;
  t9570 = t9568 + t9569;
  t9571 = 0.8*t9570;
  t9572 = t9566 + t9567 + t9571;
  t9585 = -1.*t9506*t9500;
  t9586 = t9504*t9507;
  t9587 = t9585 + t9586;
  t9584 = 0.4*t9499*t9547;
  t9588 = -0.4*t9587*t9521;
  t9589 = t9587*t9521;
  t9590 = t9568 + t9589;
  t9591 = 0.8*t9590;
  t9592 = t9584 + t9588 + t9591;
  t9583 = var2[6]*t9572;
  t9593 = var2[2]*t9592;
  t9594 = var2[5]*t9592;
  t9595 = t9583 + t9593 + t9594;
  t9605 = 0.4*t9547*t9521;
  t9607 = -1.*t9547*t9521;
  t9612 = -0.4*t4357*t9587;
  t9613 = t4357*t9587;
  t9614 = t9613 + t9607;
  t9615 = 0.8*t9614;
  t9616 = t9612 + t9605 + t9615;
  t9622 = 0.4*t9499*t9587;
  t9623 = -0.4*t9509*t9521;
  t9624 = t9509*t9521;
  t9625 = t9613 + t9624;
  t9626 = 0.8*t9625;
  t9627 = t9622 + t9623 + t9626;
  t9621 = var2[6]*t9616;
  t9628 = var2[2]*t9627;
  t9629 = var2[5]*t9627;
  t9630 = t9621 + t9628 + t9629;
  p_output1[0]=0.4*t9499*t9509 - 0.4*t9520*t9521 + 0.8*(t4357*t9509 + t9520*t9521) + var1[0] + var2[0] + t9553*var2[2] + t9595*var2[2] + t9553*var2[5] + t9595*var2[5] + t9563*var2[6] + var2[6]*(t9572*var2[2] + t9572*var2[5] + (0.4*t4357*t9509 + t9567 + 0.8*(-1.*t4357*t9509 + t9569))*var2[6]) + var3[0] + t9553*var3[2] + t9553*var3[5] + t9563*var3[6] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t9544 + t9548 + t9552 + t9583 + t9593 + t9594 + var1[1] + var2[1] + t9630*var2[2] + t9630*var2[5] + var2[6]*(t9616*var2[2] + t9616*var2[5] + (0.4*t4357*t9520 + t9605 + 0.8*(-1.*t4357*t9520 + t9607))*var2[6]) + var3[1] + t9592*var3[2] + t9592*var3[5] + t9572*var3[6] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_LeftToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void ddh_LeftToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
