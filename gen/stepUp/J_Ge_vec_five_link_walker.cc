/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:21:28 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t572;
  double t3906;
  double t4348;
  double t4448;
  double t4498;
  double t4516;
  double t4522;
  double t4532;
  double t8150;
  double t8151;
  double t8157;
  double t8158;
  double t8273;
  double t8274;
  double t8275;
  double t8315;
  double t8321;
  double t8325;
  double t8329;
  double t8330;
  double t8331;
  double t8332;
  double t4531;
  double t4602;
  double t4792;
  double t8145;
  double t8251;
  double t8259;
  double t8266;
  double t8267;
  double t8269;
  double t8270;
  double t8272;
  double t8349;
  double t8350;
  double t8351;
  double t8324;
  double t8326;
  double t8327;
  double t8328;
  double t8333;
  double t8334;
  double t8335;
  double t8339;
  double t8343;
  double t8344;
  double t8345;
  double t8360;
  double t8361;
  double t8362;
  double t8347;
  double t8348;
  double t8352;
  double t8353;
  double t8354;
  double t8355;
  double t8356;
  double t8357;
  double t8369;
  double t8370;
  double t8371;
  double t8358;
  double t8359;
  double t8363;
  double t8364;
  double t8365;
  double t8366;
  double t8367;
  double t8368;
  double t8378;
  double t8379;
  double t8380;
  t572 = Cos(var1[2]);
  t3906 = Cos(var1[3]);
  t4348 = -1.*t572*t3906;
  t4448 = Sin(var1[2]);
  t4498 = Sin(var1[3]);
  t4516 = t4448*t4498;
  t4522 = t4348 + t4516;
  t4532 = Cos(var1[4]);
  t8150 = t3906*t4448;
  t8151 = t572*t4498;
  t8157 = t8150 + t8151;
  t8158 = Sin(var1[4]);
  t8273 = Cos(var1[5]);
  t8274 = -1.*t572*t8273;
  t8275 = Sin(var1[5]);
  t8315 = t4448*t8275;
  t8321 = t8274 + t8315;
  t8325 = Cos(var1[6]);
  t8329 = t8273*t4448;
  t8330 = t572*t8275;
  t8331 = t8329 + t8330;
  t8332 = Sin(var1[6]);
  t4531 = -7.33788*t4522;
  t4602 = -1.*t4532;
  t4792 = 1. + t4602;
  t8145 = 0.4*t4792*t4522;
  t8251 = -0.4*t8157*t8158;
  t8259 = t4532*t4522;
  t8266 = t8157*t8158;
  t8267 = t8259 + t8266;
  t8269 = 0.64*t8267;
  t8270 = t8145 + t8251 + t8269;
  t8272 = -31.392000000000003*t8270;
  t8349 = -1.*t3906*t4448;
  t8350 = -1.*t572*t4498;
  t8351 = t8349 + t8350;
  t8324 = -7.33788*t8321;
  t8326 = -1.*t8325;
  t8327 = 1. + t8326;
  t8328 = 0.4*t8327*t8321;
  t8333 = -0.4*t8331*t8332;
  t8334 = t8325*t8321;
  t8335 = t8331*t8332;
  t8339 = t8334 + t8335;
  t8343 = 0.64*t8339;
  t8344 = t8328 + t8333 + t8343;
  t8345 = -31.392000000000003*t8344;
  t8360 = -1.*t8273*t4448;
  t8361 = -1.*t572*t8275;
  t8362 = t8360 + t8361;
  t8347 = t4531 + t8272;
  t8348 = -0.4*t4532*t4522;
  t8352 = 0.4*t8351*t8158;
  t8353 = -1.*t8351*t8158;
  t8354 = t8259 + t8353;
  t8355 = 0.64*t8354;
  t8356 = t8348 + t8352 + t8355;
  t8357 = -31.392000000000003*t8356;
  t8369 = t572*t3906;
  t8370 = -1.*t4448*t4498;
  t8371 = t8369 + t8370;
  t8358 = t8324 + t8345;
  t8359 = -0.4*t8325*t8321;
  t8363 = 0.4*t8362*t8332;
  t8364 = -1.*t8362*t8332;
  t8365 = t8334 + t8364;
  t8366 = 0.64*t8365;
  t8367 = t8359 + t8363 + t8366;
  t8368 = -31.392000000000003*t8367;
  t8378 = t572*t8273;
  t8379 = -1.*t4448*t8275;
  t8380 = t8378 + t8379;
  p_output1[0]=t4531 + 28.252799999999997*t572 + t8272 + t8324 + t8345;
  p_output1[1]=t8347;
  p_output1[2]=t8357;
  p_output1[3]=t8358;
  p_output1[4]=t8368;
  p_output1[5]=t8347;
  p_output1[6]=t8347;
  p_output1[7]=t8357;
  p_output1[8]=t8357;
  p_output1[9]=t8357;
  p_output1[10]=-31.392000000000003*(t8352 + 0.4*t4532*t8371 + 0.64*(t8353 - 1.*t4532*t8371));
  p_output1[11]=t8358;
  p_output1[12]=t8358;
  p_output1[13]=t8368;
  p_output1[14]=t8368;
  p_output1[15]=t8368;
  p_output1[16]=-31.392000000000003*(t8363 + 0.4*t8325*t8380 + 0.64*(t8364 - 1.*t8325*t8380));
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ge_vec_five_link_walker.hh"

namespace LeftStance
{

void J_Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
