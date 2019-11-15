/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:40:42 GMT-05:00
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
  double t7798;
  double t7786;
  double t7787;
  double t7779;
  double t8025;
  double t2865;
  double t7805;
  double t7806;
  double t7807;
  double t7808;
  double t7812;
  double t8057;
  double t8058;
  double t8064;
  double t8072;
  double t8073;
  double t8075;
  double t8078;
  double t8079;
  double t8080;
  double t8067;
  double t7813;
  double t8026;
  double t8027;
  double t8028;
  double t8029;
  double t8040;
  double t8051;
  double t7780;
  double t7790;
  double t7791;
  double t7797;
  double t8082;
  double t8056;
  double t8087;
  double t8088;
  double t8089;
  double t8090;
  double t8070;
  double t8150;
  double t8164;
  double t8168;
  double t8169;
  double t8161;
  double t8162;
  double t8163;
  double t8170;
  double t8171;
  double t8172;
  double t8178;
  double t8193;
  double t8194;
  double t8195;
  double t8186;
  double t8187;
  double t8188;
  double t8081;
  double t8083;
  double t8179;
  double t8180;
  double t8181;
  double t8189;
  double t8190;
  double t8191;
  double t8071;
  double t8084;
  double t8085;
  double t8208;
  double t8209;
  double t8210;
  double t8216;
  double t8217;
  double t8218;
  double t8219;
  double t8173;
  double t8174;
  double t8182;
  double t8183;
  double t8184;
  double t8185;
  double t8091;
  double t8278;
  double t8279;
  double t8280;
  double t8274;
  double t8275;
  double t8276;
  double t8288;
  double t8345;
  double t8346;
  double t8283;
  double t8284;
  double t8285;
  double t8225;
  double t8236;
  double t8247;
  double t8252;
  double t8260;
  double t8263;
  double t8266;
  double t8267;
  double t8268;
  double t8282;
  double t8387;
  double t8388;
  double t8347;
  double t8354;
  double t8391;
  double t8392;
  double t8394;
  double t8395;
  double t8358;
  double t8375;
  double t8376;
  double t8381;
  double t8382;
  double t8383;
  double t8384;
  double t8385;
  double t8404;
  double t8405;
  double t8406;
  double t8412;
  double t8413;
  double t8427;
  double t8428;
  double t8429;
  double t8432;
  double t8433;
  double t8434;
  double t8192;
  double t8196;
  double t8197;
  double t8198;
  double t8199;
  double t8200;
  double t8201;
  double t8202;
  double t8203;
  double t8204;
  double t8368;
  double t8369;
  double t8370;
  double t8374;
  double t8377;
  double t8378;
  double t8379;
  double t8380;
  double t8386;
  double t8389;
  double t8390;
  double t8393;
  double t8396;
  double t8397;
  double t8398;
  double t8399;
  double t8400;
  double t8414;
  double t8415;
  double t8416;
  double t8417;
  double t8418;
  double t8419;
  double t8420;
  double t8421;
  double t8422;
  double t8423;
  double t8424;
  double t8425;
  double t8426;
  double t8440;
  double t8441;
  double t8442;
  double t8151;
  double t8460;
  double t8465;
  double t8466;
  double t8468;
  double t8469;
  double t8471;
  double t8472;
  double t8473;
  double t8479;
  double t8480;
  double t8481;
  double t8491;
  double t8492;
  double t8493;
  double t8496;
  double t8497;
  double t8498;
  double t8499;
  double t8500;
  t7798 = Cos(var1[4]);
  t7786 = Sin(var1[2]);
  t7787 = Sin(var1[3]);
  t7779 = Cos(var1[3]);
  t8025 = Sin(var1[4]);
  t2865 = Cos(var1[2]);
  t7805 = -1.*t7798;
  t7806 = 1. + t7805;
  t7807 = 0.4*t7806;
  t7808 = 0.64*t7798;
  t7812 = t7807 + t7808;
  t8057 = t7779*t7798;
  t8058 = -1.*t7787*t8025;
  t8064 = t8057 + t8058;
  t8072 = t7812*t8025;
  t8073 = -0.24*t7798*t8025;
  t8075 = t8072 + t8073;
  t8078 = t7798*t7787;
  t8079 = t7779*t8025;
  t8080 = t8078 + t8079;
  t8067 = -1.*t2865*t8064;
  t7813 = t7812*t7798;
  t8026 = Power(t8025,2);
  t8027 = 0.24*t8026;
  t8028 = t7813 + t8027;
  t8029 = -1.*t7798*t7787;
  t8040 = -1.*t7779*t8025;
  t8051 = t8029 + t8040;
  t7780 = -1.*t2865*t7779;
  t7790 = t7786*t7787;
  t7791 = t7780 + t7790;
  t7797 = -0.748*t7791;
  t8082 = -1.*t7786*t8064;
  t8056 = -1.*t7786*t8051;
  t8087 = t7779*t7786;
  t8088 = t2865*t7787;
  t8089 = t8087 + t8088;
  t8090 = -0.748*t8089;
  t8070 = t8056 + t8067;
  t8150 = -1.*t2865*t8051;
  t8164 = -1.*t7779*t7798;
  t8168 = t7787*t8025;
  t8169 = t8164 + t8168;
  t8161 = t2865*t8051;
  t8162 = t8161 + t8082;
  t8163 = -3.2*t8075*t8162;
  t8170 = t2865*t8169;
  t8171 = t8056 + t8170;
  t8172 = -3.2*t8028*t8171;
  t8178 = -3.2*t8075*t8070;
  t8193 = -1.*t7812*t8025;
  t8194 = 0.24*t7798*t8025;
  t8195 = t8193 + t8194;
  t8186 = Power(t7798,2);
  t8187 = -0.24*t8186;
  t8188 = t7813 + t8187;
  t8081 = -1.*t2865*t8080;
  t8083 = t8081 + t8082;
  t8179 = -1.*t7786*t8169;
  t8180 = t8150 + t8179;
  t8181 = -3.2*t8028*t8180;
  t8189 = -1.*t7786*t8080;
  t8190 = t2865*t8064;
  t8191 = t8189 + t8190;
  t8071 = -3.2*t8028*t8070;
  t8084 = -3.2*t8075*t8083;
  t8085 = t7797 + t8071 + t8084;
  t8208 = -1.*t7779*t7786;
  t8209 = -1.*t2865*t7787;
  t8210 = t8208 + t8209;
  t8216 = -0.748*t8210;
  t8217 = -3.2*t8075*t8191;
  t8218 = -3.2*t8028*t8162;
  t8219 = t8216 + t8217 + t8218;
  t8173 = t7797 + t8163 + t8172;
  t8174 = -0.5*var2[0]*t8173;
  t8182 = t8090 + t8178 + t8181;
  t8183 = -0.5*var2[1]*t8182;
  t8184 = t8174 + t8183;
  t8185 = var2[3]*t8184;
  t8091 = t7786*t8080;
  t8278 = t7779*t7812;
  t8279 = -0.24*t7787*t8025;
  t8280 = t8278 + t8279;
  t8274 = -1.*t7812*t7787;
  t8275 = -0.24*t7779*t8025;
  t8276 = t8274 + t8275;
  t8288 = t7812*t7787;
  t8345 = 0.24*t7779*t8025;
  t8346 = t8288 + t8345;
  t8283 = -1.*t7779*t7812;
  t8284 = 0.24*t7787*t8025;
  t8285 = t8283 + t8284;
  t8225 = -3.2*t8075*t8171;
  t8236 = t2865*t8080;
  t8247 = t8236 + t8179;
  t8252 = -3.2*t8028*t8247;
  t8260 = t8091 + t8170;
  t8263 = -3.2*t8028*t8260;
  t8266 = t7786*t8169;
  t8267 = t8161 + t8266;
  t8268 = -3.2*t8075*t8267;
  t8282 = -1.*t8080*t8280;
  t8387 = -0.24*t7798*t7787;
  t8388 = t8387 + t8275;
  t8347 = -1.*t8346*t8169;
  t8354 = t8051*t8346;
  t8391 = 0.24*t7779*t7798;
  t8392 = t8391 + t8279;
  t8394 = -0.24*t7779*t7798;
  t8395 = t8394 + t8284;
  t8358 = t8280*t8169;
  t8375 = t7786*t8051;
  t8376 = t8375 + t8190;
  t8381 = t8276*t8064;
  t8382 = t8346*t8064;
  t8383 = t8051*t8280;
  t8384 = t8080*t8280;
  t8385 = t8381 + t8382 + t8383 + t8384;
  t8404 = -1.*t8051*t8276;
  t8405 = -1.*t8051*t8346;
  t8406 = -1.*t8064*t8280;
  t8412 = -1.*t8280*t8169;
  t8413 = t8404 + t8405 + t8406 + t8412;
  t8427 = -3.2*t8075*t8376;
  t8428 = -3.2*t8028*t8267;
  t8429 = t8216 + t8427 + t8428;
  t8432 = -3.2*t8028*t8385;
  t8433 = -3.2*t8075*t8413;
  t8434 = t8432 + t8433;
  t8192 = -3.2*t8188*t8191;
  t8196 = -3.2*t8195*t8162;
  t8197 = t8192 + t8163 + t8196 + t8172;
  t8198 = -0.5*var2[0]*t8197;
  t8199 = -3.2*t8195*t8070;
  t8200 = -3.2*t8188*t8083;
  t8201 = t8178 + t8199 + t8200 + t8181;
  t8202 = -0.5*var2[1]*t8201;
  t8203 = t8198 + t8202;
  t8204 = var2[3]*t8203;
  t8368 = -3.2*t8188*t8162;
  t8369 = -3.2*t8195*t8171;
  t8370 = t8368 + t8225 + t8369 + t8252;
  t8374 = -0.5*var2[1]*t8370;
  t8377 = -3.2*t8188*t8376;
  t8378 = -3.2*t8195*t8267;
  t8379 = t8377 + t8263 + t8268 + t8378;
  t8380 = -0.5*var2[0]*t8379;
  t8386 = -3.2*t8195*t8385;
  t8389 = -1.*t8388*t8064;
  t8390 = -1.*t8051*t8280;
  t8393 = -1.*t8051*t8392;
  t8396 = -1.*t8051*t8395;
  t8397 = -1.*t8276*t8169;
  t8398 = -1.*t8388*t8169;
  t8399 = t8389 + t8390 + t8282 + t8393 + t8396 + t8397 + t8398 + t8347;
  t8400 = -3.2*t8075*t8399;
  t8414 = -3.2*t8188*t8413;
  t8415 = t8051*t8276;
  t8416 = t8051*t8388;
  t8417 = t8388*t8080;
  t8418 = t8064*t8280;
  t8419 = t8064*t8392;
  t8420 = t8064*t8395;
  t8421 = t8415 + t8416 + t8354 + t8417 + t8418 + t8419 + t8420 + t8358;
  t8422 = -3.2*t8028*t8421;
  t8423 = t8386 + t8400 + t8414 + t8422;
  t8424 = -0.5*var2[2]*t8423;
  t8425 = t8374 + t8380 + t8424;
  t8426 = var2[3]*t8425;
  t8440 = -1.*t7812*t7798;
  t8441 = 0.24*t8186;
  t8442 = t8440 + t8441;
  t8151 = t7786*t8064;
  t8460 = t8236 + t8151;
  t8465 = -1.*t8346*t8064;
  t8466 = t8465 + t8390;
  t8468 = t8346*t8080;
  t8469 = t8468 + t8418;
  t8471 = t8388*t8064;
  t8472 = t8080*t8392;
  t8473 = t8471 + t8382 + t8383 + t8472;
  t8479 = -1.*t8051*t8388;
  t8480 = -1.*t8064*t8392;
  t8481 = t8479 + t8405 + t8480 + t8412;
  t8491 = -3.2*t8195*t8376;
  t8492 = -3.2*t8188*t8460;
  t8493 = t8427 + t8491 + t8492 + t8428;
  t8496 = -3.2*t8188*t8466;
  t8497 = -3.2*t8195*t8469;
  t8498 = -3.2*t8028*t8473;
  t8499 = -3.2*t8075*t8481;
  t8500 = t8496 + t8497 + t8498 + t8499;
  p_output1[0]=(-0.5*t8085*var2[0] - 0.5*(t8090 - 3.2*t8075*(t8067 + t8091) - 3.2*t8028*(t8150 + t8151))*var2[1])*var2[3];
  p_output1[1]=t8185;
  p_output1[2]=t8204;
  p_output1[3]=-0.5*t8219*var2[3];
  p_output1[4]=-0.5*t8085*var2[3];
  p_output1[5]=-0.5*t8219*var2[0] - 0.5*t8085*var2[1];
  p_output1[6]=t8185;
  p_output1[7]=(-0.5*(t7797 + t8263 + t8268)*var2[0] - 0.5*(t8090 + t8225 + t8252)*var2[1] - 0.5*(-3.2*t8075*(-1.*t8064*t8276 - 2.*t8169*t8276 - 2.*t8051*t8280 + t8282 - 1.*t8051*t8285 + t8347) - 3.2*t8028*(2.*t8051*t8276 + t8080*t8276 + 2.*t8064*t8280 + t8064*t8285 + t8354 + t8358))*var2[2])*var2[3];
  p_output1[8]=t8426;
  p_output1[9]=-0.5*t8429*var2[3];
  p_output1[10]=-0.5*t8173*var2[3];
  p_output1[11]=-0.5*t8434*var2[3];
  p_output1[12]=-0.5*t8429*var2[0] - 0.5*t8173*var2[1] - 0.5*t8434*var2[2];
  p_output1[13]=t8204;
  p_output1[14]=t8426;
  p_output1[15]=var2[3]*(-0.5*(t8263 - 6.4*t8195*t8267 + t8268 - 6.4*t8188*t8376 - 3.2*t8376*t8442 - 3.2*t8195*t8460)*var2[0] - 0.5*(-6.4*t8162*t8188 - 6.4*t8171*t8195 - 3.2*t8191*t8195 + t8225 + t8252 - 3.2*t8162*t8442)*var2[1] - 0.5*(-3.2*t8075*(t8282 + t8347 - 2.*t8169*t8388 + t8389 - 2.*t8051*t8392 + t8396) - 3.2*t8028*(t8354 + t8358 + 2.*t8051*t8388 + 2.*t8064*t8392 + t8417 + t8420) - 3.2*t8195*t8466 - 3.2*t8442*t8469 - 6.4*t8195*t8473 - 6.4*t8188*t8481)*var2[2] - 0.5*(-6.4*Power(t8188,2) - 6.4*t8075*t8195 - 6.4*Power(t8195,2) - 6.4*t8028*t8442)*var2[3] + 0.384*t8442*var2[4]);
  p_output1[16]=-0.5*t8493*var2[3];
  p_output1[17]=-0.5*t8197*var2[3];
  p_output1[18]=-0.5*t8500*var2[3];
  p_output1[19]=-0.5*t8493*var2[0] - 0.5*t8197*var2[1] - 0.5*t8500*var2[2] - 1.*(-6.4*t8075*t8188 - 6.4*t8028*t8195)*var2[3] + 0.384*t8195*var2[4];
  p_output1[20]=0.384*t8195*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec4_five_link_walker.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_Ce3_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
