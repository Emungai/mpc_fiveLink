/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:19:47 GMT-05:00
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
  double t1195;
  double t1147;
  double t1161;
  double t1198;
  double t1217;
  double t1106;
  double t1187;
  double t1202;
  double t1210;
  double t1319;
  double t1320;
  double t1321;
  double t1322;
  double t1323;
  double t1213;
  double t1218;
  double t1219;
  double t1261;
  double t1304;
  double t1305;
  double t1307;
  double t1312;
  double t1313;
  double t1349;
  double t1350;
  double t1351;
  double t1327;
  double t1336;
  double t1337;
  double t1338;
  double t1339;
  double t1340;
  double t1353;
  double t1354;
  double t1355;
  double t1357;
  double t1358;
  double t1359;
  double t1360;
  double t1361;
  double t1362;
  double t1379;
  double t1380;
  double t1395;
  double t1396;
  double t1397;
  double t1399;
  double t1400;
  double t1401;
  double t1405;
  double t1406;
  double t1407;
  double t1382;
  double t1383;
  double t1384;
  double t1372;
  double t1373;
  double t1374;
  double t1324;
  double t1325;
  double t1326;
  double t1342;
  double t1343;
  double t1344;
  double t1345;
  double t1352;
  double t1376;
  double t1377;
  double t1367;
  double t1368;
  double t1369;
  double t1370;
  double t1371;
  double t1375;
  double t1378;
  double t1381;
  double t1385;
  double t1386;
  double t1387;
  double t1389;
  double t1390;
  double t1391;
  double t1392;
  double t1393;
  double t1398;
  double t1402;
  double t1403;
  double t1408;
  double t1409;
  double t1410;
  double t1411;
  double t1412;
  double t1414;
  double t1415;
  double t1416;
  double t1418;
  double t1419;
  double t1420;
  double t1421;
  double t1422;
  double t1440;
  double t1441;
  double t1442;
  double t1443;
  double t1444;
  double t1445;
  double t1394;
  double t1404;
  double t1413;
  double t1417;
  double t1423;
  double t1424;
  double t1429;
  double t1430;
  double t1431;
  double t1432;
  double t1318;
  double t1341;
  double t1346;
  double t1347;
  double t1450;
  double t1451;
  double t1452;
  t1195 = Cos(var1[3]);
  t1147 = Cos(var1[4]);
  t1161 = Sin(var1[3]);
  t1198 = Sin(var1[4]);
  t1217 = Sin(var1[2]);
  t1106 = Cos(var1[2]);
  t1187 = -1.*t1147*t1161;
  t1202 = -1.*t1195*t1198;
  t1210 = t1187 + t1202;
  t1319 = -1.*t1147;
  t1320 = 1. + t1319;
  t1321 = 0.4*t1320;
  t1322 = 0.64*t1147;
  t1323 = t1321 + t1322;
  t1213 = t1106*t1210;
  t1218 = -1.*t1195*t1147;
  t1219 = t1161*t1198;
  t1261 = t1218 + t1219;
  t1304 = t1217*t1261;
  t1305 = t1213 + t1304;
  t1307 = -1.*t1195*t1217;
  t1312 = -1.*t1106*t1161;
  t1313 = t1307 + t1312;
  t1349 = t1106*t1195;
  t1350 = -1.*t1217*t1161;
  t1351 = t1349 + t1350;
  t1327 = t1217*t1210;
  t1336 = t1195*t1147;
  t1337 = -1.*t1161*t1198;
  t1338 = t1336 + t1337;
  t1339 = t1106*t1338;
  t1340 = t1327 + t1339;
  t1353 = t1195*t1217;
  t1354 = t1106*t1161;
  t1355 = t1353 + t1354;
  t1357 = t1147*t1161;
  t1358 = t1195*t1198;
  t1359 = t1357 + t1358;
  t1360 = t1106*t1359;
  t1361 = t1217*t1338;
  t1362 = t1360 + t1361;
  t1379 = -1.*t1217*t1338;
  t1380 = t1213 + t1379;
  t1395 = t1323*t1161;
  t1396 = 0.24*t1195*t1198;
  t1397 = t1395 + t1396;
  t1399 = t1195*t1323;
  t1400 = -0.24*t1161*t1198;
  t1401 = t1399 + t1400;
  t1405 = -1.*t1323*t1161;
  t1406 = -0.24*t1195*t1198;
  t1407 = t1405 + t1406;
  t1382 = -1.*t1217*t1210;
  t1383 = t1106*t1261;
  t1384 = t1382 + t1383;
  t1372 = -1.*t1106*t1195;
  t1373 = t1217*t1161;
  t1374 = t1372 + t1373;
  t1324 = t1323*t1198;
  t1325 = -0.24*t1147*t1198;
  t1326 = t1324 + t1325;
  t1342 = t1323*t1147;
  t1343 = Power(t1198,2);
  t1344 = 0.24*t1343;
  t1345 = t1342 + t1344;
  t1352 = 13.6*t1313*t1351;
  t1376 = -1.*t1217*t1359;
  t1377 = t1376 + t1339;
  t1367 = Power(t1313,2);
  t1368 = 6.8*t1367;
  t1369 = 6.8*t1313*t1355;
  t1370 = Power(t1351,2);
  t1371 = 6.8*t1370;
  t1375 = 6.8*t1351*t1374;
  t1378 = 3.2*t1340*t1377;
  t1381 = 3.2*t1380*t1362;
  t1385 = 3.2*t1340*t1384;
  t1386 = 3.2*t1380*t1305;
  t1387 = t1368 + t1369 + t1371 + t1375 + t1378 + t1381 + t1385 + t1386;
  t1389 = Power(t1195,2);
  t1390 = 0.11*t1389;
  t1391 = Power(t1161,2);
  t1392 = 0.11*t1391;
  t1393 = t1390 + t1392;
  t1398 = -1.*t1397*t1338;
  t1402 = -1.*t1210*t1401;
  t1403 = t1398 + t1402;
  t1408 = t1407*t1338;
  t1409 = t1397*t1338;
  t1410 = t1210*t1401;
  t1411 = t1359*t1401;
  t1412 = t1408 + t1409 + t1410 + t1411;
  t1414 = t1397*t1359;
  t1415 = t1338*t1401;
  t1416 = t1414 + t1415;
  t1418 = -1.*t1210*t1407;
  t1419 = -1.*t1210*t1397;
  t1420 = -1.*t1338*t1401;
  t1421 = -1.*t1401*t1261;
  t1422 = t1418 + t1419 + t1420 + t1421;
  t1440 = 6.8*t1374*t1393;
  t1441 = 3.2*t1380*t1403;
  t1442 = 3.2*t1380*t1412;
  t1443 = 3.2*t1416*t1384;
  t1444 = 3.2*t1377*t1422;
  t1445 = t1440 + t1441 + t1442 + t1443 + t1444;
  t1394 = 6.8*t1313*t1393;
  t1404 = 3.2*t1340*t1403;
  t1413 = 3.2*t1340*t1412;
  t1417 = 3.2*t1416*t1305;
  t1423 = 3.2*t1362*t1422;
  t1424 = t1394 + t1404 + t1413 + t1417 + t1423;
  t1429 = 0.748*t1374;
  t1430 = 3.2*t1326*t1380;
  t1431 = 3.2*t1345*t1384;
  t1432 = t1429 + t1430 + t1431;
  t1318 = 0.748*t1313;
  t1341 = 3.2*t1326*t1340;
  t1346 = 3.2*t1345*t1305;
  t1347 = t1318 + t1341 + t1346;
  t1450 = 3.2*t1345*t1412;
  t1451 = 3.2*t1326*t1422;
  t1452 = t1450 + t1451;
  p_output1[0]=var2[3]*(-0.5*(6.4*t1305*t1340 + t1352 + 13.6*t1351*t1355 + 6.4*t1340*t1362)*var2[0] - 0.5*t1387*var2[1] - 0.5*t1424*var2[2] - 0.5*t1347*var2[3] - 0.384*t1305*var2[4]);
  p_output1[1]=var2[3]*(-0.5*t1387*var2[0] - 0.5*(t1352 + 13.6*t1313*t1374 + 6.4*t1377*t1380 + 6.4*t1380*t1384)*var2[1] - 0.5*t1445*var2[2] - 0.5*t1432*var2[3] - 0.384*t1384*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t1424*var2[0] - 0.5*t1445*var2[1] - 0.5*(6.4*t1412*t1416 + 6.4*t1403*t1422)*var2[2] - 0.5*t1452*var2[3] - 0.384*t1412*var2[4]);
  p_output1[3]=(-0.5*t1347*var2[0] - 0.5*t1432*var2[1] - 0.5*t1452*var2[2])*var2[3];
  p_output1[4]=(-0.384*t1305*var2[0] - 0.384*t1384*var2[1] - 0.384*t1412*var2[2])*var2[3];
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

#include "Ce2_vec4_five_link_walker.hh"

namespace LeftStance
{

void Ce2_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
