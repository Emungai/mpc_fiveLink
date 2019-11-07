/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:21 GMT-05:00
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
  double t90;
  double t66;
  double t77;
  double t91;
  double t104;
  double t81;
  double t95;
  double t100;
  double t57;
  double t131;
  double t132;
  double t135;
  double t136;
  double t139;
  double t145;
  double t146;
  double t149;
  double t150;
  double t153;
  double t154;
  double t166;
  double t101;
  double t112;
  double t113;
  double t121;
  double t122;
  double t126;
  double t7725;
  double t8928;
  double t9165;
  double t12646;
  double t12740;
  double t12748;
  double t12830;
  double t12831;
  double t12849;
  double t12850;
  double t12851;
  double t12853;
  double t12854;
  double t12855;
  double t12859;
  double t12860;
  double t12861;
  double t12865;
  double t12866;
  double t12839;
  double t12840;
  double t12841;
  double t313;
  double t5811;
  double t5945;
  double t12827;
  double t12828;
  double t140;
  double t143;
  double t144;
  double t158;
  double t161;
  double t162;
  double t12756;
  double t12757;
  double t12758;
  double t12829;
  double t12838;
  double t12845;
  double t12846;
  double t12847;
  double t12852;
  double t12856;
  double t12857;
  double t12862;
  double t12863;
  double t12864;
  double t12867;
  double t12868;
  double t12870;
  double t12871;
  double t12872;
  double t12874;
  double t12875;
  double t12876;
  double t12877;
  double t12878;
  double t12896;
  double t12897;
  double t12898;
  double t12899;
  double t12900;
  double t12858;
  double t12869;
  double t12873;
  double t12879;
  double t12880;
  double t12885;
  double t12886;
  double t12887;
  double t12888;
  double t12889;
  double t157;
  double t165;
  double t12755;
  double t12780;
  double t12817;
  double t12905;
  double t12906;
  double t12907;
  double t12908;
  double t12909;
  t90 = Cos(var1[5]);
  t66 = Cos(var1[6]);
  t77 = Sin(var1[5]);
  t91 = Sin(var1[6]);
  t104 = Sin(var1[2]);
  t81 = -1.*t66*t77;
  t95 = -1.*t90*t91;
  t100 = t81 + t95;
  t57 = Cos(var1[2]);
  t131 = -1.*t66;
  t132 = 1. + t131;
  t135 = 0.4*t132;
  t136 = 0.64*t66;
  t139 = t135 + t136;
  t145 = t104*t100;
  t146 = t90*t66;
  t149 = -1.*t77*t91;
  t150 = t146 + t149;
  t153 = t57*t150;
  t154 = t145 + t153;
  t166 = t139*t66;
  t101 = t57*t100;
  t112 = -1.*t90*t66;
  t113 = t77*t91;
  t121 = t112 + t113;
  t122 = t104*t121;
  t126 = t101 + t122;
  t7725 = t66*t77;
  t8928 = t90*t91;
  t9165 = t7725 + t8928;
  t12646 = t57*t9165;
  t12740 = t104*t150;
  t12748 = t12646 + t12740;
  t12830 = -1.*t104*t150;
  t12831 = t101 + t12830;
  t12849 = t139*t77;
  t12850 = 0.24*t90*t91;
  t12851 = t12849 + t12850;
  t12853 = t90*t139;
  t12854 = -0.24*t77*t91;
  t12855 = t12853 + t12854;
  t12859 = -0.24*t66*t77;
  t12860 = -0.24*t90*t91;
  t12861 = t12859 + t12860;
  t12865 = 0.24*t90*t66;
  t12866 = t12865 + t12854;
  t12839 = -1.*t104*t100;
  t12840 = t57*t121;
  t12841 = t12839 + t12840;
  t313 = Power(t66,2);
  t5811 = -0.24*t313;
  t5945 = t166 + t5811;
  t12827 = -1.*t104*t9165;
  t12828 = t12827 + t153;
  t140 = t139*t91;
  t143 = -0.24*t66*t91;
  t144 = t140 + t143;
  t158 = -1.*t139*t91;
  t161 = 0.24*t66*t91;
  t162 = t158 + t161;
  t12756 = Power(t91,2);
  t12757 = 0.24*t12756;
  t12758 = t166 + t12757;
  t12829 = 3.2*t154*t12828;
  t12838 = 3.2*t12831*t12748;
  t12845 = 3.2*t154*t12841;
  t12846 = 3.2*t12831*t126;
  t12847 = t12829 + t12838 + t12845 + t12846;
  t12852 = -1.*t12851*t150;
  t12856 = -1.*t100*t12855;
  t12857 = t12852 + t12856;
  t12862 = t12861*t150;
  t12863 = t12851*t150;
  t12864 = t100*t12855;
  t12867 = t9165*t12866;
  t12868 = t12862 + t12863 + t12864 + t12867;
  t12870 = t12851*t9165;
  t12871 = t150*t12855;
  t12872 = t12870 + t12871;
  t12874 = -1.*t100*t12861;
  t12875 = -1.*t100*t12851;
  t12876 = -1.*t150*t12866;
  t12877 = -1.*t12855*t121;
  t12878 = t12874 + t12875 + t12876 + t12877;
  t12896 = 3.2*t12831*t12857;
  t12897 = 3.2*t12831*t12868;
  t12898 = 3.2*t12872*t12841;
  t12899 = 3.2*t12828*t12878;
  t12900 = t12896 + t12897 + t12898 + t12899;
  t12858 = 3.2*t154*t12857;
  t12869 = 3.2*t154*t12868;
  t12873 = 3.2*t12872*t126;
  t12879 = 3.2*t12748*t12878;
  t12880 = t12858 + t12869 + t12873 + t12879;
  t12885 = 3.2*t5945*t12828;
  t12886 = 3.2*t144*t12831;
  t12887 = 3.2*t162*t12831;
  t12888 = 3.2*t12758*t12841;
  t12889 = t12885 + t12886 + t12887 + t12888;
  t157 = 3.2*t144*t154;
  t165 = 3.2*t162*t154;
  t12755 = 3.2*t5945*t12748;
  t12780 = 3.2*t12758*t126;
  t12817 = t157 + t165 + t12755 + t12780;
  t12905 = 3.2*t5945*t12857;
  t12906 = 3.2*t162*t12872;
  t12907 = 3.2*t12758*t12868;
  t12908 = 3.2*t144*t12878;
  t12909 = t12905 + t12906 + t12907 + t12908;
  p_output1[0]=var2[6]*(-0.5*(6.4*t126*t154 + 6.4*t12748*t154)*var2[0] - 0.5*t12847*var2[1] - 0.5*t12880*var2[2] - 0.5*t12817*var2[5] - 0.384*t126*var2[6]);
  p_output1[1]=var2[6]*(-0.5*t12847*var2[0] - 0.5*(6.4*t12828*t12831 + 6.4*t12831*t12841)*var2[1] - 0.5*t12900*var2[2] - 0.5*t12889*var2[5] - 0.384*t12841*var2[6]);
  p_output1[2]=var2[6]*(-0.5*t12880*var2[0] - 0.5*t12900*var2[1] - 0.5*(6.4*t12868*t12872 + 6.4*t12857*t12878)*var2[2] - 0.5*t12909*var2[5] - 0.384*t12868*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[6]*(-0.5*t12817*var2[0] - 0.5*t12889*var2[1] - 0.5*t12909*var2[2] - 0.5*(6.4*t12758*t162 + 6.4*t144*t5945)*var2[5] - 0.384*t162*var2[6]);
  p_output1[6]=(-0.384*t126*var2[0] - 0.384*t12841*var2[1] - 0.384*t12868*var2[2] - 0.384*t162*var2[5])*var2[6];
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

#include "Ce2_vec7_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void Ce2_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
