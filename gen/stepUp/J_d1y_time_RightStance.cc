/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:19:11 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t11744;
  double t11716;
  double t11717;
  double t11737;
  double t11739;
  double t11743;
  double t11747;
  double t11748;
  double t11750;
  double t11751;
  double t11752;
  double t11762;
  double t11763;
  double t11767;
  double t11768;
  double t11769;
  double t11770;
  double t11771;
  double t11777;
  double t11778;
  double t11782;
  double t11783;
  double t11801;
  double t11812;
  double t11817;
  double t11837;
  double t11838;
  double t11802;
  double t11803;
  double t11804;
  double t11805;
  double t11806;
  double t11807;
  double t11808;
  double t11809;
  double t11810;
  double t11811;
  double t11813;
  double t11814;
  double t11815;
  double t11816;
  t11744 = -1.*var5[1];
  t11716 = -1. + var6[0];
  t11717 = -1. + var7[0];
  t11737 = 1/t11717;
  t11739 = -1.*t11716*t11737;
  t11743 = 1. + t11739;
  t11747 = var5[0] + t11744;
  t11748 = Power(t11747,-5);
  t11750 = -1.*var1[0];
  t11751 = t11750 + var1[1];
  t11752 = t11716*t11737*t11751;
  t11762 = t11744 + var1[0] + t11752;
  t11763 = Power(t11762,3);
  t11767 = Power(t11747,-4);
  t11768 = Power(t11762,2);
  t11769 = 1/t11747;
  t11770 = -1.*t11769*t11762;
  t11771 = 1. + t11770;
  t11777 = Power(t11747,-3);
  t11778 = Power(t11771,2);
  t11782 = Power(t11747,-2);
  t11783 = Power(t11771,3);
  t11801 = Power(t11771,4);
  t11812 = Power(t11762,4);
  t11817 = Power(t11747,-6);
  t11837 = -1.*t11782*t11762;
  t11838 = t11769 + t11837;
  t11802 = 5.*t11769*t11801;
  t11803 = 20.*t11782*t11762*t11783;
  t11804 = -5.*t11769*t11801;
  t11805 = t11803 + t11804;
  t11806 = 30.*t11777*t11768*t11778;
  t11807 = -20.*t11782*t11762*t11783;
  t11808 = t11806 + t11807;
  t11809 = 20.*t11767*t11763*t11771;
  t11810 = -30.*t11777*t11768*t11778;
  t11811 = t11809 + t11810;
  t11813 = 5.*t11748*t11812;
  t11814 = -20.*t11767*t11763*t11771;
  t11815 = t11813 + t11814;
  t11816 = -5.*t11748*t11812;
  p_output1[0]=-20.*t11743*t11782*t11783*var4[0] - 60.*t11743*t11762*t11777*t11778*var4[4] + 40.*t11743*t11782*t11783*var4[4] - 60.*t11743*t11767*t11768*t11771*var4[8] + 120.*t11743*t11762*t11777*t11778*var4[8] - 20.*t11743*t11782*t11783*var4[8] - 20.*t11743*t11748*t11763*var4[12] + 120.*t11743*t11767*t11768*t11771*var4[12] - 60.*t11743*t11762*t11777*t11778*var4[12] + 40.*t11743*t11748*t11763*var4[16] - 60.*t11743*t11767*t11768*t11771*var4[16] - 20.*t11743*t11748*t11763*var4[20];
  p_output1[1]=-20.*t11716*t11737*t11782*t11783*var4[0] - 60.*t11716*t11737*t11762*t11777*t11778*var4[4] + 40.*t11716*t11737*t11782*t11783*var4[4] - 60.*t11716*t11737*t11767*t11768*t11771*var4[8] + 120.*t11716*t11737*t11762*t11777*t11778*var4[8] - 20.*t11716*t11737*t11782*t11783*var4[8] - 20.*t11716*t11737*t11748*t11763*var4[12] + 120.*t11716*t11737*t11767*t11768*t11771*var4[12] - 60.*t11716*t11737*t11762*t11777*t11778*var4[12] + 40.*t11716*t11737*t11748*t11763*var4[16] - 60.*t11716*t11737*t11767*t11768*t11771*var4[16] - 20.*t11716*t11737*t11748*t11763*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t11802;
  p_output1[4]=t11805;
  p_output1[5]=t11808;
  p_output1[6]=t11811;
  p_output1[7]=t11815;
  p_output1[8]=t11816;
  p_output1[9]=20.*t11762*t11777*t11783*var4[0] - 5.*t11782*t11801*var4[0] + 60.*t11767*t11768*t11778*var4[4] - 60.*t11762*t11777*t11783*var4[4] + 5.*t11782*t11801*var4[4] + 60.*t11748*t11763*t11771*var4[8] - 150.*t11767*t11768*t11778*var4[8] + 40.*t11762*t11777*t11783*var4[8] - 140.*t11748*t11763*t11771*var4[12] + 90.*t11767*t11768*t11778*var4[12] + 20.*t11812*t11817*var4[12] + 80.*t11748*t11763*t11771*var4[16] - 45.*t11812*t11817*var4[16] + 25.*t11812*t11817*var4[20];
  p_output1[10]=5.*t11782*t11801*var4[0] + 20.*t11769*t11783*t11838*var4[0] + 40.*t11762*t11777*t11783*var4[4] - 20.*t11782*t11783*var4[4] - 5.*t11782*t11801*var4[4] + 60.*t11762*t11778*t11782*t11838*var4[4] - 20.*t11769*t11783*t11838*var4[4] + 90.*t11767*t11768*t11778*var4[8] - 60.*t11762*t11777*t11778*var4[8] - 40.*t11762*t11777*t11783*var4[8] + 20.*t11782*t11783*var4[8] + 60.*t11768*t11771*t11777*t11838*var4[8] - 60.*t11762*t11778*t11782*t11838*var4[8] + 80.*t11748*t11763*t11771*var4[12] - 60.*t11767*t11768*t11771*var4[12] - 90.*t11767*t11768*t11778*var4[12] + 60.*t11762*t11777*t11778*var4[12] + 20.*t11763*t11767*t11838*var4[12] - 60.*t11768*t11771*t11777*t11838*var4[12] - 20.*t11748*t11763*var4[16] - 80.*t11748*t11763*t11771*var4[16] + 60.*t11767*t11768*t11771*var4[16] + 25.*t11812*t11817*var4[16] - 20.*t11763*t11767*t11838*var4[16] + 20.*t11748*t11763*var4[20] - 25.*t11812*t11817*var4[20];
  p_output1[11]=-20.*t11743*t11782*t11783*var4[1] - 60.*t11743*t11762*t11777*t11778*var4[5] + 40.*t11743*t11782*t11783*var4[5] - 60.*t11743*t11767*t11768*t11771*var4[9] + 120.*t11743*t11762*t11777*t11778*var4[9] - 20.*t11743*t11782*t11783*var4[9] - 20.*t11743*t11748*t11763*var4[13] + 120.*t11743*t11767*t11768*t11771*var4[13] - 60.*t11743*t11762*t11777*t11778*var4[13] + 40.*t11743*t11748*t11763*var4[17] - 60.*t11743*t11767*t11768*t11771*var4[17] - 20.*t11743*t11748*t11763*var4[21];
  p_output1[12]=-20.*t11716*t11737*t11782*t11783*var4[1] - 60.*t11716*t11737*t11762*t11777*t11778*var4[5] + 40.*t11716*t11737*t11782*t11783*var4[5] - 60.*t11716*t11737*t11767*t11768*t11771*var4[9] + 120.*t11716*t11737*t11762*t11777*t11778*var4[9] - 20.*t11716*t11737*t11782*t11783*var4[9] - 20.*t11716*t11737*t11748*t11763*var4[13] + 120.*t11716*t11737*t11767*t11768*t11771*var4[13] - 60.*t11716*t11737*t11762*t11777*t11778*var4[13] + 40.*t11716*t11737*t11748*t11763*var4[17] - 60.*t11716*t11737*t11767*t11768*t11771*var4[17] - 20.*t11716*t11737*t11748*t11763*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t11802;
  p_output1[15]=t11805;
  p_output1[16]=t11808;
  p_output1[17]=t11811;
  p_output1[18]=t11815;
  p_output1[19]=t11816;
  p_output1[20]=20.*t11762*t11777*t11783*var4[1] - 5.*t11782*t11801*var4[1] + 60.*t11767*t11768*t11778*var4[5] - 60.*t11762*t11777*t11783*var4[5] + 5.*t11782*t11801*var4[5] + 60.*t11748*t11763*t11771*var4[9] - 150.*t11767*t11768*t11778*var4[9] + 40.*t11762*t11777*t11783*var4[9] - 140.*t11748*t11763*t11771*var4[13] + 90.*t11767*t11768*t11778*var4[13] + 20.*t11812*t11817*var4[13] + 80.*t11748*t11763*t11771*var4[17] - 45.*t11812*t11817*var4[17] + 25.*t11812*t11817*var4[21];
  p_output1[21]=5.*t11782*t11801*var4[1] + 20.*t11769*t11783*t11838*var4[1] + 40.*t11762*t11777*t11783*var4[5] - 20.*t11782*t11783*var4[5] - 5.*t11782*t11801*var4[5] + 60.*t11762*t11778*t11782*t11838*var4[5] - 20.*t11769*t11783*t11838*var4[5] + 90.*t11767*t11768*t11778*var4[9] - 60.*t11762*t11777*t11778*var4[9] - 40.*t11762*t11777*t11783*var4[9] + 20.*t11782*t11783*var4[9] + 60.*t11768*t11771*t11777*t11838*var4[9] - 60.*t11762*t11778*t11782*t11838*var4[9] + 80.*t11748*t11763*t11771*var4[13] - 60.*t11767*t11768*t11771*var4[13] - 90.*t11767*t11768*t11778*var4[13] + 60.*t11762*t11777*t11778*var4[13] + 20.*t11763*t11767*t11838*var4[13] - 60.*t11768*t11771*t11777*t11838*var4[13] - 20.*t11748*t11763*var4[17] - 80.*t11748*t11763*t11771*var4[17] + 60.*t11767*t11768*t11771*var4[17] + 25.*t11812*t11817*var4[17] - 20.*t11763*t11767*t11838*var4[17] + 20.*t11748*t11763*var4[21] - 25.*t11812*t11817*var4[21];
  p_output1[22]=-20.*t11743*t11782*t11783*var4[2] - 60.*t11743*t11762*t11777*t11778*var4[6] + 40.*t11743*t11782*t11783*var4[6] - 60.*t11743*t11767*t11768*t11771*var4[10] + 120.*t11743*t11762*t11777*t11778*var4[10] - 20.*t11743*t11782*t11783*var4[10] - 20.*t11743*t11748*t11763*var4[14] + 120.*t11743*t11767*t11768*t11771*var4[14] - 60.*t11743*t11762*t11777*t11778*var4[14] + 40.*t11743*t11748*t11763*var4[18] - 60.*t11743*t11767*t11768*t11771*var4[18] - 20.*t11743*t11748*t11763*var4[22];
  p_output1[23]=-20.*t11716*t11737*t11782*t11783*var4[2] - 60.*t11716*t11737*t11762*t11777*t11778*var4[6] + 40.*t11716*t11737*t11782*t11783*var4[6] - 60.*t11716*t11737*t11767*t11768*t11771*var4[10] + 120.*t11716*t11737*t11762*t11777*t11778*var4[10] - 20.*t11716*t11737*t11782*t11783*var4[10] - 20.*t11716*t11737*t11748*t11763*var4[14] + 120.*t11716*t11737*t11767*t11768*t11771*var4[14] - 60.*t11716*t11737*t11762*t11777*t11778*var4[14] + 40.*t11716*t11737*t11748*t11763*var4[18] - 60.*t11716*t11737*t11767*t11768*t11771*var4[18] - 20.*t11716*t11737*t11748*t11763*var4[22];
  p_output1[24]=1.;
  p_output1[25]=t11802;
  p_output1[26]=t11805;
  p_output1[27]=t11808;
  p_output1[28]=t11811;
  p_output1[29]=t11815;
  p_output1[30]=t11816;
  p_output1[31]=20.*t11762*t11777*t11783*var4[2] - 5.*t11782*t11801*var4[2] + 60.*t11767*t11768*t11778*var4[6] - 60.*t11762*t11777*t11783*var4[6] + 5.*t11782*t11801*var4[6] + 60.*t11748*t11763*t11771*var4[10] - 150.*t11767*t11768*t11778*var4[10] + 40.*t11762*t11777*t11783*var4[10] - 140.*t11748*t11763*t11771*var4[14] + 90.*t11767*t11768*t11778*var4[14] + 20.*t11812*t11817*var4[14] + 80.*t11748*t11763*t11771*var4[18] - 45.*t11812*t11817*var4[18] + 25.*t11812*t11817*var4[22];
  p_output1[32]=5.*t11782*t11801*var4[2] + 20.*t11769*t11783*t11838*var4[2] + 40.*t11762*t11777*t11783*var4[6] - 20.*t11782*t11783*var4[6] - 5.*t11782*t11801*var4[6] + 60.*t11762*t11778*t11782*t11838*var4[6] - 20.*t11769*t11783*t11838*var4[6] + 90.*t11767*t11768*t11778*var4[10] - 60.*t11762*t11777*t11778*var4[10] - 40.*t11762*t11777*t11783*var4[10] + 20.*t11782*t11783*var4[10] + 60.*t11768*t11771*t11777*t11838*var4[10] - 60.*t11762*t11778*t11782*t11838*var4[10] + 80.*t11748*t11763*t11771*var4[14] - 60.*t11767*t11768*t11771*var4[14] - 90.*t11767*t11768*t11778*var4[14] + 60.*t11762*t11777*t11778*var4[14] + 20.*t11763*t11767*t11838*var4[14] - 60.*t11768*t11771*t11777*t11838*var4[14] - 20.*t11748*t11763*var4[18] - 80.*t11748*t11763*t11771*var4[18] + 60.*t11767*t11768*t11771*var4[18] + 25.*t11812*t11817*var4[18] - 20.*t11763*t11767*t11838*var4[18] + 20.*t11748*t11763*var4[22] - 25.*t11812*t11817*var4[22];
  p_output1[33]=-20.*t11743*t11782*t11783*var4[3] - 60.*t11743*t11762*t11777*t11778*var4[7] + 40.*t11743*t11782*t11783*var4[7] - 60.*t11743*t11767*t11768*t11771*var4[11] + 120.*t11743*t11762*t11777*t11778*var4[11] - 20.*t11743*t11782*t11783*var4[11] - 20.*t11743*t11748*t11763*var4[15] + 120.*t11743*t11767*t11768*t11771*var4[15] - 60.*t11743*t11762*t11777*t11778*var4[15] + 40.*t11743*t11748*t11763*var4[19] - 60.*t11743*t11767*t11768*t11771*var4[19] - 20.*t11743*t11748*t11763*var4[23];
  p_output1[34]=-20.*t11716*t11737*t11782*t11783*var4[3] - 60.*t11716*t11737*t11762*t11777*t11778*var4[7] + 40.*t11716*t11737*t11782*t11783*var4[7] - 60.*t11716*t11737*t11767*t11768*t11771*var4[11] + 120.*t11716*t11737*t11762*t11777*t11778*var4[11] - 20.*t11716*t11737*t11782*t11783*var4[11] - 20.*t11716*t11737*t11748*t11763*var4[15] + 120.*t11716*t11737*t11767*t11768*t11771*var4[15] - 60.*t11716*t11737*t11762*t11777*t11778*var4[15] + 40.*t11716*t11737*t11748*t11763*var4[19] - 60.*t11716*t11737*t11767*t11768*t11771*var4[19] - 20.*t11716*t11737*t11748*t11763*var4[23];
  p_output1[35]=1.;
  p_output1[36]=t11802;
  p_output1[37]=t11805;
  p_output1[38]=t11808;
  p_output1[39]=t11811;
  p_output1[40]=t11815;
  p_output1[41]=t11816;
  p_output1[42]=20.*t11762*t11777*t11783*var4[3] - 5.*t11782*t11801*var4[3] + 60.*t11767*t11768*t11778*var4[7] - 60.*t11762*t11777*t11783*var4[7] + 5.*t11782*t11801*var4[7] + 60.*t11748*t11763*t11771*var4[11] - 150.*t11767*t11768*t11778*var4[11] + 40.*t11762*t11777*t11783*var4[11] - 140.*t11748*t11763*t11771*var4[15] + 90.*t11767*t11768*t11778*var4[15] + 20.*t11812*t11817*var4[15] + 80.*t11748*t11763*t11771*var4[19] - 45.*t11812*t11817*var4[19] + 25.*t11812*t11817*var4[23];
  p_output1[43]=5.*t11782*t11801*var4[3] + 20.*t11769*t11783*t11838*var4[3] + 40.*t11762*t11777*t11783*var4[7] - 20.*t11782*t11783*var4[7] - 5.*t11782*t11801*var4[7] + 60.*t11762*t11778*t11782*t11838*var4[7] - 20.*t11769*t11783*t11838*var4[7] + 90.*t11767*t11768*t11778*var4[11] - 60.*t11762*t11777*t11778*var4[11] - 40.*t11762*t11777*t11783*var4[11] + 20.*t11782*t11783*var4[11] + 60.*t11768*t11771*t11777*t11838*var4[11] - 60.*t11762*t11778*t11782*t11838*var4[11] + 80.*t11748*t11763*t11771*var4[15] - 60.*t11767*t11768*t11771*var4[15] - 90.*t11767*t11768*t11778*var4[15] + 60.*t11762*t11777*t11778*var4[15] + 20.*t11763*t11767*t11838*var4[15] - 60.*t11768*t11771*t11777*t11838*var4[15] - 20.*t11748*t11763*var4[19] - 80.*t11748*t11763*t11771*var4[19] + 60.*t11767*t11768*t11771*var4[19] + 25.*t11812*t11817*var4[19] - 20.*t11763*t11767*t11838*var4[19] + 20.*t11748*t11763*var4[23] - 25.*t11812*t11817*var4[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "J_d1y_time_RightStance.hh"

namespace Pattern[righStance, Blank[opt]]
{

void J_d1y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
