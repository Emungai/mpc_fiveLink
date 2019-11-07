/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:20:15 GMT-05:00
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
  double t7757;
  double t2821;
  double t5834;
  double t7967;
  double t2626;
  double t7219;
  double t7976;
  double t8200;
  double t9530;
  double t9535;
  double t9660;
  double t9661;
  double t9662;
  double t9669;
  double t9670;
  double t10763;
  double t10897;
  double t10905;
  double t11073;
  double t11075;
  double t10730;
  double t11306;
  double t11307;
  double t11319;
  double t11540;
  double t9542;
  double t9555;
  double t9606;
  double t11562;
  double t11587;
  double t11612;
  double t11847;
  double t11888;
  double t12001;
  double t12042;
  double t12061;
  double t12096;
  double t12097;
  double t12095;
  double t12100;
  double t12120;
  double t12132;
  double t12136;
  double t9628;
  double t9645;
  double t10220;
  double t9656;
  double t10198;
  double t12182;
  double t12213;
  double t12214;
  double t13622;
  double t13921;
  double t13979;
  double t14039;
  double t14040;
  double t14336;
  double t14337;
  double t14341;
  double t14301;
  double t14302;
  double t14324;
  double t14326;
  double t14660;
  double t14682;
  double t14374;
  double t14478;
  double t14659;
  double t14684;
  double t14689;
  double t14690;
  double t14693;
  double t14694;
  double t14695;
  double t14705;
  double t14841;
  double t14842;
  double t14843;
  double t14884;
  double t14885;
  double t14891;
  double t14896;
  double t14897;
  t7757 = Cos(var1[5]);
  t2821 = Cos(var1[6]);
  t5834 = Sin(var1[5]);
  t7967 = Sin(var1[6]);
  t2626 = Sin(var1[2]);
  t7219 = -1.*t2821*t5834;
  t7976 = -1.*t7757*t7967;
  t8200 = t7219 + t7976;
  t9530 = -1.*t2626*t8200;
  t9535 = Cos(var1[2]);
  t9660 = -1.*t7757*t2821;
  t9661 = t5834*t7967;
  t9662 = t9660 + t9661;
  t9669 = t9535*t9662;
  t9670 = t9530 + t9669;
  t10763 = t2821*t5834;
  t10897 = t7757*t7967;
  t10905 = t10763 + t10897;
  t11073 = t2626*t10905;
  t11075 = t11073 + t9669;
  t10730 = -0.384*var2[2]*t9670;
  t11306 = -0.384*var2[5]*t11075;
  t11307 = -0.384*var2[6]*t11075;
  t11319 = t10730 + t11306 + t11307;
  t11540 = var2[6]*t11319;
  t9542 = t7757*t2821;
  t9555 = -1.*t5834*t7967;
  t9606 = t9542 + t9555;
  t11562 = t9535*t8200;
  t11587 = -1.*t2626*t9606;
  t11612 = t11562 + t11587;
  t11847 = t2626*t9662;
  t11888 = t11562 + t11847;
  t12001 = -1.*t9535*t8200;
  t12042 = -1.*t2626*t9662;
  t12061 = t12001 + t12042;
  t12096 = t9535*t10905;
  t12097 = t12096 + t12042;
  t12095 = -0.384*var2[2]*t12061;
  t12100 = -0.384*var2[5]*t12097;
  t12120 = -0.384*var2[6]*t12097;
  t12132 = t12095 + t12100 + t12120;
  t12136 = var2[6]*t12132;
  t9628 = -1.*t9535*t9606;
  t9645 = t9530 + t9628;
  t10220 = -0.384*var2[6]*t9670;
  t9656 = -0.384*var2[2]*t9645;
  t10198 = -0.384*var2[5]*t9670;
  t12182 = -1.*t2821;
  t12213 = 1. + t12182;
  t12214 = 0.4*t12213;
  t13622 = 0.64*t2821;
  t13921 = t12214 + t13622;
  t13979 = -1.*t13921*t5834;
  t14039 = -0.24*t7757*t7967;
  t14040 = t13979 + t14039;
  t14336 = t7757*t13921;
  t14337 = -0.24*t5834*t7967;
  t14341 = t14336 + t14337;
  t14301 = t13921*t5834;
  t14302 = 0.24*t7757*t7967;
  t14324 = t14301 + t14302;
  t14326 = t8200*t14324;
  t14660 = -0.24*t2821*t5834;
  t14682 = t14660 + t14039;
  t14374 = 0.24*t5834*t7967;
  t14478 = t14341*t9662;
  t14659 = t8200*t14040;
  t14684 = t8200*t14682;
  t14689 = t14682*t10905;
  t14690 = t9606*t14341;
  t14693 = 0.24*t7757*t2821;
  t14694 = t14693 + t14337;
  t14695 = t9606*t14694;
  t14705 = -0.24*t7757*t2821;
  t14841 = t14705 + t14374;
  t14842 = t9606*t14841;
  t14843 = t14659 + t14684 + t14326 + t14689 + t14690 + t14695 + t14842 + t14478;
  t14884 = t14040*t9606;
  t14885 = t14324*t9606;
  t14891 = t8200*t14341;
  t14896 = t10905*t14341;
  t14897 = t14884 + t14885 + t14891 + t14896;
  p_output1[0]=(t10198 + t10220 + t9656)*var2[6];
  p_output1[1]=t11540;
  p_output1[2]=t11540;
  p_output1[3]=-0.384*t11612*var2[6];
  p_output1[4]=-0.384*t11888*var2[6];
  p_output1[5]=-0.384*t11612*var2[2] - 0.384*t11888*var2[5] - 0.768*t11888*var2[6];
  p_output1[6]=var2[6]*(-0.384*(t12001 + t2626*t9606)*var2[2] - 0.384*t12061*var2[5] - 0.384*t12061*var2[6]);
  p_output1[7]=t12136;
  p_output1[8]=t12136;
  p_output1[9]=-0.384*t9645*var2[6];
  p_output1[10]=t10220;
  p_output1[11]=t10198 + t9656 - 0.768*t9670*var2[6];
  p_output1[12]=var2[6]*(-0.384*(t10905*t14040 + t14326 + t14478 + 2.*t14040*t8200 + 2.*t14341*t9606 + (t14374 - 1.*t13921*t7757)*t9606)*var2[5] - 0.384*t14843*var2[6]);
  p_output1[13]=var2[6]*(-0.384*t14843*var2[5] - 0.384*(t14326 + t14478 + t14689 + t14842 + 2.*t14682*t8200 + 2.*t14694*t9606)*var2[6]);
  p_output1[14]=-0.384*t14897*var2[6];
  p_output1[15]=-0.384*t14897*var2[5] - 0.768*(t10905*t14694 + t14885 + t14891 + t14682*t9606)*var2[6];
  p_output1[16]=-0.384*(-1.*t13921*t2821 + 0.24*Power(t2821,2))*Power(var2[6],2);
  p_output1[17]=-0.768*(-1.*t13921*t7967 + 0.24*t2821*t7967)*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec7_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void J_Ce1_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
