/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:18:04 GMT-05:00
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
  double t2862;
  double t3401;
  double t5882;
  double t9086;
  double t9095;
  double t9096;
  double t9097;
  double t9404;
  double t9423;
  double t9098;
  double t9436;
  double t9439;
  double t9456;
  double t9457;
  double t9472;
  double t9474;
  double t9480;
  double t9492;
  double t9514;
  double t9517;
  double t9539;
  double t9542;
  double t9570;
  double t9574;
  double t9556;
  double t9558;
  double t9578;
  double t9580;
  double t9583;
  double t9584;
  double t9594;
  double t9595;
  double t9598;
  double t9599;
  double t9611;
  double t9612;
  t2862 = 4.*var5[0];
  t3401 = t2862 + var7[0] + var3[0];
  t5882 = -1. + var8[0];
  t9086 = 1/t5882;
  t9095 = -1.*var1[0];
  t9096 = t9095 + var1[1];
  t9097 = -0.333333333333333*t9086*t9096;
  t9404 = 4.*var5[1];
  t9423 = t9404 + var7[1] + var3[1];
  t9098 = -1.33333333333333*t9086*t9096;
  t9436 = 4.*var5[2];
  t9439 = t9436 + var7[2] + var3[2];
  t9456 = 4.*var5[3];
  t9457 = t9456 + var7[3] + var3[3];
  t9472 = 4.*var5[4];
  t9474 = t9472 + var7[4] + var3[4];
  t9480 = 4.*var5[5];
  t9492 = t9480 + var7[5] + var3[5];
  t9514 = 4.*var5[6];
  t9517 = t9514 + var7[6] + var3[6];
  t9539 = -1.*var7[0];
  t9542 = t9539 + var3[0];
  t9570 = -1.*var7[1];
  t9574 = t9570 + var3[1];
  t9556 = -0.25*t9086*t9096;
  t9558 = 0.25*t9086*t9096;
  t9578 = -1.*var7[2];
  t9580 = t9578 + var3[2];
  t9583 = -1.*var7[3];
  t9584 = t9583 + var3[3];
  t9594 = -1.*var7[4];
  t9595 = t9594 + var3[4];
  t9598 = -1.*var7[5];
  t9599 = t9598 + var3[5];
  t9611 = -1.*var7[6];
  t9612 = t9611 + var3[6];
  p_output1[0]=0.333333333333333*t3401*t9086;
  p_output1[1]=-0.333333333333333*t3401*t9086;
  p_output1[2]=-1.;
  p_output1[3]=t9097;
  p_output1[4]=t9098;
  p_output1[5]=1.;
  p_output1[6]=t9097;
  p_output1[7]=0.333333333333333*t9086*t9423;
  p_output1[8]=-0.333333333333333*t9086*t9423;
  p_output1[9]=-1.;
  p_output1[10]=t9097;
  p_output1[11]=t9098;
  p_output1[12]=1.;
  p_output1[13]=t9097;
  p_output1[14]=0.333333333333333*t9086*t9439;
  p_output1[15]=-0.333333333333333*t9086*t9439;
  p_output1[16]=-1.;
  p_output1[17]=t9097;
  p_output1[18]=t9098;
  p_output1[19]=1.;
  p_output1[20]=t9097;
  p_output1[21]=0.333333333333333*t9086*t9457;
  p_output1[22]=-0.333333333333333*t9086*t9457;
  p_output1[23]=-1.;
  p_output1[24]=t9097;
  p_output1[25]=t9098;
  p_output1[26]=1.;
  p_output1[27]=t9097;
  p_output1[28]=0.333333333333333*t9086*t9474;
  p_output1[29]=-0.333333333333333*t9086*t9474;
  p_output1[30]=-1.;
  p_output1[31]=t9097;
  p_output1[32]=t9098;
  p_output1[33]=1.;
  p_output1[34]=t9097;
  p_output1[35]=0.333333333333333*t9086*t9492;
  p_output1[36]=-0.333333333333333*t9086*t9492;
  p_output1[37]=-1.;
  p_output1[38]=t9097;
  p_output1[39]=t9098;
  p_output1[40]=1.;
  p_output1[41]=t9097;
  p_output1[42]=0.333333333333333*t9086*t9517;
  p_output1[43]=-0.333333333333333*t9086*t9517;
  p_output1[44]=-1.;
  p_output1[45]=t9097;
  p_output1[46]=t9098;
  p_output1[47]=1.;
  p_output1[48]=t9097;
  p_output1[49]=0.25*t9086*t9542;
  p_output1[50]=-0.25*t9086*t9542;
  p_output1[51]=-0.5;
  p_output1[52]=t9556;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t9558;
  p_output1[56]=0.25*t9086*t9574;
  p_output1[57]=-0.25*t9086*t9574;
  p_output1[58]=-0.5;
  p_output1[59]=t9556;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t9558;
  p_output1[63]=0.25*t9086*t9580;
  p_output1[64]=-0.25*t9086*t9580;
  p_output1[65]=-0.5;
  p_output1[66]=t9556;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t9558;
  p_output1[70]=0.25*t9086*t9584;
  p_output1[71]=-0.25*t9086*t9584;
  p_output1[72]=-0.5;
  p_output1[73]=t9556;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t9558;
  p_output1[77]=0.25*t9086*t9595;
  p_output1[78]=-0.25*t9086*t9595;
  p_output1[79]=-0.5;
  p_output1[80]=t9556;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t9558;
  p_output1[84]=0.25*t9086*t9599;
  p_output1[85]=-0.25*t9086*t9599;
  p_output1[86]=-0.5;
  p_output1[87]=t9556;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t9558;
  p_output1[91]=0.25*t9086*t9612;
  p_output1[92]=-0.25*t9086*t9612;
  p_output1[93]=-0.5;
  p_output1[94]=t9556;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t9558;
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

namespace Pattern[righStance, Blank[opt]]
{

void J_hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
