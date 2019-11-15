/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:18:15 GMT-05:00
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
  double t10937;
  double t10942;
  double t9600;
  double t10943;
  double t3544;
  double t10941;
  double t10944;
  double t10945;
  double t10947;
  double t10948;
  double t10949;
  double t10950;
  double t3627;
  double t9411;
  double t10958;
  double t10959;
  double t10960;
  double t10946;
  double t10951;
  double t10952;
  double t10953;
  double t10954;
  double t10955;
  double t10956;
  double t10957;
  double t10961;
  double t10962;
  double t10963;
  double t10964;
  double t10965;
  double t10966;
  double t10967;
  double t10968;
  double t10969;
  double t10978;
  double t10979;
  double t10980;
  double t10970;
  double t10971;
  double t10972;
  double t10973;
  double t10974;
  double t10975;
  double t10976;
  double t10977;
  double t10981;
  double t10982;
  double t10983;
  double t10984;
  double t10985;
  double t10986;
  double t10987;
  double t10988;
  double t10989;
  double t10990;
  double t10991;
  double t10992;
  double t10993;
  double t10994;
  t10937 = Cos(var1[3]);
  t10942 = Sin(var1[2]);
  t9600 = Cos(var1[2]);
  t10943 = Sin(var1[3]);
  t3544 = Cos(var1[4]);
  t10941 = -1.*t9600*t10937;
  t10944 = t10942*t10943;
  t10945 = t10941 + t10944;
  t10947 = t10937*t10942;
  t10948 = t9600*t10943;
  t10949 = t10947 + t10948;
  t10950 = Sin(var1[4]);
  t3627 = -1.*t3544;
  t9411 = 1. + t3627;
  t10958 = -1.*t10937*t10942;
  t10959 = -1.*t9600*t10943;
  t10960 = t10958 + t10959;
  t10946 = 0.4*t9411*t10945;
  t10951 = -0.4*t10949*t10950;
  t10952 = t3544*t10945;
  t10953 = t10949*t10950;
  t10954 = t10952 + t10953;
  t10955 = 0.8*t10954;
  t10956 = t10946 + t10951 + t10955;
  t10957 = var2[2]*t10956;
  t10961 = 0.4*t9411*t10960;
  t10962 = -0.4*t10945*t10950;
  t10963 = t3544*t10960;
  t10964 = t10945*t10950;
  t10965 = t10963 + t10964;
  t10966 = 0.8*t10965;
  t10967 = t10961 + t10962 + t10966;
  t10968 = var2[0]*t10967;
  t10969 = t10957 + t10968;
  t10978 = t9600*t10937;
  t10979 = -1.*t10942*t10943;
  t10980 = t10978 + t10979;
  t10970 = -0.4*t3544*t10945;
  t10971 = 0.4*t10960*t10950;
  t10972 = -1.*t10960*t10950;
  t10973 = t10952 + t10972;
  t10974 = 0.8*t10973;
  t10975 = t10970 + t10971 + t10974;
  t10976 = var2[2]*t10975;
  t10977 = -0.4*t3544*t10960;
  t10981 = 0.4*t10980*t10950;
  t10982 = -1.*t10980*t10950;
  t10983 = t10963 + t10982;
  t10984 = 0.8*t10983;
  t10985 = t10977 + t10981 + t10984;
  t10986 = var2[0]*t10985;
  t10987 = t10976 + t10986;
  t10988 = 0.4*t9411*t10980;
  t10989 = -0.4*t10960*t10950;
  t10990 = t3544*t10980;
  t10991 = t10960*t10950;
  t10992 = t10990 + t10991;
  t10993 = 0.8*t10992;
  t10994 = t10988 + t10989 + t10993;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t10969;
  p_output1[3]=t10969;
  p_output1[4]=t10987;
  p_output1[5]=t10994;
  p_output1[6]=t10967;
  p_output1[7]=t10969;
  p_output1[8]=t10969;
  p_output1[9]=t10987;
  p_output1[10]=t10994;
  p_output1[11]=t10967;
  p_output1[12]=t10987;
  p_output1[13]=t10987;
  p_output1[14]=(t10981 + 0.4*t10949*t3544 + 0.8*(t10982 - 1.*t10949*t3544))*var2[0] + (t10971 + 0.4*t10980*t3544 + 0.8*(t10972 - 1.*t10980*t3544))*var2[2];
  p_output1[15]=0.4*t10949*t10950 + 0.8*(-1.*t10949*t10950 + t10990) - 0.4*t10980*t3544;
  p_output1[16]=t10985;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
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

#include "J_fRightToe_vec_RightStance.hh"

namespace Pattern[righStance, Blank[opt]]
{

void J_fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
