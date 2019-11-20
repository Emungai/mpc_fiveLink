/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:20:56 GMT-05:00
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
  double t5881;
  double t2807;
  double t5879;
  double t5882;
  double t5931;
  double t2760;
  double t5880;
  double t5883;
  double t5884;
  double t6045;
  double t6046;
  double t6047;
  double t6048;
  double t6049;
  double t5885;
  double t5932;
  double t5941;
  double t5997;
  double t5998;
  double t5999;
  double t6114;
  double t6116;
  double t6119;
  double t6106;
  double t6112;
  double t6113;
  double t6020;
  double t6021;
  double t6022;
  double t6121;
  double t6122;
  double t6123;
  double t6059;
  double t6060;
  double t6061;
  double t6058;
  double t6062;
  double t6063;
  double t6136;
  double t6127;
  double t6133;
  double t6134;
  double t6139;
  double t6140;
  double t6144;
  double t6152;
  double t6135;
  double t6137;
  double t6153;
  double t6154;
  double t6155;
  double t6162;
  double t6163;
  double t6194;
  double t6195;
  double t6196;
  double t6198;
  double t6199;
  double t6200;
  double t6207;
  double t6208;
  double t6209;
  double t6026;
  double t6070;
  double t6071;
  double t6072;
  double t6079;
  double t6232;
  double t6233;
  double t6050;
  double t6051;
  double t6057;
  double t6120;
  double t6124;
  double t6125;
  double t6126;
  double t6159;
  double t6176;
  double t6177;
  double t6178;
  double t6179;
  double t6180;
  double t6181;
  double t6188;
  double t6189;
  double t6190;
  double t6191;
  double t6192;
  double t6193;
  double t6216;
  double t6217;
  double t6220;
  double t6197;
  double t6201;
  double t6202;
  double t6210;
  double t6211;
  double t6212;
  double t6213;
  double t6214;
  double t6222;
  double t6223;
  double t6224;
  double t6225;
  double t6226;
  double t6262;
  double t6263;
  double t6264;
  double t6234;
  double t6235;
  double t6236;
  double t6239;
  double t6240;
  double t6241;
  double t6242;
  double t6243;
  double t6244;
  double t6245;
  double t6248;
  double t6249;
  double t6250;
  double t6251;
  double t6252;
  double t6253;
  double t6256;
  double t6257;
  double t6298;
  double t6299;
  double t6261;
  double t6301;
  double t6302;
  double t6267;
  double t6272;
  double t6308;
  double t6309;
  double t6276;
  double t6331;
  double t6332;
  double t6333;
  double t6334;
  double t6335;
  double t6337;
  double t6338;
  double t6339;
  double t6340;
  double t6341;
  double t6342;
  double t6343;
  double t6344;
  double t6345;
  double t6347;
  double t6348;
  double t6349;
  double t6350;
  double t6351;
  double t6352;
  double t6158;
  double t6160;
  double t6141;
  double t6142;
  double t6138;
  double t6143;
  double t6156;
  double t6157;
  double t6161;
  double t6164;
  double t6168;
  double t6366;
  double t6371;
  double t6372;
  double t6246;
  double t6380;
  double t6259;
  double t6260;
  double t6265;
  double t6266;
  double t6268;
  double t6271;
  double t6273;
  double t6274;
  double t6275;
  double t6277;
  double t6389;
  double t6283;
  double t6284;
  double t6285;
  double t6390;
  double t6287;
  double t6288;
  double t6289;
  double t6391;
  double t6394;
  double t6395;
  double t6396;
  double t6397;
  double t6398;
  double t6399;
  double t6293;
  double t6403;
  double t6300;
  double t6303;
  double t6304;
  double t6405;
  double t6306;
  double t6307;
  double t6310;
  double t6311;
  double t6312;
  double t6313;
  double t6316;
  double t6317;
  double t6318;
  double t6320;
  double t6321;
  double t6322;
  double t6323;
  double t6324;
  double t6325;
  double t6346;
  double t6203;
  double t6215;
  double t6221;
  double t6227;
  double t6228;
  double t6008;
  double t6064;
  double t6098;
  double t6099;
  double t6430;
  double t6431;
  double t6229;
  double t6381;
  double t6382;
  double t6383;
  double t6384;
  double t6385;
  double t6258;
  double t6269;
  double t6270;
  double t6278;
  double t6279;
  double t6404;
  double t6406;
  double t6407;
  double t6408;
  double t6409;
  double t6297;
  double t6305;
  double t6314;
  double t6315;
  double t6319;
  double t6326;
  double t6327;
  double t6420;
  double t6421;
  double t6422;
  double t6423;
  double t6424;
  double t6425;
  double t6426;
  double t6353;
  double t6433;
  double t6477;
  double t6478;
  double t6479;
  double t6367;
  double t6368;
  double t6369;
  double t6392;
  double t6237;
  double t6444;
  double t6445;
  double t6446;
  double t6413;
  double t6414;
  double t6415;
  double t6286;
  double t6290;
  double t6291;
  double t6461;
  double t6462;
  double t6463;
  double t6464;
  double t6465;
  double t6355;
  double t6356;
  double t6357;
  double t6358;
  double t6100;
  double t6482;
  double t6483;
  double t6484;
  double t6515;
  double t6516;
  double t6364;
  double t6438;
  double t6490;
  t5881 = Cos(var1[5]);
  t2807 = Cos(var1[6]);
  t5879 = Sin(var1[5]);
  t5882 = Sin(var1[6]);
  t5931 = Cos(var1[2]);
  t2760 = Sin(var1[2]);
  t5880 = -1.*t2807*t5879;
  t5883 = -1.*t5881*t5882;
  t5884 = t5880 + t5883;
  t6045 = -1.*t2807;
  t6046 = 1. + t6045;
  t6047 = 0.4*t6046;
  t6048 = 0.64*t2807;
  t6049 = t6047 + t6048;
  t5885 = -1.*t2760*t5884;
  t5932 = -1.*t5881*t2807;
  t5941 = t5879*t5882;
  t5997 = t5932 + t5941;
  t5998 = t5931*t5997;
  t5999 = t5885 + t5998;
  t6114 = t5931*t5881;
  t6116 = -1.*t2760*t5879;
  t6119 = t6114 + t6116;
  t6106 = -1.*t5881*t2760;
  t6112 = -1.*t5931*t5879;
  t6113 = t6106 + t6112;
  t6020 = -1.*t5931*t5881;
  t6021 = t2760*t5879;
  t6022 = t6020 + t6021;
  t6121 = t5881*t2760;
  t6122 = t5931*t5879;
  t6123 = t6121 + t6122;
  t6059 = t5881*t2807;
  t6060 = -1.*t5879*t5882;
  t6061 = t6059 + t6060;
  t6058 = t5931*t5884;
  t6062 = -1.*t2760*t6061;
  t6063 = t6058 + t6062;
  t6136 = t5931*t6061;
  t6127 = t2807*t5879;
  t6133 = t5881*t5882;
  t6134 = t6127 + t6133;
  t6139 = t2760*t5884;
  t6140 = t6139 + t6136;
  t6144 = -1.*t5931*t6061;
  t6152 = t5885 + t6144;
  t6135 = -1.*t2760*t6134;
  t6137 = t6135 + t6136;
  t6153 = t5931*t6134;
  t6154 = t2760*t6061;
  t6155 = t6153 + t6154;
  t6162 = t2760*t5997;
  t6163 = t6058 + t6162;
  t6194 = t6049*t5879;
  t6195 = 0.24*t5881*t5882;
  t6196 = t6194 + t6195;
  t6198 = t5881*t6049;
  t6199 = -0.24*t5879*t5882;
  t6200 = t6198 + t6199;
  t6207 = -1.*t6049*t5879;
  t6208 = -0.24*t5881*t5882;
  t6209 = t6207 + t6208;
  t6026 = 0.748*t6022;
  t6070 = t6049*t2807;
  t6071 = Power(t5882,2);
  t6072 = 0.24*t6071;
  t6079 = t6070 + t6072;
  t6232 = t2760*t6134;
  t6233 = t6232 + t5998;
  t6050 = t6049*t5882;
  t6051 = -0.24*t2807*t5882;
  t6057 = t6050 + t6051;
  t6120 = 20.4*t6113*t6119;
  t6124 = 6.8*t6123*t6119;
  t6125 = 20.4*t6113*t6022;
  t6126 = 6.8*t6123*t6022;
  t6159 = -1.*t2760*t5997;
  t6176 = Power(t6113,2);
  t6177 = 13.6*t6176;
  t6178 = 13.6*t6113*t6123;
  t6179 = Power(t6119,2);
  t6180 = 13.6*t6179;
  t6181 = 13.6*t6119*t6022;
  t6188 = Power(t5881,2);
  t6189 = 0.11*t6188;
  t6190 = Power(t5879,2);
  t6191 = 0.11*t6190;
  t6192 = t6189 + t6191;
  t6193 = 6.8*t6022*t6192;
  t6216 = t6196*t6134;
  t6217 = t6061*t6200;
  t6220 = t6216 + t6217;
  t6197 = -1.*t6196*t6061;
  t6201 = -1.*t5884*t6200;
  t6202 = t6197 + t6201;
  t6210 = t6209*t6061;
  t6211 = t6196*t6061;
  t6212 = t5884*t6200;
  t6213 = t6134*t6200;
  t6214 = t6210 + t6211 + t6212 + t6213;
  t6222 = -1.*t5884*t6209;
  t6223 = -1.*t5884*t6196;
  t6224 = -1.*t6061*t6200;
  t6225 = -1.*t6200*t5997;
  t6226 = t6222 + t6223 + t6224 + t6225;
  t6262 = -1.*t5881*t6049;
  t6263 = 0.24*t5879*t5882;
  t6264 = t6262 + t6263;
  t6234 = -0.384*var2[6]*t6233;
  t6235 = 3.2*t6079*t6233;
  t6236 = 3.2*t6057*t6163;
  t6239 = 6.4*t6140*t6063;
  t6240 = 3.2*t6155*t5999;
  t6241 = 3.2*t6063*t6233;
  t6242 = t6153 + t6159;
  t6243 = 3.2*t6140*t6242;
  t6244 = 3.2*t6137*t6163;
  t6245 = 6.4*t5999*t6163;
  t6248 = Power(t6140,2);
  t6249 = 6.4*t6248;
  t6250 = 6.4*t6140*t6233;
  t6251 = 6.4*t6155*t6163;
  t6252 = Power(t6163,2);
  t6253 = 6.4*t6252;
  t6256 = 3.2*t6220*t6233;
  t6257 = 3.2*t6202*t6163;
  t6298 = -0.24*t2807*t5879;
  t6299 = t6298 + t6208;
  t6261 = -1.*t6134*t6200;
  t6301 = 0.24*t5881*t2807;
  t6302 = t6301 + t6199;
  t6267 = -1.*t6196*t5997;
  t6272 = t5884*t6196;
  t6308 = -0.24*t5881*t2807;
  t6309 = t6308 + t6263;
  t6276 = t6200*t5997;
  t6331 = 13.6*t6113*t6119;
  t6332 = 13.6*t6123*t6119;
  t6333 = 6.4*t6140*t6155;
  t6334 = 6.4*t6140*t6163;
  t6335 = t6331 + t6332 + t6333 + t6334;
  t6337 = 6.8*t6176;
  t6338 = 6.8*t6113*t6123;
  t6339 = 6.8*t6179;
  t6340 = 6.8*t6119*t6022;
  t6341 = 3.2*t6140*t6137;
  t6342 = 3.2*t6063*t6155;
  t6343 = 3.2*t6140*t5999;
  t6344 = 3.2*t6063*t6163;
  t6345 = t6337 + t6338 + t6339 + t6340 + t6341 + t6342 + t6343 + t6344;
  t6347 = 6.8*t6113*t6192;
  t6348 = 3.2*t6140*t6202;
  t6349 = 3.2*t6140*t6214;
  t6350 = 3.2*t6220*t6163;
  t6351 = 3.2*t6155*t6226;
  t6352 = t6347 + t6348 + t6349 + t6350 + t6351;
  t6158 = -1.*t5931*t5884;
  t6160 = t6158 + t6159;
  t6141 = -1.*t5931*t6134;
  t6142 = t6141 + t6062;
  t6138 = 6.4*t6137*t6063;
  t6143 = 3.2*t6140*t6142;
  t6156 = 3.2*t6152*t6155;
  t6157 = 6.4*t6063*t5999;
  t6161 = 3.2*t6140*t6160;
  t6164 = 3.2*t6152*t6163;
  t6168 = t6120 + t6124 + t6125 + t6126 + t6138 + t6143 + t6156 + t6157 + t6161 + t6164;
  t6366 = 0.748*t6123;
  t6371 = Power(t6022,2);
  t6372 = 13.6*t6371;
  t6246 = t6120 + t6124 + t6125 + t6126 + t6239 + t6240 + t6241 + t6243 + t6244 + t6245;
  t6380 = 6.8*t6123*t6192;
  t6259 = -1.*t6209*t6061;
  t6260 = -2.*t5884*t6200;
  t6265 = -1.*t5884*t6264;
  t6266 = -2.*t6209*t5997;
  t6268 = t6259 + t6260 + t6261 + t6265 + t6266 + t6267;
  t6271 = 2.*t5884*t6209;
  t6273 = t6209*t6134;
  t6274 = 2.*t6061*t6200;
  t6275 = t6061*t6264;
  t6277 = t6271 + t6272 + t6273 + t6274 + t6275 + t6276;
  t6389 = -0.384*var2[6]*t6242;
  t6283 = Power(t2807,2);
  t6284 = -0.24*t6283;
  t6285 = t6070 + t6284;
  t6390 = 3.2*t6057*t5999;
  t6287 = -1.*t6049*t5882;
  t6288 = 0.24*t2807*t5882;
  t6289 = t6287 + t6288;
  t6391 = 3.2*t6079*t6242;
  t6394 = Power(t6063,2);
  t6395 = 6.4*t6394;
  t6396 = 6.4*t6137*t5999;
  t6397 = Power(t5999,2);
  t6398 = 6.4*t6397;
  t6399 = 6.4*t6063*t6242;
  t6293 = t6239 + t6240 + t6241 + t6243 + t6244 + t6245;
  t6403 = 3.2*t6202*t5999;
  t6300 = t6299*t6061;
  t6303 = t6134*t6302;
  t6304 = t6300 + t6211 + t6212 + t6303;
  t6405 = 3.2*t6220*t6242;
  t6306 = -1.*t6299*t6061;
  t6307 = -1.*t5884*t6302;
  t6310 = -1.*t5884*t6309;
  t6311 = -1.*t6209*t5997;
  t6312 = -1.*t6299*t5997;
  t6313 = t6306 + t6201 + t6261 + t6307 + t6310 + t6311 + t6312 + t6267;
  t6316 = -1.*t5884*t6299;
  t6317 = -1.*t6061*t6302;
  t6318 = t6316 + t6223 + t6317 + t6225;
  t6320 = t5884*t6209;
  t6321 = t5884*t6299;
  t6322 = t6299*t6134;
  t6323 = t6061*t6302;
  t6324 = t6061*t6309;
  t6325 = t6320 + t6321 + t6272 + t6322 + t6217 + t6323 + t6324 + t6276;
  t6346 = -0.5*var2[5]*t6345;
  t6203 = 3.2*t6063*t6202;
  t6215 = 3.2*t6063*t6214;
  t6221 = 3.2*t6220*t5999;
  t6227 = 3.2*t6137*t6226;
  t6228 = t6193 + t6203 + t6215 + t6221 + t6227;
  t6008 = -0.384*var2[6]*t5999;
  t6064 = 3.2*t6057*t6063;
  t6098 = 3.2*t6079*t5999;
  t6099 = t6026 + t6064 + t6098;
  t6430 = 13.6*t6113*t6022;
  t6431 = t6331 + t6430 + t6138 + t6157;
  t6229 = -0.5*var2[2]*t6228;
  t6381 = 3.2*t6152*t6202;
  t6382 = 3.2*t6152*t6214;
  t6383 = 3.2*t6220*t6160;
  t6384 = 3.2*t6142*t6226;
  t6385 = t6380 + t6381 + t6382 + t6383 + t6384;
  t6258 = 6.4*t6214*t6163;
  t6269 = 3.2*t6155*t6268;
  t6270 = 6.4*t6140*t6226;
  t6278 = 3.2*t6140*t6277;
  t6279 = t6193 + t6256 + t6257 + t6258 + t6269 + t6270 + t6278;
  t6404 = 6.4*t6214*t5999;
  t6406 = 3.2*t6137*t6268;
  t6407 = 6.4*t6063*t6226;
  t6408 = 3.2*t6063*t6277;
  t6409 = t6380 + t6403 + t6404 + t6405 + t6406 + t6407 + t6408;
  t6297 = 3.2*t6214*t6163;
  t6305 = 3.2*t6304*t6163;
  t6314 = 3.2*t6155*t6313;
  t6315 = 3.2*t6140*t6226;
  t6319 = 3.2*t6140*t6318;
  t6326 = 3.2*t6140*t6325;
  t6327 = t6256 + t6257 + t6297 + t6305 + t6314 + t6315 + t6319 + t6326;
  t6420 = 3.2*t6214*t5999;
  t6421 = 3.2*t6304*t5999;
  t6422 = 3.2*t6137*t6313;
  t6423 = 3.2*t6063*t6226;
  t6424 = 3.2*t6063*t6318;
  t6425 = 3.2*t6063*t6325;
  t6426 = t6403 + t6420 + t6421 + t6405 + t6422 + t6423 + t6424 + t6425;
  t6353 = -0.5*var2[5]*t6352;
  t6433 = -0.5*var2[5]*t6228;
  t6477 = 6.4*t6214*t6220;
  t6478 = 6.4*t6202*t6226;
  t6479 = t6477 + t6478;
  t6367 = 3.2*t6057*t6152;
  t6368 = 3.2*t6079*t6160;
  t6369 = t6366 + t6367 + t6368;
  t6392 = t6366 + t6390 + t6391;
  t6237 = t6026 + t6235 + t6236;
  t6444 = 3.2*t6057*t6268;
  t6445 = 3.2*t6079*t6277;
  t6446 = t6444 + t6445;
  t6413 = 3.2*t6285*t6063;
  t6414 = 3.2*t6289*t5999;
  t6415 = t6413 + t6390 + t6414 + t6391;
  t6286 = 3.2*t6285*t6140;
  t6290 = 3.2*t6289*t6163;
  t6291 = t6286 + t6235 + t6236 + t6290;
  t6461 = 3.2*t6289*t6214;
  t6462 = 3.2*t6057*t6313;
  t6463 = 3.2*t6285*t6226;
  t6464 = 3.2*t6079*t6325;
  t6465 = t6461 + t6462 + t6463 + t6464;
  t6355 = 0.748*t6113;
  t6356 = 3.2*t6057*t6140;
  t6357 = 3.2*t6079*t6163;
  t6358 = t6355 + t6356 + t6357;
  t6100 = -0.5*var2[5]*t6099;
  t6482 = 3.2*t6079*t6214;
  t6483 = 3.2*t6057*t6226;
  t6484 = t6482 + t6483;
  t6515 = -0.384*var2[0]*t6233;
  t6516 = -0.384*var2[1]*t6242;
  t6364 = -0.384*var2[5]*t6163;
  t6438 = -0.384*var2[5]*t5999;
  t6490 = -0.384*var2[5]*t6214;
  p_output1[0]=(t6008 + t6100 + t6229 - 0.5*(6.4*t5999*t6140 + 6.4*t6137*t6140 + 6.4*t6063*t6155 + 6.4*t6063*t6163 + t6177 + t6178 + t6180 + t6181)*var2[0] - 0.5*t6168*var2[1])*var2[5];
  p_output1[1]=var2[5]*(t6234 - 0.5*(t6177 + t6178 + t6180 + t6181 + t6249 + t6250 + t6251 + t6253)*var2[0] - 0.5*t6246*var2[1] - 0.5*t6279*var2[2] - 0.5*t6237*var2[5]);
  p_output1[2]=var2[5]*(t6234 - 0.5*(t6249 + t6250 + t6251 + t6253)*var2[0] - 0.5*t6293*var2[1] - 0.5*t6327*var2[2] - 0.5*t6291*var2[5]);
  p_output1[3]=-0.5*t6335*var2[5];
  p_output1[4]=t6346;
  p_output1[5]=t6353;
  p_output1[6]=-0.5*t6335*var2[0] - 0.5*t6345*var2[1] - 0.5*t6352*var2[2] - 1.*t6358*var2[5] - 0.384*t6163*var2[6];
  p_output1[7]=t6364;
  p_output1[8]=var2[5]*(-0.5*t6168*var2[0] - 0.5*(6.4*t6063*t6142 + 6.4*t5999*t6152 + 6.4*t6137*t6152 + 6.4*t6063*t6160 + t6177 + t6178 + t6181 + t6372)*var2[1] - 0.5*t6385*var2[2] - 0.5*t6369*var2[5] - 0.384*t6160*var2[6]);
  p_output1[9]=var2[5]*(t6389 - 0.5*t6246*var2[0] - 0.5*(t6177 + t6178 + t6181 + t6372 + t6395 + t6396 + t6398 + t6399)*var2[1] - 0.5*t6409*var2[2] - 0.5*t6392*var2[5]);
  p_output1[10]=var2[5]*(t6389 - 0.5*t6293*var2[0] - 0.5*(t6395 + t6396 + t6398 + t6399)*var2[1] - 0.5*t6426*var2[2] - 0.5*t6415*var2[5]);
  p_output1[11]=t6346;
  p_output1[12]=-0.5*t6431*var2[5];
  p_output1[13]=t6433;
  p_output1[14]=t6008 + t6229 - 0.5*t6345*var2[0] - 0.5*t6431*var2[1] - 1.*t6099*var2[5];
  p_output1[15]=t6438;
  p_output1[16]=(-0.5*t6228*var2[0] - 0.5*t6385*var2[1])*var2[5];
  p_output1[17]=var2[5]*(-0.5*t6279*var2[0] - 0.5*t6409*var2[1] - 0.5*(6.4*Power(t6214,2) + 6.4*Power(t6226,2) + 6.4*t6202*t6268 + 6.4*t6220*t6277)*var2[2] - 0.5*t6446*var2[5] - 0.384*t6277*var2[6]);
  p_output1[18]=var2[5]*(-0.5*t6327*var2[0] - 0.5*t6426*var2[1] - 0.5*(6.4*t6214*t6304 + 6.4*t6202*t6313 + 6.4*t6226*t6318 + 6.4*t6220*t6325)*var2[2] - 0.5*t6465*var2[5] - 0.384*t6325*var2[6]);
  p_output1[19]=t6353;
  p_output1[20]=t6433;
  p_output1[21]=-0.5*t6479*var2[5];
  p_output1[22]=-0.5*t6352*var2[0] - 0.5*t6228*var2[1] - 0.5*t6479*var2[2] - 1.*t6484*var2[5] - 0.384*t6214*var2[6];
  p_output1[23]=t6490;
  p_output1[24]=(-0.5*t6099*var2[0] - 0.5*t6369*var2[1])*var2[5];
  p_output1[25]=(-0.5*t6237*var2[0] - 0.5*t6392*var2[1] - 0.5*t6446*var2[2])*var2[5];
  p_output1[26]=(-0.5*t6291*var2[0] - 0.5*t6415*var2[1] - 0.5*t6465*var2[2])*var2[5];
  p_output1[27]=-0.5*t6358*var2[5];
  p_output1[28]=t6100;
  p_output1[29]=-0.5*t6484*var2[5];
  p_output1[30]=-0.5*t6358*var2[0] - 0.5*t6099*var2[1] - 0.5*t6484*var2[2];
  p_output1[31]=(-0.384*t5999*var2[0] - 0.384*t6160*var2[1])*var2[5];
  p_output1[32]=(t6515 + t6516 - 0.384*t6277*var2[2])*var2[5];
  p_output1[33]=(t6515 + t6516 - 0.384*t6325*var2[2])*var2[5];
  p_output1[34]=t6364;
  p_output1[35]=t6438;
  p_output1[36]=t6490;
  p_output1[37]=-0.384*t6163*var2[0] - 0.384*t5999*var2[1] - 0.384*t6214*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 38, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec6_five_link_walker.hh"

namespace LeftStance
{

void J_Ce2_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
