/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:41:41 GMT-05:00
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
  double t2094;
  double t1845;
  double t1850;
  double t2156;
  double t2683;
  double t1128;
  double t2034;
  double t2209;
  double t2240;
  double t2282;
  double t2819;
  double t3038;
  double t3172;
  double t5259;
  double t5261;
  double t5507;
  double t5518;
  double t5519;
  double t5530;
  double t5539;
  double t5732;
  double t5707;
  double t5715;
  double t5756;
  double t5723;
  double t5761;
  double t5770;
  double t5783;
  double t5784;
  double t5787;
  double t5794;
  double t5805;
  double t5816;
  double t5863;
  double t5869;
  double t5873;
  double t5880;
  double t5882;
  double t5416;
  double t5465;
  double t5496;
  double t5652;
  double t5653;
  double t5656;
  double t5658;
  double t5659;
  double t5662;
  double t5843;
  double t5844;
  double t5848;
  double t6730;
  double t6772;
  double t6795;
  double t6797;
  double t6800;
  double t6808;
  double t6950;
  double t6969;
  double t6977;
  double t7215;
  double t7224;
  double t7230;
  double t8279;
  double t8281;
  double t8283;
  double t8289;
  double t8296;
  double t8302;
  double t8385;
  double t8386;
  double t8387;
  double t8411;
  double t8413;
  double t8414;
  double t208;
  double t1064;
  double t6980;
  double t7061;
  double t7065;
  double t5356;
  double t5410;
  double t6874;
  double t6876;
  double t6877;
  double t5641;
  double t5650;
  double t5651;
  double t7100;
  double t7164;
  double t5542;
  double t5548;
  double t5551;
  double t5552;
  double t5684;
  double t5701;
  double t7249;
  double t7783;
  double t7814;
  double t5830;
  double t5833;
  double t7166;
  double t7168;
  double t7202;
  double t6562;
  double t6635;
  double t6665;
  double t7955;
  double t7993;
  double t5887;
  double t5895;
  double t5926;
  double t5964;
  double t6864;
  double t6865;
  double t8150;
  double t8156;
  double t8170;
  double t8172;
  double t8181;
  double t8184;
  double t8221;
  double t8230;
  double t8031;
  double t8032;
  double t6879;
  double t6978;
  double t7093;
  double t7165;
  double t7213;
  double t7231;
  double t7948;
  double t8009;
  double t8020;
  double t8249;
  double t8250;
  double t8253;
  double t8255;
  double t8257;
  double t8258;
  double t8264;
  double t8285;
  double t8308;
  double t8315;
  double t8330;
  double t8337;
  double t8343;
  double t8351;
  double t8356;
  double t8357;
  double t8378;
  double t8380;
  double t8410;
  double t8420;
  double t8428;
  double t8462;
  double t8463;
  double t8465;
  double t9985;
  double t9995;
  double t9996;
  double t8252;
  double t8265;
  double t8321;
  double t8346;
  double t8384;
  double t8436;
  double t8466;
  double t8467;
  double t9922;
  double t9927;
  double t9930;
  double t9938;
  double t9939;
  double t9941;
  double t9943;
  double t9952;
  double t9957;
  double t9960;
  double t9964;
  double t9965;
  double t9970;
  double t9971;
  double t9972;
  double t9973;
  double t9984;
  double t9997;
  double t9998;
  double t9999;
  double t10002;
  double t10005;
  double t10013;
  double t10014;
  double t9240;
  double t9309;
  double t9514;
  double t9659;
  double t5502;
  double t5640;
  double t5663;
  double t5666;
  double t10020;
  double t10021;
  double t10022;
  double t10023;
  double t10105;
  double t10109;
  double t10017;
  double t10018;
  double t9799;
  double t9813;
  double t9830;
  double t9861;
  double t5854;
  double t6553;
  double t6811;
  double t6819;
  double t10051;
  double t10052;
  double t10053;
  double t10054;
  double t10178;
  double t10179;
  double t10040;
  double t10044;
  t2094 = Cos(var2[3]);
  t1845 = Cos(var2[4]);
  t1850 = Sin(var2[3]);
  t2156 = Sin(var2[4]);
  t2683 = Cos(var2[2]);
  t1128 = Sin(var2[2]);
  t2034 = -1.*t1845*t1850;
  t2209 = -1.*t2094*t2156;
  t2240 = t2034 + t2209;
  t2282 = t1128*t2240;
  t2819 = t2094*t1845;
  t3038 = -1.*t1850*t2156;
  t3172 = t2819 + t3038;
  t5259 = t2683*t3172;
  t5261 = t2282 + t5259;
  t5507 = -1.*t1845;
  t5518 = 1. + t5507;
  t5519 = 0.4*t5518;
  t5530 = 0.64*t1845;
  t5539 = t5519 + t5530;
  t5732 = Cos(var2[5]);
  t5707 = Cos(var2[6]);
  t5715 = Sin(var2[5]);
  t5756 = Sin(var2[6]);
  t5723 = -1.*t5707*t5715;
  t5761 = -1.*t5732*t5756;
  t5770 = t5723 + t5761;
  t5783 = t1128*t5770;
  t5784 = t5732*t5707;
  t5787 = -1.*t5715*t5756;
  t5794 = t5784 + t5787;
  t5805 = t2683*t5794;
  t5816 = t5783 + t5805;
  t5863 = -1.*t5707;
  t5869 = 1. + t5863;
  t5873 = 0.4*t5869;
  t5880 = 0.64*t5707;
  t5882 = t5873 + t5880;
  t5416 = t2683*t2094;
  t5465 = -1.*t1128*t1850;
  t5496 = t5416 + t5465;
  t5652 = t1845*t1850;
  t5653 = t2094*t2156;
  t5656 = t5652 + t5653;
  t5658 = t2683*t5656;
  t5659 = t1128*t3172;
  t5662 = t5658 + t5659;
  t5843 = t2683*t5732;
  t5844 = -1.*t1128*t5715;
  t5848 = t5843 + t5844;
  t6730 = t5707*t5715;
  t6772 = t5732*t5756;
  t6795 = t6730 + t6772;
  t6797 = t2683*t6795;
  t6800 = t1128*t5794;
  t6808 = t6797 + t6800;
  t6950 = t2094*t1128;
  t6969 = t2683*t1850;
  t6977 = t6950 + t6969;
  t7215 = t5732*t1128;
  t7224 = t2683*t5715;
  t7230 = t7215 + t7224;
  t8279 = t5539*t1850;
  t8281 = 0.24*t2094*t2156;
  t8283 = t8279 + t8281;
  t8289 = t2094*t5539;
  t8296 = -0.24*t1850*t2156;
  t8302 = t8289 + t8296;
  t8385 = t5882*t5715;
  t8386 = 0.24*t5732*t5756;
  t8387 = t8385 + t8386;
  t8411 = t5732*t5882;
  t8413 = -0.24*t5715*t5756;
  t8414 = t8411 + t8413;
  t208 = -1.*var1[4];
  t1064 = var3[4] + t208;
  t6980 = t2683*t2240;
  t7061 = -1.*t1128*t3172;
  t7065 = t6980 + t7061;
  t5356 = -1.*var1[3];
  t5410 = var3[3] + t5356;
  t6874 = -1.*t2094*t1128;
  t6876 = -1.*t2683*t1850;
  t6877 = t6874 + t6876;
  t5641 = t5539*t2156;
  t5650 = -0.24*t1845*t2156;
  t5651 = t5641 + t5650;
  t7100 = -1.*t1128*t5656;
  t7164 = t7100 + t5259;
  t5542 = t5539*t1845;
  t5548 = Power(t2156,2);
  t5551 = 0.24*t5548;
  t5552 = t5542 + t5551;
  t5684 = -1.*var1[6];
  t5701 = var3[6] + t5684;
  t7249 = t2683*t5770;
  t7783 = -1.*t1128*t5794;
  t7814 = t7249 + t7783;
  t5830 = -1.*var1[5];
  t5833 = var3[5] + t5830;
  t7166 = -1.*t5732*t1128;
  t7168 = -1.*t2683*t5715;
  t7202 = t7166 + t7168;
  t6562 = t5882*t5756;
  t6635 = -0.24*t5707*t5756;
  t6665 = t6562 + t6635;
  t7955 = -1.*t1128*t6795;
  t7993 = t7955 + t5805;
  t5887 = t5882*t5707;
  t5895 = Power(t5756,2);
  t5926 = 0.24*t5895;
  t5964 = t5887 + t5926;
  t6864 = -1.*var1[1];
  t6865 = var3[1] + t6864;
  t8150 = Power(t2683,2);
  t8156 = 12.*t8150;
  t8170 = Power(t1128,2);
  t8172 = 12.*t8170;
  t8181 = Power(t5496,2);
  t8184 = 6.8*t8181;
  t8221 = Power(t5848,2);
  t8230 = 6.8*t8221;
  t8031 = -1.*var1[0];
  t8032 = var3[0] + t8031;
  t6879 = 6.8*t6877*t5496;
  t6978 = 6.8*t6977*t5496;
  t7093 = 3.2*t5261*t7065;
  t7165 = 3.2*t7164*t5662;
  t7213 = 6.8*t7202*t5848;
  t7231 = 6.8*t7230*t5848;
  t7948 = 3.2*t5816*t7814;
  t8009 = 3.2*t7993*t6808;
  t8020 = t6879 + t6978 + t7093 + t7165 + t7213 + t7231 + t7948 + t8009;
  t8249 = -1.*var1[2];
  t8250 = var3[2] + t8249;
  t8253 = Power(t2094,2);
  t8255 = 0.11*t8253;
  t8257 = Power(t1850,2);
  t8258 = 0.11*t8257;
  t8264 = t8255 + t8258;
  t8285 = -1.*t8283*t3172;
  t8308 = -1.*t2240*t8302;
  t8315 = t8285 + t8308;
  t8330 = t8283*t5656;
  t8337 = t3172*t8302;
  t8343 = t8330 + t8337;
  t8351 = Power(t5732,2);
  t8356 = 0.11*t8351;
  t8357 = Power(t5715,2);
  t8378 = 0.11*t8357;
  t8380 = t8356 + t8378;
  t8410 = -1.*t8387*t5794;
  t8420 = -1.*t5770*t8414;
  t8428 = t8410 + t8420;
  t8462 = t8387*t6795;
  t8463 = t5794*t8414;
  t8465 = t8462 + t8463;
  t9985 = -1.*t2683*t2094;
  t9995 = t1128*t1850;
  t9996 = t9985 + t9995;
  t8252 = 2.88*t2683;
  t8265 = 6.8*t5496*t8264;
  t8321 = 3.2*t5662*t8315;
  t8346 = 3.2*t5261*t8343;
  t8384 = 6.8*t5848*t8380;
  t8436 = 3.2*t6808*t8428;
  t8466 = 3.2*t5816*t8465;
  t8467 = t8252 + t8265 + t8321 + t8346 + t8384 + t8436 + t8466;
  t9922 = -2.88*t1128;
  t9927 = 6.8*t6877*t8264;
  t9930 = 3.2*t7164*t8315;
  t9938 = 3.2*t7065*t8343;
  t9939 = 6.8*t7202*t8380;
  t9941 = 3.2*t7993*t8428;
  t9943 = 3.2*t7814*t8465;
  t9952 = t9922 + t9927 + t9930 + t9938 + t9939 + t9941 + t9943;
  t9957 = 0.4*t5518*t5496;
  t9960 = -0.4*t6877*t2156;
  t9964 = t1845*t5496;
  t9965 = t6877*t2156;
  t9970 = t9964 + t9965;
  t9971 = 0.8*t9970;
  t9972 = t9957 + t9960 + t9971;
  t9973 = -1.*var4[0]*t9972;
  t9984 = 0.4*t5518*t6877;
  t9997 = -0.4*t9996*t2156;
  t9998 = t1845*t6877;
  t9999 = t9996*t2156;
  t10002 = t9998 + t9999;
  t10005 = 0.8*t10002;
  t10013 = t9984 + t9997 + t10005;
  t10014 = -1.*var4[2]*t10013;
  t9240 = 0.748*t6877;
  t9309 = 3.2*t5651*t7164;
  t9514 = 3.2*t5552*t7065;
  t9659 = t9240 + t9309 + t9514;
  t5502 = 0.748*t5496;
  t5640 = 3.2*t5552*t5261;
  t5663 = 3.2*t5651*t5662;
  t5666 = t5502 + t5640 + t5663;
  t10020 = 0.748*t8264;
  t10021 = 3.2*t5651*t8315;
  t10022 = 3.2*t5552*t8343;
  t10023 = 0.67 + t10020 + t10021 + t10022;
  t10105 = 0.768*t5552;
  t10109 = 0.2 + t10105;
  t10017 = 0.768*t8343;
  t10018 = 0.2 + t10017;
  t9799 = 0.748*t7202;
  t9813 = 3.2*t6665*t7993;
  t9830 = 3.2*t5964*t7814;
  t9861 = t9799 + t9813 + t9830;
  t5854 = 0.748*t5848;
  t6553 = 3.2*t5964*t5816;
  t6811 = 3.2*t6665*t6808;
  t6819 = t5854 + t6553 + t6811;
  t10051 = 0.748*t8380;
  t10052 = 3.2*t6665*t8428;
  t10053 = 3.2*t5964*t8465;
  t10054 = 0.67 + t10051 + t10052 + t10053;
  t10178 = 0.768*t5964;
  t10179 = 0.2 + t10178;
  t10040 = 0.768*t8465;
  t10044 = 0.2 + t10040;
  p_output1[0]=0.768*t1064*t5261 + t5410*t5666 + 0.768*t5701*t5816 + t5833*t6819 + t6865*t8020 + t8032*(3.2*Power(t5261,2) + 3.2*Power(t5662,2) + 3.2*Power(t5816,2) + 3.2*Power(t6808,2) + 6.8*Power(t6977,2) + 6.8*Power(t7230,2) + t8156 + t8172 + t8184 + t8230) + t8250*t8467 - 1.*var4[0];
  p_output1[1]=0.768*t1064*t7065 + 0.768*t5701*t7814 + t8020*t8032 + t6865*(6.8*Power(t6877,2) + 3.2*Power(t7065,2) + 3.2*Power(t7164,2) + 6.8*Power(t7202,2) + 3.2*Power(t7814,2) + 3.2*Power(t7993,2) + t8156 + t8172 + t8184 + t8230) + t5410*t9659 + t5833*t9861 + t8250*t9952 - 1.*var4[2];
  p_output1[2]=t10014 + t10018*t1064 + t10023*t5410 + t10044*t5701 + t10054*t5833 + t8250*(3.3612 + 6.8*Power(t8264,2) + 3.2*Power(t8315,2) + 3.2*Power(t8343,2) + 6.8*Power(t8380,2) + 3.2*Power(t8428,2) + 3.2*Power(t8465,2)) + t8032*t8467 + t6865*t9952 + t9973;
  p_output1[3]=t10014 + t10109*t1064 + t5410*(1.58228 + 3.2*Power(t5552,2) + 3.2*Power(t5651,2)) + t5666*t8032 + t10023*t8250 + t6865*t9659 + t9973;
  p_output1[4]=1.2143199999999998*t1064 + t10109*t5410 + 0.768*t6865*t7065 + 0.768*t5261*t8032 + t10018*t8250 - 1.*(-0.4*t1845*t5496 + 0.4*t2156*t6977 + 0.8*(-1.*t2156*t6977 + t9964))*var4[0] - 1.*(0.4*t2156*t5496 - 0.4*t1845*t6877 + 0.8*(-1.*t2156*t5496 + t9998))*var4[2];
  p_output1[5]=t10179*t5701 + t5833*(1.58228 + 3.2*Power(t5964,2) + 3.2*Power(t6665,2)) + t6819*t8032 + t10054*t8250 + t6865*t9861;
  p_output1[6]=1.2143199999999998*t5701 + t10179*t5833 + 0.768*t6865*t7814 + 0.768*t5816*t8032 + t10044*t8250;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMapRightImpact.hh"

namespace RightImpact
{

void dxDiscreteMapRightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
