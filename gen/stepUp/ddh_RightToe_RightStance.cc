/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:07:31 GMT-05:00
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
  double t4590;
  double t4497;
  double t4550;
  double t10768;
  double t4056;
  double t4553;
  double t10769;
  double t10773;
  double t10775;
  double t10776;
  double t10777;
  double t10778;
  double t4102;
  double t4284;
  double t10797;
  double t10815;
  double t10816;
  double t10795;
  double t10818;
  double t10820;
  double t10821;
  double t10824;
  double t10825;
  double t10826;
  double t10831;
  double t10832;
  double t10833;
  double t10834;
  double t10835;
  double t10836;
  double t10839;
  double t10840;
  double t10841;
  double t10842;
  double t10845;
  double t10846;
  double t10847;
  double t10862;
  double t10863;
  double t10864;
  double t10861;
  double t10865;
  double t10866;
  double t10867;
  double t10868;
  double t10869;
  double t10860;
  double t10870;
  double t10871;
  double t10872;
  double t10882;
  double t10884;
  double t10889;
  double t10890;
  double t10891;
  double t10892;
  double t10893;
  double t10899;
  double t10900;
  double t10901;
  double t10902;
  double t10903;
  double t10904;
  double t10898;
  double t10905;
  double t10906;
  double t10907;
  t4590 = Cos(var1[2]);
  t4497 = Cos(var1[3]);
  t4550 = Sin(var1[2]);
  t10768 = Sin(var1[3]);
  t4056 = Cos(var1[4]);
  t4553 = t4497*t4550;
  t10769 = t4590*t10768;
  t10773 = t4553 + t10769;
  t10775 = t4590*t4497;
  t10776 = -1.*t4550*t10768;
  t10777 = t10775 + t10776;
  t10778 = Sin(var1[4]);
  t4102 = -1.*t4056;
  t4284 = 1. + t4102;
  t10797 = -1.*t4497*t4550;
  t10815 = -1.*t4590*t10768;
  t10816 = t10797 + t10815;
  t10795 = 0.4*t4284*t10777;
  t10818 = -0.4*t10816*t10778;
  t10820 = t4056*t10777;
  t10821 = t10816*t10778;
  t10824 = t10820 + t10821;
  t10825 = 0.8*t10824;
  t10826 = t10795 + t10818 + t10825;
  t10831 = -0.4*t4056*t10777;
  t10832 = 0.4*t10773*t10778;
  t10833 = -1.*t10773*t10778;
  t10834 = t10820 + t10833;
  t10835 = 0.8*t10834;
  t10836 = t10831 + t10832 + t10835;
  t10839 = -0.4*t4056*t10816;
  t10840 = 0.4*t10777*t10778;
  t10841 = t4056*t10816;
  t10842 = -1.*t10777*t10778;
  t10845 = t10841 + t10842;
  t10846 = 0.8*t10845;
  t10847 = t10839 + t10840 + t10846;
  t10862 = -1.*t4590*t4497;
  t10863 = t4550*t10768;
  t10864 = t10862 + t10863;
  t10861 = 0.4*t4284*t10816;
  t10865 = -0.4*t10864*t10778;
  t10866 = t10864*t10778;
  t10867 = t10841 + t10866;
  t10868 = 0.8*t10867;
  t10869 = t10861 + t10865 + t10868;
  t10860 = var2[4]*t10847;
  t10870 = var2[2]*t10869;
  t10871 = var2[3]*t10869;
  t10872 = t10860 + t10870 + t10871;
  t10882 = 0.4*t10816*t10778;
  t10884 = -1.*t10816*t10778;
  t10889 = -0.4*t4056*t10864;
  t10890 = t4056*t10864;
  t10891 = t10890 + t10884;
  t10892 = 0.8*t10891;
  t10893 = t10889 + t10882 + t10892;
  t10899 = 0.4*t4284*t10864;
  t10900 = -0.4*t10773*t10778;
  t10901 = t10773*t10778;
  t10902 = t10890 + t10901;
  t10903 = 0.8*t10902;
  t10904 = t10899 + t10900 + t10903;
  t10898 = var2[4]*t10893;
  t10905 = var2[2]*t10904;
  t10906 = var2[3]*t10904;
  t10907 = t10898 + t10905 + t10906;
  p_output1[0]=-0.4*t10777*t10778 + 0.8*(t10777*t10778 + t10773*t4056) + 0.4*t10773*t4284 + var1[0] + var2[0] + t10826*var2[2] + t10872*var2[2] + t10826*var2[3] + t10872*var2[3] + t10836*var2[4] + var2[4]*(t10847*var2[2] + t10847*var2[3] + (t10840 + 0.4*t10773*t4056 + 0.8*(t10842 - 1.*t10773*t4056))*var2[4]) + var3[0] + t10826*var3[2] + t10826*var3[3] + t10836*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t10795 + t10818 + t10825 + t10860 + t10870 + t10871 + var1[1] + var2[1] + t10907*var2[2] + t10907*var2[3] + var2[4]*(t10893*var2[2] + t10893*var2[3] + (t10882 + 0.4*t10777*t4056 + 0.8*(t10884 - 1.*t10777*t4056))*var2[4]) + var3[1] + t10869*var3[2] + t10869*var3[3] + t10847*var3[4] - 1.*var4[2];
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

#include "ddh_RightToe_RightStance.hh"

namespace RightStance
{

void ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
