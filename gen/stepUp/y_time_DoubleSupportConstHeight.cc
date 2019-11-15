/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 15:30:20 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t5843;
  double t9605;
  double t9607;
  double t9608;
  double t9614;
  double t9615;
  double t9616;
  double t9617;
  double t9618;
  double t9623;
  double t9624;
  double t9625;
  double t9606;
  double t9619;
  double t9621;
  double t9622;
  double t9631;
  double t9632;
  double t9633;
  double t9636;
  double t9670;
  double t9671;
  double t9673;
  double t9675;
  t5843 = -1.*var4[1];
  t9605 = var4[0] + t5843;
  t9607 = -1. + var5[0];
  t9608 = -1. + var6[0];
  t9614 = 1/t9608;
  t9615 = -1.*var1[0];
  t9616 = t9615 + var1[1];
  t9617 = t9607*t9614*t9616;
  t9618 = t5843 + var1[0] + t9617;
  t9623 = 1/t9605;
  t9624 = -1.*t9623*t9618;
  t9625 = 1. + t9624;
  t9606 = Power(t9605,-5);
  t9619 = Power(t9618,5);
  t9621 = Power(t9605,-4);
  t9622 = Power(t9618,4);
  t9631 = Power(t9605,-3);
  t9632 = Power(t9618,3);
  t9633 = Power(t9625,2);
  t9636 = Power(t9605,-2);
  t9670 = Power(t9618,2);
  t9671 = Power(t9625,3);
  t9673 = Power(t9625,4);
  t9675 = Power(t9625,5);
  p_output1[0]=var2[3] - 1.*t9675*var3[0] - 5.*t9618*t9623*t9673*var3[4] - 10.*t9636*t9670*t9671*var3[8] - 10.*t9631*t9632*t9633*var3[12] - 5.*t9621*t9622*t9625*var3[16] - 1.*t9606*t9619*var3[20];
  p_output1[1]=var2[4] - 1.*t9675*var3[1] - 5.*t9618*t9623*t9673*var3[5] - 10.*t9636*t9670*t9671*var3[9] - 10.*t9631*t9632*t9633*var3[13] - 5.*t9621*t9622*t9625*var3[17] - 1.*t9606*t9619*var3[21];
  p_output1[2]=var2[5] - 1.*t9675*var3[2] - 5.*t9618*t9623*t9673*var3[6] - 10.*t9636*t9670*t9671*var3[10] - 10.*t9631*t9632*t9633*var3[14] - 5.*t9621*t9622*t9625*var3[18] - 1.*t9606*t9619*var3[22];
  p_output1[3]=var2[6] - 1.*t9675*var3[3] - 5.*t9618*t9623*t9673*var3[7] - 10.*t9636*t9670*t9671*var3[11] - 10.*t9631*t9632*t9633*var3[15] - 5.*t9621*t9622*t9625*var3[19] - 1.*t9606*t9619*var3[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "y_time_DoubleSupportConstHeight.hh"

namespace Pattern[DS1, Blank[opt]]
{

void y_time_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
