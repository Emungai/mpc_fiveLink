/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:09:03 GMT-05:00
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
  double t4849;
  double t4845;
  double t4846;
  double t4850;
  double t4858;
  double t4844;
  double t4848;
  double t4851;
  double t4853;
  double t4857;
  double t4860;
  double t4861;
  double t4863;
  double t4865;
  double t4867;
  double t4881;
  double t4882;
  double t4883;
  double t4884;
  double t4885;
  double t4930;
  double t4925;
  double t4926;
  double t4935;
  double t4927;
  double t4936;
  double t4937;
  double t4938;
  double t4939;
  double t4941;
  double t4942;
  double t4943;
  double t4948;
  double t5010;
  double t5020;
  double t5036;
  double t5037;
  double t5042;
  double t4874;
  double t4875;
  double t4876;
  double t4907;
  double t4908;
  double t4909;
  double t4910;
  double t4911;
  double t4914;
  double t4954;
  double t4973;
  double t4974;
  double t5058;
  double t5072;
  double t5073;
  double t5074;
  double t5075;
  double t5076;
  double t11048;
  double t11049;
  double t11057;
  double t11079;
  double t11081;
  double t11082;
  double t11149;
  double t11150;
  double t11151;
  double t11153;
  double t11154;
  double t11155;
  double t11169;
  double t11170;
  double t11171;
  double t11173;
  double t11174;
  double t11175;
  double t4842;
  double t4843;
  double t11063;
  double t11068;
  double t11069;
  double t4869;
  double t4873;
  double t8558;
  double t8565;
  double t8569;
  double t4898;
  double t4905;
  double t4906;
  double t11072;
  double t11073;
  double t4892;
  double t4893;
  double t4894;
  double t4896;
  double t4920;
  double t4924;
  double t11084;
  double t11103;
  double t11104;
  double t4950;
  double t4953;
  double t11075;
  double t11076;
  double t11077;
  double t5050;
  double t5056;
  double t5057;
  double t11106;
  double t11107;
  double t5043;
  double t5045;
  double t5046;
  double t5048;
  double t8365;
  double t8366;
  double t11116;
  double t11117;
  double t11118;
  double t11119;
  double t11124;
  double t11125;
  double t11132;
  double t11133;
  double t11112;
  double t11115;
  double t10128;
  double t11058;
  double t11070;
  double t11074;
  double t11078;
  double t11083;
  double t11105;
  double t11109;
  double t11110;
  double t11140;
  double t11141;
  double t11143;
  double t11144;
  double t11145;
  double t11146;
  double t11147;
  double t11152;
  double t11156;
  double t11157;
  double t11159;
  double t11160;
  double t11161;
  double t11163;
  double t11164;
  double t11165;
  double t11166;
  double t11167;
  double t11172;
  double t11176;
  double t11177;
  double t11179;
  double t11180;
  double t11181;
  double t11241;
  double t11242;
  double t11243;
  double t11142;
  double t11148;
  double t11158;
  double t11162;
  double t11168;
  double t11178;
  double t11182;
  double t11183;
  double t11214;
  double t11215;
  double t11216;
  double t11217;
  double t11218;
  double t11219;
  double t11220;
  double t11221;
  double t11188;
  double t11189;
  double t11190;
  double t11191;
  double t4877;
  double t4897;
  double t4915;
  double t4918;
  double t11227;
  double t11228;
  double t11229;
  double t11230;
  double t11276;
  double t11277;
  double t11224;
  double t11225;
  double t11232;
  double t11233;
  double t11234;
  double t11235;
  double t11236;
  double t11237;
  double t11238;
  double t11239;
  double t11240;
  double t11244;
  double t11245;
  double t11246;
  double t11247;
  double t11248;
  double t11249;
  double t11250;
  double t11194;
  double t11195;
  double t11196;
  double t11197;
  double t4977;
  double t5049;
  double t5088;
  double t5089;
  double t11254;
  double t11255;
  double t11256;
  double t11257;
  double t11295;
  double t11296;
  double t11251;
  double t11252;
  t4849 = Cos(var2[3]);
  t4845 = Cos(var2[4]);
  t4846 = Sin(var2[3]);
  t4850 = Sin(var2[4]);
  t4858 = Cos(var2[2]);
  t4844 = Sin(var2[2]);
  t4848 = -1.*t4845*t4846;
  t4851 = -1.*t4849*t4850;
  t4853 = t4848 + t4851;
  t4857 = t4844*t4853;
  t4860 = t4849*t4845;
  t4861 = -1.*t4846*t4850;
  t4863 = t4860 + t4861;
  t4865 = t4858*t4863;
  t4867 = t4857 + t4865;
  t4881 = -1.*t4845;
  t4882 = 1. + t4881;
  t4883 = 0.4*t4882;
  t4884 = 0.64*t4845;
  t4885 = t4883 + t4884;
  t4930 = Cos(var2[5]);
  t4925 = Cos(var2[6]);
  t4926 = Sin(var2[5]);
  t4935 = Sin(var2[6]);
  t4927 = -1.*t4925*t4926;
  t4936 = -1.*t4930*t4935;
  t4937 = t4927 + t4936;
  t4938 = t4844*t4937;
  t4939 = t4930*t4925;
  t4941 = -1.*t4926*t4935;
  t4942 = t4939 + t4941;
  t4943 = t4858*t4942;
  t4948 = t4938 + t4943;
  t5010 = -1.*t4925;
  t5020 = 1. + t5010;
  t5036 = 0.4*t5020;
  t5037 = 0.64*t4925;
  t5042 = t5036 + t5037;
  t4874 = t4858*t4849;
  t4875 = -1.*t4844*t4846;
  t4876 = t4874 + t4875;
  t4907 = t4845*t4846;
  t4908 = t4849*t4850;
  t4909 = t4907 + t4908;
  t4910 = t4858*t4909;
  t4911 = t4844*t4863;
  t4914 = t4910 + t4911;
  t4954 = t4858*t4930;
  t4973 = -1.*t4844*t4926;
  t4974 = t4954 + t4973;
  t5058 = t4925*t4926;
  t5072 = t4930*t4935;
  t5073 = t5058 + t5072;
  t5074 = t4858*t5073;
  t5075 = t4844*t4942;
  t5076 = t5074 + t5075;
  t11048 = t4849*t4844;
  t11049 = t4858*t4846;
  t11057 = t11048 + t11049;
  t11079 = t4930*t4844;
  t11081 = t4858*t4926;
  t11082 = t11079 + t11081;
  t11149 = t4885*t4846;
  t11150 = 0.24*t4849*t4850;
  t11151 = t11149 + t11150;
  t11153 = t4849*t4885;
  t11154 = -0.24*t4846*t4850;
  t11155 = t11153 + t11154;
  t11169 = t5042*t4926;
  t11170 = 0.24*t4930*t4935;
  t11171 = t11169 + t11170;
  t11173 = t4930*t5042;
  t11174 = -0.24*t4926*t4935;
  t11175 = t11173 + t11174;
  t4842 = -1.*var1[4];
  t4843 = var3[4] + t4842;
  t11063 = t4858*t4853;
  t11068 = -1.*t4844*t4863;
  t11069 = t11063 + t11068;
  t4869 = -1.*var1[3];
  t4873 = var3[3] + t4869;
  t8558 = -1.*t4849*t4844;
  t8565 = -1.*t4858*t4846;
  t8569 = t8558 + t8565;
  t4898 = t4885*t4850;
  t4905 = -0.24*t4845*t4850;
  t4906 = t4898 + t4905;
  t11072 = -1.*t4844*t4909;
  t11073 = t11072 + t4865;
  t4892 = t4885*t4845;
  t4893 = Power(t4850,2);
  t4894 = 0.24*t4893;
  t4896 = t4892 + t4894;
  t4920 = -1.*var1[6];
  t4924 = var3[6] + t4920;
  t11084 = t4858*t4937;
  t11103 = -1.*t4844*t4942;
  t11104 = t11084 + t11103;
  t4950 = -1.*var1[5];
  t4953 = var3[5] + t4950;
  t11075 = -1.*t4930*t4844;
  t11076 = -1.*t4858*t4926;
  t11077 = t11075 + t11076;
  t5050 = t5042*t4935;
  t5056 = -0.24*t4925*t4935;
  t5057 = t5050 + t5056;
  t11106 = -1.*t4844*t5073;
  t11107 = t11106 + t4943;
  t5043 = t5042*t4925;
  t5045 = Power(t4935,2);
  t5046 = 0.24*t5045;
  t5048 = t5043 + t5046;
  t8365 = -1.*var1[1];
  t8366 = var3[1] + t8365;
  t11116 = Power(t4858,2);
  t11117 = 12.*t11116;
  t11118 = Power(t4844,2);
  t11119 = 12.*t11118;
  t11124 = Power(t4876,2);
  t11125 = 6.8*t11124;
  t11132 = Power(t4974,2);
  t11133 = 6.8*t11132;
  t11112 = -1.*var1[0];
  t11115 = var3[0] + t11112;
  t10128 = 6.8*t8569*t4876;
  t11058 = 6.8*t11057*t4876;
  t11070 = 3.2*t4867*t11069;
  t11074 = 3.2*t11073*t4914;
  t11078 = 6.8*t11077*t4974;
  t11083 = 6.8*t11082*t4974;
  t11105 = 3.2*t4948*t11104;
  t11109 = 3.2*t11107*t5076;
  t11110 = t10128 + t11058 + t11070 + t11074 + t11078 + t11083 + t11105 + t11109;
  t11140 = -1.*var1[2];
  t11141 = var3[2] + t11140;
  t11143 = Power(t4849,2);
  t11144 = 0.11*t11143;
  t11145 = Power(t4846,2);
  t11146 = 0.11*t11145;
  t11147 = t11144 + t11146;
  t11152 = -1.*t11151*t4863;
  t11156 = -1.*t4853*t11155;
  t11157 = t11152 + t11156;
  t11159 = t11151*t4909;
  t11160 = t4863*t11155;
  t11161 = t11159 + t11160;
  t11163 = Power(t4930,2);
  t11164 = 0.11*t11163;
  t11165 = Power(t4926,2);
  t11166 = 0.11*t11165;
  t11167 = t11164 + t11166;
  t11172 = -1.*t11171*t4942;
  t11176 = -1.*t4937*t11175;
  t11177 = t11172 + t11176;
  t11179 = t11171*t5073;
  t11180 = t4942*t11175;
  t11181 = t11179 + t11180;
  t11241 = -1.*t4858*t4930;
  t11242 = t4844*t4926;
  t11243 = t11241 + t11242;
  t11142 = 2.88*t4858;
  t11148 = 6.8*t4876*t11147;
  t11158 = 3.2*t4914*t11157;
  t11162 = 3.2*t4867*t11161;
  t11168 = 6.8*t4974*t11167;
  t11178 = 3.2*t5076*t11177;
  t11182 = 3.2*t4948*t11181;
  t11183 = t11142 + t11148 + t11158 + t11162 + t11168 + t11178 + t11182;
  t11214 = -2.88*t4844;
  t11215 = 6.8*t8569*t11147;
  t11216 = 3.2*t11073*t11157;
  t11217 = 3.2*t11069*t11161;
  t11218 = 6.8*t11077*t11167;
  t11219 = 3.2*t11107*t11177;
  t11220 = 3.2*t11104*t11181;
  t11221 = t11214 + t11215 + t11216 + t11217 + t11218 + t11219 + t11220;
  t11188 = 0.748*t8569;
  t11189 = 3.2*t4906*t11073;
  t11190 = 3.2*t4896*t11069;
  t11191 = t11188 + t11189 + t11190;
  t4877 = 0.748*t4876;
  t4897 = 3.2*t4896*t4867;
  t4915 = 3.2*t4906*t4914;
  t4918 = t4877 + t4897 + t4915;
  t11227 = 0.748*t11147;
  t11228 = 3.2*t4906*t11157;
  t11229 = 3.2*t4896*t11161;
  t11230 = 0.67 + t11227 + t11228 + t11229;
  t11276 = 0.768*t4896;
  t11277 = 0.2 + t11276;
  t11224 = 0.768*t11161;
  t11225 = 0.2 + t11224;
  t11232 = 0.4*t5020*t4974;
  t11233 = -0.4*t11077*t4935;
  t11234 = t4925*t4974;
  t11235 = t11077*t4935;
  t11236 = t11234 + t11235;
  t11237 = 0.8*t11236;
  t11238 = t11232 + t11233 + t11237;
  t11239 = -1.*var4[0]*t11238;
  t11240 = 0.4*t5020*t11077;
  t11244 = -0.4*t11243*t4935;
  t11245 = t4925*t11077;
  t11246 = t11243*t4935;
  t11247 = t11245 + t11246;
  t11248 = 0.8*t11247;
  t11249 = t11240 + t11244 + t11248;
  t11250 = -1.*var4[2]*t11249;
  t11194 = 0.748*t11077;
  t11195 = 3.2*t5057*t11107;
  t11196 = 3.2*t5048*t11104;
  t11197 = t11194 + t11195 + t11196;
  t4977 = 0.748*t4974;
  t5049 = 3.2*t5048*t4948;
  t5088 = 3.2*t5057*t5076;
  t5089 = t4977 + t5049 + t5088;
  t11254 = 0.748*t11167;
  t11255 = 3.2*t5057*t11177;
  t11256 = 3.2*t5048*t11181;
  t11257 = 0.67 + t11254 + t11255 + t11256;
  t11295 = 0.768*t5048;
  t11296 = 0.2 + t11295;
  t11251 = 0.768*t11181;
  t11252 = 0.2 + t11251;
  p_output1[0]=t11141*t11183 + 0.768*t4843*t4867 + t4873*t4918 + 0.768*t4924*t4948 + t11115*(6.8*Power(t11057,2) + 6.8*Power(t11082,2) + t11117 + t11119 + t11125 + t11133 + 3.2*Power(t4867,2) + 3.2*Power(t4914,2) + 3.2*Power(t4948,2) + 3.2*Power(t5076,2)) + t4953*t5089 + t11110*t8366 - 1.*var4[0];
  p_output1[1]=t11110*t11115 + t11141*t11221 + 0.768*t11069*t4843 + t11191*t4873 + 0.768*t11104*t4924 + t11197*t4953 + t8366*(3.2*Power(t11069,2) + 3.2*Power(t11073,2) + 6.8*Power(t11077,2) + 3.2*Power(t11104,2) + 3.2*Power(t11107,2) + t11117 + t11119 + t11125 + t11133 + 6.8*Power(t8569,2)) - 1.*var4[2];
  p_output1[2]=t11141*(3.3612 + 6.8*Power(t11147,2) + 3.2*Power(t11157,2) + 3.2*Power(t11161,2) + 6.8*Power(t11167,2) + 3.2*Power(t11177,2) + 3.2*Power(t11181,2)) + t11115*t11183 + t11239 + t11250 + t11225*t4843 + t11230*t4873 + t11252*t4924 + t11257*t4953 + t11221*t8366;
  p_output1[3]=t11141*t11230 + t11277*t4843 + t4873*(1.58228 + 3.2*Power(t4896,2) + 3.2*Power(t4906,2)) + t11115*t4918 + t11191*t8366;
  p_output1[4]=t11141*t11225 + 1.2143199999999998*t4843 + 0.768*t11115*t4867 + t11277*t4873 + 0.768*t11069*t8366;
  p_output1[5]=t11239 + t11250 + t11141*t11257 + t11296*t4924 + t4953*(1.58228 + 3.2*Power(t5048,2) + 3.2*Power(t5057,2)) + t11115*t5089 + t11197*t8366;
  p_output1[6]=t11141*t11252 + 1.2143199999999998*t4924 + 0.768*t11115*t4948 + t11296*t4953 + 0.768*t11104*t8366 - 1.*(0.4*t11082*t4935 + 0.8*(t11234 - 1.*t11082*t4935) - 0.4*t4925*t4974)*var4[0] - 1.*(-0.4*t11077*t4925 + 0.4*t4935*t4974 + 0.8*(t11245 - 1.*t4935*t4974))*var4[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMapleftLand.hh"

namespace leftLand
{

void dxDiscreteMapleftLand_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
