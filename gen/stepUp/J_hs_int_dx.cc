/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:18:08 GMT-05:00
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
  double t9089;
  double t9434;
  double t9466;
  double t9478;
  double t9535;
  double t9538;
  double t9555;
  double t9577;
  double t9581;
  double t9576;
  double t9596;
  double t9597;
  double t9630;
  double t9635;
  double t9641;
  double t9644;
  double t9649;
  double t9650;
  double t9653;
  double t9654;
  double t10876;
  double t10877;
  double t10882;
  double t10883;
  double t10880;
  double t10881;
  double t10886;
  double t10887;
  double t10890;
  double t10891;
  double t10896;
  double t10897;
  double t10900;
  double t10901;
  double t10904;
  double t10905;
  t9089 = 4.*var5[0];
  t9434 = var3[0] + t9089 + var7[0];
  t9466 = -1. + var8[0];
  t9478 = 1/t9466;
  t9535 = -1.*var1[0];
  t9538 = t9535 + var1[1];
  t9555 = -0.333333333333333*t9478*t9538;
  t9577 = 4.*var5[1];
  t9581 = var3[1] + t9577 + var7[1];
  t9576 = -1.33333333333333*t9478*t9538;
  t9596 = 4.*var5[2];
  t9597 = var3[2] + t9596 + var7[2];
  t9630 = 4.*var5[3];
  t9635 = var3[3] + t9630 + var7[3];
  t9641 = 4.*var5[4];
  t9644 = var3[4] + t9641 + var7[4];
  t9649 = 4.*var5[5];
  t9650 = var3[5] + t9649 + var7[5];
  t9653 = 4.*var5[6];
  t9654 = var3[6] + t9653 + var7[6];
  t10876 = -1.*var7[0];
  t10877 = var3[0] + t10876;
  t10882 = -1.*var7[1];
  t10883 = var3[1] + t10882;
  t10880 = -0.25*t9478*t9538;
  t10881 = 0.25*t9478*t9538;
  t10886 = -1.*var7[2];
  t10887 = var3[2] + t10886;
  t10890 = -1.*var7[3];
  t10891 = var3[3] + t10890;
  t10896 = -1.*var7[4];
  t10897 = var3[4] + t10896;
  t10900 = -1.*var7[5];
  t10901 = var3[5] + t10900;
  t10904 = -1.*var7[6];
  t10905 = var3[6] + t10904;
  p_output1[0]=0.333333333333333*t9434*t9478;
  p_output1[1]=-0.333333333333333*t9434*t9478;
  p_output1[2]=-1.;
  p_output1[3]=t9555;
  p_output1[4]=t9576;
  p_output1[5]=1.;
  p_output1[6]=t9555;
  p_output1[7]=0.333333333333333*t9478*t9581;
  p_output1[8]=-0.333333333333333*t9478*t9581;
  p_output1[9]=-1.;
  p_output1[10]=t9555;
  p_output1[11]=t9576;
  p_output1[12]=1.;
  p_output1[13]=t9555;
  p_output1[14]=0.333333333333333*t9478*t9597;
  p_output1[15]=-0.333333333333333*t9478*t9597;
  p_output1[16]=-1.;
  p_output1[17]=t9555;
  p_output1[18]=t9576;
  p_output1[19]=1.;
  p_output1[20]=t9555;
  p_output1[21]=0.333333333333333*t9478*t9635;
  p_output1[22]=-0.333333333333333*t9478*t9635;
  p_output1[23]=-1.;
  p_output1[24]=t9555;
  p_output1[25]=t9576;
  p_output1[26]=1.;
  p_output1[27]=t9555;
  p_output1[28]=0.333333333333333*t9478*t9644;
  p_output1[29]=-0.333333333333333*t9478*t9644;
  p_output1[30]=-1.;
  p_output1[31]=t9555;
  p_output1[32]=t9576;
  p_output1[33]=1.;
  p_output1[34]=t9555;
  p_output1[35]=0.333333333333333*t9478*t9650;
  p_output1[36]=-0.333333333333333*t9478*t9650;
  p_output1[37]=-1.;
  p_output1[38]=t9555;
  p_output1[39]=t9576;
  p_output1[40]=1.;
  p_output1[41]=t9555;
  p_output1[42]=0.333333333333333*t9478*t9654;
  p_output1[43]=-0.333333333333333*t9478*t9654;
  p_output1[44]=-1.;
  p_output1[45]=t9555;
  p_output1[46]=t9576;
  p_output1[47]=1.;
  p_output1[48]=t9555;
  p_output1[49]=0.25*t10877*t9478;
  p_output1[50]=-0.25*t10877*t9478;
  p_output1[51]=-0.5;
  p_output1[52]=t10880;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t10881;
  p_output1[56]=0.25*t10883*t9478;
  p_output1[57]=-0.25*t10883*t9478;
  p_output1[58]=-0.5;
  p_output1[59]=t10880;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t10881;
  p_output1[63]=0.25*t10887*t9478;
  p_output1[64]=-0.25*t10887*t9478;
  p_output1[65]=-0.5;
  p_output1[66]=t10880;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t10881;
  p_output1[70]=0.25*t10891*t9478;
  p_output1[71]=-0.25*t10891*t9478;
  p_output1[72]=-0.5;
  p_output1[73]=t10880;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t10881;
  p_output1[77]=0.25*t10897*t9478;
  p_output1[78]=-0.25*t10897*t9478;
  p_output1[79]=-0.5;
  p_output1[80]=t10880;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t10881;
  p_output1[84]=0.25*t10901*t9478;
  p_output1[85]=-0.25*t10901*t9478;
  p_output1[86]=-0.5;
  p_output1[87]=t10880;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t10881;
  p_output1[91]=0.25*t10905*t9478;
  p_output1[92]=-0.25*t10905*t9478;
  p_output1[93]=-0.5;
  p_output1[94]=t10880;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t10881;
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

namespace Pattern[righStance, Blank[opt]]
{

void J_hs_int_dx_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
