/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:27:54 GMT-05:00
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
  double t4;
  double t6;
  double t14;
  double t305;
  double t933;
  double t1007;
  double t1008;
  double t1028;
  double t1353;
  double t1013;
  double t2452;
  double t2501;
  double t2572;
  double t2604;
  double t2750;
  double t2754;
  double t2790;
  double t2801;
  double t2929;
  double t2939;
  double t2970;
  double t2995;
  double t3213;
  double t3220;
  double t3152;
  double t3177;
  double t3338;
  double t3339;
  double t4689;
  double t4691;
  double t4701;
  double t4850;
  double t4886;
  double t4890;
  double t4903;
  double t4904;
  t4 = 4.*var5[0];
  t6 = t4 + var7[0] + var3[0];
  t14 = -1. + var8[0];
  t305 = 1/t14;
  t933 = -1.*var1[0];
  t1007 = t933 + var1[1];
  t1008 = -0.333333333333333*t305*t1007;
  t1028 = 4.*var5[1];
  t1353 = t1028 + var7[1] + var3[1];
  t1013 = -1.33333333333333*t305*t1007;
  t2452 = 4.*var5[2];
  t2501 = t2452 + var7[2] + var3[2];
  t2572 = 4.*var5[3];
  t2604 = t2572 + var7[3] + var3[3];
  t2750 = 4.*var5[4];
  t2754 = t2750 + var7[4] + var3[4];
  t2790 = 4.*var5[5];
  t2801 = t2790 + var7[5] + var3[5];
  t2929 = 4.*var5[6];
  t2939 = t2929 + var7[6] + var3[6];
  t2970 = -1.*var7[0];
  t2995 = t2970 + var3[0];
  t3213 = -1.*var7[1];
  t3220 = t3213 + var3[1];
  t3152 = -0.25*t305*t1007;
  t3177 = 0.25*t305*t1007;
  t3338 = -1.*var7[2];
  t3339 = t3338 + var3[2];
  t4689 = -1.*var7[3];
  t4691 = t4689 + var3[3];
  t4701 = -1.*var7[4];
  t4850 = t4701 + var3[4];
  t4886 = -1.*var7[5];
  t4890 = t4886 + var3[5];
  t4903 = -1.*var7[6];
  t4904 = t4903 + var3[6];
  p_output1[0]=0.333333333333333*t305*t6;
  p_output1[1]=-0.333333333333333*t305*t6;
  p_output1[2]=-1.;
  p_output1[3]=t1008;
  p_output1[4]=t1013;
  p_output1[5]=1.;
  p_output1[6]=t1008;
  p_output1[7]=0.333333333333333*t1353*t305;
  p_output1[8]=-0.333333333333333*t1353*t305;
  p_output1[9]=-1.;
  p_output1[10]=t1008;
  p_output1[11]=t1013;
  p_output1[12]=1.;
  p_output1[13]=t1008;
  p_output1[14]=0.333333333333333*t2501*t305;
  p_output1[15]=-0.333333333333333*t2501*t305;
  p_output1[16]=-1.;
  p_output1[17]=t1008;
  p_output1[18]=t1013;
  p_output1[19]=1.;
  p_output1[20]=t1008;
  p_output1[21]=0.333333333333333*t2604*t305;
  p_output1[22]=-0.333333333333333*t2604*t305;
  p_output1[23]=-1.;
  p_output1[24]=t1008;
  p_output1[25]=t1013;
  p_output1[26]=1.;
  p_output1[27]=t1008;
  p_output1[28]=0.333333333333333*t2754*t305;
  p_output1[29]=-0.333333333333333*t2754*t305;
  p_output1[30]=-1.;
  p_output1[31]=t1008;
  p_output1[32]=t1013;
  p_output1[33]=1.;
  p_output1[34]=t1008;
  p_output1[35]=0.333333333333333*t2801*t305;
  p_output1[36]=-0.333333333333333*t2801*t305;
  p_output1[37]=-1.;
  p_output1[38]=t1008;
  p_output1[39]=t1013;
  p_output1[40]=1.;
  p_output1[41]=t1008;
  p_output1[42]=0.333333333333333*t2939*t305;
  p_output1[43]=-0.333333333333333*t2939*t305;
  p_output1[44]=-1.;
  p_output1[45]=t1008;
  p_output1[46]=t1013;
  p_output1[47]=1.;
  p_output1[48]=t1008;
  p_output1[49]=0.25*t2995*t305;
  p_output1[50]=-0.25*t2995*t305;
  p_output1[51]=-0.5;
  p_output1[52]=t3152;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t3177;
  p_output1[56]=0.25*t305*t3220;
  p_output1[57]=-0.25*t305*t3220;
  p_output1[58]=-0.5;
  p_output1[59]=t3152;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t3177;
  p_output1[63]=0.25*t305*t3339;
  p_output1[64]=-0.25*t305*t3339;
  p_output1[65]=-0.5;
  p_output1[66]=t3152;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t3177;
  p_output1[70]=0.25*t305*t4691;
  p_output1[71]=-0.25*t305*t4691;
  p_output1[72]=-0.5;
  p_output1[73]=t3152;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t3177;
  p_output1[77]=0.25*t305*t4850;
  p_output1[78]=-0.25*t305*t4850;
  p_output1[79]=-0.5;
  p_output1[80]=t3152;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t3177;
  p_output1[84]=0.25*t305*t4890;
  p_output1[85]=-0.25*t305*t4890;
  p_output1[86]=-0.5;
  p_output1[87]=t3152;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t3177;
  p_output1[91]=0.25*t305*t4904;
  p_output1[92]=-0.25*t305*t4904;
  p_output1[93]=-0.5;
  p_output1[94]=t3152;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t3177;
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

#include "J_hs_int_x.hh"

namespace DoubleSupportDiffHeight
{

void J_hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
