/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:42:01 GMT-05:00
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
  double t8940;
  double t8959;
  double t8935;
  double t8960;
  double t2771;
  double t8958;
  double t8961;
  double t8972;
  double t8974;
  double t8975;
  double t8982;
  double t8983;
  double t8996;
  double t8997;
  double t8998;
  double t8999;
  double t9000;
  double t9014;
  double t9015;
  double t3346;
  double t3501;
  double t9019;
  double t9020;
  double t9021;
  double t9018;
  double t9022;
  double t9024;
  double t9026;
  double t9027;
  double t9028;
  double t9049;
  double t9051;
  double t9056;
  double t9057;
  double t9058;
  double t9059;
  double t9060;
  double t9067;
  double t9068;
  double t9069;
  double t9066;
  double t9070;
  double t9071;
  double t9072;
  double t9073;
  double t9074;
  double t9065;
  double t9075;
  double t9076;
  double t9077;
  double t8973;
  double t8991;
  double t8992;
  double t8993;
  double t8994;
  double t8995;
  double t9016;
  double t9017;
  double t9029;
  double t9035;
  double t9036;
  double t9037;
  double t9038;
  double t9050;
  double t9052;
  double t9053;
  double t9054;
  double t9055;
  double t9061;
  double t9062;
  double t9063;
  double t9064;
  double t9078;
  double t9079;
  double t9080;
  double t9090;
  double t9091;
  double t9092;
  double t9093;
  double t9094;
  double t9108;
  double t9109;
  double t9110;
  double t9111;
  double t9081;
  double t9082;
  double t9083;
  double t9084;
  double t9085;
  double t9116;
  double t9122;
  double t9124;
  double t9129;
  double t9130;
  double t9131;
  double t9132;
  double t9133;
  double t9138;
  double t9139;
  double t9140;
  double t9141;
  double t9142;
  double t9143;
  double t9144;
  double t9145;
  double t9146;
  double t9147;
  double t9118;
  double t9119;
  double t9120;
  double t9121;
  double t9123;
  double t9125;
  double t9126;
  double t9127;
  double t9128;
  double t9134;
  double t9135;
  double t9136;
  double t9137;
  double t9148;
  double t9149;
  double t9150;
  double t9165;
  double t9166;
  double t9167;
  double t9168;
  t8940 = Cos(var1[5]);
  t8959 = Sin(var1[2]);
  t8935 = Cos(var1[2]);
  t8960 = Sin(var1[5]);
  t2771 = Cos(var1[6]);
  t8958 = t8935*t8940;
  t8961 = -1.*t8959*t8960;
  t8972 = t8958 + t8961;
  t8974 = -1.*t8940*t8959;
  t8975 = -1.*t8935*t8960;
  t8982 = t8974 + t8975;
  t8983 = Sin(var1[6]);
  t8996 = -0.4*t2771*t8982;
  t8997 = 0.4*t8972*t8983;
  t8998 = t2771*t8982;
  t8999 = -1.*t8972*t8983;
  t9000 = t8998 + t8999;
  t9014 = 0.8*t9000;
  t9015 = t8996 + t8997 + t9014;
  t3346 = -1.*t2771;
  t3501 = 1. + t3346;
  t9019 = -1.*t8935*t8940;
  t9020 = t8959*t8960;
  t9021 = t9019 + t9020;
  t9018 = 0.4*t3501*t8982;
  t9022 = -0.4*t9021*t8983;
  t9024 = t9021*t8983;
  t9026 = t8998 + t9024;
  t9027 = 0.8*t9026;
  t9028 = t9018 + t9022 + t9027;
  t9049 = 0.4*t8982*t8983;
  t9051 = -1.*t8982*t8983;
  t9056 = -0.4*t2771*t9021;
  t9057 = t2771*t9021;
  t9058 = t9057 + t9051;
  t9059 = 0.8*t9058;
  t9060 = t9056 + t9049 + t9059;
  t9067 = t8940*t8959;
  t9068 = t8935*t8960;
  t9069 = t9067 + t9068;
  t9066 = 0.4*t3501*t9021;
  t9070 = -0.4*t9069*t8983;
  t9071 = t9069*t8983;
  t9072 = t9057 + t9071;
  t9073 = 0.8*t9072;
  t9074 = t9066 + t9070 + t9073;
  t9065 = var2[6]*t9060;
  t9075 = var2[2]*t9074;
  t9076 = var2[5]*t9074;
  t9077 = t9065 + t9075 + t9076;
  t8973 = 0.4*t3501*t8972;
  t8991 = -0.4*t8982*t8983;
  t8992 = t2771*t8972;
  t8993 = t8982*t8983;
  t8994 = t8992 + t8993;
  t8995 = 0.8*t8994;
  t9016 = var3[6]*t9015;
  t9017 = var2[6]*t9015;
  t9029 = var3[2]*t9028;
  t9035 = var3[5]*t9028;
  t9036 = var2[2]*t9028;
  t9037 = var2[5]*t9028;
  t9038 = 0.4*t2771*t8972;
  t9050 = -1.*t2771*t8972;
  t9052 = t9050 + t9051;
  t9053 = 0.8*t9052;
  t9054 = t9038 + t9049 + t9053;
  t9055 = var2[6]*t9054;
  t9061 = var2[2]*t9060;
  t9062 = var2[5]*t9060;
  t9063 = t9055 + t9061 + t9062;
  t9064 = var2[6]*t9063;
  t9078 = var2[2]*t9077;
  t9079 = var2[5]*t9077;
  t9080 = t8973 + t8991 + t8995 + t9016 + t9017 + t9029 + t9035 + t9036 + t9037 + t9064 + t9078 + t9079;
  t9090 = 0.4*t2771*t9069;
  t9091 = -1.*t2771*t9069;
  t9092 = t9091 + t8999;
  t9093 = 0.8*t9092;
  t9094 = t9090 + t8997 + t9093;
  t9108 = 2.*var2[6]*t9015;
  t9109 = 2.*var2[2]*t9028;
  t9110 = 2.*var2[5]*t9028;
  t9111 = t8973 + t8991 + t8995 + t9108 + t9109 + t9110;
  t9081 = -0.4*t2771*t8972;
  t9082 = 0.4*t9069*t8983;
  t9083 = -1.*t9069*t8983;
  t9084 = t8992 + t9083;
  t9085 = 0.8*t9084;
  t9116 = t8973 + t8991 + t8995;
  t9122 = 0.4*t9021*t8983;
  t9124 = -1.*t9021*t8983;
  t9129 = -0.4*t2771*t9069;
  t9130 = t2771*t9069;
  t9131 = t9130 + t9124;
  t9132 = 0.8*t9131;
  t9133 = t9129 + t9122 + t9132;
  t9138 = 0.4*t3501*t9069;
  t9139 = -0.4*t8972*t8983;
  t9140 = t8972*t8983;
  t9141 = t9130 + t9140;
  t9142 = 0.8*t9141;
  t9143 = t9138 + t9139 + t9142;
  t9144 = var2[2]*t9143;
  t9145 = var2[5]*t9143;
  t9146 = var2[6]*t9133;
  t9147 = t9144 + t9145 + t9146;
  t9118 = var3[6]*t9060;
  t9119 = var3[2]*t9074;
  t9120 = var3[5]*t9074;
  t9121 = 0.4*t2771*t8982;
  t9123 = -1.*t2771*t8982;
  t9125 = t9123 + t9124;
  t9126 = 0.8*t9125;
  t9127 = t9121 + t9122 + t9126;
  t9128 = var2[6]*t9127;
  t9134 = var2[2]*t9133;
  t9135 = var2[5]*t9133;
  t9136 = t9128 + t9134 + t9135;
  t9137 = var2[6]*t9136;
  t9148 = var2[2]*t9147;
  t9149 = var2[5]*t9147;
  t9150 = t9018 + t9022 + t9027 + t9118 + t9065 + t9119 + t9120 + t9075 + t9076 + t9137 + t9148 + t9149;
  t9165 = 2.*var2[6]*t9060;
  t9166 = 2.*var2[2]*t9074;
  t9167 = 2.*var2[5]*t9074;
  t9168 = t9018 + t9022 + t9027 + t9165 + t9166 + t9167;
  p_output1[0]=1.;
  p_output1[1]=t9080;
  p_output1[2]=t9080;
  p_output1[3]=t9081 + t9082 + t9085 + t9015*var2[2] + t9063*var2[2] + t9015*var2[5] + t9063*var2[5] + t9094*var2[6] + var2[6]*(t9054*var2[2] + t9054*var2[5] + (t9038 + t9070 + 0.8*(t9050 + t9071))*var2[6]) + t9015*var3[2] + t9015*var3[5] + t9094*var3[6];
  p_output1[4]=1.;
  p_output1[5]=t9111;
  p_output1[6]=t9111;
  p_output1[7]=t9081 + t9082 + t9085 + 2.*t9015*var2[2] + 2.*t9015*var2[5] + 2.*t9094*var2[6];
  p_output1[8]=1.;
  p_output1[9]=t9116;
  p_output1[10]=t9116;
  p_output1[11]=t9081 + t9082 + t9085;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t9150;
  p_output1[16]=t9150;
  p_output1[17]=t8996 + t8997 + t9014 + t9055 + t9061 + t9062 + t9136*var2[2] + t9136*var2[5] + var2[6]*(t9127*var2[2] + t9127*var2[5] + (t9121 + t9139 + 0.8*(t9123 + t9140))*var2[6]) + t9060*var3[2] + t9060*var3[5] + t9054*var3[6];
  p_output1[18]=1.;
  p_output1[19]=t9168;
  p_output1[20]=t9168;
  p_output1[21]=t8996 + t8997 + t9014 + 2.*t9060*var2[2] + 2.*t9060*var2[5] + 2.*t9054*var2[6];
  p_output1[22]=1.;
  p_output1[23]=t9028;
  p_output1[24]=t9028;
  p_output1[25]=t9015;
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

#include "J_ddh_LeftToe_DoubleSupportConstHeight.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_ddh_LeftToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
