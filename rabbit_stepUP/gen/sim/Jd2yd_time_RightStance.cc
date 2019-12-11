/*
 * Automatically Generated from Mathematica.
 * Mon 9 Dec 2019 23:19:45 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t617;
  double t618;
  double t624;
  double t625;
  double t629;
  double t636;
  double t637;
  double t638;
  double t639;
  double t640;
  double t644;
  double t645;
  double t649;
  double t650;
  t617 = -1.*var3[1];
  t618 = var3[0] + t617;
  t624 = Power(t618,-5);
  t625 = t617 + var1[0];
  t629 = Power(t625,3);
  t636 = Power(t618,-4);
  t637 = Power(t625,2);
  t638 = 1/t618;
  t639 = -1.*t638*t625;
  t640 = 1. + t639;
  t644 = Power(t618,-3);
  t645 = Power(t640,2);
  t649 = Power(t618,-2);
  t650 = Power(t640,3);
  p_output1[0]=20.*t649*t650*var2[0] + 60.*t625*t644*t645*var2[4] - 40.*t649*t650*var2[4] + 60.*t636*t637*t640*var2[8] - 120.*t625*t644*t645*var2[8] + 20.*t649*t650*var2[8] + 20.*t624*t629*var2[12] - 120.*t636*t637*t640*var2[12] + 60.*t625*t644*t645*var2[12] - 40.*t624*t629*var2[16] + 60.*t636*t637*t640*var2[16] + 20.*t624*t629*var2[20];
  p_output1[1]=20.*t649*t650*var2[1] + 60.*t625*t644*t645*var2[5] - 40.*t649*t650*var2[5] + 60.*t636*t637*t640*var2[9] - 120.*t625*t644*t645*var2[9] + 20.*t649*t650*var2[9] + 20.*t624*t629*var2[13] - 120.*t636*t637*t640*var2[13] + 60.*t625*t644*t645*var2[13] - 40.*t624*t629*var2[17] + 60.*t636*t637*t640*var2[17] + 20.*t624*t629*var2[21];
  p_output1[2]=20.*t649*t650*var2[2] + 60.*t625*t644*t645*var2[6] - 40.*t649*t650*var2[6] + 60.*t636*t637*t640*var2[10] - 120.*t625*t644*t645*var2[10] + 20.*t649*t650*var2[10] + 20.*t624*t629*var2[14] - 120.*t636*t637*t640*var2[14] + 60.*t625*t644*t645*var2[14] - 40.*t624*t629*var2[18] + 60.*t636*t637*t640*var2[18] + 20.*t624*t629*var2[22];
  p_output1[3]=20.*t649*t650*var2[3] + 60.*t625*t644*t645*var2[7] - 40.*t649*t650*var2[7] + 60.*t636*t637*t640*var2[11] - 120.*t625*t644*t645*var2[11] + 20.*t649*t650*var2[11] + 20.*t624*t629*var2[15] - 120.*t636*t637*t640*var2[15] + 60.*t625*t644*t645*var2[15] - 40.*t624*t629*var2[19] + 60.*t636*t637*t640*var2[19] + 20.*t624*t629*var2[23];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "Jd2yd_time_RightStance.hh"

namespace SymFunction
{

void Jd2yd_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
