/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:03:08 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t9695;
  double t9667;
  double t9678;
  double t9682;
  double t9690;
  double t9692;
  double t9729;
  double t9730;
  double t9731;
  double t9732;
  double t9733;
  double t9734;
  double t9735;
  double t9738;
  double t9739;
  double t9740;
  double t9741;
  double t9742;
  double t9749;
  double t9750;
  double t9751;
  double t9754;
  double t9755;
  double t9758;
  double t9779;
  double t9781;
  double t9795;
  double t9796;
  double t9773;
  double t9774;
  double t9775;
  double t9776;
  double t9777;
  double t9778;
  double t9780;
  t9695 = -1.*var4[1];
  t9667 = -1. + var5[0];
  t9678 = -1. + var6[0];
  t9682 = 1/t9678;
  t9690 = -1.*t9667*t9682;
  t9692 = 1. + t9690;
  t9729 = var4[0] + t9695;
  t9730 = Power(t9729,-5);
  t9731 = -1.*var1[0];
  t9732 = t9731 + var1[1];
  t9733 = t9667*t9682*t9732;
  t9734 = t9695 + var1[0] + t9733;
  t9735 = Power(t9734,4);
  t9738 = Power(t9729,-4);
  t9739 = Power(t9734,3);
  t9740 = 1/t9729;
  t9741 = -1.*t9740*t9734;
  t9742 = 1. + t9741;
  t9749 = Power(t9729,-3);
  t9750 = Power(t9734,2);
  t9751 = Power(t9742,2);
  t9754 = Power(t9729,-2);
  t9755 = Power(t9742,3);
  t9758 = Power(t9742,4);
  t9779 = Power(t9734,5);
  t9781 = Power(t9729,-6);
  t9795 = -1.*t9754*t9734;
  t9796 = t9740 + t9795;
  t9773 = Power(t9742,5);
  t9774 = -1.*t9773;
  t9775 = -5.*t9740*t9734*t9758;
  t9776 = -10.*t9754*t9750*t9755;
  t9777 = -10.*t9749*t9739*t9751;
  t9778 = -5.*t9738*t9735*t9742;
  t9780 = -1.*t9730*t9779;
  p_output1[0]=5.*t9692*t9740*t9758*var3[0] + 20.*t9692*t9734*t9754*t9755*var3[2] - 5.*t9692*t9740*t9758*var3[2] + 30.*t9692*t9749*t9750*t9751*var3[4] - 20.*t9692*t9734*t9754*t9755*var3[4] + 20.*t9692*t9738*t9739*t9742*var3[6] - 30.*t9692*t9749*t9750*t9751*var3[6] + 5.*t9692*t9730*t9735*var3[8] - 20.*t9692*t9738*t9739*t9742*var3[8] - 5.*t9692*t9730*t9735*var3[10];
  p_output1[1]=5.*t9667*t9682*t9740*t9758*var3[0] + 20.*t9667*t9682*t9734*t9754*t9755*var3[2] - 5.*t9667*t9682*t9740*t9758*var3[2] + 30.*t9667*t9682*t9749*t9750*t9751*var3[4] - 20.*t9667*t9682*t9734*t9754*t9755*var3[4] + 20.*t9667*t9682*t9738*t9739*t9742*var3[6] - 30.*t9667*t9682*t9749*t9750*t9751*var3[6] + 5.*t9667*t9682*t9730*t9735*var3[8] - 20.*t9667*t9682*t9738*t9739*t9742*var3[8] - 5.*t9667*t9682*t9730*t9735*var3[10];
  p_output1[2]=1.;
  p_output1[3]=t9774;
  p_output1[4]=t9775;
  p_output1[5]=t9776;
  p_output1[6]=t9777;
  p_output1[7]=t9778;
  p_output1[8]=t9780;
  p_output1[9]=-5.*t9734*t9754*t9758*var3[0] - 20.*t9749*t9750*t9755*var3[2] + 5.*t9734*t9754*t9758*var3[2] - 30.*t9738*t9739*t9751*var3[4] + 20.*t9749*t9750*t9755*var3[4] - 20.*t9730*t9735*t9742*var3[6] + 30.*t9738*t9739*t9751*var3[6] + 20.*t9730*t9735*t9742*var3[8] - 5.*t9779*t9781*var3[8] + 5.*t9779*t9781*var3[10];
  p_output1[10]=-5.*t9758*t9796*var3[0] + 5.*t9740*t9758*var3[2] - 5.*t9734*t9754*t9758*var3[2] - 20.*t9734*t9740*t9755*t9796*var3[2] - 20.*t9749*t9750*t9755*var3[4] + 20.*t9734*t9754*t9755*var3[4] - 30.*t9750*t9751*t9754*t9796*var3[4] - 30.*t9738*t9739*t9751*var3[6] + 30.*t9749*t9750*t9751*var3[6] - 20.*t9739*t9742*t9749*t9796*var3[6] - 20.*t9730*t9735*t9742*var3[8] + 20.*t9738*t9739*t9742*var3[8] - 5.*t9735*t9738*t9796*var3[8] + 5.*t9730*t9735*var3[10] - 5.*t9779*t9781*var3[10];
  p_output1[11]=5.*t9692*t9740*t9758*var3[1] + 20.*t9692*t9734*t9754*t9755*var3[3] - 5.*t9692*t9740*t9758*var3[3] + 30.*t9692*t9749*t9750*t9751*var3[5] - 20.*t9692*t9734*t9754*t9755*var3[5] + 20.*t9692*t9738*t9739*t9742*var3[7] - 30.*t9692*t9749*t9750*t9751*var3[7] + 5.*t9692*t9730*t9735*var3[9] - 20.*t9692*t9738*t9739*t9742*var3[9] - 5.*t9692*t9730*t9735*var3[11];
  p_output1[12]=5.*t9667*t9682*t9740*t9758*var3[1] + 20.*t9667*t9682*t9734*t9754*t9755*var3[3] - 5.*t9667*t9682*t9740*t9758*var3[3] + 30.*t9667*t9682*t9749*t9750*t9751*var3[5] - 20.*t9667*t9682*t9734*t9754*t9755*var3[5] + 20.*t9667*t9682*t9738*t9739*t9742*var3[7] - 30.*t9667*t9682*t9749*t9750*t9751*var3[7] + 5.*t9667*t9682*t9730*t9735*var3[9] - 20.*t9667*t9682*t9738*t9739*t9742*var3[9] - 5.*t9667*t9682*t9730*t9735*var3[11];
  p_output1[13]=1.;
  p_output1[14]=t9774;
  p_output1[15]=t9775;
  p_output1[16]=t9776;
  p_output1[17]=t9777;
  p_output1[18]=t9778;
  p_output1[19]=t9780;
  p_output1[20]=-5.*t9734*t9754*t9758*var3[1] - 20.*t9749*t9750*t9755*var3[3] + 5.*t9734*t9754*t9758*var3[3] - 30.*t9738*t9739*t9751*var3[5] + 20.*t9749*t9750*t9755*var3[5] - 20.*t9730*t9735*t9742*var3[7] + 30.*t9738*t9739*t9751*var3[7] + 20.*t9730*t9735*t9742*var3[9] - 5.*t9779*t9781*var3[9] + 5.*t9779*t9781*var3[11];
  p_output1[21]=-5.*t9758*t9796*var3[1] + 5.*t9740*t9758*var3[3] - 5.*t9734*t9754*t9758*var3[3] - 20.*t9734*t9740*t9755*t9796*var3[3] - 20.*t9749*t9750*t9755*var3[5] + 20.*t9734*t9754*t9755*var3[5] - 30.*t9750*t9751*t9754*t9796*var3[5] - 30.*t9738*t9739*t9751*var3[7] + 30.*t9749*t9750*t9751*var3[7] - 20.*t9739*t9742*t9749*t9796*var3[7] - 20.*t9730*t9735*t9742*var3[9] + 20.*t9738*t9739*t9742*var3[9] - 5.*t9735*t9738*t9796*var3[9] + 5.*t9730*t9735*var3[11] - 5.*t9779*t9781*var3[11];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 12 && ncols == 1) && 
      !(mrows == 1 && ncols == 12))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_doubleSupportConst_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_y_doubleSupportConst_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
