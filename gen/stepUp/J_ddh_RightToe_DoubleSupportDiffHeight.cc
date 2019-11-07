/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:26 GMT-05:00
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
  double t5900;
  double t5903;
  double t5870;
  double t5905;
  double t801;
  double t5901;
  double t5906;
  double t5934;
  double t5937;
  double t5938;
  double t5957;
  double t5958;
  double t6024;
  double t6025;
  double t6026;
  double t6043;
  double t6051;
  double t6174;
  double t6187;
  double t2703;
  double t5833;
  double t6968;
  double t6982;
  double t6997;
  double t6693;
  double t6998;
  double t7033;
  double t7053;
  double t7054;
  double t7058;
  double t7394;
  double t7636;
  double t7780;
  double t7782;
  double t7857;
  double t7870;
  double t7888;
  double t7939;
  double t7955;
  double t8005;
  double t7929;
  double t8021;
  double t8023;
  double t8025;
  double t8038;
  double t8043;
  double t7927;
  double t8114;
  double t8119;
  double t8122;
  double t5936;
  double t5989;
  double t5990;
  double t5991;
  double t6009;
  double t6017;
  double t6193;
  double t6248;
  double t7069;
  double t7126;
  double t7156;
  double t7177;
  double t7178;
  double t7578;
  double t7736;
  double t7744;
  double t7766;
  double t7768;
  double t7889;
  double t7892;
  double t7900;
  double t7921;
  double t8158;
  double t8166;
  double t8169;
  double t8240;
  double t8270;
  double t8280;
  double t8317;
  double t8347;
  double t8463;
  double t8469;
  double t8474;
  double t8476;
  double t8177;
  double t8180;
  double t8201;
  double t8209;
  double t8214;
  double t8534;
  double t8546;
  double t8548;
  double t8557;
  double t8560;
  double t8564;
  double t8573;
  double t8577;
  double t8585;
  double t8586;
  double t8587;
  double t8588;
  double t8604;
  double t8605;
  double t8606;
  double t8607;
  double t8608;
  double t8609;
  double t8539;
  double t8540;
  double t8541;
  double t8542;
  double t8547;
  double t8551;
  double t8552;
  double t8553;
  double t8555;
  double t8578;
  double t8579;
  double t8580;
  double t8581;
  double t8610;
  double t8611;
  double t8614;
  double t8859;
  double t8862;
  double t8866;
  double t8873;
  t5900 = Cos(var1[3]);
  t5903 = Sin(var1[2]);
  t5870 = Cos(var1[2]);
  t5905 = Sin(var1[3]);
  t801 = Cos(var1[4]);
  t5901 = t5870*t5900;
  t5906 = -1.*t5903*t5905;
  t5934 = t5901 + t5906;
  t5937 = -1.*t5900*t5903;
  t5938 = -1.*t5870*t5905;
  t5957 = t5937 + t5938;
  t5958 = Sin(var1[4]);
  t6024 = -0.4*t801*t5957;
  t6025 = 0.4*t5934*t5958;
  t6026 = t801*t5957;
  t6043 = -1.*t5934*t5958;
  t6051 = t6026 + t6043;
  t6174 = 0.8*t6051;
  t6187 = t6024 + t6025 + t6174;
  t2703 = -1.*t801;
  t5833 = 1. + t2703;
  t6968 = -1.*t5870*t5900;
  t6982 = t5903*t5905;
  t6997 = t6968 + t6982;
  t6693 = 0.4*t5833*t5957;
  t6998 = -0.4*t6997*t5958;
  t7033 = t6997*t5958;
  t7053 = t6026 + t7033;
  t7054 = 0.8*t7053;
  t7058 = t6693 + t6998 + t7054;
  t7394 = 0.4*t5957*t5958;
  t7636 = -1.*t5957*t5958;
  t7780 = -0.4*t801*t6997;
  t7782 = t801*t6997;
  t7857 = t7782 + t7636;
  t7870 = 0.8*t7857;
  t7888 = t7780 + t7394 + t7870;
  t7939 = t5900*t5903;
  t7955 = t5870*t5905;
  t8005 = t7939 + t7955;
  t7929 = 0.4*t5833*t6997;
  t8021 = -0.4*t8005*t5958;
  t8023 = t8005*t5958;
  t8025 = t7782 + t8023;
  t8038 = 0.8*t8025;
  t8043 = t7929 + t8021 + t8038;
  t7927 = var2[4]*t7888;
  t8114 = var2[2]*t8043;
  t8119 = var2[3]*t8043;
  t8122 = t7927 + t8114 + t8119;
  t5936 = 0.4*t5833*t5934;
  t5989 = -0.4*t5957*t5958;
  t5990 = t801*t5934;
  t5991 = t5957*t5958;
  t6009 = t5990 + t5991;
  t6017 = 0.8*t6009;
  t6193 = var3[4]*t6187;
  t6248 = var2[4]*t6187;
  t7069 = var3[2]*t7058;
  t7126 = var3[3]*t7058;
  t7156 = var2[2]*t7058;
  t7177 = var2[3]*t7058;
  t7178 = 0.4*t801*t5934;
  t7578 = -1.*t801*t5934;
  t7736 = t7578 + t7636;
  t7744 = 0.8*t7736;
  t7766 = t7178 + t7394 + t7744;
  t7768 = var2[4]*t7766;
  t7889 = var2[2]*t7888;
  t7892 = var2[3]*t7888;
  t7900 = t7768 + t7889 + t7892;
  t7921 = var2[4]*t7900;
  t8158 = var2[2]*t8122;
  t8166 = var2[3]*t8122;
  t8169 = t5936 + t5989 + t6017 + t6193 + t6248 + t7069 + t7126 + t7156 + t7177 + t7921 + t8158 + t8166;
  t8240 = 0.4*t801*t8005;
  t8270 = -1.*t801*t8005;
  t8280 = t8270 + t6043;
  t8317 = 0.8*t8280;
  t8347 = t8240 + t6025 + t8317;
  t8463 = 2.*var2[4]*t6187;
  t8469 = 2.*var2[2]*t7058;
  t8474 = 2.*var2[3]*t7058;
  t8476 = t5936 + t5989 + t6017 + t8463 + t8469 + t8474;
  t8177 = -0.4*t801*t5934;
  t8180 = 0.4*t8005*t5958;
  t8201 = -1.*t8005*t5958;
  t8209 = t5990 + t8201;
  t8214 = 0.8*t8209;
  t8534 = t5936 + t5989 + t6017;
  t8546 = 0.4*t6997*t5958;
  t8548 = -1.*t6997*t5958;
  t8557 = -0.4*t801*t8005;
  t8560 = t801*t8005;
  t8564 = t8560 + t8548;
  t8573 = 0.8*t8564;
  t8577 = t8557 + t8546 + t8573;
  t8585 = 0.4*t5833*t8005;
  t8586 = -0.4*t5934*t5958;
  t8587 = t5934*t5958;
  t8588 = t8560 + t8587;
  t8604 = 0.8*t8588;
  t8605 = t8585 + t8586 + t8604;
  t8606 = var2[2]*t8605;
  t8607 = var2[3]*t8605;
  t8608 = var2[4]*t8577;
  t8609 = t8606 + t8607 + t8608;
  t8539 = var3[4]*t7888;
  t8540 = var3[2]*t8043;
  t8541 = var3[3]*t8043;
  t8542 = 0.4*t801*t5957;
  t8547 = -1.*t801*t5957;
  t8551 = t8547 + t8548;
  t8552 = 0.8*t8551;
  t8553 = t8542 + t8546 + t8552;
  t8555 = var2[4]*t8553;
  t8578 = var2[2]*t8577;
  t8579 = var2[3]*t8577;
  t8580 = t8555 + t8578 + t8579;
  t8581 = var2[4]*t8580;
  t8610 = var2[2]*t8609;
  t8611 = var2[3]*t8609;
  t8614 = t6693 + t6998 + t7054 + t8539 + t7927 + t8540 + t8541 + t8114 + t8119 + t8581 + t8610 + t8611;
  t8859 = 2.*var2[4]*t7888;
  t8862 = 2.*var2[2]*t8043;
  t8866 = 2.*var2[3]*t8043;
  t8873 = t6693 + t6998 + t7054 + t8859 + t8862 + t8866;
  p_output1[0]=1.;
  p_output1[1]=t8169;
  p_output1[2]=t8169;
  p_output1[3]=t8177 + t8180 + t8214 + t6187*var2[2] + t7900*var2[2] + t6187*var2[3] + t7900*var2[3] + t8347*var2[4] + var2[4]*(t7766*var2[2] + t7766*var2[3] + (t7178 + t8021 + 0.8*(t7578 + t8023))*var2[4]) + t6187*var3[2] + t6187*var3[3] + t8347*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t8476;
  p_output1[6]=t8476;
  p_output1[7]=t8177 + t8180 + t8214 + 2.*t6187*var2[2] + 2.*t6187*var2[3] + 2.*t8347*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t8534;
  p_output1[10]=t8534;
  p_output1[11]=t8177 + t8180 + t8214;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t8614;
  p_output1[16]=t8614;
  p_output1[17]=t6024 + t6025 + t6174 + t7768 + t7889 + t7892 + t8580*var2[2] + t8580*var2[3] + var2[4]*(t8553*var2[2] + t8553*var2[3] + (t8542 + t8586 + 0.8*(t8547 + t8587))*var2[4]) + t7888*var3[2] + t7888*var3[3] + t7766*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t8873;
  p_output1[20]=t8873;
  p_output1[21]=t6024 + t6025 + t6174 + 2.*t7888*var2[2] + 2.*t7888*var2[3] + 2.*t7766*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t7058;
  p_output1[24]=t7058;
  p_output1[25]=t6187;
  p_output1[26]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_RightToe_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void J_ddh_RightToe_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
