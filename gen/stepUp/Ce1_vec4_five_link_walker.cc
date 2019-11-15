/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:38:18 GMT-05:00
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
  double t746;
  double t821;
  double t722;
  double t739;
  double t672;
  double t725;
  double t754;
  double t760;
  double t812;
  double t819;
  double t820;
  double t864;
  double t865;
  double t866;
  double t723;
  double t743;
  double t744;
  double t745;
  double t833;
  double t848;
  double t849;
  double t883;
  double t884;
  double t885;
  double t872;
  double t879;
  double t880;
  double t881;
  double t882;
  double t886;
  double t896;
  double t897;
  double t899;
  double t850;
  double t858;
  double t862;
  double t900;
  double t901;
  double t902;
  double t903;
  double t905;
  double t909;
  double t887;
  double t927;
  double t928;
  double t929;
  double t930;
  double t888;
  double t931;
  double t916;
  double t917;
  double t918;
  double t863;
  double t877;
  double t947;
  double t912;
  double t913;
  double t914;
  double t948;
  double t949;
  double t950;
  double t974;
  double t975;
  double t976;
  double t959;
  double t960;
  double t961;
  double t963;
  double t964;
  double t969;
  double t973;
  double t977;
  double t997;
  double t998;
  double t982;
  double t1000;
  double t1001;
  double t984;
  t746 = Cos(var1[4]);
  t821 = Sin(var1[4]);
  t722 = Sin(var1[2]);
  t739 = Sin(var1[3]);
  t672 = Cos(var1[3]);
  t725 = Cos(var1[2]);
  t754 = -1.*t746;
  t760 = 1. + t754;
  t812 = 0.4*t760;
  t819 = 0.64*t746;
  t820 = t812 + t819;
  t864 = t672*t746;
  t865 = -1.*t739*t821;
  t866 = t864 + t865;
  t723 = -1.*t672*t722;
  t743 = -1.*t725*t739;
  t744 = t723 + t743;
  t745 = 0.748*t744;
  t833 = t820*t821;
  t848 = -0.24*t746*t821;
  t849 = t833 + t848;
  t883 = -1.*t746*t739;
  t884 = -1.*t672*t821;
  t885 = t883 + t884;
  t872 = t725*t866;
  t879 = t820*t746;
  t880 = Power(t821,2);
  t881 = 0.24*t880;
  t882 = t879 + t881;
  t886 = t725*t885;
  t896 = t722*t885;
  t897 = t896 + t872;
  t899 = 3.2*t849*t897;
  t850 = t746*t739;
  t858 = t672*t821;
  t862 = t850 + t858;
  t900 = -1.*t672*t746;
  t901 = t739*t821;
  t902 = t900 + t901;
  t903 = t722*t902;
  t905 = t886 + t903;
  t909 = 3.2*t882*t905;
  t887 = -1.*t722*t866;
  t927 = -1.*t725*t672;
  t928 = t722*t739;
  t929 = t927 + t928;
  t930 = 0.748*t929;
  t888 = t886 + t887;
  t931 = -1.*t722*t885;
  t916 = Power(t746,2);
  t917 = -0.24*t916;
  t918 = t879 + t917;
  t863 = -1.*t722*t862;
  t877 = t863 + t872;
  t947 = 3.2*t849*t888;
  t912 = -1.*t820*t821;
  t913 = 0.24*t746*t821;
  t914 = t912 + t913;
  t948 = t725*t902;
  t949 = t931 + t948;
  t950 = 3.2*t882*t949;
  t974 = t672*t820;
  t975 = -0.24*t739*t821;
  t976 = t974 + t975;
  t959 = -1.*t820*t739;
  t960 = -0.24*t672*t821;
  t961 = t959 + t960;
  t963 = t820*t739;
  t964 = 0.24*t672*t821;
  t969 = t963 + t964;
  t973 = t969*t866;
  t977 = t885*t976;
  t997 = -0.24*t746*t739;
  t998 = t997 + t960;
  t982 = -1.*t885*t969;
  t1000 = 0.24*t672*t746;
  t1001 = t1000 + t975;
  t984 = -1.*t976*t902;
  p_output1[0]=var2[3]*(-0.5*(t745 + 3.2*t849*t877 + 3.2*t882*t888)*var2[2] - 0.5*(t745 + t899 + t909)*var2[3] - 0.5*(t899 + t909 + 3.2*t897*t914 + 3.2*(t725*t862 + t722*t866)*t918)*var2[4]);
  p_output1[1]=var2[3]*(-0.5*(3.2*t849*(-1.*t725*t862 + t887) + t930 + 3.2*t882*(-1.*t725*t866 + t931))*var2[2] - 0.5*(t930 + t947 + t950)*var2[3] - 0.5*(3.2*t888*t914 + 3.2*t877*t918 + t947 + t950)*var2[4]);
  p_output1[2]=var2[3]*(-0.5*(3.2*t882*(t866*t961 + t973 + t862*t976 + t977) + 3.2*t849*(-1.*t885*t961 - 1.*t866*t976 + t982 + t984))*var2[3] - 0.5*(3.2*t914*(t862*t969 + t866*t976) + 3.2*t918*(-1.*t866*t969 - 1.*t885*t976) + 3.2*t882*(t1001*t862 + t973 + t977 + t866*t998) + 3.2*t849*(-1.*t1001*t866 + t982 + t984 - 1.*t885*t998))*var2[4]);
  p_output1[3]=-0.5*(6.4*t882*t914 + 6.4*t849*t918)*var2[3]*var2[4];
  p_output1[4]=-0.384*t914*var2[3]*var2[4];
  p_output1[5]=0;
  p_output1[6]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce1_vec4_five_link_walker.hh"

namespace Pattern[DS1, Blank[opt]]
{

void Ce1_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
