/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:00 GMT-05:00
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
  double t2474;
  double t7218;
  double t2843;
  double t3023;
  double t7707;
  double t7868;
  double t8163;
  double t8200;
  double t8205;
  double t7726;
  double t8036;
  double t8142;
  double t8974;
  double t8976;
  double t9152;
  double t9157;
  double t9182;
  double t8162;
  double t8232;
  double t8248;
  double t9194;
  double t9197;
  double t9212;
  double t9229;
  double t9239;
  double t9302;
  double t10252;
  double t10255;
  double t10669;
  double t10199;
  double t10216;
  double t10220;
  double t11826;
  double t11836;
  double t11837;
  double t9216;
  double t9389;
  double t9412;
  double t9447;
  double t10232;
  double t10233;
  double t11562;
  double t11679;
  double t11793;
  double t11825;
  double t11847;
  double t11848;
  double t11849;
  double t11888;
  double t11891;
  double t11892;
  double t11912;
  double t11915;
  double t11895;
  double t11917;
  double t11918;
  double t11901;
  double t2907;
  double t7584;
  double t7624;
  double t7645;
  double t7648;
  double t7649;
  double t7701;
  double t7702;
  double t7706;
  double t11991;
  double t11995;
  double t12004;
  double t12026;
  double t12037;
  double t12040;
  double t12041;
  double t12046;
  double t12048;
  double t12049;
  double t12050;
  double t12051;
  double t12060;
  double t12061;
  double t12062;
  double t12054;
  double t12057;
  double t12058;
  double t12005;
  double t12030;
  double t12031;
  double t12063;
  double t12064;
  double t12065;
  double t11994;
  double t11996;
  double t11997;
  double t11998;
  double t11999;
  double t12000;
  double t12001;
  double t12002;
  double t12003;
  double t12042;
  double t12059;
  double t12066;
  double t12067;
  double t12088;
  double t12089;
  double t12082;
  double t12083;
  double t12084;
  double t12077;
  double t12091;
  double t12092;
  double t12093;
  double t12100;
  double t12106;
  double t12110;
  double t12090;
  double t12095;
  double t12096;
  double t12111;
  double t12112;
  double t12115;
  double t12116;
  double t12117;
  double t12118;
  double t12127;
  double t12128;
  double t12120;
  double t12130;
  double t12131;
  double t12122;
  double t11986;
  double t11987;
  double t10225;
  double t11540;
  double t11545;
  double t11981;
  double t11983;
  double t11893;
  double t11897;
  double t11902;
  double t12147;
  double t11916;
  double t11929;
  double t11930;
  double t12149;
  double t12150;
  double t12151;
  double t12152;
  double t11934;
  double t11935;
  double t11936;
  double t12143;
  double t12144;
  double t12145;
  double t12146;
  double t12078;
  double t12167;
  double t12168;
  double t12169;
  double t12170;
  double t12079;
  double t12094;
  double t12097;
  double t12098;
  double t12174;
  double t12032;
  double t12044;
  double t12119;
  double t12121;
  double t12123;
  double t12180;
  double t12129;
  double t12132;
  double t12133;
  double t12182;
  double t12183;
  double t12184;
  double t12135;
  double t12136;
  double t12137;
  double t12212;
  double t12213;
  double t12214;
  double t12215;
  double t12217;
  double t12218;
  double t12219;
  double t12241;
  double t12242;
  double t12243;
  double t12244;
  double t12246;
  double t12247;
  double t12248;
  t2474 = Cos(var1[3]);
  t7218 = Sin(var1[3]);
  t2843 = Sin(var1[2]);
  t3023 = Cos(var1[2]);
  t7707 = Cos(var1[4]);
  t7868 = Sin(var1[4]);
  t8163 = t2474*t7707;
  t8200 = -1.*t7218*t7868;
  t8205 = t8163 + t8200;
  t7726 = -1.*t7707*t7218;
  t8036 = -1.*t2474*t7868;
  t8142 = t7726 + t8036;
  t8974 = -1.*t7707;
  t8976 = 1. + t8974;
  t9152 = 0.4*t8976;
  t9157 = 0.64*t7707;
  t9182 = t9152 + t9157;
  t8162 = t2843*t8142;
  t8232 = t3023*t8205;
  t8248 = t8162 + t8232;
  t9194 = t9182*t7218;
  t9197 = 0.24*t2474*t7868;
  t9212 = t9194 + t9197;
  t9229 = t2474*t9182;
  t9239 = -0.24*t7218*t7868;
  t9302 = t9229 + t9239;
  t10252 = t7707*t7218;
  t10255 = t2474*t7868;
  t10669 = t10252 + t10255;
  t10199 = -1.*t9182*t7218;
  t10216 = -0.24*t2474*t7868;
  t10220 = t10199 + t10216;
  t11826 = -1.*t2474*t7707;
  t11836 = t7218*t7868;
  t11837 = t11826 + t11836;
  t9216 = -1.*t9212*t8205;
  t9389 = -1.*t8142*t9302;
  t9412 = t9216 + t9389;
  t9447 = 3.2*t8248*t9412;
  t10232 = t9212*t8205;
  t10233 = t8142*t9302;
  t11562 = t9212*t10669;
  t11679 = t8205*t9302;
  t11793 = t11562 + t11679;
  t11825 = t3023*t8142;
  t11847 = t2843*t11837;
  t11848 = t11825 + t11847;
  t11849 = 3.2*t11793*t11848;
  t11888 = t3023*t10669;
  t11891 = t2843*t8205;
  t11892 = t11888 + t11891;
  t11912 = -0.24*t7707*t7218;
  t11915 = t11912 + t10216;
  t11895 = -1.*t8142*t9212;
  t11917 = 0.24*t2474*t7707;
  t11918 = t11917 + t9239;
  t11901 = -1.*t9302*t11837;
  t2907 = -1.*t2474*t2843;
  t7584 = -1.*t3023*t7218;
  t7624 = t2907 + t7584;
  t7645 = Power(t2474,2);
  t7648 = 0.11*t7645;
  t7649 = Power(t7218,2);
  t7701 = 0.11*t7649;
  t7702 = t7648 + t7701;
  t7706 = 6.8*t7624*t7702;
  t11991 = Cos(var1[5]);
  t11995 = Sin(var1[5]);
  t12004 = Cos(var1[6]);
  t12026 = Sin(var1[6]);
  t12037 = t11991*t12004;
  t12040 = -1.*t11995*t12026;
  t12041 = t12037 + t12040;
  t12046 = -1.*t12004;
  t12048 = 1. + t12046;
  t12049 = 0.4*t12048;
  t12050 = 0.64*t12004;
  t12051 = t12049 + t12050;
  t12060 = -1.*t12004*t11995;
  t12061 = -1.*t11991*t12026;
  t12062 = t12060 + t12061;
  t12054 = t12051*t11995;
  t12057 = 0.24*t11991*t12026;
  t12058 = t12054 + t12057;
  t12005 = t12004*t11995;
  t12030 = t11991*t12026;
  t12031 = t12005 + t12030;
  t12063 = t11991*t12051;
  t12064 = -0.24*t11995*t12026;
  t12065 = t12063 + t12064;
  t11994 = -1.*t11991*t2843;
  t11996 = -1.*t3023*t11995;
  t11997 = t11994 + t11996;
  t11998 = Power(t11991,2);
  t11999 = 0.11*t11998;
  t12000 = Power(t11995,2);
  t12001 = 0.11*t12000;
  t12002 = t11999 + t12001;
  t12003 = 6.8*t11997*t12002;
  t12042 = t3023*t12041;
  t12059 = -1.*t12058*t12041;
  t12066 = -1.*t12062*t12065;
  t12067 = t12059 + t12066;
  t12088 = t2843*t12062;
  t12089 = t12088 + t12042;
  t12082 = t12058*t12031;
  t12083 = t12041*t12065;
  t12084 = t12082 + t12083;
  t12077 = t3023*t12062;
  t12091 = -1.*t12051*t11995;
  t12092 = -0.24*t11991*t12026;
  t12093 = t12091 + t12092;
  t12100 = -1.*t11991*t12004;
  t12106 = t11995*t12026;
  t12110 = t12100 + t12106;
  t12090 = 3.2*t12089*t12067;
  t12095 = t12058*t12041;
  t12096 = t12062*t12065;
  t12111 = t2843*t12110;
  t12112 = t12077 + t12111;
  t12115 = 3.2*t12084*t12112;
  t12116 = t3023*t12031;
  t12117 = t2843*t12041;
  t12118 = t12116 + t12117;
  t12127 = -0.24*t12004*t11995;
  t12128 = t12127 + t12092;
  t12120 = -1.*t12062*t12058;
  t12130 = 0.24*t11991*t12004;
  t12131 = t12130 + t12064;
  t12122 = -1.*t12065*t12110;
  t11986 = -1.*t2843*t8205;
  t11987 = t11825 + t11986;
  t10225 = t10220*t8205;
  t11540 = t10669*t9302;
  t11545 = t10225 + t10232 + t10233 + t11540;
  t11981 = -1.*t2843*t10669;
  t11983 = t11981 + t8232;
  t11893 = -1.*t8142*t10220;
  t11897 = -1.*t8205*t9302;
  t11902 = t11893 + t11895 + t11897 + t11901;
  t12147 = 3.2*t11987*t9412;
  t11916 = t11915*t8205;
  t11929 = t10669*t11918;
  t11930 = t11916 + t10232 + t10233 + t11929;
  t12149 = -1.*t2843*t8142;
  t12150 = t3023*t11837;
  t12151 = t12149 + t12150;
  t12152 = 3.2*t11793*t12151;
  t11934 = -1.*t8142*t11915;
  t11935 = -1.*t8205*t11918;
  t11936 = t11934 + t11895 + t11935 + t11901;
  t12143 = -1.*t3023*t2474;
  t12144 = t2843*t7218;
  t12145 = t12143 + t12144;
  t12146 = 6.8*t12145*t7702;
  t12078 = -1.*t2843*t12041;
  t12167 = -1.*t3023*t11991;
  t12168 = t2843*t11995;
  t12169 = t12167 + t12168;
  t12170 = 6.8*t12169*t12002;
  t12079 = t12077 + t12078;
  t12094 = t12093*t12041;
  t12097 = t12031*t12065;
  t12098 = t12094 + t12095 + t12096 + t12097;
  t12174 = -1.*t2843*t12062;
  t12032 = -1.*t2843*t12031;
  t12044 = t12032 + t12042;
  t12119 = -1.*t12062*t12093;
  t12121 = -1.*t12041*t12065;
  t12123 = t12119 + t12120 + t12121 + t12122;
  t12180 = 3.2*t12079*t12067;
  t12129 = t12128*t12041;
  t12132 = t12031*t12131;
  t12133 = t12129 + t12095 + t12096 + t12132;
  t12182 = t3023*t12110;
  t12183 = t12174 + t12182;
  t12184 = 3.2*t12084*t12183;
  t12135 = -1.*t12062*t12128;
  t12136 = -1.*t12041*t12131;
  t12137 = t12135 + t12120 + t12136 + t12122;
  t12212 = t9182*t7707;
  t12213 = Power(t7868,2);
  t12214 = 0.24*t12213;
  t12215 = t12212 + t12214;
  t12217 = t9182*t7868;
  t12218 = -0.24*t7707*t7868;
  t12219 = t12217 + t12218;
  t12241 = t12051*t12004;
  t12242 = Power(t12026,2);
  t12243 = 0.24*t12242;
  t12244 = t12241 + t12243;
  t12246 = t12051*t12026;
  t12247 = -0.24*t12004*t12026;
  t12248 = t12246 + t12247;
  p_output1[0]=var2[2]*(-0.5*(3.2*t11793*t11987 + t12003 + 3.2*t12044*t12067 + 3.2*t12079*t12084 - 2.88*t2843 + t7706 + 3.2*t11983*t9412)*var2[2] - 0.5*(t11849 + 3.2*t11892*t11902 + t7706 + 3.2*t11545*t8248 + t9447)*var2[3] - 0.5*(t11849 + 3.2*t11892*t11936 + 3.2*t11930*t8248 + t9447)*var2[4] - 0.5*(t12003 + t12090 + 3.2*t12089*t12098 + t12115 + 3.2*t12118*t12123)*var2[5] - 0.5*(t12090 + t12115 + 3.2*t12089*t12133 + 3.2*t12118*t12137)*var2[6]);
  p_output1[1]=var2[2]*(-0.5*(t12146 + t12170 - 2.88*t3023 + 3.2*t12067*(t12078 - 1.*t12031*t3023) + 3.2*t12084*(t12174 - 1.*t12041*t3023) + 3.2*t11793*(t12149 - 1.*t3023*t8205) + 3.2*(t11986 - 1.*t10669*t3023)*t9412)*var2[2] - 0.5*(3.2*t11902*t11983 + 3.2*t11545*t11987 + t12146 + t12147 + t12152)*var2[3] - 0.5*(3.2*t11936*t11983 + 3.2*t11930*t11987 + t12147 + t12152)*var2[4] - 0.5*(3.2*t12079*t12098 + 3.2*t12044*t12123 + t12170 + t12180 + t12184)*var2[5] - 0.5*(3.2*t12079*t12133 + 3.2*t12044*t12137 + t12180 + t12184)*var2[6]);
  p_output1[2]=var2[2]*(-0.5*(6.4*t11545*t11793 + 6.4*t11902*t9412)*var2[3] - 0.5*(6.4*t11793*t11930 + 6.4*t11936*t9412)*var2[4] - 0.5*(6.4*t12084*t12098 + 6.4*t12067*t12123)*var2[5] - 0.5*(6.4*t12084*t12133 + 6.4*t12067*t12137)*var2[6]);
  p_output1[3]=var2[2]*(-0.5*(3.2*t11545*t12215 + 3.2*t11902*t12219)*var2[3] - 0.5*(3.2*t11930*t12215 + 3.2*t11936*t12219 + 3.2*t11793*(0.24*t7707*t7868 - 1.*t7868*t9182) + 3.2*(t12212 - 0.24*Power(t7707,2))*t9412)*var2[4]);
  p_output1[4]=var2[2]*(-0.384*t11545*var2[3] - 0.384*t11930*var2[4]);
  p_output1[5]=var2[2]*(-0.5*(3.2*t12098*t12244 + 3.2*t12123*t12248)*var2[5] - 0.5*(3.2*(0.24*t12004*t12026 - 1.*t12026*t12051)*t12084 + 3.2*t12067*(-0.24*Power(t12004,2) + t12241) + 3.2*t12133*t12244 + 3.2*t12137*t12248)*var2[6]);
  p_output1[6]=var2[2]*(-0.384*t12098*var2[5] - 0.384*t12133*var2[6]);
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

#include "Ce1_vec3_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void Ce1_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
