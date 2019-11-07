/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:57 GMT-05:00
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
  double t1100;
  double t1113;
  double t1099;
  double t1112;
  double t1140;
  double t1151;
  double t1170;
  double t1171;
  double t1172;
  double t1148;
  double t1167;
  double t1168;
  double t1175;
  double t1176;
  double t1177;
  double t1178;
  double t1179;
  double t1169;
  double t1173;
  double t1174;
  double t1180;
  double t1181;
  double t1182;
  double t1184;
  double t1185;
  double t1186;
  double t1197;
  double t1198;
  double t1199;
  double t1190;
  double t1192;
  double t1193;
  double t1208;
  double t1209;
  double t1210;
  double t1183;
  double t1187;
  double t1188;
  double t1189;
  double t1195;
  double t1196;
  double t1203;
  double t1204;
  double t1206;
  double t1207;
  double t1211;
  double t1212;
  double t1213;
  double t1214;
  double t1215;
  double t1216;
  double t1225;
  double t1226;
  double t1218;
  double t1228;
  double t1229;
  double t1220;
  double t1106;
  double t1118;
  double t1119;
  double t1121;
  double t1122;
  double t1123;
  double t1129;
  double t1138;
  double t1139;
  double t1250;
  double t1252;
  double t1266;
  double t1268;
  double t1272;
  double t1273;
  double t1274;
  double t1277;
  double t1278;
  double t1279;
  double t1280;
  double t1281;
  double t1286;
  double t1287;
  double t1288;
  double t1282;
  double t1283;
  double t1284;
  double t1267;
  double t1269;
  double t1270;
  double t1289;
  double t1290;
  double t1291;
  double t1251;
  double t1253;
  double t1255;
  double t1256;
  double t1258;
  double t1259;
  double t1260;
  double t1264;
  double t1265;
  double t1275;
  double t1285;
  double t1292;
  double t1293;
  double t1304;
  double t1306;
  double t1298;
  double t1299;
  double t1300;
  double t1295;
  double t1308;
  double t1309;
  double t1310;
  double t1317;
  double t1318;
  double t1319;
  double t1307;
  double t1312;
  double t1313;
  double t1320;
  double t1321;
  double t1322;
  double t1323;
  double t1324;
  double t1325;
  double t1334;
  double t1335;
  double t1327;
  double t1337;
  double t1338;
  double t1329;
  double t1194;
  double t1200;
  double t1201;
  double t1202;
  double t1217;
  double t1219;
  double t1221;
  double t1222;
  double t1223;
  double t1360;
  double t1361;
  double t5026;
  double t5045;
  double t2455;
  double t2505;
  double t2580;
  double t1355;
  double t1358;
  double t1359;
  double t1372;
  double t1227;
  double t1230;
  double t1232;
  double t1374;
  double t1375;
  double t1376;
  double t1379;
  double t3129;
  double t1234;
  double t1235;
  double t1236;
  double t5110;
  double t8251;
  double t8878;
  double t5835;
  double t1233;
  double t1237;
  double t1238;
  double t7898;
  double t7906;
  double t7949;
  double t8049;
  double t9161;
  double t9167;
  double t9226;
  double t9338;
  double t9339;
  double t9340;
  double t9443;
  double t9444;
  double t9445;
  double t9455;
  double t9463;
  double t9464;
  double t9466;
  double t9469;
  double t9470;
  double t1311;
  double t1314;
  double t1315;
  double t1316;
  double t1326;
  double t1328;
  double t1330;
  double t1331;
  double t1332;
  double t10948;
  double t11025;
  double t13976;
  double t13978;
  double t11294;
  double t11559;
  double t13778;
  double t10881;
  double t10934;
  double t10945;
  double t11107;
  double t1336;
  double t1339;
  double t1340;
  double t11160;
  double t11165;
  double t11168;
  double t11256;
  double t13912;
  double t1342;
  double t1343;
  double t1344;
  double t13981;
  double t14089;
  double t14131;
  double t14027;
  double t1341;
  double t1345;
  double t1346;
  double t14042;
  double t14086;
  double t14087;
  double t14088;
  double t14145;
  double t14146;
  double t14147;
  double t14194;
  double t14221;
  double t14265;
  double t14271;
  double t14273;
  double t14274;
  double t14275;
  double t14276;
  double t14277;
  double t14280;
  double t14281;
  double t14292;
  double t14409;
  double t14414;
  double t14376;
  double t14404;
  double t14405;
  double t14406;
  double t14442;
  double t14444;
  double t14448;
  double t14461;
  double t14489;
  double t14491;
  double t14410;
  double t14415;
  double t14416;
  double t14425;
  double t14426;
  double t14427;
  double t14490;
  double t14494;
  double t14555;
  double t14570;
  double t14571;
  double t14572;
  double t1247;
  double t1248;
  double t1243;
  double t1244;
  double t14639;
  double t14645;
  double t14646;
  double t14648;
  double t14649;
  double t14633;
  double t14634;
  double t14635;
  double t14637;
  double t1296;
  double t14685;
  double t14686;
  double t14687;
  double t14688;
  double t1297;
  double t14691;
  double t1271;
  double t1276;
  double t14696;
  double t14698;
  double t14699;
  double t14700;
  double t14640;
  double t14650;
  double t14651;
  double t1377;
  double t1378;
  double t2625;
  double t2642;
  double t3262;
  double t5103;
  double t5111;
  double t5121;
  double t5136;
  double t5845;
  double t14719;
  double t14721;
  double t14723;
  double t14654;
  double t14655;
  double t14657;
  double t14750;
  double t14751;
  double t14752;
  double t14753;
  double t14754;
  double t14755;
  double t14756;
  double t10204;
  double t10217;
  double t10224;
  double t10253;
  double t10648;
  double t10653;
  double t14697;
  double t14701;
  double t14703;
  double t11185;
  double t11230;
  double t13830;
  double t13870;
  double t13919;
  double t13980;
  double t14022;
  double t14023;
  double t14024;
  double t14038;
  double t14795;
  double t14797;
  double t14798;
  double t14706;
  double t14711;
  double t14712;
  double t14812;
  double t14813;
  double t14817;
  double t14827;
  double t14828;
  double t14829;
  double t14830;
  double t14328;
  double t14334;
  double t14335;
  double t14338;
  double t14339;
  double t14340;
  double t1224;
  double t1240;
  double t1241;
  double t1245;
  double t1249;
  double t1294;
  double t1301;
  double t1302;
  double t1333;
  double t1347;
  double t1354;
  double t9696;
  double t10872;
  double t14325;
  double t14869;
  double t14870;
  double t14871;
  double t14872;
  double t14873;
  double t14927;
  double t14928;
  double t14929;
  double t14930;
  double t14931;
  double t14956;
  double t14957;
  double t14958;
  double t14960;
  double t14966;
  double t14967;
  double t14969;
  double t14970;
  double t14972;
  double t14974;
  double t14975;
  double t14976;
  double t14983;
  double t14984;
  double t14985;
  double t14987;
  double t14988;
  double t14989;
  double t14990;
  double t14994;
  double t14995;
  double t14996;
  double t14997;
  double t14998;
  double t14999;
  double t15000;
  double t15001;
  double t15002;
  double t15003;
  double t15004;
  double t15022;
  double t15023;
  double t15024;
  double t15026;
  double t15027;
  double t15028;
  double t15029;
  double t15030;
  double t15048;
  double t15049;
  double t15050;
  double t15052;
  double t15053;
  double t15054;
  double t15055;
  double t15059;
  double t15060;
  double t15061;
  double t15062;
  double t15063;
  double t15064;
  double t15065;
  double t15066;
  double t15067;
  double t15068;
  double t15069;
  double t15087;
  double t15088;
  double t15089;
  double t15091;
  double t15092;
  double t15093;
  double t15094;
  double t15095;
  t1100 = Cos(var1[3]);
  t1113 = Sin(var1[3]);
  t1099 = Cos(var1[2]);
  t1112 = Sin(var1[2]);
  t1140 = Cos(var1[4]);
  t1151 = Sin(var1[4]);
  t1170 = t1100*t1140;
  t1171 = -1.*t1113*t1151;
  t1172 = t1170 + t1171;
  t1148 = -1.*t1140*t1113;
  t1167 = -1.*t1100*t1151;
  t1168 = t1148 + t1167;
  t1175 = -1.*t1140;
  t1176 = 1. + t1175;
  t1177 = 0.4*t1176;
  t1178 = 0.64*t1140;
  t1179 = t1177 + t1178;
  t1169 = t1099*t1168;
  t1173 = -1.*t1112*t1172;
  t1174 = t1169 + t1173;
  t1180 = t1179*t1113;
  t1181 = 0.24*t1100*t1151;
  t1182 = t1180 + t1181;
  t1184 = t1100*t1179;
  t1185 = -0.24*t1113*t1151;
  t1186 = t1184 + t1185;
  t1197 = t1140*t1113;
  t1198 = t1100*t1151;
  t1199 = t1197 + t1198;
  t1190 = -1.*t1179*t1113;
  t1192 = -0.24*t1100*t1151;
  t1193 = t1190 + t1192;
  t1208 = -1.*t1100*t1140;
  t1209 = t1113*t1151;
  t1210 = t1208 + t1209;
  t1183 = -1.*t1182*t1172;
  t1187 = -1.*t1168*t1186;
  t1188 = t1183 + t1187;
  t1189 = 3.2*t1174*t1188;
  t1195 = t1182*t1172;
  t1196 = t1168*t1186;
  t1203 = t1182*t1199;
  t1204 = t1172*t1186;
  t1206 = t1203 + t1204;
  t1207 = -1.*t1112*t1168;
  t1211 = t1099*t1210;
  t1212 = t1207 + t1211;
  t1213 = 3.2*t1206*t1212;
  t1214 = -1.*t1112*t1199;
  t1215 = t1099*t1172;
  t1216 = t1214 + t1215;
  t1225 = -0.24*t1140*t1113;
  t1226 = t1225 + t1192;
  t1218 = -1.*t1168*t1182;
  t1228 = 0.24*t1100*t1140;
  t1229 = t1228 + t1185;
  t1220 = -1.*t1186*t1210;
  t1106 = -1.*t1099*t1100;
  t1118 = t1112*t1113;
  t1119 = t1106 + t1118;
  t1121 = Power(t1100,2);
  t1122 = 0.11*t1121;
  t1123 = Power(t1113,2);
  t1129 = 0.11*t1123;
  t1138 = t1122 + t1129;
  t1139 = 6.8*t1119*t1138;
  t1250 = Cos(var1[5]);
  t1252 = Sin(var1[5]);
  t1266 = Cos(var1[6]);
  t1268 = Sin(var1[6]);
  t1272 = t1250*t1266;
  t1273 = -1.*t1252*t1268;
  t1274 = t1272 + t1273;
  t1277 = -1.*t1266;
  t1278 = 1. + t1277;
  t1279 = 0.4*t1278;
  t1280 = 0.64*t1266;
  t1281 = t1279 + t1280;
  t1286 = -1.*t1266*t1252;
  t1287 = -1.*t1250*t1268;
  t1288 = t1286 + t1287;
  t1282 = t1281*t1252;
  t1283 = 0.24*t1250*t1268;
  t1284 = t1282 + t1283;
  t1267 = t1266*t1252;
  t1269 = t1250*t1268;
  t1270 = t1267 + t1269;
  t1289 = t1250*t1281;
  t1290 = -0.24*t1252*t1268;
  t1291 = t1289 + t1290;
  t1251 = -1.*t1099*t1250;
  t1253 = t1112*t1252;
  t1255 = t1251 + t1253;
  t1256 = Power(t1250,2);
  t1258 = 0.11*t1256;
  t1259 = Power(t1252,2);
  t1260 = 0.11*t1259;
  t1264 = t1258 + t1260;
  t1265 = 6.8*t1255*t1264;
  t1275 = -1.*t1112*t1274;
  t1285 = -1.*t1284*t1274;
  t1292 = -1.*t1288*t1291;
  t1293 = t1285 + t1292;
  t1304 = t1099*t1288;
  t1306 = t1304 + t1275;
  t1298 = t1284*t1270;
  t1299 = t1274*t1291;
  t1300 = t1298 + t1299;
  t1295 = -1.*t1112*t1288;
  t1308 = -1.*t1281*t1252;
  t1309 = -0.24*t1250*t1268;
  t1310 = t1308 + t1309;
  t1317 = -1.*t1250*t1266;
  t1318 = t1252*t1268;
  t1319 = t1317 + t1318;
  t1307 = 3.2*t1306*t1293;
  t1312 = t1284*t1274;
  t1313 = t1288*t1291;
  t1320 = t1099*t1319;
  t1321 = t1295 + t1320;
  t1322 = 3.2*t1300*t1321;
  t1323 = -1.*t1112*t1270;
  t1324 = t1099*t1274;
  t1325 = t1323 + t1324;
  t1334 = -0.24*t1266*t1252;
  t1335 = t1334 + t1309;
  t1327 = -1.*t1288*t1284;
  t1337 = 0.24*t1250*t1266;
  t1338 = t1337 + t1290;
  t1329 = -1.*t1291*t1319;
  t1194 = t1193*t1172;
  t1200 = t1199*t1186;
  t1201 = t1194 + t1195 + t1196 + t1200;
  t1202 = 3.2*t1174*t1201;
  t1217 = -1.*t1168*t1193;
  t1219 = -1.*t1172*t1186;
  t1221 = t1217 + t1218 + t1219 + t1220;
  t1222 = 3.2*t1216*t1221;
  t1223 = t1139 + t1189 + t1202 + t1213 + t1222;
  t1360 = t1112*t1210;
  t1361 = t1169 + t1360;
  t5026 = t1112*t1168;
  t5045 = t5026 + t1215;
  t2455 = -1.*t1100*t1179;
  t2505 = 0.24*t1113*t1151;
  t2580 = t2455 + t2505;
  t1355 = t1112*t1199;
  t1358 = t1355 + t1211;
  t1359 = 3.2*t1206*t1358;
  t1372 = 3.2*t1188*t1361;
  t1227 = t1226*t1172;
  t1230 = t1199*t1229;
  t1232 = t1227 + t1195 + t1196 + t1230;
  t1374 = t1099*t1199;
  t1375 = t1112*t1172;
  t1376 = t1374 + t1375;
  t1379 = -1.*t1199*t1186;
  t3129 = -1.*t1182*t1210;
  t1234 = -1.*t1168*t1226;
  t1235 = -1.*t1172*t1229;
  t1236 = t1234 + t1218 + t1235 + t1220;
  t5110 = t1168*t1182;
  t8251 = -0.24*t1100*t1140;
  t8878 = t8251 + t2505;
  t5835 = t1186*t1210;
  t1233 = 3.2*t1174*t1232;
  t1237 = 3.2*t1216*t1236;
  t1238 = t1189 + t1233 + t1213 + t1237;
  t7898 = 3.2*t1201*t1361;
  t7906 = 3.2*t1232*t1361;
  t7949 = -1.*t1226*t1172;
  t8049 = -1.*t1168*t1229;
  t9161 = -1.*t1168*t8878;
  t9167 = -1.*t1193*t1210;
  t9226 = -1.*t1226*t1210;
  t9338 = t7949 + t1187 + t1379 + t8049 + t9161 + t9167 + t9226 + t3129;
  t9339 = 3.2*t1376*t9338;
  t9340 = 3.2*t5045*t1221;
  t9443 = 3.2*t5045*t1236;
  t9444 = t1168*t1193;
  t9445 = t1168*t1226;
  t9455 = t1226*t1199;
  t9463 = t1172*t1229;
  t9464 = t1172*t8878;
  t9466 = t9444 + t9445 + t5110 + t9455 + t1204 + t9463 + t9464 + t5835;
  t9469 = 3.2*t5045*t9466;
  t9470 = t1359 + t1372 + t7898 + t7906 + t9339 + t9340 + t9443 + t9469;
  t1311 = t1310*t1274;
  t1314 = t1270*t1291;
  t1315 = t1311 + t1312 + t1313 + t1314;
  t1316 = 3.2*t1306*t1315;
  t1326 = -1.*t1288*t1310;
  t1328 = -1.*t1274*t1291;
  t1330 = t1326 + t1327 + t1328 + t1329;
  t1331 = 3.2*t1325*t1330;
  t1332 = t1265 + t1307 + t1316 + t1322 + t1331;
  t10948 = t1112*t1319;
  t11025 = t1304 + t10948;
  t13976 = t1112*t1288;
  t13978 = t13976 + t1324;
  t11294 = -1.*t1250*t1281;
  t11559 = 0.24*t1252*t1268;
  t13778 = t11294 + t11559;
  t10881 = t1112*t1270;
  t10934 = t10881 + t1320;
  t10945 = 3.2*t1300*t10934;
  t11107 = 3.2*t1293*t11025;
  t1336 = t1335*t1274;
  t1339 = t1270*t1338;
  t1340 = t1336 + t1312 + t1313 + t1339;
  t11160 = t1099*t1270;
  t11165 = t1112*t1274;
  t11168 = t11160 + t11165;
  t11256 = -1.*t1270*t1291;
  t13912 = -1.*t1284*t1319;
  t1342 = -1.*t1288*t1335;
  t1343 = -1.*t1274*t1338;
  t1344 = t1342 + t1327 + t1343 + t1329;
  t13981 = t1288*t1284;
  t14089 = -0.24*t1250*t1266;
  t14131 = t14089 + t11559;
  t14027 = t1291*t1319;
  t1341 = 3.2*t1306*t1340;
  t1345 = 3.2*t1325*t1344;
  t1346 = t1307 + t1341 + t1322 + t1345;
  t14042 = 3.2*t1315*t11025;
  t14086 = 3.2*t1340*t11025;
  t14087 = -1.*t1335*t1274;
  t14088 = -1.*t1288*t1338;
  t14145 = -1.*t1288*t14131;
  t14146 = -1.*t1310*t1319;
  t14147 = -1.*t1335*t1319;
  t14194 = t14087 + t1292 + t11256 + t14088 + t14145 + t14146 + t14147 + t13912;
  t14221 = 3.2*t11168*t14194;
  t14265 = 3.2*t13978*t1330;
  t14271 = 3.2*t13978*t1344;
  t14273 = t1288*t1310;
  t14274 = t1288*t1335;
  t14275 = t1335*t1270;
  t14276 = t1274*t1338;
  t14277 = t1274*t14131;
  t14280 = t14273 + t14274 + t13981 + t14275 + t1299 + t14276 + t14277 + t14027;
  t14281 = 3.2*t13978*t14280;
  t14292 = t10945 + t11107 + t14042 + t14086 + t14221 + t14265 + t14271 + t14281;
  t14409 = 3.2*t5045*t1188;
  t14414 = 3.2*t1206*t1361;
  t14376 = -1.*t1100*t1112;
  t14404 = -1.*t1099*t1113;
  t14405 = t14376 + t14404;
  t14406 = 6.8*t14405*t1138;
  t14442 = -1.*t1250*t1112;
  t14444 = -1.*t1099*t1252;
  t14448 = t14442 + t14444;
  t14461 = 6.8*t14448*t1264;
  t14489 = 3.2*t13978*t1293;
  t14491 = 3.2*t1300*t11025;
  t14410 = 3.2*t5045*t1201;
  t14415 = 3.2*t1376*t1221;
  t14416 = t14406 + t14409 + t14410 + t14414 + t14415;
  t14425 = 3.2*t5045*t1232;
  t14426 = 3.2*t1376*t1236;
  t14427 = t14409 + t14425 + t14414 + t14426;
  t14490 = 3.2*t13978*t1315;
  t14494 = 3.2*t11168*t1330;
  t14555 = t14461 + t14489 + t14490 + t14491 + t14494;
  t14570 = 3.2*t13978*t1340;
  t14571 = 3.2*t11168*t1344;
  t14572 = t14489 + t14570 + t14491 + t14571;
  t1247 = -1.*t1099*t1172;
  t1248 = t1207 + t1247;
  t1243 = -1.*t1099*t1199;
  t1244 = t1243 + t1173;
  t14639 = 3.2*t1248*t1188;
  t14645 = -1.*t1099*t1168;
  t14646 = -1.*t1112*t1210;
  t14648 = t14645 + t14646;
  t14649 = 3.2*t1206*t14648;
  t14633 = t1100*t1112;
  t14634 = t1099*t1113;
  t14635 = t14633 + t14634;
  t14637 = 6.8*t14635*t1138;
  t1296 = -1.*t1099*t1274;
  t14685 = t1250*t1112;
  t14686 = t1099*t1252;
  t14687 = t14685 + t14686;
  t14688 = 6.8*t14687*t1264;
  t1297 = t1295 + t1296;
  t14691 = -1.*t1099*t1288;
  t1271 = -1.*t1099*t1270;
  t1276 = t1271 + t1275;
  t14696 = 3.2*t1297*t1293;
  t14698 = -1.*t1112*t1319;
  t14699 = t14691 + t14698;
  t14700 = 3.2*t1300*t14699;
  t14640 = 3.2*t1248*t1201;
  t14650 = 3.2*t1244*t1221;
  t14651 = t14637 + t14639 + t14640 + t14649 + t14650;
  t1377 = -1.*t1193*t1172;
  t1378 = -2.*t1168*t1186;
  t2625 = -1.*t1168*t2580;
  t2642 = -2.*t1193*t1210;
  t3262 = t1377 + t1378 + t1379 + t2625 + t2642 + t3129;
  t5103 = 2.*t1168*t1193;
  t5111 = t1193*t1199;
  t5121 = 2.*t1172*t1186;
  t5136 = t1172*t2580;
  t5845 = t5103 + t5110 + t5111 + t5121 + t5136 + t5835;
  t14719 = 3.2*t1188*t1212;
  t14721 = t1374 + t14646;
  t14723 = 3.2*t1206*t14721;
  t14654 = 3.2*t1248*t1232;
  t14655 = 3.2*t1244*t1236;
  t14657 = t14639 + t14654 + t14649 + t14655;
  t14750 = 3.2*t1201*t1212;
  t14751 = 3.2*t1232*t1212;
  t14752 = 3.2*t1216*t9338;
  t14753 = 3.2*t1174*t1221;
  t14754 = 3.2*t1174*t1236;
  t14755 = 3.2*t1174*t9466;
  t14756 = t14719 + t14750 + t14751 + t14723 + t14752 + t14753 + t14754 + t14755;
  t10204 = -2.*t1168*t1229;
  t10217 = -2.*t1226*t1210;
  t10224 = t7949 + t1379 + t10204 + t9161 + t10217 + t3129;
  t10253 = 2.*t1168*t1226;
  t10648 = 2.*t1172*t1229;
  t10653 = t10253 + t5110 + t9455 + t10648 + t9464 + t5835;
  t14697 = 3.2*t1297*t1315;
  t14701 = 3.2*t1276*t1330;
  t14703 = t14688 + t14696 + t14697 + t14700 + t14701;
  t11185 = -1.*t1310*t1274;
  t11230 = -2.*t1288*t1291;
  t13830 = -1.*t1288*t13778;
  t13870 = -2.*t1310*t1319;
  t13919 = t11185 + t11230 + t11256 + t13830 + t13870 + t13912;
  t13980 = 2.*t1288*t1310;
  t14022 = t1310*t1270;
  t14023 = 2.*t1274*t1291;
  t14024 = t1274*t13778;
  t14038 = t13980 + t13981 + t14022 + t14023 + t14024 + t14027;
  t14795 = 3.2*t1293*t1321;
  t14797 = t11160 + t14698;
  t14798 = 3.2*t1300*t14797;
  t14706 = 3.2*t1297*t1340;
  t14711 = 3.2*t1276*t1344;
  t14712 = t14696 + t14706 + t14700 + t14711;
  t14812 = 3.2*t1315*t1321;
  t14813 = 3.2*t1340*t1321;
  t14817 = 3.2*t1325*t14194;
  t14827 = 3.2*t1306*t1330;
  t14828 = 3.2*t1306*t1344;
  t14829 = 3.2*t1306*t14280;
  t14830 = t14795 + t14812 + t14813 + t14798 + t14817 + t14827 + t14828 + t14829;
  t14328 = -2.*t1288*t1338;
  t14334 = -2.*t1335*t1319;
  t14335 = t14087 + t11256 + t14328 + t14145 + t14334 + t13912;
  t14338 = 2.*t1288*t1335;
  t14339 = 2.*t1274*t1338;
  t14340 = t14338 + t13981 + t14275 + t14339 + t14277 + t14027;
  t1224 = -0.5*var2[3]*t1223;
  t1240 = -0.5*var2[4]*t1238;
  t1241 = -2.88*t1099;
  t1245 = 3.2*t1244*t1188;
  t1249 = 3.2*t1248*t1206;
  t1294 = 3.2*t1276*t1293;
  t1301 = 3.2*t1297*t1300;
  t1302 = t1241 + t1139 + t1245 + t1249 + t1265 + t1294 + t1301;
  t1333 = -0.5*var2[5]*t1332;
  t1347 = -0.5*var2[6]*t1346;
  t1354 = -0.5*var2[2]*t1223;
  t9696 = -0.5*var2[2]*t1238;
  t10872 = -0.5*var2[2]*t1332;
  t14325 = -0.5*var2[2]*t1346;
  t14869 = 6.4*t1201*t1232;
  t14870 = 6.4*t1188*t9338;
  t14871 = 6.4*t1221*t1236;
  t14872 = 6.4*t1206*t9466;
  t14873 = t14869 + t14870 + t14871 + t14872;
  t14927 = 6.4*t1315*t1340;
  t14928 = 6.4*t1293*t14194;
  t14929 = 6.4*t1330*t1344;
  t14930 = 6.4*t1300*t14280;
  t14931 = t14927 + t14928 + t14929 + t14930;
  t14956 = 6.4*t1201*t1206;
  t14957 = 6.4*t1188*t1221;
  t14958 = t14956 + t14957;
  t14960 = 6.4*t1206*t1232;
  t14966 = 6.4*t1188*t1236;
  t14967 = t14960 + t14966;
  t14969 = 6.4*t1315*t1300;
  t14970 = 6.4*t1293*t1330;
  t14972 = t14969 + t14970;
  t14974 = 6.4*t1300*t1340;
  t14975 = 6.4*t1293*t1344;
  t14976 = t14974 + t14975;
  t14983 = t1179*t1151;
  t14984 = -0.24*t1140*t1151;
  t14985 = t14983 + t14984;
  t14987 = t1179*t1140;
  t14988 = Power(t1151,2);
  t14989 = 0.24*t14988;
  t14990 = t14987 + t14989;
  t14994 = -1.*t1179*t1151;
  t14995 = 0.24*t1140*t1151;
  t14996 = t14994 + t14995;
  t14997 = 3.2*t14996*t1201;
  t14998 = 3.2*t14985*t9338;
  t14999 = Power(t1140,2);
  t15000 = -0.24*t14999;
  t15001 = t14987 + t15000;
  t15002 = 3.2*t15001*t1221;
  t15003 = 3.2*t14990*t9466;
  t15004 = t14997 + t14998 + t15002 + t15003;
  t15022 = 3.2*t14990*t1201;
  t15023 = 3.2*t14985*t1221;
  t15024 = t15022 + t15023;
  t15026 = 3.2*t15001*t1188;
  t15027 = 3.2*t14996*t1206;
  t15028 = 3.2*t14990*t1232;
  t15029 = 3.2*t14985*t1236;
  t15030 = t15026 + t15027 + t15028 + t15029;
  t15048 = t1281*t1268;
  t15049 = -0.24*t1266*t1268;
  t15050 = t15048 + t15049;
  t15052 = t1281*t1266;
  t15053 = Power(t1268,2);
  t15054 = 0.24*t15053;
  t15055 = t15052 + t15054;
  t15059 = -1.*t1281*t1268;
  t15060 = 0.24*t1266*t1268;
  t15061 = t15059 + t15060;
  t15062 = 3.2*t15061*t1315;
  t15063 = 3.2*t15050*t14194;
  t15064 = Power(t1266,2);
  t15065 = -0.24*t15064;
  t15066 = t15052 + t15065;
  t15067 = 3.2*t15066*t1330;
  t15068 = 3.2*t15055*t14280;
  t15069 = t15062 + t15063 + t15067 + t15068;
  t15087 = 3.2*t15055*t1315;
  t15088 = 3.2*t15050*t1330;
  t15089 = t15087 + t15088;
  t15091 = 3.2*t15066*t1293;
  t15092 = 3.2*t15061*t1300;
  t15093 = 3.2*t15055*t1340;
  t15094 = 3.2*t15050*t1344;
  t15095 = t15091 + t15092 + t15093 + t15094;
  p_output1[0]=var2[2]*(t1224 + t1240 + t1333 + t1347 - 0.5*t1302*var2[2]);
  p_output1[1]=var2[2]*(t1354 - 0.5*(t1139 + t1359 + 6.4*t1201*t1361 + t1372 + 3.2*t1376*t3262 + 6.4*t1221*t5045 + 3.2*t5045*t5845)*var2[3] - 0.5*t9470*var2[4]);
  p_output1[2]=var2[2]*(t9696 - 0.5*t9470*var2[3] - 0.5*(t1359 + 6.4*t1232*t1361 + t1372 + 3.2*t10224*t1376 + 3.2*t10653*t5045 + 6.4*t1236*t5045)*var2[4]);
  p_output1[3]=var2[2]*(t10872 - 0.5*(t10945 + t11107 + t1265 + 6.4*t11025*t1315 + 3.2*t11168*t13919 + 6.4*t1330*t13978 + 3.2*t13978*t14038)*var2[5] - 0.5*t14292*var2[6]);
  p_output1[4]=var2[2]*(t14325 - 0.5*t14292*var2[5] - 0.5*(t10945 + t11107 + 6.4*t11025*t1340 + 6.4*t1344*t13978 + 3.2*t11168*t14335 + 3.2*t13978*t14340)*var2[6]);
  p_output1[5]=-1.*(-2.88*t1112 + 3.2*t1174*t1206 + 3.2*t1188*t1216 + 3.2*t1300*t1306 + 3.2*t1293*t1325 + t14406 + t14461)*var2[2] - 0.5*t14416*var2[3] - 0.5*t14427*var2[4] - 0.5*t14555*var2[5] - 0.5*t14572*var2[6];
  p_output1[6]=-0.5*t14416*var2[2];
  p_output1[7]=-0.5*t14427*var2[2];
  p_output1[8]=-0.5*t14555*var2[2];
  p_output1[9]=-0.5*t14572*var2[2];
  p_output1[10]=var2[2]*(-0.5*(2.88*t1112 + 3.2*t1293*(t10881 + t1296) + 3.2*t1188*(t1247 + t1355) + t14637 + 3.2*t1206*(t1375 + t14645) + t14688 + 3.2*t1300*(t11165 + t14691))*var2[2] - 0.5*t14651*var2[3] - 0.5*t14657*var2[4] - 0.5*t14703*var2[5] - 0.5*t14712*var2[6]);
  p_output1[11]=var2[2]*(-0.5*t14651*var2[2] - 0.5*(6.4*t1201*t1212 + 6.4*t1174*t1221 + t14637 + t14719 + t14723 + 3.2*t1216*t3262 + 3.2*t1174*t5845)*var2[3] - 0.5*t14756*var2[4]);
  p_output1[12]=var2[2]*(-0.5*t14657*var2[2] - 0.5*t14756*var2[3] - 0.5*(3.2*t10653*t1174 + 3.2*t10224*t1216 + 6.4*t1212*t1232 + 6.4*t1174*t1236 + t14719 + t14723)*var2[4]);
  p_output1[13]=var2[2]*(-0.5*t14703*var2[2] - 0.5*(6.4*t1315*t1321 + 6.4*t1306*t1330 + 3.2*t1325*t13919 + 3.2*t1306*t14038 + t14688 + t14795 + t14798)*var2[5] - 0.5*t14830*var2[6]);
  p_output1[14]=var2[2]*(-0.5*t14712*var2[2] - 0.5*t14830*var2[5] - 0.5*(6.4*t1321*t1340 + 6.4*t1306*t1344 + 3.2*t1325*t14335 + 3.2*t1306*t14340 + t14795 + t14798)*var2[6]);
  p_output1[15]=t1224 + t1240 + t1333 + t1347 - 1.*t1302*var2[2];
  p_output1[16]=t1354;
  p_output1[17]=t9696;
  p_output1[18]=t10872;
  p_output1[19]=t14325;
  p_output1[20]=var2[2]*(-0.5*(6.4*Power(t1201,2) + 6.4*Power(t1221,2) + 6.4*t1188*t3262 + 6.4*t1206*t5845)*var2[3] - 0.5*t14873*var2[4]);
  p_output1[21]=var2[2]*(-0.5*t14873*var2[3] - 0.5*(6.4*t10224*t1188 + 6.4*t10653*t1206 + 6.4*Power(t1232,2) + 6.4*Power(t1236,2))*var2[4]);
  p_output1[22]=var2[2]*(-0.5*(6.4*Power(t1315,2) + 6.4*Power(t1330,2) + 6.4*t1293*t13919 + 6.4*t1300*t14038)*var2[5] - 0.5*t14931*var2[6]);
  p_output1[23]=var2[2]*(-0.5*t14931*var2[5] - 0.5*(6.4*Power(t1340,2) + 6.4*Power(t1344,2) + 6.4*t1293*t14335 + 6.4*t1300*t14340)*var2[6]);
  p_output1[24]=-0.5*t14958*var2[3] - 0.5*t14967*var2[4] - 0.5*t14972*var2[5] - 0.5*t14976*var2[6];
  p_output1[25]=-0.5*t14958*var2[2];
  p_output1[26]=-0.5*t14967*var2[2];
  p_output1[27]=-0.5*t14972*var2[2];
  p_output1[28]=-0.5*t14976*var2[2];
  p_output1[29]=var2[2]*(-0.5*(3.2*t14985*t3262 + 3.2*t14990*t5845)*var2[3] - 0.5*t15004*var2[4]);
  p_output1[30]=var2[2]*(-0.5*t15004*var2[3] - 0.5*(3.2*t10224*t14985 + 3.2*t10653*t14990 + 3.2*t1188*t14996 + 6.4*t1232*t14996 + 3.2*t1206*(-1.*t1140*t1179 + 0.24*t14999) + 6.4*t1236*t15001)*var2[4]);
  p_output1[31]=-0.5*t15024*var2[3] - 0.5*t15030*var2[4];
  p_output1[32]=-0.5*t15024*var2[2];
  p_output1[33]=-0.5*t15030*var2[2];
  p_output1[34]=var2[2]*(-0.384*t5845*var2[3] - 0.384*t9466*var2[4]);
  p_output1[35]=var2[2]*(-0.384*t9466*var2[3] - 0.384*t10653*var2[4]);
  p_output1[36]=-0.384*t1201*var2[3] - 0.384*t1232*var2[4];
  p_output1[37]=-0.384*t1201*var2[2];
  p_output1[38]=-0.384*t1232*var2[2];
  p_output1[39]=var2[2]*(-0.5*(3.2*t13919*t15050 + 3.2*t14038*t15055)*var2[5] - 0.5*t15069*var2[6]);
  p_output1[40]=var2[2]*(-0.5*t15069*var2[5] - 0.5*(3.2*t14335*t15050 + 3.2*t14340*t15055 + 3.2*t1293*t15061 + 6.4*t1340*t15061 + 3.2*t1300*(-1.*t1266*t1281 + 0.24*t15064) + 6.4*t1344*t15066)*var2[6]);
  p_output1[41]=-0.5*t15089*var2[5] - 0.5*t15095*var2[6];
  p_output1[42]=-0.5*t15089*var2[2];
  p_output1[43]=-0.5*t15095*var2[2];
  p_output1[44]=var2[2]*(-0.384*t14038*var2[5] - 0.384*t14280*var2[6]);
  p_output1[45]=var2[2]*(-0.384*t14280*var2[5] - 0.384*t14340*var2[6]);
  p_output1[46]=-0.384*t1315*var2[5] - 0.384*t1340*var2[6];
  p_output1[47]=-0.384*t1315*var2[2];
  p_output1[48]=-0.384*t1340*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 49, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec3_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void J_Ce1_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
