/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:21:22 GMT-05:00
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
  double t14098;
  double t14354;
  double t14097;
  double t14392;
  double t9165;
  double t14178;
  double t17523;
  double t17529;
  double t17628;
  double t17635;
  double t17636;
  double t17641;
  double t13850;
  double t13901;
  double t17711;
  double t17712;
  double t17721;
  double t17620;
  double t17687;
  double t17694;
  double t17695;
  double t17699;
  double t17700;
  double t17709;
  double t17710;
  double t17722;
  double t17723;
  double t17732;
  double t17733;
  double t17734;
  double t17737;
  double t17738;
  double t17739;
  double t17740;
  double t17751;
  double t17752;
  double t17753;
  double t17741;
  double t17742;
  double t17743;
  double t17746;
  double t17747;
  double t17748;
  double t17749;
  double t17750;
  double t17754;
  double t17755;
  double t17756;
  double t17757;
  double t17758;
  double t17759;
  double t17760;
  double t17761;
  double t17762;
  double t17763;
  double t17764;
  double t17765;
  double t17766;
  double t17767;
  t14098 = Cos(var1[3]);
  t14354 = Sin(var1[2]);
  t14097 = Cos(var1[2]);
  t14392 = Sin(var1[3]);
  t9165 = Cos(var1[4]);
  t14178 = -1.*t14097*t14098;
  t17523 = t14354*t14392;
  t17529 = t14178 + t17523;
  t17628 = t14098*t14354;
  t17635 = t14097*t14392;
  t17636 = t17628 + t17635;
  t17641 = Sin(var1[4]);
  t13850 = -1.*t9165;
  t13901 = 1. + t13850;
  t17711 = -1.*t14098*t14354;
  t17712 = -1.*t14097*t14392;
  t17721 = t17711 + t17712;
  t17620 = 0.4*t13901*t17529;
  t17687 = -0.4*t17636*t17641;
  t17694 = t9165*t17529;
  t17695 = t17636*t17641;
  t17699 = t17694 + t17695;
  t17700 = 0.8*t17699;
  t17709 = t17620 + t17687 + t17700;
  t17710 = var2[2]*t17709;
  t17722 = 0.4*t13901*t17721;
  t17723 = -0.4*t17529*t17641;
  t17732 = t9165*t17721;
  t17733 = t17529*t17641;
  t17734 = t17732 + t17733;
  t17737 = 0.8*t17734;
  t17738 = t17722 + t17723 + t17737;
  t17739 = var2[0]*t17738;
  t17740 = t17710 + t17739;
  t17751 = t14097*t14098;
  t17752 = -1.*t14354*t14392;
  t17753 = t17751 + t17752;
  t17741 = -0.4*t9165*t17529;
  t17742 = 0.4*t17721*t17641;
  t17743 = -1.*t17721*t17641;
  t17746 = t17694 + t17743;
  t17747 = 0.8*t17746;
  t17748 = t17741 + t17742 + t17747;
  t17749 = var2[2]*t17748;
  t17750 = -0.4*t9165*t17721;
  t17754 = 0.4*t17753*t17641;
  t17755 = -1.*t17753*t17641;
  t17756 = t17732 + t17755;
  t17757 = 0.8*t17756;
  t17758 = t17750 + t17754 + t17757;
  t17759 = var2[0]*t17758;
  t17760 = t17749 + t17759;
  t17761 = 0.4*t13901*t17753;
  t17762 = -0.4*t17721*t17641;
  t17763 = t9165*t17753;
  t17764 = t17721*t17641;
  t17765 = t17763 + t17764;
  t17766 = 0.8*t17765;
  t17767 = t17761 + t17762 + t17766;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t17740;
  p_output1[3]=t17740;
  p_output1[4]=t17760;
  p_output1[5]=t17767;
  p_output1[6]=t17738;
  p_output1[7]=t17740;
  p_output1[8]=t17740;
  p_output1[9]=t17760;
  p_output1[10]=t17767;
  p_output1[11]=t17738;
  p_output1[12]=t17760;
  p_output1[13]=t17760;
  p_output1[14]=(t17754 + 0.4*t17636*t9165 + 0.8*(t17755 - 1.*t17636*t9165))*var2[0] + (t17742 + 0.4*t17753*t9165 + 0.8*(t17743 - 1.*t17753*t9165))*var2[2];
  p_output1[15]=0.4*t17636*t17641 + 0.8*(-1.*t17636*t17641 + t17763) - 0.4*t17753*t9165;
  p_output1[16]=t17758;
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

#include "J_fRightToe_vec_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_fRightToe_vec_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
