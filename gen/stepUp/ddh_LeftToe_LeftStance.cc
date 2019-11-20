/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:09:58 GMT-05:00
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
  double t11720;
  double t11711;
  double t11712;
  double t11724;
  double t4774;
  double t11719;
  double t11726;
  double t11728;
  double t11732;
  double t11765;
  double t11766;
  double t11767;
  double t4799;
  double t10069;
  double t11802;
  double t11803;
  double t11804;
  double t11801;
  double t11805;
  double t11825;
  double t11826;
  double t11827;
  double t11828;
  double t11829;
  double t11834;
  double t11835;
  double t11836;
  double t11837;
  double t11838;
  double t11839;
  double t11861;
  double t11863;
  double t11865;
  double t11866;
  double t11869;
  double t11870;
  double t11871;
  double t11884;
  double t11885;
  double t11886;
  double t11883;
  double t11887;
  double t11890;
  double t11891;
  double t11892;
  double t11893;
  double t11882;
  double t11896;
  double t11897;
  double t11898;
  double t11912;
  double t11914;
  double t11919;
  double t11920;
  double t11921;
  double t11922;
  double t11923;
  double t11931;
  double t11934;
  double t11935;
  double t11936;
  double t11938;
  double t11939;
  double t11930;
  double t11940;
  double t11941;
  double t11942;
  t11720 = Cos(var1[2]);
  t11711 = Cos(var1[5]);
  t11712 = Sin(var1[2]);
  t11724 = Sin(var1[5]);
  t4774 = Cos(var1[6]);
  t11719 = t11711*t11712;
  t11726 = t11720*t11724;
  t11728 = t11719 + t11726;
  t11732 = t11720*t11711;
  t11765 = -1.*t11712*t11724;
  t11766 = t11732 + t11765;
  t11767 = Sin(var1[6]);
  t4799 = -1.*t4774;
  t10069 = 1. + t4799;
  t11802 = -1.*t11711*t11712;
  t11803 = -1.*t11720*t11724;
  t11804 = t11802 + t11803;
  t11801 = 0.4*t10069*t11766;
  t11805 = -0.4*t11804*t11767;
  t11825 = t4774*t11766;
  t11826 = t11804*t11767;
  t11827 = t11825 + t11826;
  t11828 = 0.8*t11827;
  t11829 = t11801 + t11805 + t11828;
  t11834 = -0.4*t4774*t11766;
  t11835 = 0.4*t11728*t11767;
  t11836 = -1.*t11728*t11767;
  t11837 = t11825 + t11836;
  t11838 = 0.8*t11837;
  t11839 = t11834 + t11835 + t11838;
  t11861 = -0.4*t4774*t11804;
  t11863 = 0.4*t11766*t11767;
  t11865 = t4774*t11804;
  t11866 = -1.*t11766*t11767;
  t11869 = t11865 + t11866;
  t11870 = 0.8*t11869;
  t11871 = t11861 + t11863 + t11870;
  t11884 = -1.*t11720*t11711;
  t11885 = t11712*t11724;
  t11886 = t11884 + t11885;
  t11883 = 0.4*t10069*t11804;
  t11887 = -0.4*t11886*t11767;
  t11890 = t11886*t11767;
  t11891 = t11865 + t11890;
  t11892 = 0.8*t11891;
  t11893 = t11883 + t11887 + t11892;
  t11882 = var2[6]*t11871;
  t11896 = var2[2]*t11893;
  t11897 = var2[5]*t11893;
  t11898 = t11882 + t11896 + t11897;
  t11912 = 0.4*t11804*t11767;
  t11914 = -1.*t11804*t11767;
  t11919 = -0.4*t4774*t11886;
  t11920 = t4774*t11886;
  t11921 = t11920 + t11914;
  t11922 = 0.8*t11921;
  t11923 = t11919 + t11912 + t11922;
  t11931 = 0.4*t10069*t11886;
  t11934 = -0.4*t11728*t11767;
  t11935 = t11728*t11767;
  t11936 = t11920 + t11935;
  t11938 = 0.8*t11936;
  t11939 = t11931 + t11934 + t11938;
  t11930 = var2[6]*t11923;
  t11940 = var2[2]*t11939;
  t11941 = var2[5]*t11939;
  t11942 = t11930 + t11940 + t11941;
  p_output1[0]=0.4*t10069*t11728 - 0.4*t11766*t11767 + 0.8*(t11766*t11767 + t11728*t4774) + var1[0] + var2[0] + t11829*var2[2] + t11898*var2[2] + t11829*var2[5] + t11898*var2[5] + t11839*var2[6] + var2[6]*(t11871*var2[2] + t11871*var2[5] + (t11863 + 0.4*t11728*t4774 + 0.8*(t11866 - 1.*t11728*t4774))*var2[6]) + var3[0] + t11829*var3[2] + t11829*var3[5] + t11839*var3[6] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t11801 + t11805 + t11828 + t11882 + t11896 + t11897 + var1[1] + var2[1] + t11942*var2[2] + t11942*var2[5] + var2[6]*(t11923*var2[2] + t11923*var2[5] + (t11912 + 0.4*t11766*t4774 + 0.8*(t11914 - 1.*t11766*t4774))*var2[6]) + var3[1] + t11893*var3[2] + t11893*var3[5] + t11871*var3[6] - 1.*var4[2];
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

#include "ddh_LeftToe_LeftStance.hh"

namespace LeftStance
{

void ddh_LeftToe_LeftStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
