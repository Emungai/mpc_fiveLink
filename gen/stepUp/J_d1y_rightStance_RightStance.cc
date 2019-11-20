/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:07:49 GMT-05:00
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
  double t11025;
  double t3573;
  double t4434;
  double t4435;
  double t11007;
  double t11013;
  double t11026;
  double t11030;
  double t11031;
  double t11034;
  double t11035;
  double t11037;
  double t11038;
  double t11051;
  double t11052;
  double t11053;
  double t11054;
  double t11055;
  double t11059;
  double t11060;
  double t11066;
  double t11067;
  double t11085;
  double t11096;
  double t11101;
  double t11121;
  double t11122;
  double t11086;
  double t11087;
  double t11088;
  double t11089;
  double t11090;
  double t11091;
  double t11092;
  double t11093;
  double t11094;
  double t11095;
  double t11097;
  double t11098;
  double t11099;
  double t11100;
  t11025 = -1.*var5[1];
  t3573 = -1. + var6[0];
  t4434 = -1. + var7[0];
  t4435 = 1/t4434;
  t11007 = -1.*t3573*t4435;
  t11013 = 1. + t11007;
  t11026 = var5[0] + t11025;
  t11030 = Power(t11026,-5);
  t11031 = -1.*var1[0];
  t11034 = t11031 + var1[1];
  t11035 = t3573*t4435*t11034;
  t11037 = t11025 + var1[0] + t11035;
  t11038 = Power(t11037,3);
  t11051 = Power(t11026,-4);
  t11052 = Power(t11037,2);
  t11053 = 1/t11026;
  t11054 = -1.*t11053*t11037;
  t11055 = 1. + t11054;
  t11059 = Power(t11026,-3);
  t11060 = Power(t11055,2);
  t11066 = Power(t11026,-2);
  t11067 = Power(t11055,3);
  t11085 = Power(t11055,4);
  t11096 = Power(t11037,4);
  t11101 = Power(t11026,-6);
  t11121 = -1.*t11066*t11037;
  t11122 = t11053 + t11121;
  t11086 = 5.*t11053*t11085;
  t11087 = 20.*t11066*t11037*t11067;
  t11088 = -5.*t11053*t11085;
  t11089 = t11087 + t11088;
  t11090 = 30.*t11059*t11052*t11060;
  t11091 = -20.*t11066*t11037*t11067;
  t11092 = t11090 + t11091;
  t11093 = 20.*t11051*t11038*t11055;
  t11094 = -30.*t11059*t11052*t11060;
  t11095 = t11093 + t11094;
  t11097 = 5.*t11030*t11096;
  t11098 = -20.*t11051*t11038*t11055;
  t11099 = t11097 + t11098;
  t11100 = -5.*t11030*t11096;
  p_output1[0]=-20.*t11013*t11066*t11067*var4[0] - 60.*t11013*t11037*t11059*t11060*var4[4] + 40.*t11013*t11066*t11067*var4[4] - 60.*t11013*t11051*t11052*t11055*var4[8] + 120.*t11013*t11037*t11059*t11060*var4[8] - 20.*t11013*t11066*t11067*var4[8] - 20.*t11013*t11030*t11038*var4[12] + 120.*t11013*t11051*t11052*t11055*var4[12] - 60.*t11013*t11037*t11059*t11060*var4[12] + 40.*t11013*t11030*t11038*var4[16] - 60.*t11013*t11051*t11052*t11055*var4[16] - 20.*t11013*t11030*t11038*var4[20];
  p_output1[1]=-20.*t11066*t11067*t3573*t4435*var4[0] - 60.*t11037*t11059*t11060*t3573*t4435*var4[4] + 40.*t11066*t11067*t3573*t4435*var4[4] - 60.*t11051*t11052*t11055*t3573*t4435*var4[8] + 120.*t11037*t11059*t11060*t3573*t4435*var4[8] - 20.*t11066*t11067*t3573*t4435*var4[8] - 20.*t11030*t11038*t3573*t4435*var4[12] + 120.*t11051*t11052*t11055*t3573*t4435*var4[12] - 60.*t11037*t11059*t11060*t3573*t4435*var4[12] + 40.*t11030*t11038*t3573*t4435*var4[16] - 60.*t11051*t11052*t11055*t3573*t4435*var4[16] - 20.*t11030*t11038*t3573*t4435*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t11086;
  p_output1[4]=t11089;
  p_output1[5]=t11092;
  p_output1[6]=t11095;
  p_output1[7]=t11099;
  p_output1[8]=t11100;
  p_output1[9]=20.*t11037*t11059*t11067*var4[0] - 5.*t11066*t11085*var4[0] + 60.*t11051*t11052*t11060*var4[4] - 60.*t11037*t11059*t11067*var4[4] + 5.*t11066*t11085*var4[4] + 60.*t11030*t11038*t11055*var4[8] - 150.*t11051*t11052*t11060*var4[8] + 40.*t11037*t11059*t11067*var4[8] - 140.*t11030*t11038*t11055*var4[12] + 90.*t11051*t11052*t11060*var4[12] + 20.*t11096*t11101*var4[12] + 80.*t11030*t11038*t11055*var4[16] - 45.*t11096*t11101*var4[16] + 25.*t11096*t11101*var4[20];
  p_output1[10]=5.*t11066*t11085*var4[0] + 20.*t11053*t11067*t11122*var4[0] + 40.*t11037*t11059*t11067*var4[4] - 20.*t11066*t11067*var4[4] - 5.*t11066*t11085*var4[4] + 60.*t11037*t11060*t11066*t11122*var4[4] - 20.*t11053*t11067*t11122*var4[4] + 90.*t11051*t11052*t11060*var4[8] - 60.*t11037*t11059*t11060*var4[8] - 40.*t11037*t11059*t11067*var4[8] + 20.*t11066*t11067*var4[8] + 60.*t11052*t11055*t11059*t11122*var4[8] - 60.*t11037*t11060*t11066*t11122*var4[8] + 80.*t11030*t11038*t11055*var4[12] - 60.*t11051*t11052*t11055*var4[12] - 90.*t11051*t11052*t11060*var4[12] + 60.*t11037*t11059*t11060*var4[12] + 20.*t11038*t11051*t11122*var4[12] - 60.*t11052*t11055*t11059*t11122*var4[12] - 20.*t11030*t11038*var4[16] - 80.*t11030*t11038*t11055*var4[16] + 60.*t11051*t11052*t11055*var4[16] + 25.*t11096*t11101*var4[16] - 20.*t11038*t11051*t11122*var4[16] + 20.*t11030*t11038*var4[20] - 25.*t11096*t11101*var4[20];
  p_output1[11]=-20.*t11013*t11066*t11067*var4[1] - 60.*t11013*t11037*t11059*t11060*var4[5] + 40.*t11013*t11066*t11067*var4[5] - 60.*t11013*t11051*t11052*t11055*var4[9] + 120.*t11013*t11037*t11059*t11060*var4[9] - 20.*t11013*t11066*t11067*var4[9] - 20.*t11013*t11030*t11038*var4[13] + 120.*t11013*t11051*t11052*t11055*var4[13] - 60.*t11013*t11037*t11059*t11060*var4[13] + 40.*t11013*t11030*t11038*var4[17] - 60.*t11013*t11051*t11052*t11055*var4[17] - 20.*t11013*t11030*t11038*var4[21];
  p_output1[12]=-20.*t11066*t11067*t3573*t4435*var4[1] - 60.*t11037*t11059*t11060*t3573*t4435*var4[5] + 40.*t11066*t11067*t3573*t4435*var4[5] - 60.*t11051*t11052*t11055*t3573*t4435*var4[9] + 120.*t11037*t11059*t11060*t3573*t4435*var4[9] - 20.*t11066*t11067*t3573*t4435*var4[9] - 20.*t11030*t11038*t3573*t4435*var4[13] + 120.*t11051*t11052*t11055*t3573*t4435*var4[13] - 60.*t11037*t11059*t11060*t3573*t4435*var4[13] + 40.*t11030*t11038*t3573*t4435*var4[17] - 60.*t11051*t11052*t11055*t3573*t4435*var4[17] - 20.*t11030*t11038*t3573*t4435*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t11086;
  p_output1[15]=t11089;
  p_output1[16]=t11092;
  p_output1[17]=t11095;
  p_output1[18]=t11099;
  p_output1[19]=t11100;
  p_output1[20]=20.*t11037*t11059*t11067*var4[1] - 5.*t11066*t11085*var4[1] + 60.*t11051*t11052*t11060*var4[5] - 60.*t11037*t11059*t11067*var4[5] + 5.*t11066*t11085*var4[5] + 60.*t11030*t11038*t11055*var4[9] - 150.*t11051*t11052*t11060*var4[9] + 40.*t11037*t11059*t11067*var4[9] - 140.*t11030*t11038*t11055*var4[13] + 90.*t11051*t11052*t11060*var4[13] + 20.*t11096*t11101*var4[13] + 80.*t11030*t11038*t11055*var4[17] - 45.*t11096*t11101*var4[17] + 25.*t11096*t11101*var4[21];
  p_output1[21]=5.*t11066*t11085*var4[1] + 20.*t11053*t11067*t11122*var4[1] + 40.*t11037*t11059*t11067*var4[5] - 20.*t11066*t11067*var4[5] - 5.*t11066*t11085*var4[5] + 60.*t11037*t11060*t11066*t11122*var4[5] - 20.*t11053*t11067*t11122*var4[5] + 90.*t11051*t11052*t11060*var4[9] - 60.*t11037*t11059*t11060*var4[9] - 40.*t11037*t11059*t11067*var4[9] + 20.*t11066*t11067*var4[9] + 60.*t11052*t11055*t11059*t11122*var4[9] - 60.*t11037*t11060*t11066*t11122*var4[9] + 80.*t11030*t11038*t11055*var4[13] - 60.*t11051*t11052*t11055*var4[13] - 90.*t11051*t11052*t11060*var4[13] + 60.*t11037*t11059*t11060*var4[13] + 20.*t11038*t11051*t11122*var4[13] - 60.*t11052*t11055*t11059*t11122*var4[13] - 20.*t11030*t11038*var4[17] - 80.*t11030*t11038*t11055*var4[17] + 60.*t11051*t11052*t11055*var4[17] + 25.*t11096*t11101*var4[17] - 20.*t11038*t11051*t11122*var4[17] + 20.*t11030*t11038*var4[21] - 25.*t11096*t11101*var4[21];
  p_output1[22]=-20.*t11013*t11066*t11067*var4[2] - 60.*t11013*t11037*t11059*t11060*var4[6] + 40.*t11013*t11066*t11067*var4[6] - 60.*t11013*t11051*t11052*t11055*var4[10] + 120.*t11013*t11037*t11059*t11060*var4[10] - 20.*t11013*t11066*t11067*var4[10] - 20.*t11013*t11030*t11038*var4[14] + 120.*t11013*t11051*t11052*t11055*var4[14] - 60.*t11013*t11037*t11059*t11060*var4[14] + 40.*t11013*t11030*t11038*var4[18] - 60.*t11013*t11051*t11052*t11055*var4[18] - 20.*t11013*t11030*t11038*var4[22];
  p_output1[23]=-20.*t11066*t11067*t3573*t4435*var4[2] - 60.*t11037*t11059*t11060*t3573*t4435*var4[6] + 40.*t11066*t11067*t3573*t4435*var4[6] - 60.*t11051*t11052*t11055*t3573*t4435*var4[10] + 120.*t11037*t11059*t11060*t3573*t4435*var4[10] - 20.*t11066*t11067*t3573*t4435*var4[10] - 20.*t11030*t11038*t3573*t4435*var4[14] + 120.*t11051*t11052*t11055*t3573*t4435*var4[14] - 60.*t11037*t11059*t11060*t3573*t4435*var4[14] + 40.*t11030*t11038*t3573*t4435*var4[18] - 60.*t11051*t11052*t11055*t3573*t4435*var4[18] - 20.*t11030*t11038*t3573*t4435*var4[22];
  p_output1[24]=1.;
  p_output1[25]=t11086;
  p_output1[26]=t11089;
  p_output1[27]=t11092;
  p_output1[28]=t11095;
  p_output1[29]=t11099;
  p_output1[30]=t11100;
  p_output1[31]=20.*t11037*t11059*t11067*var4[2] - 5.*t11066*t11085*var4[2] + 60.*t11051*t11052*t11060*var4[6] - 60.*t11037*t11059*t11067*var4[6] + 5.*t11066*t11085*var4[6] + 60.*t11030*t11038*t11055*var4[10] - 150.*t11051*t11052*t11060*var4[10] + 40.*t11037*t11059*t11067*var4[10] - 140.*t11030*t11038*t11055*var4[14] + 90.*t11051*t11052*t11060*var4[14] + 20.*t11096*t11101*var4[14] + 80.*t11030*t11038*t11055*var4[18] - 45.*t11096*t11101*var4[18] + 25.*t11096*t11101*var4[22];
  p_output1[32]=5.*t11066*t11085*var4[2] + 20.*t11053*t11067*t11122*var4[2] + 40.*t11037*t11059*t11067*var4[6] - 20.*t11066*t11067*var4[6] - 5.*t11066*t11085*var4[6] + 60.*t11037*t11060*t11066*t11122*var4[6] - 20.*t11053*t11067*t11122*var4[6] + 90.*t11051*t11052*t11060*var4[10] - 60.*t11037*t11059*t11060*var4[10] - 40.*t11037*t11059*t11067*var4[10] + 20.*t11066*t11067*var4[10] + 60.*t11052*t11055*t11059*t11122*var4[10] - 60.*t11037*t11060*t11066*t11122*var4[10] + 80.*t11030*t11038*t11055*var4[14] - 60.*t11051*t11052*t11055*var4[14] - 90.*t11051*t11052*t11060*var4[14] + 60.*t11037*t11059*t11060*var4[14] + 20.*t11038*t11051*t11122*var4[14] - 60.*t11052*t11055*t11059*t11122*var4[14] - 20.*t11030*t11038*var4[18] - 80.*t11030*t11038*t11055*var4[18] + 60.*t11051*t11052*t11055*var4[18] + 25.*t11096*t11101*var4[18] - 20.*t11038*t11051*t11122*var4[18] + 20.*t11030*t11038*var4[22] - 25.*t11096*t11101*var4[22];
  p_output1[33]=-20.*t11013*t11066*t11067*var4[3] - 60.*t11013*t11037*t11059*t11060*var4[7] + 40.*t11013*t11066*t11067*var4[7] - 60.*t11013*t11051*t11052*t11055*var4[11] + 120.*t11013*t11037*t11059*t11060*var4[11] - 20.*t11013*t11066*t11067*var4[11] - 20.*t11013*t11030*t11038*var4[15] + 120.*t11013*t11051*t11052*t11055*var4[15] - 60.*t11013*t11037*t11059*t11060*var4[15] + 40.*t11013*t11030*t11038*var4[19] - 60.*t11013*t11051*t11052*t11055*var4[19] - 20.*t11013*t11030*t11038*var4[23];
  p_output1[34]=-20.*t11066*t11067*t3573*t4435*var4[3] - 60.*t11037*t11059*t11060*t3573*t4435*var4[7] + 40.*t11066*t11067*t3573*t4435*var4[7] - 60.*t11051*t11052*t11055*t3573*t4435*var4[11] + 120.*t11037*t11059*t11060*t3573*t4435*var4[11] - 20.*t11066*t11067*t3573*t4435*var4[11] - 20.*t11030*t11038*t3573*t4435*var4[15] + 120.*t11051*t11052*t11055*t3573*t4435*var4[15] - 60.*t11037*t11059*t11060*t3573*t4435*var4[15] + 40.*t11030*t11038*t3573*t4435*var4[19] - 60.*t11051*t11052*t11055*t3573*t4435*var4[19] - 20.*t11030*t11038*t3573*t4435*var4[23];
  p_output1[35]=1.;
  p_output1[36]=t11086;
  p_output1[37]=t11089;
  p_output1[38]=t11092;
  p_output1[39]=t11095;
  p_output1[40]=t11099;
  p_output1[41]=t11100;
  p_output1[42]=20.*t11037*t11059*t11067*var4[3] - 5.*t11066*t11085*var4[3] + 60.*t11051*t11052*t11060*var4[7] - 60.*t11037*t11059*t11067*var4[7] + 5.*t11066*t11085*var4[7] + 60.*t11030*t11038*t11055*var4[11] - 150.*t11051*t11052*t11060*var4[11] + 40.*t11037*t11059*t11067*var4[11] - 140.*t11030*t11038*t11055*var4[15] + 90.*t11051*t11052*t11060*var4[15] + 20.*t11096*t11101*var4[15] + 80.*t11030*t11038*t11055*var4[19] - 45.*t11096*t11101*var4[19] + 25.*t11096*t11101*var4[23];
  p_output1[43]=5.*t11066*t11085*var4[3] + 20.*t11053*t11067*t11122*var4[3] + 40.*t11037*t11059*t11067*var4[7] - 20.*t11066*t11067*var4[7] - 5.*t11066*t11085*var4[7] + 60.*t11037*t11060*t11066*t11122*var4[7] - 20.*t11053*t11067*t11122*var4[7] + 90.*t11051*t11052*t11060*var4[11] - 60.*t11037*t11059*t11060*var4[11] - 40.*t11037*t11059*t11067*var4[11] + 20.*t11066*t11067*var4[11] + 60.*t11052*t11055*t11059*t11122*var4[11] - 60.*t11037*t11060*t11066*t11122*var4[11] + 80.*t11030*t11038*t11055*var4[15] - 60.*t11051*t11052*t11055*var4[15] - 90.*t11051*t11052*t11060*var4[15] + 60.*t11037*t11059*t11060*var4[15] + 20.*t11038*t11051*t11122*var4[15] - 60.*t11052*t11055*t11059*t11122*var4[15] - 20.*t11030*t11038*var4[19] - 80.*t11030*t11038*t11055*var4[19] + 60.*t11051*t11052*t11055*var4[19] + 25.*t11096*t11101*var4[19] - 20.*t11038*t11051*t11122*var4[19] + 20.*t11030*t11038*var4[23] - 25.*t11096*t11101*var4[23];
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

#include "J_d1y_rightStance_RightStance.hh"

namespace RightStance
{

void J_d1y_rightStance_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
