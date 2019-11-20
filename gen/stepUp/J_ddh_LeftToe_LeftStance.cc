/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:10:00 GMT-05:00
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
  double t8151;
  double t8266;
  double t4744;
  double t8315;
  double t2931;
  double t8259;
  double t8324;
  double t8329;
  double t8335;
  double t8344;
  double t8345;
  double t8346;
  double t8369;
  double t8372;
  double t8373;
  double t8374;
  double t8375;
  double t8381;
  double t8382;
  double t3641;
  double t4398;
  double t8386;
  double t8390;
  double t8391;
  double t8385;
  double t8392;
  double t8393;
  double t8394;
  double t8395;
  double t8396;
  double t11730;
  double t11772;
  double t11831;
  double t11832;
  double t11833;
  double t11854;
  double t11857;
  double t11878;
  double t11879;
  double t11880;
  double t11877;
  double t11881;
  double t11899;
  double t11901;
  double t11903;
  double t11904;
  double t11876;
  double t11907;
  double t11908;
  double t11909;
  double t8334;
  double t8356;
  double t8357;
  double t8358;
  double t8367;
  double t8368;
  double t8383;
  double t8384;
  double t8397;
  double t8398;
  double t8399;
  double t8400;
  double t8401;
  double t11771;
  double t11773;
  double t11799;
  double t11800;
  double t11830;
  double t11872;
  double t11873;
  double t11874;
  double t11875;
  double t11910;
  double t11911;
  double t11913;
  double t11944;
  double t11945;
  double t11946;
  double t11947;
  double t11948;
  double t11962;
  double t11963;
  double t11964;
  double t11965;
  double t11915;
  double t11916;
  double t11917;
  double t11918;
  double t11924;
  double t11970;
  double t11976;
  double t11978;
  double t11983;
  double t11984;
  double t11985;
  double t11986;
  double t11987;
  double t11992;
  double t11993;
  double t11994;
  double t11995;
  double t11996;
  double t11997;
  double t11998;
  double t11999;
  double t12000;
  double t12001;
  double t11972;
  double t11973;
  double t11974;
  double t11975;
  double t11977;
  double t11979;
  double t11980;
  double t11981;
  double t11982;
  double t11988;
  double t11989;
  double t11990;
  double t11991;
  double t12002;
  double t12003;
  double t12004;
  double t12019;
  double t12020;
  double t12021;
  double t12022;
  t8151 = Cos(var1[5]);
  t8266 = Sin(var1[2]);
  t4744 = Cos(var1[2]);
  t8315 = Sin(var1[5]);
  t2931 = Cos(var1[6]);
  t8259 = t4744*t8151;
  t8324 = -1.*t8266*t8315;
  t8329 = t8259 + t8324;
  t8335 = -1.*t8151*t8266;
  t8344 = -1.*t4744*t8315;
  t8345 = t8335 + t8344;
  t8346 = Sin(var1[6]);
  t8369 = -0.4*t2931*t8345;
  t8372 = 0.4*t8329*t8346;
  t8373 = t2931*t8345;
  t8374 = -1.*t8329*t8346;
  t8375 = t8373 + t8374;
  t8381 = 0.8*t8375;
  t8382 = t8369 + t8372 + t8381;
  t3641 = -1.*t2931;
  t4398 = 1. + t3641;
  t8386 = -1.*t4744*t8151;
  t8390 = t8266*t8315;
  t8391 = t8386 + t8390;
  t8385 = 0.4*t4398*t8345;
  t8392 = -0.4*t8391*t8346;
  t8393 = t8391*t8346;
  t8394 = t8373 + t8393;
  t8395 = 0.8*t8394;
  t8396 = t8385 + t8392 + t8395;
  t11730 = 0.4*t8345*t8346;
  t11772 = -1.*t8345*t8346;
  t11831 = -0.4*t2931*t8391;
  t11832 = t2931*t8391;
  t11833 = t11832 + t11772;
  t11854 = 0.8*t11833;
  t11857 = t11831 + t11730 + t11854;
  t11878 = t8151*t8266;
  t11879 = t4744*t8315;
  t11880 = t11878 + t11879;
  t11877 = 0.4*t4398*t8391;
  t11881 = -0.4*t11880*t8346;
  t11899 = t11880*t8346;
  t11901 = t11832 + t11899;
  t11903 = 0.8*t11901;
  t11904 = t11877 + t11881 + t11903;
  t11876 = var2[6]*t11857;
  t11907 = var2[2]*t11904;
  t11908 = var2[5]*t11904;
  t11909 = t11876 + t11907 + t11908;
  t8334 = 0.4*t4398*t8329;
  t8356 = -0.4*t8345*t8346;
  t8357 = t2931*t8329;
  t8358 = t8345*t8346;
  t8367 = t8357 + t8358;
  t8368 = 0.8*t8367;
  t8383 = var3[6]*t8382;
  t8384 = var2[6]*t8382;
  t8397 = var3[2]*t8396;
  t8398 = var3[5]*t8396;
  t8399 = var2[2]*t8396;
  t8400 = var2[5]*t8396;
  t8401 = 0.4*t2931*t8329;
  t11771 = -1.*t2931*t8329;
  t11773 = t11771 + t11772;
  t11799 = 0.8*t11773;
  t11800 = t8401 + t11730 + t11799;
  t11830 = var2[6]*t11800;
  t11872 = var2[2]*t11857;
  t11873 = var2[5]*t11857;
  t11874 = t11830 + t11872 + t11873;
  t11875 = var2[6]*t11874;
  t11910 = var2[2]*t11909;
  t11911 = var2[5]*t11909;
  t11913 = t8334 + t8356 + t8368 + t8383 + t8384 + t8397 + t8398 + t8399 + t8400 + t11875 + t11910 + t11911;
  t11944 = 0.4*t2931*t11880;
  t11945 = -1.*t2931*t11880;
  t11946 = t11945 + t8374;
  t11947 = 0.8*t11946;
  t11948 = t11944 + t8372 + t11947;
  t11962 = 2.*var2[6]*t8382;
  t11963 = 2.*var2[2]*t8396;
  t11964 = 2.*var2[5]*t8396;
  t11965 = t8334 + t8356 + t8368 + t11962 + t11963 + t11964;
  t11915 = -0.4*t2931*t8329;
  t11916 = 0.4*t11880*t8346;
  t11917 = -1.*t11880*t8346;
  t11918 = t8357 + t11917;
  t11924 = 0.8*t11918;
  t11970 = t8334 + t8356 + t8368;
  t11976 = 0.4*t8391*t8346;
  t11978 = -1.*t8391*t8346;
  t11983 = -0.4*t2931*t11880;
  t11984 = t2931*t11880;
  t11985 = t11984 + t11978;
  t11986 = 0.8*t11985;
  t11987 = t11983 + t11976 + t11986;
  t11992 = 0.4*t4398*t11880;
  t11993 = -0.4*t8329*t8346;
  t11994 = t8329*t8346;
  t11995 = t11984 + t11994;
  t11996 = 0.8*t11995;
  t11997 = t11992 + t11993 + t11996;
  t11998 = var2[2]*t11997;
  t11999 = var2[5]*t11997;
  t12000 = var2[6]*t11987;
  t12001 = t11998 + t11999 + t12000;
  t11972 = var3[6]*t11857;
  t11973 = var3[2]*t11904;
  t11974 = var3[5]*t11904;
  t11975 = 0.4*t2931*t8345;
  t11977 = -1.*t2931*t8345;
  t11979 = t11977 + t11978;
  t11980 = 0.8*t11979;
  t11981 = t11975 + t11976 + t11980;
  t11982 = var2[6]*t11981;
  t11988 = var2[2]*t11987;
  t11989 = var2[5]*t11987;
  t11990 = t11982 + t11988 + t11989;
  t11991 = var2[6]*t11990;
  t12002 = var2[2]*t12001;
  t12003 = var2[5]*t12001;
  t12004 = t8385 + t8392 + t8395 + t11972 + t11876 + t11973 + t11974 + t11907 + t11908 + t11991 + t12002 + t12003;
  t12019 = 2.*var2[6]*t11857;
  t12020 = 2.*var2[2]*t11904;
  t12021 = 2.*var2[5]*t11904;
  t12022 = t8385 + t8392 + t8395 + t12019 + t12020 + t12021;
  p_output1[0]=1.;
  p_output1[1]=t11913;
  p_output1[2]=t11913;
  p_output1[3]=t11915 + t11916 + t11924 + t11874*var2[2] + t8382*var2[2] + t11874*var2[5] + t8382*var2[5] + t11948*var2[6] + var2[6]*(t11800*var2[2] + t11800*var2[5] + (t11881 + 0.8*(t11771 + t11899) + t8401)*var2[6]) + t8382*var3[2] + t8382*var3[5] + t11948*var3[6];
  p_output1[4]=1.;
  p_output1[5]=t11965;
  p_output1[6]=t11965;
  p_output1[7]=t11915 + t11916 + t11924 + 2.*t8382*var2[2] + 2.*t8382*var2[5] + 2.*t11948*var2[6];
  p_output1[8]=1.;
  p_output1[9]=t11970;
  p_output1[10]=t11970;
  p_output1[11]=t11915 + t11916 + t11924;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t12004;
  p_output1[16]=t12004;
  p_output1[17]=t11830 + t11872 + t11873 + t8369 + t8372 + t8381 + t11990*var2[2] + t11990*var2[5] + var2[6]*(t11981*var2[2] + t11981*var2[5] + (t11975 + t11993 + 0.8*(t11977 + t11994))*var2[6]) + t11857*var3[2] + t11857*var3[5] + t11800*var3[6];
  p_output1[18]=1.;
  p_output1[19]=t12022;
  p_output1[20]=t12022;
  p_output1[21]=t8369 + t8372 + t8381 + 2.*t11857*var2[2] + 2.*t11857*var2[5] + 2.*t11800*var2[6];
  p_output1[22]=1.;
  p_output1[23]=t8396;
  p_output1[24]=t8396;
  p_output1[25]=t8382;
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

#include "J_ddh_LeftToe_LeftStance.hh"

namespace LeftStance
{

void J_ddh_LeftToe_LeftStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
