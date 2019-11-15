/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:40:18 GMT-05:00
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
  double t5918;
  double t5915;
  double t5916;
  double t5919;
  double t5968;
  double t2668;
  double t5917;
  double t5920;
  double t5921;
  double t6082;
  double t6083;
  double t6084;
  double t6085;
  double t6086;
  double t5967;
  double t5979;
  double t6033;
  double t6034;
  double t6035;
  double t6044;
  double t6152;
  double t6155;
  double t6156;
  double t6148;
  double t6149;
  double t6150;
  double t6057;
  double t6058;
  double t6062;
  double t6158;
  double t6159;
  double t6160;
  double t6096;
  double t6097;
  double t6098;
  double t6095;
  double t6099;
  double t6100;
  double t6173;
  double t6169;
  double t6170;
  double t6171;
  double t6176;
  double t6177;
  double t6188;
  double t6189;
  double t6172;
  double t6174;
  double t6190;
  double t6191;
  double t6192;
  double t6199;
  double t6200;
  double t6231;
  double t6232;
  double t6233;
  double t6235;
  double t6236;
  double t6237;
  double t6244;
  double t6245;
  double t6246;
  double t6081;
  double t6107;
  double t6108;
  double t6115;
  double t6134;
  double t6269;
  double t6270;
  double t6087;
  double t6093;
  double t6094;
  double t6157;
  double t6161;
  double t6162;
  double t6163;
  double t6196;
  double t6213;
  double t6214;
  double t6215;
  double t6216;
  double t6217;
  double t6218;
  double t6225;
  double t6226;
  double t6227;
  double t6228;
  double t6229;
  double t6230;
  double t6253;
  double t6256;
  double t6257;
  double t6234;
  double t6238;
  double t6239;
  double t6247;
  double t6248;
  double t6249;
  double t6250;
  double t6251;
  double t6259;
  double t6260;
  double t6261;
  double t6262;
  double t6263;
  double t6299;
  double t6300;
  double t6301;
  double t6271;
  double t6272;
  double t6273;
  double t6276;
  double t6277;
  double t6278;
  double t6279;
  double t6280;
  double t6281;
  double t6282;
  double t6285;
  double t6286;
  double t6287;
  double t6288;
  double t6289;
  double t6290;
  double t6293;
  double t6294;
  double t6335;
  double t6336;
  double t6298;
  double t6338;
  double t6339;
  double t6304;
  double t6309;
  double t6345;
  double t6346;
  double t6313;
  double t6368;
  double t6369;
  double t6370;
  double t6371;
  double t6372;
  double t6374;
  double t6375;
  double t6376;
  double t6377;
  double t6378;
  double t6379;
  double t6380;
  double t6381;
  double t6382;
  double t6384;
  double t6385;
  double t6386;
  double t6387;
  double t6388;
  double t6389;
  double t6195;
  double t6197;
  double t6178;
  double t6179;
  double t6175;
  double t6180;
  double t6193;
  double t6194;
  double t6198;
  double t6204;
  double t6211;
  double t6403;
  double t6408;
  double t6409;
  double t6283;
  double t6417;
  double t6296;
  double t6297;
  double t6302;
  double t6303;
  double t6305;
  double t6308;
  double t6310;
  double t6311;
  double t6312;
  double t6314;
  double t6426;
  double t6320;
  double t6321;
  double t6322;
  double t6427;
  double t6324;
  double t6325;
  double t6326;
  double t6428;
  double t6431;
  double t6432;
  double t6433;
  double t6434;
  double t6435;
  double t6436;
  double t6330;
  double t6440;
  double t6337;
  double t6340;
  double t6341;
  double t6442;
  double t6343;
  double t6344;
  double t6347;
  double t6348;
  double t6349;
  double t6350;
  double t6353;
  double t6354;
  double t6355;
  double t6357;
  double t6358;
  double t6359;
  double t6360;
  double t6361;
  double t6362;
  double t6383;
  double t6243;
  double t6252;
  double t6258;
  double t6264;
  double t6265;
  double t6056;
  double t6106;
  double t6135;
  double t6136;
  double t6467;
  double t6468;
  double t6266;
  double t6418;
  double t6419;
  double t6420;
  double t6421;
  double t6422;
  double t6295;
  double t6306;
  double t6307;
  double t6315;
  double t6316;
  double t6441;
  double t6443;
  double t6444;
  double t6445;
  double t6446;
  double t6334;
  double t6342;
  double t6351;
  double t6352;
  double t6356;
  double t6363;
  double t6364;
  double t6457;
  double t6458;
  double t6459;
  double t6460;
  double t6461;
  double t6462;
  double t6463;
  double t6390;
  double t6470;
  double t6514;
  double t6515;
  double t6516;
  double t6404;
  double t6405;
  double t6406;
  double t6429;
  double t6274;
  double t6481;
  double t6482;
  double t6483;
  double t6450;
  double t6451;
  double t6452;
  double t6323;
  double t6327;
  double t6328;
  double t6498;
  double t6499;
  double t6500;
  double t6501;
  double t6502;
  double t6392;
  double t6393;
  double t6394;
  double t6395;
  double t6142;
  double t6519;
  double t6520;
  double t6521;
  double t6552;
  double t6553;
  double t6401;
  double t6475;
  double t6527;
  t5918 = Cos(var1[5]);
  t5915 = Cos(var1[6]);
  t5916 = Sin(var1[5]);
  t5919 = Sin(var1[6]);
  t5968 = Cos(var1[2]);
  t2668 = Sin(var1[2]);
  t5917 = -1.*t5915*t5916;
  t5920 = -1.*t5918*t5919;
  t5921 = t5917 + t5920;
  t6082 = -1.*t5915;
  t6083 = 1. + t6082;
  t6084 = 0.4*t6083;
  t6085 = 0.64*t5915;
  t6086 = t6084 + t6085;
  t5967 = -1.*t2668*t5921;
  t5979 = -1.*t5918*t5915;
  t6033 = t5916*t5919;
  t6034 = t5979 + t6033;
  t6035 = t5968*t6034;
  t6044 = t5967 + t6035;
  t6152 = t5968*t5918;
  t6155 = -1.*t2668*t5916;
  t6156 = t6152 + t6155;
  t6148 = -1.*t5918*t2668;
  t6149 = -1.*t5968*t5916;
  t6150 = t6148 + t6149;
  t6057 = -1.*t5968*t5918;
  t6058 = t2668*t5916;
  t6062 = t6057 + t6058;
  t6158 = t5918*t2668;
  t6159 = t5968*t5916;
  t6160 = t6158 + t6159;
  t6096 = t5918*t5915;
  t6097 = -1.*t5916*t5919;
  t6098 = t6096 + t6097;
  t6095 = t5968*t5921;
  t6099 = -1.*t2668*t6098;
  t6100 = t6095 + t6099;
  t6173 = t5968*t6098;
  t6169 = t5915*t5916;
  t6170 = t5918*t5919;
  t6171 = t6169 + t6170;
  t6176 = t2668*t5921;
  t6177 = t6176 + t6173;
  t6188 = -1.*t5968*t6098;
  t6189 = t5967 + t6188;
  t6172 = -1.*t2668*t6171;
  t6174 = t6172 + t6173;
  t6190 = t5968*t6171;
  t6191 = t2668*t6098;
  t6192 = t6190 + t6191;
  t6199 = t2668*t6034;
  t6200 = t6095 + t6199;
  t6231 = t6086*t5916;
  t6232 = 0.24*t5918*t5919;
  t6233 = t6231 + t6232;
  t6235 = t5918*t6086;
  t6236 = -0.24*t5916*t5919;
  t6237 = t6235 + t6236;
  t6244 = -1.*t6086*t5916;
  t6245 = -0.24*t5918*t5919;
  t6246 = t6244 + t6245;
  t6081 = 0.748*t6062;
  t6107 = t6086*t5915;
  t6108 = Power(t5919,2);
  t6115 = 0.24*t6108;
  t6134 = t6107 + t6115;
  t6269 = t2668*t6171;
  t6270 = t6269 + t6035;
  t6087 = t6086*t5919;
  t6093 = -0.24*t5915*t5919;
  t6094 = t6087 + t6093;
  t6157 = 20.4*t6150*t6156;
  t6161 = 6.8*t6160*t6156;
  t6162 = 20.4*t6150*t6062;
  t6163 = 6.8*t6160*t6062;
  t6196 = -1.*t2668*t6034;
  t6213 = Power(t6150,2);
  t6214 = 13.6*t6213;
  t6215 = 13.6*t6150*t6160;
  t6216 = Power(t6156,2);
  t6217 = 13.6*t6216;
  t6218 = 13.6*t6156*t6062;
  t6225 = Power(t5918,2);
  t6226 = 0.11*t6225;
  t6227 = Power(t5916,2);
  t6228 = 0.11*t6227;
  t6229 = t6226 + t6228;
  t6230 = 6.8*t6062*t6229;
  t6253 = t6233*t6171;
  t6256 = t6098*t6237;
  t6257 = t6253 + t6256;
  t6234 = -1.*t6233*t6098;
  t6238 = -1.*t5921*t6237;
  t6239 = t6234 + t6238;
  t6247 = t6246*t6098;
  t6248 = t6233*t6098;
  t6249 = t5921*t6237;
  t6250 = t6171*t6237;
  t6251 = t6247 + t6248 + t6249 + t6250;
  t6259 = -1.*t5921*t6246;
  t6260 = -1.*t5921*t6233;
  t6261 = -1.*t6098*t6237;
  t6262 = -1.*t6237*t6034;
  t6263 = t6259 + t6260 + t6261 + t6262;
  t6299 = -1.*t5918*t6086;
  t6300 = 0.24*t5916*t5919;
  t6301 = t6299 + t6300;
  t6271 = -0.384*var2[6]*t6270;
  t6272 = 3.2*t6134*t6270;
  t6273 = 3.2*t6094*t6200;
  t6276 = 6.4*t6177*t6100;
  t6277 = 3.2*t6192*t6044;
  t6278 = 3.2*t6100*t6270;
  t6279 = t6190 + t6196;
  t6280 = 3.2*t6177*t6279;
  t6281 = 3.2*t6174*t6200;
  t6282 = 6.4*t6044*t6200;
  t6285 = Power(t6177,2);
  t6286 = 6.4*t6285;
  t6287 = 6.4*t6177*t6270;
  t6288 = 6.4*t6192*t6200;
  t6289 = Power(t6200,2);
  t6290 = 6.4*t6289;
  t6293 = 3.2*t6257*t6270;
  t6294 = 3.2*t6239*t6200;
  t6335 = -0.24*t5915*t5916;
  t6336 = t6335 + t6245;
  t6298 = -1.*t6171*t6237;
  t6338 = 0.24*t5918*t5915;
  t6339 = t6338 + t6236;
  t6304 = -1.*t6233*t6034;
  t6309 = t5921*t6233;
  t6345 = -0.24*t5918*t5915;
  t6346 = t6345 + t6300;
  t6313 = t6237*t6034;
  t6368 = 13.6*t6150*t6156;
  t6369 = 13.6*t6160*t6156;
  t6370 = 6.4*t6177*t6192;
  t6371 = 6.4*t6177*t6200;
  t6372 = t6368 + t6369 + t6370 + t6371;
  t6374 = 6.8*t6213;
  t6375 = 6.8*t6150*t6160;
  t6376 = 6.8*t6216;
  t6377 = 6.8*t6156*t6062;
  t6378 = 3.2*t6177*t6174;
  t6379 = 3.2*t6100*t6192;
  t6380 = 3.2*t6177*t6044;
  t6381 = 3.2*t6100*t6200;
  t6382 = t6374 + t6375 + t6376 + t6377 + t6378 + t6379 + t6380 + t6381;
  t6384 = 6.8*t6150*t6229;
  t6385 = 3.2*t6177*t6239;
  t6386 = 3.2*t6177*t6251;
  t6387 = 3.2*t6257*t6200;
  t6388 = 3.2*t6192*t6263;
  t6389 = t6384 + t6385 + t6386 + t6387 + t6388;
  t6195 = -1.*t5968*t5921;
  t6197 = t6195 + t6196;
  t6178 = -1.*t5968*t6171;
  t6179 = t6178 + t6099;
  t6175 = 6.4*t6174*t6100;
  t6180 = 3.2*t6177*t6179;
  t6193 = 3.2*t6189*t6192;
  t6194 = 6.4*t6100*t6044;
  t6198 = 3.2*t6177*t6197;
  t6204 = 3.2*t6189*t6200;
  t6211 = t6157 + t6161 + t6162 + t6163 + t6175 + t6180 + t6193 + t6194 + t6198 + t6204;
  t6403 = 0.748*t6160;
  t6408 = Power(t6062,2);
  t6409 = 13.6*t6408;
  t6283 = t6157 + t6161 + t6162 + t6163 + t6276 + t6277 + t6278 + t6280 + t6281 + t6282;
  t6417 = 6.8*t6160*t6229;
  t6296 = -1.*t6246*t6098;
  t6297 = -2.*t5921*t6237;
  t6302 = -1.*t5921*t6301;
  t6303 = -2.*t6246*t6034;
  t6305 = t6296 + t6297 + t6298 + t6302 + t6303 + t6304;
  t6308 = 2.*t5921*t6246;
  t6310 = t6246*t6171;
  t6311 = 2.*t6098*t6237;
  t6312 = t6098*t6301;
  t6314 = t6308 + t6309 + t6310 + t6311 + t6312 + t6313;
  t6426 = -0.384*var2[6]*t6279;
  t6320 = Power(t5915,2);
  t6321 = -0.24*t6320;
  t6322 = t6107 + t6321;
  t6427 = 3.2*t6094*t6044;
  t6324 = -1.*t6086*t5919;
  t6325 = 0.24*t5915*t5919;
  t6326 = t6324 + t6325;
  t6428 = 3.2*t6134*t6279;
  t6431 = Power(t6100,2);
  t6432 = 6.4*t6431;
  t6433 = 6.4*t6174*t6044;
  t6434 = Power(t6044,2);
  t6435 = 6.4*t6434;
  t6436 = 6.4*t6100*t6279;
  t6330 = t6276 + t6277 + t6278 + t6280 + t6281 + t6282;
  t6440 = 3.2*t6239*t6044;
  t6337 = t6336*t6098;
  t6340 = t6171*t6339;
  t6341 = t6337 + t6248 + t6249 + t6340;
  t6442 = 3.2*t6257*t6279;
  t6343 = -1.*t6336*t6098;
  t6344 = -1.*t5921*t6339;
  t6347 = -1.*t5921*t6346;
  t6348 = -1.*t6246*t6034;
  t6349 = -1.*t6336*t6034;
  t6350 = t6343 + t6238 + t6298 + t6344 + t6347 + t6348 + t6349 + t6304;
  t6353 = -1.*t5921*t6336;
  t6354 = -1.*t6098*t6339;
  t6355 = t6353 + t6260 + t6354 + t6262;
  t6357 = t5921*t6246;
  t6358 = t5921*t6336;
  t6359 = t6336*t6171;
  t6360 = t6098*t6339;
  t6361 = t6098*t6346;
  t6362 = t6357 + t6358 + t6309 + t6359 + t6256 + t6360 + t6361 + t6313;
  t6383 = -0.5*var2[5]*t6382;
  t6243 = 3.2*t6100*t6239;
  t6252 = 3.2*t6100*t6251;
  t6258 = 3.2*t6257*t6044;
  t6264 = 3.2*t6174*t6263;
  t6265 = t6230 + t6243 + t6252 + t6258 + t6264;
  t6056 = -0.384*var2[6]*t6044;
  t6106 = 3.2*t6094*t6100;
  t6135 = 3.2*t6134*t6044;
  t6136 = t6081 + t6106 + t6135;
  t6467 = 13.6*t6150*t6062;
  t6468 = t6368 + t6467 + t6175 + t6194;
  t6266 = -0.5*var2[2]*t6265;
  t6418 = 3.2*t6189*t6239;
  t6419 = 3.2*t6189*t6251;
  t6420 = 3.2*t6257*t6197;
  t6421 = 3.2*t6179*t6263;
  t6422 = t6417 + t6418 + t6419 + t6420 + t6421;
  t6295 = 6.4*t6251*t6200;
  t6306 = 3.2*t6192*t6305;
  t6307 = 6.4*t6177*t6263;
  t6315 = 3.2*t6177*t6314;
  t6316 = t6230 + t6293 + t6294 + t6295 + t6306 + t6307 + t6315;
  t6441 = 6.4*t6251*t6044;
  t6443 = 3.2*t6174*t6305;
  t6444 = 6.4*t6100*t6263;
  t6445 = 3.2*t6100*t6314;
  t6446 = t6417 + t6440 + t6441 + t6442 + t6443 + t6444 + t6445;
  t6334 = 3.2*t6251*t6200;
  t6342 = 3.2*t6341*t6200;
  t6351 = 3.2*t6192*t6350;
  t6352 = 3.2*t6177*t6263;
  t6356 = 3.2*t6177*t6355;
  t6363 = 3.2*t6177*t6362;
  t6364 = t6293 + t6294 + t6334 + t6342 + t6351 + t6352 + t6356 + t6363;
  t6457 = 3.2*t6251*t6044;
  t6458 = 3.2*t6341*t6044;
  t6459 = 3.2*t6174*t6350;
  t6460 = 3.2*t6100*t6263;
  t6461 = 3.2*t6100*t6355;
  t6462 = 3.2*t6100*t6362;
  t6463 = t6440 + t6457 + t6458 + t6442 + t6459 + t6460 + t6461 + t6462;
  t6390 = -0.5*var2[5]*t6389;
  t6470 = -0.5*var2[5]*t6265;
  t6514 = 6.4*t6251*t6257;
  t6515 = 6.4*t6239*t6263;
  t6516 = t6514 + t6515;
  t6404 = 3.2*t6094*t6189;
  t6405 = 3.2*t6134*t6197;
  t6406 = t6403 + t6404 + t6405;
  t6429 = t6403 + t6427 + t6428;
  t6274 = t6081 + t6272 + t6273;
  t6481 = 3.2*t6094*t6305;
  t6482 = 3.2*t6134*t6314;
  t6483 = t6481 + t6482;
  t6450 = 3.2*t6322*t6100;
  t6451 = 3.2*t6326*t6044;
  t6452 = t6450 + t6427 + t6451 + t6428;
  t6323 = 3.2*t6322*t6177;
  t6327 = 3.2*t6326*t6200;
  t6328 = t6323 + t6272 + t6273 + t6327;
  t6498 = 3.2*t6326*t6251;
  t6499 = 3.2*t6094*t6350;
  t6500 = 3.2*t6322*t6263;
  t6501 = 3.2*t6134*t6362;
  t6502 = t6498 + t6499 + t6500 + t6501;
  t6392 = 0.748*t6150;
  t6393 = 3.2*t6094*t6177;
  t6394 = 3.2*t6134*t6200;
  t6395 = t6392 + t6393 + t6394;
  t6142 = -0.5*var2[5]*t6136;
  t6519 = 3.2*t6134*t6251;
  t6520 = 3.2*t6094*t6263;
  t6521 = t6519 + t6520;
  t6552 = -0.384*var2[0]*t6270;
  t6553 = -0.384*var2[1]*t6279;
  t6401 = -0.384*var2[5]*t6200;
  t6475 = -0.384*var2[5]*t6044;
  t6527 = -0.384*var2[5]*t6251;
  p_output1[0]=(t6056 + t6142 + t6266 - 0.5*(6.4*t6044*t6177 + 6.4*t6174*t6177 + 6.4*t6100*t6192 + 6.4*t6100*t6200 + t6214 + t6215 + t6217 + t6218)*var2[0] - 0.5*t6211*var2[1])*var2[5];
  p_output1[1]=var2[5]*(t6271 - 0.5*(t6214 + t6215 + t6217 + t6218 + t6286 + t6287 + t6288 + t6290)*var2[0] - 0.5*t6283*var2[1] - 0.5*t6316*var2[2] - 0.5*t6274*var2[5]);
  p_output1[2]=var2[5]*(t6271 - 0.5*(t6286 + t6287 + t6288 + t6290)*var2[0] - 0.5*t6330*var2[1] - 0.5*t6364*var2[2] - 0.5*t6328*var2[5]);
  p_output1[3]=-0.5*t6372*var2[5];
  p_output1[4]=t6383;
  p_output1[5]=t6390;
  p_output1[6]=-0.5*t6372*var2[0] - 0.5*t6382*var2[1] - 0.5*t6389*var2[2] - 1.*t6395*var2[5] - 0.384*t6200*var2[6];
  p_output1[7]=t6401;
  p_output1[8]=var2[5]*(-0.5*t6211*var2[0] - 0.5*(6.4*t6100*t6179 + 6.4*t6044*t6189 + 6.4*t6174*t6189 + 6.4*t6100*t6197 + t6214 + t6215 + t6218 + t6409)*var2[1] - 0.5*t6422*var2[2] - 0.5*t6406*var2[5] - 0.384*t6197*var2[6]);
  p_output1[9]=var2[5]*(t6426 - 0.5*t6283*var2[0] - 0.5*(t6214 + t6215 + t6218 + t6409 + t6432 + t6433 + t6435 + t6436)*var2[1] - 0.5*t6446*var2[2] - 0.5*t6429*var2[5]);
  p_output1[10]=var2[5]*(t6426 - 0.5*t6330*var2[0] - 0.5*(t6432 + t6433 + t6435 + t6436)*var2[1] - 0.5*t6463*var2[2] - 0.5*t6452*var2[5]);
  p_output1[11]=t6383;
  p_output1[12]=-0.5*t6468*var2[5];
  p_output1[13]=t6470;
  p_output1[14]=t6056 + t6266 - 0.5*t6382*var2[0] - 0.5*t6468*var2[1] - 1.*t6136*var2[5];
  p_output1[15]=t6475;
  p_output1[16]=(-0.5*t6265*var2[0] - 0.5*t6422*var2[1])*var2[5];
  p_output1[17]=var2[5]*(-0.5*t6316*var2[0] - 0.5*t6446*var2[1] - 0.5*(6.4*Power(t6251,2) + 6.4*Power(t6263,2) + 6.4*t6239*t6305 + 6.4*t6257*t6314)*var2[2] - 0.5*t6483*var2[5] - 0.384*t6314*var2[6]);
  p_output1[18]=var2[5]*(-0.5*t6364*var2[0] - 0.5*t6463*var2[1] - 0.5*(6.4*t6251*t6341 + 6.4*t6239*t6350 + 6.4*t6263*t6355 + 6.4*t6257*t6362)*var2[2] - 0.5*t6502*var2[5] - 0.384*t6362*var2[6]);
  p_output1[19]=t6390;
  p_output1[20]=t6470;
  p_output1[21]=-0.5*t6516*var2[5];
  p_output1[22]=-0.5*t6389*var2[0] - 0.5*t6265*var2[1] - 0.5*t6516*var2[2] - 1.*t6521*var2[5] - 0.384*t6251*var2[6];
  p_output1[23]=t6527;
  p_output1[24]=(-0.5*t6136*var2[0] - 0.5*t6406*var2[1])*var2[5];
  p_output1[25]=(-0.5*t6274*var2[0] - 0.5*t6429*var2[1] - 0.5*t6483*var2[2])*var2[5];
  p_output1[26]=(-0.5*t6328*var2[0] - 0.5*t6452*var2[1] - 0.5*t6502*var2[2])*var2[5];
  p_output1[27]=-0.5*t6395*var2[5];
  p_output1[28]=t6142;
  p_output1[29]=-0.5*t6521*var2[5];
  p_output1[30]=-0.5*t6395*var2[0] - 0.5*t6136*var2[1] - 0.5*t6521*var2[2];
  p_output1[31]=(-0.384*t6044*var2[0] - 0.384*t6197*var2[1])*var2[5];
  p_output1[32]=(t6552 + t6553 - 0.384*t6314*var2[2])*var2[5];
  p_output1[33]=(t6552 + t6553 - 0.384*t6362*var2[2])*var2[5];
  p_output1[34]=t6401;
  p_output1[35]=t6475;
  p_output1[36]=t6527;
  p_output1[37]=-0.384*t6200*var2[0] - 0.384*t6044*var2[1] - 0.384*t6251*var2[2];
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

namespace Pattern[DS1, Blank[opt]]
{

void J_Ce2_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
