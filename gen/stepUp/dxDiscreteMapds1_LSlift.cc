/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:23:44 GMT-05:00
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
  double t14207;
  double t14201;
  double t14205;
  double t14278;
  double t14289;
  double t14199;
  double t14206;
  double t14279;
  double t14283;
  double t14286;
  double t14294;
  double t14298;
  double t14304;
  double t14305;
  double t14309;
  double t14475;
  double t14485;
  double t14497;
  double t14569;
  double t14632;
  double t18041;
  double t18021;
  double t18023;
  double t18042;
  double t18034;
  double t18043;
  double t18044;
  double t18045;
  double t18084;
  double t18085;
  double t18086;
  double t18094;
  double t18096;
  double t18112;
  double t18113;
  double t18114;
  double t18115;
  double t18286;
  double t14343;
  double t14382;
  double t14394;
  double t17946;
  double t17957;
  double t17960;
  double t17976;
  double t17980;
  double t17981;
  double t18103;
  double t18109;
  double t18110;
  double t18344;
  double t18347;
  double t18348;
  double t18349;
  double t18350;
  double t18351;
  double t18413;
  double t18414;
  double t18415;
  double t18428;
  double t18429;
  double t18430;
  double t18476;
  double t18477;
  double t18478;
  double t18480;
  double t18481;
  double t18482;
  double t18496;
  double t18497;
  double t18498;
  double t18500;
  double t18501;
  double t18502;
  double t11151;
  double t14166;
  double t18417;
  double t18418;
  double t18419;
  double t14320;
  double t14323;
  double t18366;
  double t18410;
  double t18411;
  double t14919;
  double t14954;
  double t17913;
  double t18421;
  double t18422;
  double t14773;
  double t14785;
  double t14849;
  double t14853;
  double t18006;
  double t18020;
  double t18432;
  double t18433;
  double t18434;
  double t18100;
  double t18101;
  double t18424;
  double t18425;
  double t18426;
  double t18340;
  double t18341;
  double t18343;
  double t18436;
  double t18437;
  double t18288;
  double t18327;
  double t18328;
  double t18332;
  double t18355;
  double t18356;
  double t18443;
  double t18444;
  double t18445;
  double t18446;
  double t18449;
  double t18450;
  double t18457;
  double t18458;
  double t18441;
  double t18442;
  double t18412;
  double t18416;
  double t18420;
  double t18423;
  double t18427;
  double t18431;
  double t18435;
  double t18438;
  double t18439;
  double t18467;
  double t18468;
  double t18470;
  double t18471;
  double t18472;
  double t18473;
  double t18474;
  double t18479;
  double t18483;
  double t18484;
  double t18486;
  double t18487;
  double t18488;
  double t18490;
  double t18491;
  double t18492;
  double t18493;
  double t18494;
  double t18499;
  double t18503;
  double t18504;
  double t18506;
  double t18507;
  double t18508;
  double t18568;
  double t18569;
  double t18570;
  double t18469;
  double t18475;
  double t18485;
  double t18489;
  double t18495;
  double t18505;
  double t18509;
  double t18510;
  double t18541;
  double t18542;
  double t18543;
  double t18544;
  double t18545;
  double t18546;
  double t18547;
  double t18548;
  double t18515;
  double t18516;
  double t18517;
  double t18518;
  double t14471;
  double t14881;
  double t17982;
  double t17983;
  double t18554;
  double t18555;
  double t18556;
  double t18557;
  double t18603;
  double t18604;
  double t18551;
  double t18552;
  double t18559;
  double t18560;
  double t18561;
  double t18562;
  double t18563;
  double t18564;
  double t18565;
  double t18566;
  double t18567;
  double t18571;
  double t18572;
  double t18573;
  double t18574;
  double t18575;
  double t18576;
  double t18577;
  double t18521;
  double t18522;
  double t18523;
  double t18524;
  double t18111;
  double t18333;
  double t18352;
  double t18353;
  double t18581;
  double t18582;
  double t18583;
  double t18584;
  double t18622;
  double t18623;
  double t18578;
  double t18579;
  t14207 = Cos(var2[3]);
  t14201 = Cos(var2[4]);
  t14205 = Sin(var2[3]);
  t14278 = Sin(var2[4]);
  t14289 = Cos(var2[2]);
  t14199 = Sin(var2[2]);
  t14206 = -1.*t14201*t14205;
  t14279 = -1.*t14207*t14278;
  t14283 = t14206 + t14279;
  t14286 = t14199*t14283;
  t14294 = t14207*t14201;
  t14298 = -1.*t14205*t14278;
  t14304 = t14294 + t14298;
  t14305 = t14289*t14304;
  t14309 = t14286 + t14305;
  t14475 = -1.*t14201;
  t14485 = 1. + t14475;
  t14497 = 0.4*t14485;
  t14569 = 0.64*t14201;
  t14632 = t14497 + t14569;
  t18041 = Cos(var2[5]);
  t18021 = Cos(var2[6]);
  t18023 = Sin(var2[5]);
  t18042 = Sin(var2[6]);
  t18034 = -1.*t18021*t18023;
  t18043 = -1.*t18041*t18042;
  t18044 = t18034 + t18043;
  t18045 = t14199*t18044;
  t18084 = t18041*t18021;
  t18085 = -1.*t18023*t18042;
  t18086 = t18084 + t18085;
  t18094 = t14289*t18086;
  t18096 = t18045 + t18094;
  t18112 = -1.*t18021;
  t18113 = 1. + t18112;
  t18114 = 0.4*t18113;
  t18115 = 0.64*t18021;
  t18286 = t18114 + t18115;
  t14343 = t14289*t14207;
  t14382 = -1.*t14199*t14205;
  t14394 = t14343 + t14382;
  t17946 = t14201*t14205;
  t17957 = t14207*t14278;
  t17960 = t17946 + t17957;
  t17976 = t14289*t17960;
  t17980 = t14199*t14304;
  t17981 = t17976 + t17980;
  t18103 = t14289*t18041;
  t18109 = -1.*t14199*t18023;
  t18110 = t18103 + t18109;
  t18344 = t18021*t18023;
  t18347 = t18041*t18042;
  t18348 = t18344 + t18347;
  t18349 = t14289*t18348;
  t18350 = t14199*t18086;
  t18351 = t18349 + t18350;
  t18413 = t14207*t14199;
  t18414 = t14289*t14205;
  t18415 = t18413 + t18414;
  t18428 = t18041*t14199;
  t18429 = t14289*t18023;
  t18430 = t18428 + t18429;
  t18476 = t14632*t14205;
  t18477 = 0.24*t14207*t14278;
  t18478 = t18476 + t18477;
  t18480 = t14207*t14632;
  t18481 = -0.24*t14205*t14278;
  t18482 = t18480 + t18481;
  t18496 = t18286*t18023;
  t18497 = 0.24*t18041*t18042;
  t18498 = t18496 + t18497;
  t18500 = t18041*t18286;
  t18501 = -0.24*t18023*t18042;
  t18502 = t18500 + t18501;
  t11151 = -1.*var1[4];
  t14166 = var3[4] + t11151;
  t18417 = t14289*t14283;
  t18418 = -1.*t14199*t14304;
  t18419 = t18417 + t18418;
  t14320 = -1.*var1[3];
  t14323 = var3[3] + t14320;
  t18366 = -1.*t14207*t14199;
  t18410 = -1.*t14289*t14205;
  t18411 = t18366 + t18410;
  t14919 = t14632*t14278;
  t14954 = -0.24*t14201*t14278;
  t17913 = t14919 + t14954;
  t18421 = -1.*t14199*t17960;
  t18422 = t18421 + t14305;
  t14773 = t14632*t14201;
  t14785 = Power(t14278,2);
  t14849 = 0.24*t14785;
  t14853 = t14773 + t14849;
  t18006 = -1.*var1[6];
  t18020 = var3[6] + t18006;
  t18432 = t14289*t18044;
  t18433 = -1.*t14199*t18086;
  t18434 = t18432 + t18433;
  t18100 = -1.*var1[5];
  t18101 = var3[5] + t18100;
  t18424 = -1.*t18041*t14199;
  t18425 = -1.*t14289*t18023;
  t18426 = t18424 + t18425;
  t18340 = t18286*t18042;
  t18341 = -0.24*t18021*t18042;
  t18343 = t18340 + t18341;
  t18436 = -1.*t14199*t18348;
  t18437 = t18436 + t18094;
  t18288 = t18286*t18021;
  t18327 = Power(t18042,2);
  t18328 = 0.24*t18327;
  t18332 = t18288 + t18328;
  t18355 = -1.*var1[1];
  t18356 = var3[1] + t18355;
  t18443 = Power(t14289,2);
  t18444 = 12.*t18443;
  t18445 = Power(t14199,2);
  t18446 = 12.*t18445;
  t18449 = Power(t14394,2);
  t18450 = 6.8*t18449;
  t18457 = Power(t18110,2);
  t18458 = 6.8*t18457;
  t18441 = -1.*var1[0];
  t18442 = var3[0] + t18441;
  t18412 = 6.8*t18411*t14394;
  t18416 = 6.8*t18415*t14394;
  t18420 = 3.2*t14309*t18419;
  t18423 = 3.2*t18422*t17981;
  t18427 = 6.8*t18426*t18110;
  t18431 = 6.8*t18430*t18110;
  t18435 = 3.2*t18096*t18434;
  t18438 = 3.2*t18437*t18351;
  t18439 = t18412 + t18416 + t18420 + t18423 + t18427 + t18431 + t18435 + t18438;
  t18467 = -1.*var1[2];
  t18468 = var3[2] + t18467;
  t18470 = Power(t14207,2);
  t18471 = 0.11*t18470;
  t18472 = Power(t14205,2);
  t18473 = 0.11*t18472;
  t18474 = t18471 + t18473;
  t18479 = -1.*t18478*t14304;
  t18483 = -1.*t14283*t18482;
  t18484 = t18479 + t18483;
  t18486 = t18478*t17960;
  t18487 = t14304*t18482;
  t18488 = t18486 + t18487;
  t18490 = Power(t18041,2);
  t18491 = 0.11*t18490;
  t18492 = Power(t18023,2);
  t18493 = 0.11*t18492;
  t18494 = t18491 + t18493;
  t18499 = -1.*t18498*t18086;
  t18503 = -1.*t18044*t18502;
  t18504 = t18499 + t18503;
  t18506 = t18498*t18348;
  t18507 = t18086*t18502;
  t18508 = t18506 + t18507;
  t18568 = -1.*t14289*t18041;
  t18569 = t14199*t18023;
  t18570 = t18568 + t18569;
  t18469 = 2.88*t14289;
  t18475 = 6.8*t14394*t18474;
  t18485 = 3.2*t17981*t18484;
  t18489 = 3.2*t14309*t18488;
  t18495 = 6.8*t18110*t18494;
  t18505 = 3.2*t18351*t18504;
  t18509 = 3.2*t18096*t18508;
  t18510 = t18469 + t18475 + t18485 + t18489 + t18495 + t18505 + t18509;
  t18541 = -2.88*t14199;
  t18542 = 6.8*t18411*t18474;
  t18543 = 3.2*t18422*t18484;
  t18544 = 3.2*t18419*t18488;
  t18545 = 6.8*t18426*t18494;
  t18546 = 3.2*t18437*t18504;
  t18547 = 3.2*t18434*t18508;
  t18548 = t18541 + t18542 + t18543 + t18544 + t18545 + t18546 + t18547;
  t18515 = 0.748*t18411;
  t18516 = 3.2*t17913*t18422;
  t18517 = 3.2*t14853*t18419;
  t18518 = t18515 + t18516 + t18517;
  t14471 = 0.748*t14394;
  t14881 = 3.2*t14853*t14309;
  t17982 = 3.2*t17913*t17981;
  t17983 = t14471 + t14881 + t17982;
  t18554 = 0.748*t18474;
  t18555 = 3.2*t17913*t18484;
  t18556 = 3.2*t14853*t18488;
  t18557 = 0.67 + t18554 + t18555 + t18556;
  t18603 = 0.768*t14853;
  t18604 = 0.2 + t18603;
  t18551 = 0.768*t18488;
  t18552 = 0.2 + t18551;
  t18559 = 0.4*t18113*t18110;
  t18560 = -0.4*t18426*t18042;
  t18561 = t18021*t18110;
  t18562 = t18426*t18042;
  t18563 = t18561 + t18562;
  t18564 = 0.8*t18563;
  t18565 = t18559 + t18560 + t18564;
  t18566 = -1.*var4[0]*t18565;
  t18567 = 0.4*t18113*t18426;
  t18571 = -0.4*t18570*t18042;
  t18572 = t18021*t18426;
  t18573 = t18570*t18042;
  t18574 = t18572 + t18573;
  t18575 = 0.8*t18574;
  t18576 = t18567 + t18571 + t18575;
  t18577 = -1.*var4[2]*t18576;
  t18521 = 0.748*t18426;
  t18522 = 3.2*t18343*t18437;
  t18523 = 3.2*t18332*t18434;
  t18524 = t18521 + t18522 + t18523;
  t18111 = 0.748*t18110;
  t18333 = 3.2*t18332*t18096;
  t18352 = 3.2*t18343*t18351;
  t18353 = t18111 + t18333 + t18352;
  t18581 = 0.748*t18494;
  t18582 = 3.2*t18343*t18504;
  t18583 = 3.2*t18332*t18508;
  t18584 = 0.67 + t18581 + t18582 + t18583;
  t18622 = 0.768*t18332;
  t18623 = 0.2 + t18622;
  t18578 = 0.768*t18508;
  t18579 = 0.2 + t18578;
  p_output1[0]=0.768*t14166*t14309 + t14323*t17983 + 0.768*t18020*t18096 + t18101*t18353 + t18356*t18439 + t18442*(3.2*Power(t14309,2) + 3.2*Power(t17981,2) + 3.2*Power(t18096,2) + 3.2*Power(t18351,2) + 6.8*Power(t18415,2) + 6.8*Power(t18430,2) + t18444 + t18446 + t18450 + t18458) + t18468*t18510 - 1.*var4[0];
  p_output1[1]=0.768*t14166*t18419 + 0.768*t18020*t18434 + t18439*t18442 + t18356*(6.8*Power(t18411,2) + 3.2*Power(t18419,2) + 3.2*Power(t18422,2) + 6.8*Power(t18426,2) + 3.2*Power(t18434,2) + 3.2*Power(t18437,2) + t18444 + t18446 + t18450 + t18458) + t14323*t18518 + t18101*t18524 + t18468*t18548 - 1.*var4[2];
  p_output1[2]=t18468*(3.3612 + 6.8*Power(t18474,2) + 3.2*Power(t18484,2) + 3.2*Power(t18488,2) + 6.8*Power(t18494,2) + 3.2*Power(t18504,2) + 3.2*Power(t18508,2)) + t18442*t18510 + t18356*t18548 + t14166*t18552 + t14323*t18557 + t18566 + t18577 + t18020*t18579 + t18101*t18584;
  p_output1[3]=t14323*(1.58228 + 3.2*Power(t14853,2) + 3.2*Power(t17913,2)) + t17983*t18442 + t18356*t18518 + t18468*t18557 + t14166*t18604;
  p_output1[4]=1.2143199999999998*t14166 + 0.768*t18356*t18419 + 0.768*t14309*t18442 + t18468*t18552 + t14323*t18604;
  p_output1[5]=t18101*(1.58228 + 3.2*Power(t18332,2) + 3.2*Power(t18343,2)) + t18353*t18442 + t18356*t18524 + t18566 + t18577 + t18468*t18584 + t18020*t18623;
  p_output1[6]=1.2143199999999998*t18020 + 0.768*t18356*t18434 + 0.768*t18096*t18442 + t18468*t18579 + t18101*t18623 - 1.*(-0.4*t18021*t18110 + 0.4*t18042*t18430 + 0.8*(-1.*t18042*t18430 + t18561))*var4[0] - 1.*(0.4*t18042*t18110 - 0.4*t18021*t18426 + 0.8*(-1.*t18042*t18110 + t18572))*var4[2];
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

#include "dxDiscreteMapds1_LSlift.hh"

namespace Pattern[ds1, Blank[LSlift]]
{

void dxDiscreteMapds1_LSlift_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
