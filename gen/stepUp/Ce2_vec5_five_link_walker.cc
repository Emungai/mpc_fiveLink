/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:19:49 GMT-05:00
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
  double t1364;
  double t1348;
  double t1356;
  double t1365;
  double t1426;
  double t1363;
  double t1366;
  double t1388;
  double t1306;
  double t1437;
  double t1438;
  double t1439;
  double t1446;
  double t1447;
  double t1454;
  double t1455;
  double t1456;
  double t1457;
  double t1458;
  double t1459;
  double t1465;
  double t1425;
  double t1427;
  double t1428;
  double t1433;
  double t1434;
  double t1435;
  double t1469;
  double t1470;
  double t1471;
  double t1472;
  double t1473;
  double t1474;
  double t1489;
  double t1490;
  double t1499;
  double t1500;
  double t1501;
  double t1503;
  double t1504;
  double t1505;
  double t1509;
  double t1510;
  double t1511;
  double t1515;
  double t1516;
  double t1492;
  double t1493;
  double t1494;
  double t1466;
  double t1467;
  double t1468;
  double t1486;
  double t1487;
  double t1448;
  double t1449;
  double t1453;
  double t1461;
  double t1462;
  double t1463;
  double t1476;
  double t1477;
  double t1478;
  double t1488;
  double t1491;
  double t1495;
  double t1496;
  double t1497;
  double t1502;
  double t1506;
  double t1507;
  double t1512;
  double t1513;
  double t1514;
  double t1517;
  double t1518;
  double t1520;
  double t1521;
  double t1522;
  double t1524;
  double t1525;
  double t1526;
  double t1527;
  double t1528;
  double t1546;
  double t1547;
  double t1548;
  double t1549;
  double t1550;
  double t1508;
  double t1519;
  double t1523;
  double t1529;
  double t1530;
  double t1535;
  double t1536;
  double t1537;
  double t1538;
  double t1539;
  double t1460;
  double t1464;
  double t1475;
  double t1479;
  double t1480;
  double t1555;
  double t1556;
  double t1557;
  double t1558;
  double t1559;
  t1364 = Cos(var1[3]);
  t1348 = Cos(var1[4]);
  t1356 = Sin(var1[3]);
  t1365 = Sin(var1[4]);
  t1426 = Sin(var1[2]);
  t1363 = -1.*t1348*t1356;
  t1366 = -1.*t1364*t1365;
  t1388 = t1363 + t1366;
  t1306 = Cos(var1[2]);
  t1437 = -1.*t1348;
  t1438 = 1. + t1437;
  t1439 = 0.4*t1438;
  t1446 = 0.64*t1348;
  t1447 = t1439 + t1446;
  t1454 = t1426*t1388;
  t1455 = t1364*t1348;
  t1456 = -1.*t1356*t1365;
  t1457 = t1455 + t1456;
  t1458 = t1306*t1457;
  t1459 = t1454 + t1458;
  t1465 = t1447*t1348;
  t1425 = t1306*t1388;
  t1427 = -1.*t1364*t1348;
  t1428 = t1356*t1365;
  t1433 = t1427 + t1428;
  t1434 = t1426*t1433;
  t1435 = t1425 + t1434;
  t1469 = t1348*t1356;
  t1470 = t1364*t1365;
  t1471 = t1469 + t1470;
  t1472 = t1306*t1471;
  t1473 = t1426*t1457;
  t1474 = t1472 + t1473;
  t1489 = -1.*t1426*t1457;
  t1490 = t1425 + t1489;
  t1499 = t1447*t1356;
  t1500 = 0.24*t1364*t1365;
  t1501 = t1499 + t1500;
  t1503 = t1364*t1447;
  t1504 = -0.24*t1356*t1365;
  t1505 = t1503 + t1504;
  t1509 = -0.24*t1348*t1356;
  t1510 = -0.24*t1364*t1365;
  t1511 = t1509 + t1510;
  t1515 = 0.24*t1364*t1348;
  t1516 = t1515 + t1504;
  t1492 = -1.*t1426*t1388;
  t1493 = t1306*t1433;
  t1494 = t1492 + t1493;
  t1466 = Power(t1348,2);
  t1467 = -0.24*t1466;
  t1468 = t1465 + t1467;
  t1486 = -1.*t1426*t1471;
  t1487 = t1486 + t1458;
  t1448 = t1447*t1365;
  t1449 = -0.24*t1348*t1365;
  t1453 = t1448 + t1449;
  t1461 = -1.*t1447*t1365;
  t1462 = 0.24*t1348*t1365;
  t1463 = t1461 + t1462;
  t1476 = Power(t1365,2);
  t1477 = 0.24*t1476;
  t1478 = t1465 + t1477;
  t1488 = 3.2*t1459*t1487;
  t1491 = 3.2*t1490*t1474;
  t1495 = 3.2*t1459*t1494;
  t1496 = 3.2*t1490*t1435;
  t1497 = t1488 + t1491 + t1495 + t1496;
  t1502 = -1.*t1501*t1457;
  t1506 = -1.*t1388*t1505;
  t1507 = t1502 + t1506;
  t1512 = t1511*t1457;
  t1513 = t1501*t1457;
  t1514 = t1388*t1505;
  t1517 = t1471*t1516;
  t1518 = t1512 + t1513 + t1514 + t1517;
  t1520 = t1501*t1471;
  t1521 = t1457*t1505;
  t1522 = t1520 + t1521;
  t1524 = -1.*t1388*t1511;
  t1525 = -1.*t1388*t1501;
  t1526 = -1.*t1457*t1516;
  t1527 = -1.*t1505*t1433;
  t1528 = t1524 + t1525 + t1526 + t1527;
  t1546 = 3.2*t1490*t1507;
  t1547 = 3.2*t1490*t1518;
  t1548 = 3.2*t1522*t1494;
  t1549 = 3.2*t1487*t1528;
  t1550 = t1546 + t1547 + t1548 + t1549;
  t1508 = 3.2*t1459*t1507;
  t1519 = 3.2*t1459*t1518;
  t1523 = 3.2*t1522*t1435;
  t1529 = 3.2*t1474*t1528;
  t1530 = t1508 + t1519 + t1523 + t1529;
  t1535 = 3.2*t1468*t1487;
  t1536 = 3.2*t1453*t1490;
  t1537 = 3.2*t1463*t1490;
  t1538 = 3.2*t1478*t1494;
  t1539 = t1535 + t1536 + t1537 + t1538;
  t1460 = 3.2*t1453*t1459;
  t1464 = 3.2*t1463*t1459;
  t1475 = 3.2*t1468*t1474;
  t1479 = 3.2*t1478*t1435;
  t1480 = t1460 + t1464 + t1475 + t1479;
  t1555 = 3.2*t1468*t1507;
  t1556 = 3.2*t1463*t1522;
  t1557 = 3.2*t1478*t1518;
  t1558 = 3.2*t1453*t1528;
  t1559 = t1555 + t1556 + t1557 + t1558;
  p_output1[0]=var2[4]*(-0.5*(6.4*t1435*t1459 + 6.4*t1459*t1474)*var2[0] - 0.5*t1497*var2[1] - 0.5*t1530*var2[2] - 0.5*t1480*var2[3] - 0.384*t1435*var2[4]);
  p_output1[1]=var2[4]*(-0.5*t1497*var2[0] - 0.5*(6.4*t1487*t1490 + 6.4*t1490*t1494)*var2[1] - 0.5*t1550*var2[2] - 0.5*t1539*var2[3] - 0.384*t1494*var2[4]);
  p_output1[2]=var2[4]*(-0.5*t1530*var2[0] - 0.5*t1550*var2[1] - 0.5*(6.4*t1518*t1522 + 6.4*t1507*t1528)*var2[2] - 0.5*t1559*var2[3] - 0.384*t1518*var2[4]);
  p_output1[3]=var2[4]*(-0.5*t1480*var2[0] - 0.5*t1539*var2[1] - 0.5*t1559*var2[2] - 0.5*(6.4*t1453*t1468 + 6.4*t1463*t1478)*var2[3] - 0.384*t1463*var2[4]);
  p_output1[4]=(-0.384*t1435*var2[0] - 0.384*t1494*var2[1] - 0.384*t1518*var2[2] - 0.384*t1463*var2[3])*var2[4];
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

#include "Ce2_vec5_five_link_walker.hh"

namespace LeftStance
{

void Ce2_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
