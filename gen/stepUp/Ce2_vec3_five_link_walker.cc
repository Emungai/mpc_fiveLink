/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:38:34 GMT-05:00
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
  double t1069;
  double t1056;
  double t1062;
  double t1074;
  double t1079;
  double t1055;
  double t1085;
  double t1094;
  double t1095;
  double t1126;
  double t1127;
  double t1128;
  double t1129;
  double t1130;
  double t1068;
  double t1075;
  double t1077;
  double t1078;
  double t1096;
  double t1104;
  double t1151;
  double t1148;
  double t1149;
  double t1152;
  double t1156;
  double t1157;
  double t1158;
  double t1166;
  double t1167;
  double t1168;
  double t1169;
  double t1170;
  double t1150;
  double t1153;
  double t1154;
  double t1155;
  double t1159;
  double t1160;
  double t1107;
  double t1123;
  double t1124;
  double t1188;
  double t1189;
  double t1190;
  double t1138;
  double t1134;
  double t1135;
  double t1136;
  double t1137;
  double t1139;
  double t1162;
  double t1163;
  double t1164;
  double t1203;
  double t1204;
  double t1205;
  double t1178;
  double t1174;
  double t1175;
  double t1176;
  double t1177;
  double t1179;
  double t1192;
  double t1193;
  double t1194;
  double t1196;
  double t1197;
  double t1199;
  double t1200;
  double t1201;
  double t1207;
  double t1208;
  double t1209;
  double t1211;
  double t1212;
  double t1214;
  double t1215;
  double t1216;
  double t1269;
  double t1270;
  double t1271;
  double t1273;
  double t1274;
  double t1275;
  double t1289;
  double t1290;
  double t1291;
  double t1293;
  double t1294;
  double t1295;
  double t1229;
  double t1230;
  double t1231;
  double t1225;
  double t1226;
  double t1227;
  double t1141;
  double t1142;
  double t1143;
  double t1144;
  double t1131;
  double t1132;
  double t1133;
  double t1237;
  double t1238;
  double t1249;
  double t1250;
  double t1251;
  double t1245;
  double t1246;
  double t1247;
  double t1181;
  double t1182;
  double t1183;
  double t1184;
  double t1171;
  double t1172;
  double t1173;
  double t1257;
  double t1258;
  double t1191;
  double t1206;
  double t1220;
  double t1221;
  double t1222;
  double t1223;
  double t1224;
  double t1228;
  double t1232;
  double t1233;
  double t1234;
  double t1235;
  double t1236;
  double t1239;
  double t1240;
  double t1241;
  double t1242;
  double t1243;
  double t1244;
  double t1248;
  double t1252;
  double t1253;
  double t1254;
  double t1255;
  double t1256;
  double t1259;
  double t1260;
  double t1263;
  double t1264;
  double t1265;
  double t1266;
  double t1267;
  double t1272;
  double t1276;
  double t1277;
  double t1279;
  double t1280;
  double t1281;
  double t1283;
  double t1284;
  double t1285;
  double t1286;
  double t1287;
  double t1292;
  double t1296;
  double t1297;
  double t1299;
  double t1300;
  double t1301;
  double t1328;
  double t1329;
  double t1330;
  double t1331;
  double t1332;
  double t1333;
  double t1334;
  double t1335;
  double t1262;
  double t1268;
  double t1278;
  double t1282;
  double t1288;
  double t1298;
  double t1302;
  double t1303;
  double t1125;
  double t1140;
  double t1145;
  double t1146;
  double t1308;
  double t1309;
  double t1310;
  double t1311;
  double t1165;
  double t1180;
  double t1185;
  double t1186;
  double t1314;
  double t1315;
  double t1316;
  double t1317;
  t1069 = Cos(var1[3]);
  t1056 = Cos(var1[4]);
  t1062 = Sin(var1[3]);
  t1074 = Sin(var1[4]);
  t1079 = Sin(var1[2]);
  t1055 = Cos(var1[2]);
  t1085 = t1069*t1056;
  t1094 = -1.*t1062*t1074;
  t1095 = t1085 + t1094;
  t1126 = -1.*t1056;
  t1127 = 1. + t1126;
  t1128 = 0.4*t1127;
  t1129 = 0.64*t1056;
  t1130 = t1128 + t1129;
  t1068 = -1.*t1056*t1062;
  t1075 = -1.*t1069*t1074;
  t1077 = t1068 + t1075;
  t1078 = t1055*t1077;
  t1096 = -1.*t1079*t1095;
  t1104 = t1078 + t1096;
  t1151 = Cos(var1[5]);
  t1148 = Cos(var1[6]);
  t1149 = Sin(var1[5]);
  t1152 = Sin(var1[6]);
  t1156 = t1151*t1148;
  t1157 = -1.*t1149*t1152;
  t1158 = t1156 + t1157;
  t1166 = -1.*t1148;
  t1167 = 1. + t1166;
  t1168 = 0.4*t1167;
  t1169 = 0.64*t1148;
  t1170 = t1168 + t1169;
  t1150 = -1.*t1148*t1149;
  t1153 = -1.*t1151*t1152;
  t1154 = t1150 + t1153;
  t1155 = t1055*t1154;
  t1159 = -1.*t1079*t1158;
  t1160 = t1155 + t1159;
  t1107 = -1.*t1069*t1079;
  t1123 = -1.*t1055*t1062;
  t1124 = t1107 + t1123;
  t1188 = t1055*t1069;
  t1189 = -1.*t1079*t1062;
  t1190 = t1188 + t1189;
  t1138 = t1055*t1095;
  t1134 = t1056*t1062;
  t1135 = t1069*t1074;
  t1136 = t1134 + t1135;
  t1137 = -1.*t1079*t1136;
  t1139 = t1137 + t1138;
  t1162 = -1.*t1151*t1079;
  t1163 = -1.*t1055*t1149;
  t1164 = t1162 + t1163;
  t1203 = t1055*t1151;
  t1204 = -1.*t1079*t1149;
  t1205 = t1203 + t1204;
  t1178 = t1055*t1158;
  t1174 = t1148*t1149;
  t1175 = t1151*t1152;
  t1176 = t1174 + t1175;
  t1177 = -1.*t1079*t1176;
  t1179 = t1177 + t1178;
  t1192 = t1069*t1079;
  t1193 = t1055*t1062;
  t1194 = t1192 + t1193;
  t1196 = t1079*t1077;
  t1197 = t1196 + t1138;
  t1199 = t1055*t1136;
  t1200 = t1079*t1095;
  t1201 = t1199 + t1200;
  t1207 = t1151*t1079;
  t1208 = t1055*t1149;
  t1209 = t1207 + t1208;
  t1211 = t1079*t1154;
  t1212 = t1211 + t1178;
  t1214 = t1055*t1176;
  t1215 = t1079*t1158;
  t1216 = t1214 + t1215;
  t1269 = t1130*t1062;
  t1270 = 0.24*t1069*t1074;
  t1271 = t1269 + t1270;
  t1273 = t1069*t1130;
  t1274 = -0.24*t1062*t1074;
  t1275 = t1273 + t1274;
  t1289 = t1170*t1149;
  t1290 = 0.24*t1151*t1152;
  t1291 = t1289 + t1290;
  t1293 = t1151*t1170;
  t1294 = -0.24*t1149*t1152;
  t1295 = t1293 + t1294;
  t1229 = -1.*t1079*t1077;
  t1230 = -1.*t1055*t1095;
  t1231 = t1229 + t1230;
  t1225 = -1.*t1055*t1069;
  t1226 = t1079*t1062;
  t1227 = t1225 + t1226;
  t1141 = t1130*t1056;
  t1142 = Power(t1074,2);
  t1143 = 0.24*t1142;
  t1144 = t1141 + t1143;
  t1131 = t1130*t1074;
  t1132 = -0.24*t1056*t1074;
  t1133 = t1131 + t1132;
  t1237 = -1.*t1055*t1136;
  t1238 = t1237 + t1096;
  t1249 = -1.*t1079*t1154;
  t1250 = -1.*t1055*t1158;
  t1251 = t1249 + t1250;
  t1245 = -1.*t1055*t1151;
  t1246 = t1079*t1149;
  t1247 = t1245 + t1246;
  t1181 = t1170*t1148;
  t1182 = Power(t1152,2);
  t1183 = 0.24*t1182;
  t1184 = t1181 + t1183;
  t1171 = t1170*t1152;
  t1172 = -0.24*t1148*t1152;
  t1173 = t1171 + t1172;
  t1257 = -1.*t1055*t1176;
  t1258 = t1257 + t1159;
  t1191 = 13.6*t1124*t1190;
  t1206 = 13.6*t1164*t1205;
  t1220 = Power(t1124,2);
  t1221 = 6.8*t1220;
  t1222 = 6.8*t1124*t1194;
  t1223 = Power(t1190,2);
  t1224 = 6.8*t1223;
  t1228 = 6.8*t1190*t1227;
  t1232 = 3.2*t1231*t1197;
  t1233 = Power(t1139,2);
  t1234 = 3.2*t1233;
  t1235 = Power(t1104,2);
  t1236 = 3.2*t1235;
  t1239 = 3.2*t1238*t1201;
  t1240 = Power(t1164,2);
  t1241 = 6.8*t1240;
  t1242 = 6.8*t1164*t1209;
  t1243 = Power(t1205,2);
  t1244 = 6.8*t1243;
  t1248 = 6.8*t1205*t1247;
  t1252 = 3.2*t1251*t1212;
  t1253 = Power(t1179,2);
  t1254 = 3.2*t1253;
  t1255 = Power(t1160,2);
  t1256 = 3.2*t1255;
  t1259 = 3.2*t1258*t1216;
  t1260 = t1221 + t1222 + t1224 + t1228 + t1232 + t1234 + t1236 + t1239 + t1241 + t1242 + t1244 + t1248 + t1252 + t1254 + t1256 + t1259;
  t1263 = Power(t1069,2);
  t1264 = 0.11*t1263;
  t1265 = Power(t1062,2);
  t1266 = 0.11*t1265;
  t1267 = t1264 + t1266;
  t1272 = -1.*t1271*t1095;
  t1276 = -1.*t1077*t1275;
  t1277 = t1272 + t1276;
  t1279 = t1271*t1136;
  t1280 = t1095*t1275;
  t1281 = t1279 + t1280;
  t1283 = Power(t1151,2);
  t1284 = 0.11*t1283;
  t1285 = Power(t1149,2);
  t1286 = 0.11*t1285;
  t1287 = t1284 + t1286;
  t1292 = -1.*t1291*t1158;
  t1296 = -1.*t1154*t1295;
  t1297 = t1292 + t1296;
  t1299 = t1291*t1176;
  t1300 = t1158*t1295;
  t1301 = t1299 + t1300;
  t1328 = -2.88*t1055;
  t1329 = 6.8*t1227*t1267;
  t1330 = 3.2*t1238*t1277;
  t1331 = 3.2*t1231*t1281;
  t1332 = 6.8*t1247*t1287;
  t1333 = 3.2*t1258*t1297;
  t1334 = 3.2*t1251*t1301;
  t1335 = t1328 + t1329 + t1330 + t1331 + t1332 + t1333 + t1334;
  t1262 = -2.88*t1079;
  t1268 = 6.8*t1124*t1267;
  t1278 = 3.2*t1139*t1277;
  t1282 = 3.2*t1104*t1281;
  t1288 = 6.8*t1164*t1287;
  t1298 = 3.2*t1179*t1297;
  t1302 = 3.2*t1160*t1301;
  t1303 = t1262 + t1268 + t1278 + t1282 + t1288 + t1298 + t1302;
  t1125 = 0.748*t1124;
  t1140 = 3.2*t1133*t1139;
  t1145 = 3.2*t1144*t1104;
  t1146 = t1125 + t1140 + t1145;
  t1308 = 0.748*t1227;
  t1309 = 3.2*t1144*t1231;
  t1310 = 3.2*t1133*t1238;
  t1311 = t1308 + t1309 + t1310;
  t1165 = 0.748*t1164;
  t1180 = 3.2*t1173*t1179;
  t1185 = 3.2*t1184*t1160;
  t1186 = t1165 + t1180 + t1185;
  t1314 = 0.748*t1247;
  t1315 = 3.2*t1184*t1251;
  t1316 = 3.2*t1173*t1258;
  t1317 = t1314 + t1315 + t1316;
  p_output1[0]=var2[2]*(-0.5*(t1191 + 13.6*t1190*t1194 + 6.4*t1104*t1197 + 6.4*t1139*t1201 + t1206 + 13.6*t1205*t1209 + 6.4*t1160*t1212 + 6.4*t1179*t1216)*var2[0] - 0.5*t1260*var2[1] - 0.5*t1303*var2[2] - 0.5*t1146*var2[3] - 0.384*t1104*var2[4] - 0.5*t1186*var2[5] - 0.384*t1160*var2[6]);
  p_output1[1]=var2[2]*(-0.5*t1260*var2[0] - 0.5*(t1191 + t1206 + 13.6*t1124*t1227 + 6.4*t1104*t1231 + 6.4*t1139*t1238 + 13.6*t1164*t1247 + 6.4*t1160*t1251 + 6.4*t1179*t1258)*var2[1] - 0.5*t1335*var2[2] - 0.5*t1311*var2[3] - 0.384*t1231*var2[4] - 0.5*t1317*var2[5] - 0.384*t1251*var2[6]);
  p_output1[2]=(-0.5*t1303*var2[0] - 0.5*t1335*var2[1])*var2[2];
  p_output1[3]=(-0.5*t1146*var2[0] - 0.5*t1311*var2[1])*var2[2];
  p_output1[4]=(-0.384*t1104*var2[0] - 0.384*t1231*var2[1])*var2[2];
  p_output1[5]=(-0.5*t1186*var2[0] - 0.5*t1317*var2[1])*var2[2];
  p_output1[6]=(-0.384*t1160*var2[0] - 0.384*t1251*var2[1])*var2[2];
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

#include "Ce2_vec3_five_link_walker.hh"

namespace Pattern[DS1, Blank[opt]]
{

void Ce2_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
