/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:22:01 GMT-05:00
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
  double t7895;
  double t9194;
  double t5107;
  double t9197;
  double t581;
  double t9157;
  double t9354;
  double t10810;
  double t11164;
  double t11648;
  double t12003;
  double t12089;
  double t12121;
  double t12123;
  double t13673;
  double t14050;
  double t14076;
  double t14179;
  double t14438;
  double t582;
  double t4918;
  double t14714;
  double t14715;
  double t14716;
  double t14618;
  double t14717;
  double t14724;
  double t14725;
  double t14838;
  double t14839;
  double t14923;
  double t14952;
  double t18188;
  double t18189;
  double t18202;
  double t18203;
  double t18204;
  double t18238;
  double t18239;
  double t18240;
  double t18237;
  double t18241;
  double t18242;
  double t18243;
  double t18244;
  double t18245;
  double t18236;
  double t18246;
  double t18247;
  double t18248;
  double t11089;
  double t12090;
  double t12098;
  double t12111;
  double t12115;
  double t12118;
  double t14472;
  double t14593;
  double t14848;
  double t14851;
  double t14852;
  double t14874;
  double t14875;
  double t14924;
  double t14953;
  double t18181;
  double t18186;
  double t18187;
  double t18222;
  double t18233;
  double t18234;
  double t18235;
  double t18249;
  double t18250;
  double t18251;
  double t18261;
  double t18262;
  double t18263;
  double t18264;
  double t18265;
  double t18279;
  double t18280;
  double t18281;
  double t18282;
  double t18252;
  double t18253;
  double t18254;
  double t18255;
  double t18256;
  double t18287;
  double t18293;
  double t18295;
  double t18300;
  double t18301;
  double t18302;
  double t18303;
  double t18304;
  double t18309;
  double t18310;
  double t18311;
  double t18312;
  double t18313;
  double t18314;
  double t18315;
  double t18316;
  double t18317;
  double t18318;
  double t18289;
  double t18290;
  double t18291;
  double t18292;
  double t18294;
  double t18296;
  double t18297;
  double t18298;
  double t18299;
  double t18305;
  double t18306;
  double t18307;
  double t18308;
  double t18319;
  double t18320;
  double t18321;
  double t18336;
  double t18337;
  double t18338;
  double t18339;
  t7895 = Cos(var1[5]);
  t9194 = Sin(var1[2]);
  t5107 = Cos(var1[2]);
  t9197 = Sin(var1[5]);
  t581 = Cos(var1[6]);
  t9157 = t5107*t7895;
  t9354 = -1.*t9194*t9197;
  t10810 = t9157 + t9354;
  t11164 = -1.*t7895*t9194;
  t11648 = -1.*t5107*t9197;
  t12003 = t11164 + t11648;
  t12089 = Sin(var1[6]);
  t12121 = -0.4*t581*t12003;
  t12123 = 0.4*t10810*t12089;
  t13673 = t581*t12003;
  t14050 = -1.*t10810*t12089;
  t14076 = t13673 + t14050;
  t14179 = 0.8*t14076;
  t14438 = t12121 + t12123 + t14179;
  t582 = -1.*t581;
  t4918 = 1. + t582;
  t14714 = -1.*t5107*t7895;
  t14715 = t9194*t9197;
  t14716 = t14714 + t14715;
  t14618 = 0.4*t4918*t12003;
  t14717 = -0.4*t14716*t12089;
  t14724 = t14716*t12089;
  t14725 = t13673 + t14724;
  t14838 = 0.8*t14725;
  t14839 = t14618 + t14717 + t14838;
  t14923 = 0.4*t12003*t12089;
  t14952 = -1.*t12003*t12089;
  t18188 = -0.4*t581*t14716;
  t18189 = t581*t14716;
  t18202 = t18189 + t14952;
  t18203 = 0.8*t18202;
  t18204 = t18188 + t14923 + t18203;
  t18238 = t7895*t9194;
  t18239 = t5107*t9197;
  t18240 = t18238 + t18239;
  t18237 = 0.4*t4918*t14716;
  t18241 = -0.4*t18240*t12089;
  t18242 = t18240*t12089;
  t18243 = t18189 + t18242;
  t18244 = 0.8*t18243;
  t18245 = t18237 + t18241 + t18244;
  t18236 = var2[6]*t18204;
  t18246 = var2[2]*t18245;
  t18247 = var2[5]*t18245;
  t18248 = t18236 + t18246 + t18247;
  t11089 = 0.4*t4918*t10810;
  t12090 = -0.4*t12003*t12089;
  t12098 = t581*t10810;
  t12111 = t12003*t12089;
  t12115 = t12098 + t12111;
  t12118 = 0.8*t12115;
  t14472 = var3[6]*t14438;
  t14593 = var2[6]*t14438;
  t14848 = var3[2]*t14839;
  t14851 = var3[5]*t14839;
  t14852 = var2[2]*t14839;
  t14874 = var2[5]*t14839;
  t14875 = 0.4*t581*t10810;
  t14924 = -1.*t581*t10810;
  t14953 = t14924 + t14952;
  t18181 = 0.8*t14953;
  t18186 = t14875 + t14923 + t18181;
  t18187 = var2[6]*t18186;
  t18222 = var2[2]*t18204;
  t18233 = var2[5]*t18204;
  t18234 = t18187 + t18222 + t18233;
  t18235 = var2[6]*t18234;
  t18249 = var2[2]*t18248;
  t18250 = var2[5]*t18248;
  t18251 = t11089 + t12090 + t12118 + t14472 + t14593 + t14848 + t14851 + t14852 + t14874 + t18235 + t18249 + t18250;
  t18261 = 0.4*t581*t18240;
  t18262 = -1.*t581*t18240;
  t18263 = t18262 + t14050;
  t18264 = 0.8*t18263;
  t18265 = t18261 + t12123 + t18264;
  t18279 = 2.*var2[6]*t14438;
  t18280 = 2.*var2[2]*t14839;
  t18281 = 2.*var2[5]*t14839;
  t18282 = t11089 + t12090 + t12118 + t18279 + t18280 + t18281;
  t18252 = -0.4*t581*t10810;
  t18253 = 0.4*t18240*t12089;
  t18254 = -1.*t18240*t12089;
  t18255 = t12098 + t18254;
  t18256 = 0.8*t18255;
  t18287 = t11089 + t12090 + t12118;
  t18293 = 0.4*t14716*t12089;
  t18295 = -1.*t14716*t12089;
  t18300 = -0.4*t581*t18240;
  t18301 = t581*t18240;
  t18302 = t18301 + t18295;
  t18303 = 0.8*t18302;
  t18304 = t18300 + t18293 + t18303;
  t18309 = 0.4*t4918*t18240;
  t18310 = -0.4*t10810*t12089;
  t18311 = t10810*t12089;
  t18312 = t18301 + t18311;
  t18313 = 0.8*t18312;
  t18314 = t18309 + t18310 + t18313;
  t18315 = var2[2]*t18314;
  t18316 = var2[5]*t18314;
  t18317 = var2[6]*t18304;
  t18318 = t18315 + t18316 + t18317;
  t18289 = var3[6]*t18204;
  t18290 = var3[2]*t18245;
  t18291 = var3[5]*t18245;
  t18292 = 0.4*t581*t12003;
  t18294 = -1.*t581*t12003;
  t18296 = t18294 + t18295;
  t18297 = 0.8*t18296;
  t18298 = t18292 + t18293 + t18297;
  t18299 = var2[6]*t18298;
  t18305 = var2[2]*t18304;
  t18306 = var2[5]*t18304;
  t18307 = t18299 + t18305 + t18306;
  t18308 = var2[6]*t18307;
  t18319 = var2[2]*t18318;
  t18320 = var2[5]*t18318;
  t18321 = t14618 + t14717 + t14838 + t18289 + t18236 + t18290 + t18291 + t18246 + t18247 + t18308 + t18319 + t18320;
  t18336 = 2.*var2[6]*t18204;
  t18337 = 2.*var2[2]*t18245;
  t18338 = 2.*var2[5]*t18245;
  t18339 = t14618 + t14717 + t14838 + t18336 + t18337 + t18338;
  p_output1[0]=1.;
  p_output1[1]=t18251;
  p_output1[2]=t18251;
  p_output1[3]=t18252 + t18253 + t18256 + t14438*var2[2] + t18234*var2[2] + t14438*var2[5] + t18234*var2[5] + t18265*var2[6] + var2[6]*(t18186*var2[2] + t18186*var2[5] + (t14875 + t18241 + 0.8*(t14924 + t18242))*var2[6]) + t14438*var3[2] + t14438*var3[5] + t18265*var3[6];
  p_output1[4]=1.;
  p_output1[5]=t18282;
  p_output1[6]=t18282;
  p_output1[7]=t18252 + t18253 + t18256 + 2.*t14438*var2[2] + 2.*t14438*var2[5] + 2.*t18265*var2[6];
  p_output1[8]=1.;
  p_output1[9]=t18287;
  p_output1[10]=t18287;
  p_output1[11]=t18252 + t18253 + t18256;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t18321;
  p_output1[16]=t18321;
  p_output1[17]=t12121 + t12123 + t14179 + t18187 + t18222 + t18233 + t18307*var2[2] + t18307*var2[5] + var2[6]*(t18298*var2[2] + t18298*var2[5] + (t18292 + t18310 + 0.8*(t18294 + t18311))*var2[6]) + t18204*var3[2] + t18204*var3[5] + t18186*var3[6];
  p_output1[18]=1.;
  p_output1[19]=t18339;
  p_output1[20]=t18339;
  p_output1[21]=t12121 + t12123 + t14179 + 2.*t18204*var2[2] + 2.*t18204*var2[5] + 2.*t18186*var2[6];
  p_output1[22]=1.;
  p_output1[23]=t14839;
  p_output1[24]=t14839;
  p_output1[25]=t14438;
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

#include "J_ddh_LeftToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_ddh_LeftToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
