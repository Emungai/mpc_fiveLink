/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:07:28 GMT-05:00
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
  double t10697;
  double t10672;
  double t10673;
  double t10698;
  double t10671;
  double t10696;
  double t10699;
  double t10700;
  double t10702;
  double t10703;
  double t10704;
  double t10709;
  double t10711;
  double t10734;
  double t10735;
  double t10736;
  double t10731;
  double t10732;
  double t10733;
  double t10751;
  double t10754;
  double t10758;
  double t10760;
  double t10762;
  double t10701;
  double t10710;
  double t10712;
  double t10713;
  double t10728;
  double t10729;
  double t10730;
  double t10763;
  double t10766;
  double t10767;
  double t10770;
  double t10771;
  double t10772;
  double t10780;
  double t10781;
  double t10782;
  double t10783;
  double t10784;
  double t10787;
  double t10788;
  double t10800;
  double t10806;
  double t10807;
  double t10808;
  double t10809;
  double t10810;
  double t10811;
  double t10798;
  double t10799;
  double t10801;
  double t10802;
  double t10803;
  double t10804;
  double t10805;
  double t10812;
  double t10813;
  double t10814;
  t10697 = Cos(var1[2]);
  t10672 = Cos(var1[3]);
  t10673 = Sin(var1[2]);
  t10698 = Sin(var1[3]);
  t10671 = Cos(var1[4]);
  t10696 = -1.*t10672*t10673;
  t10699 = -1.*t10697*t10698;
  t10700 = t10696 + t10699;
  t10702 = t10697*t10672;
  t10703 = -1.*t10673*t10698;
  t10704 = t10702 + t10703;
  t10709 = Sin(var1[4]);
  t10711 = t10671*t10700;
  t10734 = -1.*t10697*t10672;
  t10735 = t10673*t10698;
  t10736 = t10734 + t10735;
  t10731 = -1.*t10671;
  t10732 = 1. + t10731;
  t10733 = 0.4*t10732*t10700;
  t10751 = -0.4*t10736*t10709;
  t10754 = t10736*t10709;
  t10758 = t10711 + t10754;
  t10760 = 0.8*t10758;
  t10762 = t10733 + t10751 + t10760;
  t10701 = -0.4*t10671*t10700;
  t10710 = 0.4*t10704*t10709;
  t10712 = -1.*t10704*t10709;
  t10713 = t10711 + t10712;
  t10728 = 0.8*t10713;
  t10729 = t10701 + t10710 + t10728;
  t10730 = var2[4]*t10729;
  t10763 = var2[2]*t10762;
  t10766 = var2[3]*t10762;
  t10767 = t10730 + t10763 + t10766;
  t10770 = t10672*t10673;
  t10771 = t10697*t10698;
  t10772 = t10770 + t10771;
  t10780 = 0.4*t10732*t10704;
  t10781 = -0.4*t10700*t10709;
  t10782 = t10671*t10704;
  t10783 = t10700*t10709;
  t10784 = t10782 + t10783;
  t10787 = 0.8*t10784;
  t10788 = t10780 + t10781 + t10787;
  t10800 = t10671*t10736;
  t10806 = 0.4*t10732*t10736;
  t10807 = -0.4*t10772*t10709;
  t10808 = t10772*t10709;
  t10809 = t10800 + t10808;
  t10810 = 0.8*t10809;
  t10811 = t10806 + t10807 + t10810;
  t10798 = -0.4*t10671*t10736;
  t10799 = 0.4*t10700*t10709;
  t10801 = -1.*t10700*t10709;
  t10802 = t10800 + t10801;
  t10803 = 0.8*t10802;
  t10804 = t10798 + t10799 + t10803;
  t10805 = var2[4]*t10804;
  t10812 = var2[2]*t10811;
  t10813 = var2[3]*t10811;
  t10814 = t10805 + t10812 + t10813;
  p_output1[0]=t10767;
  p_output1[1]=t10767;
  p_output1[2]=t10729*var2[2] + t10729*var2[3] + (t10710 + 0.4*t10671*t10772 + 0.8*(t10712 - 1.*t10671*t10772))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t10788;
  p_output1[5]=t10788;
  p_output1[6]=-0.4*t10671*t10704 + 0.4*t10709*t10772 + 0.8*(-1.*t10709*t10772 + t10782);
  p_output1[7]=t10814;
  p_output1[8]=t10814;
  p_output1[9]=t10804*var2[2] + t10804*var2[3] + (0.4*t10671*t10704 + t10799 + 0.8*(-1.*t10671*t10704 + t10801))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t10762;
  p_output1[12]=t10762;
  p_output1[13]=t10729;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_RightToe_RightStance.hh"

namespace RightStance
{

void J_dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
