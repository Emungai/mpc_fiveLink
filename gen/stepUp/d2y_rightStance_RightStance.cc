/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:07:53 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  double t2873;
  double t3886;
  double t3890;
  double t3970;
  double t4035;
  double t4207;
  double t4214;
  double t4230;
  double t4246;
  double t4248;
  double t4325;
  double t4377;
  double t4388;
  double t4723;
  double t4728;
  double t4742;
  double t11050;
  double t11056;
  double t11064;
  double t11065;
  double t11071;
  double t11080;
  double t11102;
  double t11108;
  t2873 = -1.*var6[1];
  t3886 = var6[0] + t2873;
  t3890 = Power(t3886,-5);
  t3970 = -1. + var7[0];
  t4035 = -1. + var8[0];
  t4207 = 1/t4035;
  t4214 = -1.*var1[0];
  t4230 = t4214 + var1[1];
  t4246 = t3970*t4207*t4230;
  t4248 = t2873 + var1[0] + t4246;
  t4325 = Power(t4248,3);
  t4377 = Power(t3886,-4);
  t4388 = Power(t4248,2);
  t4723 = 1/t3886;
  t4728 = -1.*t4723*t4248;
  t4742 = 1. + t4728;
  t11050 = Power(t3886,-3);
  t11056 = Power(t4742,2);
  t11064 = Power(t3886,-2);
  t11065 = Power(t4742,3);
  t11071 = Power(t4248,4);
  t11080 = Power(t4742,4);
  t11102 = Power(t4248,5);
  t11108 = Power(t4742,5);
  p_output1[0]=var4[3] - 20.*t11064*t11065*var5[0] + 40.*t11064*t11065*var5[4] - 60.*t11050*t11056*t4248*var5[4] - 20.*t11064*t11065*var5[8] + 120.*t11050*t11056*t4248*var5[8] - 60.*t4377*t4388*t4742*var5[8] - 60.*t11050*t11056*t4248*var5[12] - 20.*t3890*t4325*var5[12] + 120.*t4377*t4388*t4742*var5[12] + 40.*t3890*t4325*var5[16] - 60.*t4377*t4388*t4742*var5[16] - 20.*t3890*t4325*var5[20] + (var2[3] - 1.*t11108*var5[0] - 5.*t11080*t4248*t4723*var5[4] - 10.*t11064*t11065*t4388*var5[8] - 10.*t11050*t11056*t4325*var5[12] - 5.*t11071*t4377*t4742*var5[16] - 1.*t11102*t3890*var5[20])*var9[0] + (var3[3] + 5.*t11080*t4723*var5[0] + 20.*t11064*t11065*t4248*var5[4] - 5.*t11080*t4723*var5[4] - 20.*t11064*t11065*t4248*var5[8] + 30.*t11050*t11056*t4388*var5[8] - 30.*t11050*t11056*t4388*var5[12] + 20.*t4325*t4377*t4742*var5[12] + 5.*t11071*t3890*var5[16] - 20.*t4325*t4377*t4742*var5[16] - 5.*t11071*t3890*var5[20])*var9[1];
  p_output1[1]=var4[4] - 20.*t11064*t11065*var5[1] + 40.*t11064*t11065*var5[5] - 60.*t11050*t11056*t4248*var5[5] - 20.*t11064*t11065*var5[9] + 120.*t11050*t11056*t4248*var5[9] - 60.*t4377*t4388*t4742*var5[9] - 60.*t11050*t11056*t4248*var5[13] - 20.*t3890*t4325*var5[13] + 120.*t4377*t4388*t4742*var5[13] + 40.*t3890*t4325*var5[17] - 60.*t4377*t4388*t4742*var5[17] - 20.*t3890*t4325*var5[21] + (var2[4] - 1.*t11108*var5[1] - 5.*t11080*t4248*t4723*var5[5] - 10.*t11064*t11065*t4388*var5[9] - 10.*t11050*t11056*t4325*var5[13] - 5.*t11071*t4377*t4742*var5[17] - 1.*t11102*t3890*var5[21])*var9[0] + (var3[4] + 5.*t11080*t4723*var5[1] + 20.*t11064*t11065*t4248*var5[5] - 5.*t11080*t4723*var5[5] - 20.*t11064*t11065*t4248*var5[9] + 30.*t11050*t11056*t4388*var5[9] - 30.*t11050*t11056*t4388*var5[13] + 20.*t4325*t4377*t4742*var5[13] + 5.*t11071*t3890*var5[17] - 20.*t4325*t4377*t4742*var5[17] - 5.*t11071*t3890*var5[21])*var9[1];
  p_output1[2]=var4[5] - 20.*t11064*t11065*var5[2] + 40.*t11064*t11065*var5[6] - 60.*t11050*t11056*t4248*var5[6] - 20.*t11064*t11065*var5[10] + 120.*t11050*t11056*t4248*var5[10] - 60.*t4377*t4388*t4742*var5[10] - 60.*t11050*t11056*t4248*var5[14] - 20.*t3890*t4325*var5[14] + 120.*t4377*t4388*t4742*var5[14] + 40.*t3890*t4325*var5[18] - 60.*t4377*t4388*t4742*var5[18] - 20.*t3890*t4325*var5[22] + (var2[5] - 1.*t11108*var5[2] - 5.*t11080*t4248*t4723*var5[6] - 10.*t11064*t11065*t4388*var5[10] - 10.*t11050*t11056*t4325*var5[14] - 5.*t11071*t4377*t4742*var5[18] - 1.*t11102*t3890*var5[22])*var9[0] + (var3[5] + 5.*t11080*t4723*var5[2] + 20.*t11064*t11065*t4248*var5[6] - 5.*t11080*t4723*var5[6] - 20.*t11064*t11065*t4248*var5[10] + 30.*t11050*t11056*t4388*var5[10] - 30.*t11050*t11056*t4388*var5[14] + 20.*t4325*t4377*t4742*var5[14] + 5.*t11071*t3890*var5[18] - 20.*t4325*t4377*t4742*var5[18] - 5.*t11071*t3890*var5[22])*var9[1];
  p_output1[3]=var4[6] - 20.*t11064*t11065*var5[3] + 40.*t11064*t11065*var5[7] - 60.*t11050*t11056*t4248*var5[7] - 20.*t11064*t11065*var5[11] + 120.*t11050*t11056*t4248*var5[11] - 60.*t4377*t4388*t4742*var5[11] - 60.*t11050*t11056*t4248*var5[15] - 20.*t3890*t4325*var5[15] + 120.*t4377*t4388*t4742*var5[15] + 40.*t3890*t4325*var5[19] - 60.*t4377*t4388*t4742*var5[19] - 20.*t3890*t4325*var5[23] + (var2[6] - 1.*t11108*var5[3] - 5.*t11080*t4248*t4723*var5[7] - 10.*t11064*t11065*t4388*var5[11] - 10.*t11050*t11056*t4325*var5[15] - 5.*t11071*t4377*t4742*var5[19] - 1.*t11102*t3890*var5[23])*var9[0] + (var3[6] + 5.*t11080*t4723*var5[3] + 20.*t11064*t11065*t4248*var5[7] - 5.*t11080*t4723*var5[7] - 20.*t11064*t11065*t4248*var5[11] + 30.*t11050*t11056*t4388*var5[11] - 30.*t11050*t11056*t4388*var5[15] + 20.*t4325*t4377*t4742*var5[15] + 5.*t11071*t3890*var5[19] - 20.*t4325*t4377*t4742*var5[19] - 5.*t11071*t3890*var5[23])*var9[1];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8,*var9;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 9)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Nine input(s) required (var1,var2,var3,var4,var5,var6,var7,var8,var9).");
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }
  mrows = mxGetM(prhs[8]);
  ncols = mxGetN(prhs[8]);
  if( !mxIsDouble(prhs[8]) || mxIsComplex(prhs[8]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var9 is wrong.");
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
  var9 = mxGetPr(prhs[8]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8,var9);


}

#else // MATLAB_MEX_FILE

#include "d2y_rightStance_RightStance.hh"

namespace RightStance
{

void d2y_rightStance_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE
