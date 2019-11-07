/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:00 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t665;
  double t1373;
  double t2662;
  double t2677;
  double t2846;
  double t2940;
  double t3022;
  double t3254;
  double t3336;
  double t3032;
  double t4692;
  double t4693;
  double t4901;
  double t4905;
  double t4917;
  double t4919;
  double t4942;
  double t4953;
  double t4966;
  double t4970;
  double t4995;
  double t4998;
  double t5009;
  double t5012;
  double t5007;
  double t5008;
  double t5080;
  double t5083;
  double t5092;
  double t5093;
  double t5116;
  double t5117;
  double t5132;
  double t5133;
  double t5159;
  double t5160;
  t665 = 4.*var5[0];
  t1373 = var3[0] + t665 + var7[0];
  t2662 = -1. + var8[0];
  t2677 = 1/t2662;
  t2846 = -1.*var1[0];
  t2940 = t2846 + var1[1];
  t3022 = -0.333333333333333*t2677*t2940;
  t3254 = 4.*var5[1];
  t3336 = var3[1] + t3254 + var7[1];
  t3032 = -1.33333333333333*t2677*t2940;
  t4692 = 4.*var5[2];
  t4693 = var3[2] + t4692 + var7[2];
  t4901 = 4.*var5[3];
  t4905 = var3[3] + t4901 + var7[3];
  t4917 = 4.*var5[4];
  t4919 = var3[4] + t4917 + var7[4];
  t4942 = 4.*var5[5];
  t4953 = var3[5] + t4942 + var7[5];
  t4966 = 4.*var5[6];
  t4970 = var3[6] + t4966 + var7[6];
  t4995 = -1.*var7[0];
  t4998 = var3[0] + t4995;
  t5009 = -1.*var7[1];
  t5012 = var3[1] + t5009;
  t5007 = -0.25*t2677*t2940;
  t5008 = 0.25*t2677*t2940;
  t5080 = -1.*var7[2];
  t5083 = var3[2] + t5080;
  t5092 = -1.*var7[3];
  t5093 = var3[3] + t5092;
  t5116 = -1.*var7[4];
  t5117 = var3[4] + t5116;
  t5132 = -1.*var7[5];
  t5133 = var3[5] + t5132;
  t5159 = -1.*var7[6];
  t5160 = var3[6] + t5159;
  p_output1[0]=0.333333333333333*t1373*t2677;
  p_output1[1]=-0.333333333333333*t1373*t2677;
  p_output1[2]=-1.;
  p_output1[3]=t3022;
  p_output1[4]=t3032;
  p_output1[5]=1.;
  p_output1[6]=t3022;
  p_output1[7]=0.333333333333333*t2677*t3336;
  p_output1[8]=-0.333333333333333*t2677*t3336;
  p_output1[9]=-1.;
  p_output1[10]=t3022;
  p_output1[11]=t3032;
  p_output1[12]=1.;
  p_output1[13]=t3022;
  p_output1[14]=0.333333333333333*t2677*t4693;
  p_output1[15]=-0.333333333333333*t2677*t4693;
  p_output1[16]=-1.;
  p_output1[17]=t3022;
  p_output1[18]=t3032;
  p_output1[19]=1.;
  p_output1[20]=t3022;
  p_output1[21]=0.333333333333333*t2677*t4905;
  p_output1[22]=-0.333333333333333*t2677*t4905;
  p_output1[23]=-1.;
  p_output1[24]=t3022;
  p_output1[25]=t3032;
  p_output1[26]=1.;
  p_output1[27]=t3022;
  p_output1[28]=0.333333333333333*t2677*t4919;
  p_output1[29]=-0.333333333333333*t2677*t4919;
  p_output1[30]=-1.;
  p_output1[31]=t3022;
  p_output1[32]=t3032;
  p_output1[33]=1.;
  p_output1[34]=t3022;
  p_output1[35]=0.333333333333333*t2677*t4953;
  p_output1[36]=-0.333333333333333*t2677*t4953;
  p_output1[37]=-1.;
  p_output1[38]=t3022;
  p_output1[39]=t3032;
  p_output1[40]=1.;
  p_output1[41]=t3022;
  p_output1[42]=0.333333333333333*t2677*t4970;
  p_output1[43]=-0.333333333333333*t2677*t4970;
  p_output1[44]=-1.;
  p_output1[45]=t3022;
  p_output1[46]=t3032;
  p_output1[47]=1.;
  p_output1[48]=t3022;
  p_output1[49]=0.25*t2677*t4998;
  p_output1[50]=-0.25*t2677*t4998;
  p_output1[51]=-0.5;
  p_output1[52]=t5007;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t5008;
  p_output1[56]=0.25*t2677*t5012;
  p_output1[57]=-0.25*t2677*t5012;
  p_output1[58]=-0.5;
  p_output1[59]=t5007;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t5008;
  p_output1[63]=0.25*t2677*t5083;
  p_output1[64]=-0.25*t2677*t5083;
  p_output1[65]=-0.5;
  p_output1[66]=t5007;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t5008;
  p_output1[70]=0.25*t2677*t5093;
  p_output1[71]=-0.25*t2677*t5093;
  p_output1[72]=-0.5;
  p_output1[73]=t5007;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t5008;
  p_output1[77]=0.25*t2677*t5117;
  p_output1[78]=-0.25*t2677*t5117;
  p_output1[79]=-0.5;
  p_output1[80]=t5007;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t5008;
  p_output1[84]=0.25*t2677*t5133;
  p_output1[85]=-0.25*t2677*t5133;
  p_output1[86]=-0.5;
  p_output1[87]=t5007;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t5008;
  p_output1[91]=0.25*t2677*t5160;
  p_output1[92]=-0.25*t2677*t5160;
  p_output1[93]=-0.5;
  p_output1[94]=t5007;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t5008;
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 8)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Eight input(s) required (var1,var2,var3,var4,var5,var6,var7,var8).");
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 98, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8);


}

#else // MATLAB_MEX_FILE

#include "J_hs_int_dx.hh"

namespace DoubleSupportDiffHeight
{

void J_hs_int_dx_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
