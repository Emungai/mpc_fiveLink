/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:20:21 GMT-05:00
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
  double t3336;
  double t3340;
  double t3287;
  double t3338;
  double t3598;
  double t3601;
  double t3638;
  double t3639;
  double t3640;
  double t3599;
  double t3602;
  double t3636;
  double t3643;
  double t3644;
  double t3664;
  double t3672;
  double t3678;
  double t3637;
  double t3641;
  double t3642;
  double t3682;
  double t3683;
  double t3684;
  double t3686;
  double t3700;
  double t3725;
  double t3801;
  double t3813;
  double t3814;
  double t3769;
  double t3770;
  double t3771;
  double t3834;
  double t3838;
  double t3839;
  double t3685;
  double t3755;
  double t3761;
  double t3768;
  double t3779;
  double t3783;
  double t3818;
  double t3819;
  double t3825;
  double t3830;
  double t3840;
  double t3841;
  double t3842;
  double t3853;
  double t3855;
  double t3856;
  double t3873;
  double t3874;
  double t3859;
  double t3883;
  double t3884;
  double t3868;
  double t3337;
  double t3343;
  double t3521;
  double t3537;
  double t3545;
  double t3571;
  double t3572;
  double t3573;
  double t3592;
  double t3914;
  double t3970;
  double t4033;
  double t4035;
  double t4041;
  double t4046;
  double t4047;
  double t4051;
  double t4052;
  double t4054;
  double t4055;
  double t4056;
  double t4083;
  double t4084;
  double t4085;
  double t4058;
  double t4059;
  double t4060;
  double t4034;
  double t4036;
  double t4038;
  double t4086;
  double t4087;
  double t4088;
  double t3956;
  double t3971;
  double t3972;
  double t3973;
  double t3994;
  double t3998;
  double t3999;
  double t4000;
  double t4019;
  double t4049;
  double t4061;
  double t4089;
  double t4090;
  double t4101;
  double t4102;
  double t4095;
  double t4096;
  double t4097;
  double t4092;
  double t4106;
  double t4107;
  double t4112;
  double t4121;
  double t4122;
  double t4124;
  double t4104;
  double t4115;
  double t4116;
  double t4125;
  double t4126;
  double t4127;
  double t4149;
  double t4150;
  double t4151;
  double t4160;
  double t4161;
  double t4153;
  double t4163;
  double t4164;
  double t4155;
  double t3772;
  double t3815;
  double t3816;
  double t3817;
  double t3857;
  double t3867;
  double t3869;
  double t3870;
  double t3871;
  double t4212;
  double t4213;
  double t4247;
  double t4248;
  double t4239;
  double t4240;
  double t4241;
  double t4201;
  double t4202;
  double t4207;
  double t4214;
  double t3875;
  double t3885;
  double t3886;
  double t4228;
  double t4229;
  double t4230;
  double t4235;
  double t4244;
  double t3888;
  double t3889;
  double t3890;
  double t4251;
  double t4274;
  double t4275;
  double t4259;
  double t3887;
  double t3892;
  double t3896;
  double t4270;
  double t4271;
  double t4272;
  double t4273;
  double t4276;
  double t4282;
  double t4283;
  double t4284;
  double t4285;
  double t4286;
  double t4292;
  double t4297;
  double t4298;
  double t4299;
  double t4303;
  double t4313;
  double t4314;
  double t4315;
  double t4316;
  double t4113;
  double t4117;
  double t4118;
  double t4120;
  double t4152;
  double t4154;
  double t4156;
  double t4157;
  double t4158;
  double t4355;
  double t4356;
  double t4379;
  double t4380;
  double t4370;
  double t4371;
  double t4373;
  double t4352;
  double t4353;
  double t4354;
  double t4357;
  double t4162;
  double t4165;
  double t4166;
  double t4359;
  double t4360;
  double t4361;
  double t4369;
  double t4376;
  double t4174;
  double t4178;
  double t4186;
  double t4383;
  double t4396;
  double t4397;
  double t4387;
  double t4167;
  double t4192;
  double t4196;
  double t4392;
  double t4393;
  double t4394;
  double t4395;
  double t4398;
  double t4399;
  double t4400;
  double t4401;
  double t4402;
  double t4403;
  double t4404;
  double t4405;
  double t4406;
  double t4407;
  double t4408;
  double t4409;
  double t4410;
  double t4411;
  double t4412;
  double t4436;
  double t4438;
  double t4432;
  double t4433;
  double t4434;
  double t4435;
  double t4449;
  double t4450;
  double t4451;
  double t4452;
  double t4457;
  double t4459;
  double t4437;
  double t4439;
  double t4440;
  double t4442;
  double t4443;
  double t4444;
  double t4458;
  double t4460;
  double t4461;
  double t4463;
  double t4464;
  double t4465;
  double t3911;
  double t3912;
  double t3908;
  double t3909;
  double t4476;
  double t4478;
  double t4479;
  double t4480;
  double t4481;
  double t4472;
  double t4473;
  double t4474;
  double t4475;
  double t4093;
  double t4494;
  double t4495;
  double t4496;
  double t4497;
  double t4094;
  double t4500;
  double t4040;
  double t4050;
  double t4505;
  double t4507;
  double t4508;
  double t4509;
  double t4477;
  double t4482;
  double t4483;
  double t4231;
  double t4234;
  double t4242;
  double t4243;
  double t4245;
  double t4250;
  double t4252;
  double t4253;
  double t4254;
  double t4263;
  double t4520;
  double t4522;
  double t4523;
  double t4485;
  double t4486;
  double t4487;
  double t4529;
  double t4530;
  double t4531;
  double t4532;
  double t4533;
  double t4534;
  double t4535;
  double t4328;
  double t4329;
  double t4330;
  double t4333;
  double t4334;
  double t4335;
  double t4506;
  double t4510;
  double t4511;
  double t4367;
  double t4368;
  double t4374;
  double t4375;
  double t4377;
  double t4382;
  double t4384;
  double t4385;
  double t4386;
  double t4388;
  double t4550;
  double t4552;
  double t4553;
  double t4513;
  double t4514;
  double t4515;
  double t4559;
  double t4560;
  double t4561;
  double t4562;
  double t4563;
  double t4564;
  double t4565;
  double t4419;
  double t4420;
  double t4421;
  double t4424;
  double t4425;
  double t4426;
  double t3872;
  double t3904;
  double t3906;
  double t3910;
  double t3913;
  double t4091;
  double t4098;
  double t4099;
  double t4159;
  double t4197;
  double t4200;
  double t4325;
  double t4348;
  double t4416;
  double t4589;
  double t4590;
  double t4591;
  double t4592;
  double t4593;
  double t4616;
  double t4617;
  double t4618;
  double t4619;
  double t4620;
  double t4635;
  double t4636;
  double t4637;
  double t4639;
  double t4640;
  double t4641;
  double t4643;
  double t4644;
  double t4645;
  double t4647;
  double t4648;
  double t4649;
  double t4656;
  double t4657;
  double t4658;
  double t4660;
  double t4661;
  double t4662;
  double t4663;
  double t4667;
  double t4668;
  double t4669;
  double t4670;
  double t4671;
  double t4672;
  double t4673;
  double t4674;
  double t4675;
  double t4676;
  double t4677;
  double t4695;
  double t4696;
  double t4697;
  double t4699;
  double t4700;
  double t4701;
  double t4702;
  double t4703;
  double t4721;
  double t4722;
  double t4723;
  double t4725;
  double t4726;
  double t4727;
  double t4728;
  double t4732;
  double t4733;
  double t4734;
  double t4735;
  double t4736;
  double t4737;
  double t4738;
  double t4739;
  double t4740;
  double t4741;
  double t4742;
  double t4760;
  double t4761;
  double t4762;
  double t4764;
  double t4765;
  double t4766;
  double t4767;
  double t4768;
  t3336 = Cos(var1[3]);
  t3340 = Sin(var1[3]);
  t3287 = Cos(var1[2]);
  t3338 = Sin(var1[2]);
  t3598 = Cos(var1[4]);
  t3601 = Sin(var1[4]);
  t3638 = t3336*t3598;
  t3639 = -1.*t3340*t3601;
  t3640 = t3638 + t3639;
  t3599 = -1.*t3598*t3340;
  t3602 = -1.*t3336*t3601;
  t3636 = t3599 + t3602;
  t3643 = -1.*t3598;
  t3644 = 1. + t3643;
  t3664 = 0.4*t3644;
  t3672 = 0.64*t3598;
  t3678 = t3664 + t3672;
  t3637 = t3287*t3636;
  t3641 = -1.*t3338*t3640;
  t3642 = t3637 + t3641;
  t3682 = t3678*t3340;
  t3683 = 0.24*t3336*t3601;
  t3684 = t3682 + t3683;
  t3686 = t3336*t3678;
  t3700 = -0.24*t3340*t3601;
  t3725 = t3686 + t3700;
  t3801 = t3598*t3340;
  t3813 = t3336*t3601;
  t3814 = t3801 + t3813;
  t3769 = -1.*t3678*t3340;
  t3770 = -0.24*t3336*t3601;
  t3771 = t3769 + t3770;
  t3834 = -1.*t3336*t3598;
  t3838 = t3340*t3601;
  t3839 = t3834 + t3838;
  t3685 = -1.*t3684*t3640;
  t3755 = -1.*t3636*t3725;
  t3761 = t3685 + t3755;
  t3768 = 3.2*t3642*t3761;
  t3779 = t3684*t3640;
  t3783 = t3636*t3725;
  t3818 = t3684*t3814;
  t3819 = t3640*t3725;
  t3825 = t3818 + t3819;
  t3830 = -1.*t3338*t3636;
  t3840 = t3287*t3839;
  t3841 = t3830 + t3840;
  t3842 = 3.2*t3825*t3841;
  t3853 = -1.*t3338*t3814;
  t3855 = t3287*t3640;
  t3856 = t3853 + t3855;
  t3873 = -0.24*t3598*t3340;
  t3874 = t3873 + t3770;
  t3859 = -1.*t3636*t3684;
  t3883 = 0.24*t3336*t3598;
  t3884 = t3883 + t3700;
  t3868 = -1.*t3725*t3839;
  t3337 = -1.*t3287*t3336;
  t3343 = t3338*t3340;
  t3521 = t3337 + t3343;
  t3537 = Power(t3336,2);
  t3545 = 0.11*t3537;
  t3571 = Power(t3340,2);
  t3572 = 0.11*t3571;
  t3573 = t3545 + t3572;
  t3592 = 6.8*t3521*t3573;
  t3914 = Cos(var1[5]);
  t3970 = Sin(var1[5]);
  t4033 = Cos(var1[6]);
  t4035 = Sin(var1[6]);
  t4041 = t3914*t4033;
  t4046 = -1.*t3970*t4035;
  t4047 = t4041 + t4046;
  t4051 = -1.*t4033;
  t4052 = 1. + t4051;
  t4054 = 0.4*t4052;
  t4055 = 0.64*t4033;
  t4056 = t4054 + t4055;
  t4083 = -1.*t4033*t3970;
  t4084 = -1.*t3914*t4035;
  t4085 = t4083 + t4084;
  t4058 = t4056*t3970;
  t4059 = 0.24*t3914*t4035;
  t4060 = t4058 + t4059;
  t4034 = t4033*t3970;
  t4036 = t3914*t4035;
  t4038 = t4034 + t4036;
  t4086 = t3914*t4056;
  t4087 = -0.24*t3970*t4035;
  t4088 = t4086 + t4087;
  t3956 = -1.*t3287*t3914;
  t3971 = t3338*t3970;
  t3972 = t3956 + t3971;
  t3973 = Power(t3914,2);
  t3994 = 0.11*t3973;
  t3998 = Power(t3970,2);
  t3999 = 0.11*t3998;
  t4000 = t3994 + t3999;
  t4019 = 6.8*t3972*t4000;
  t4049 = -1.*t3338*t4047;
  t4061 = -1.*t4060*t4047;
  t4089 = -1.*t4085*t4088;
  t4090 = t4061 + t4089;
  t4101 = t3287*t4085;
  t4102 = t4101 + t4049;
  t4095 = t4060*t4038;
  t4096 = t4047*t4088;
  t4097 = t4095 + t4096;
  t4092 = -1.*t3338*t4085;
  t4106 = -1.*t4056*t3970;
  t4107 = -0.24*t3914*t4035;
  t4112 = t4106 + t4107;
  t4121 = -1.*t3914*t4033;
  t4122 = t3970*t4035;
  t4124 = t4121 + t4122;
  t4104 = 3.2*t4102*t4090;
  t4115 = t4060*t4047;
  t4116 = t4085*t4088;
  t4125 = t3287*t4124;
  t4126 = t4092 + t4125;
  t4127 = 3.2*t4097*t4126;
  t4149 = -1.*t3338*t4038;
  t4150 = t3287*t4047;
  t4151 = t4149 + t4150;
  t4160 = -0.24*t4033*t3970;
  t4161 = t4160 + t4107;
  t4153 = -1.*t4085*t4060;
  t4163 = 0.24*t3914*t4033;
  t4164 = t4163 + t4087;
  t4155 = -1.*t4088*t4124;
  t3772 = t3771*t3640;
  t3815 = t3814*t3725;
  t3816 = t3772 + t3779 + t3783 + t3815;
  t3817 = 3.2*t3642*t3816;
  t3857 = -1.*t3636*t3771;
  t3867 = -1.*t3640*t3725;
  t3869 = t3857 + t3859 + t3867 + t3868;
  t3870 = 3.2*t3856*t3869;
  t3871 = t3592 + t3768 + t3817 + t3842 + t3870;
  t4212 = t3338*t3839;
  t4213 = t3637 + t4212;
  t4247 = t3338*t3636;
  t4248 = t4247 + t3855;
  t4239 = -1.*t3336*t3678;
  t4240 = 0.24*t3340*t3601;
  t4241 = t4239 + t4240;
  t4201 = t3338*t3814;
  t4202 = t4201 + t3840;
  t4207 = 3.2*t3825*t4202;
  t4214 = 3.2*t3761*t4213;
  t3875 = t3874*t3640;
  t3885 = t3814*t3884;
  t3886 = t3875 + t3779 + t3783 + t3885;
  t4228 = t3287*t3814;
  t4229 = t3338*t3640;
  t4230 = t4228 + t4229;
  t4235 = -1.*t3814*t3725;
  t4244 = -1.*t3684*t3839;
  t3888 = -1.*t3636*t3874;
  t3889 = -1.*t3640*t3884;
  t3890 = t3888 + t3859 + t3889 + t3868;
  t4251 = t3636*t3684;
  t4274 = -0.24*t3336*t3598;
  t4275 = t4274 + t4240;
  t4259 = t3725*t3839;
  t3887 = 3.2*t3642*t3886;
  t3892 = 3.2*t3856*t3890;
  t3896 = t3768 + t3887 + t3842 + t3892;
  t4270 = 3.2*t3816*t4213;
  t4271 = 3.2*t3886*t4213;
  t4272 = -1.*t3874*t3640;
  t4273 = -1.*t3636*t3884;
  t4276 = -1.*t3636*t4275;
  t4282 = -1.*t3771*t3839;
  t4283 = -1.*t3874*t3839;
  t4284 = t4272 + t3755 + t4235 + t4273 + t4276 + t4282 + t4283 + t4244;
  t4285 = 3.2*t4230*t4284;
  t4286 = 3.2*t4248*t3869;
  t4292 = 3.2*t4248*t3890;
  t4297 = t3636*t3771;
  t4298 = t3636*t3874;
  t4299 = t3874*t3814;
  t4303 = t3640*t3884;
  t4313 = t3640*t4275;
  t4314 = t4297 + t4298 + t4251 + t4299 + t3819 + t4303 + t4313 + t4259;
  t4315 = 3.2*t4248*t4314;
  t4316 = t4207 + t4214 + t4270 + t4271 + t4285 + t4286 + t4292 + t4315;
  t4113 = t4112*t4047;
  t4117 = t4038*t4088;
  t4118 = t4113 + t4115 + t4116 + t4117;
  t4120 = 3.2*t4102*t4118;
  t4152 = -1.*t4085*t4112;
  t4154 = -1.*t4047*t4088;
  t4156 = t4152 + t4153 + t4154 + t4155;
  t4157 = 3.2*t4151*t4156;
  t4158 = t4019 + t4104 + t4120 + t4127 + t4157;
  t4355 = t3338*t4124;
  t4356 = t4101 + t4355;
  t4379 = t3338*t4085;
  t4380 = t4379 + t4150;
  t4370 = -1.*t3914*t4056;
  t4371 = 0.24*t3970*t4035;
  t4373 = t4370 + t4371;
  t4352 = t3338*t4038;
  t4353 = t4352 + t4125;
  t4354 = 3.2*t4097*t4353;
  t4357 = 3.2*t4090*t4356;
  t4162 = t4161*t4047;
  t4165 = t4038*t4164;
  t4166 = t4162 + t4115 + t4116 + t4165;
  t4359 = t3287*t4038;
  t4360 = t3338*t4047;
  t4361 = t4359 + t4360;
  t4369 = -1.*t4038*t4088;
  t4376 = -1.*t4060*t4124;
  t4174 = -1.*t4085*t4161;
  t4178 = -1.*t4047*t4164;
  t4186 = t4174 + t4153 + t4178 + t4155;
  t4383 = t4085*t4060;
  t4396 = -0.24*t3914*t4033;
  t4397 = t4396 + t4371;
  t4387 = t4088*t4124;
  t4167 = 3.2*t4102*t4166;
  t4192 = 3.2*t4151*t4186;
  t4196 = t4104 + t4167 + t4127 + t4192;
  t4392 = 3.2*t4118*t4356;
  t4393 = 3.2*t4166*t4356;
  t4394 = -1.*t4161*t4047;
  t4395 = -1.*t4085*t4164;
  t4398 = -1.*t4085*t4397;
  t4399 = -1.*t4112*t4124;
  t4400 = -1.*t4161*t4124;
  t4401 = t4394 + t4089 + t4369 + t4395 + t4398 + t4399 + t4400 + t4376;
  t4402 = 3.2*t4361*t4401;
  t4403 = 3.2*t4380*t4156;
  t4404 = 3.2*t4380*t4186;
  t4405 = t4085*t4112;
  t4406 = t4085*t4161;
  t4407 = t4161*t4038;
  t4408 = t4047*t4164;
  t4409 = t4047*t4397;
  t4410 = t4405 + t4406 + t4383 + t4407 + t4096 + t4408 + t4409 + t4387;
  t4411 = 3.2*t4380*t4410;
  t4412 = t4354 + t4357 + t4392 + t4393 + t4402 + t4403 + t4404 + t4411;
  t4436 = 3.2*t4248*t3761;
  t4438 = 3.2*t3825*t4213;
  t4432 = -1.*t3336*t3338;
  t4433 = -1.*t3287*t3340;
  t4434 = t4432 + t4433;
  t4435 = 6.8*t4434*t3573;
  t4449 = -1.*t3914*t3338;
  t4450 = -1.*t3287*t3970;
  t4451 = t4449 + t4450;
  t4452 = 6.8*t4451*t4000;
  t4457 = 3.2*t4380*t4090;
  t4459 = 3.2*t4097*t4356;
  t4437 = 3.2*t4248*t3816;
  t4439 = 3.2*t4230*t3869;
  t4440 = t4435 + t4436 + t4437 + t4438 + t4439;
  t4442 = 3.2*t4248*t3886;
  t4443 = 3.2*t4230*t3890;
  t4444 = t4436 + t4442 + t4438 + t4443;
  t4458 = 3.2*t4380*t4118;
  t4460 = 3.2*t4361*t4156;
  t4461 = t4452 + t4457 + t4458 + t4459 + t4460;
  t4463 = 3.2*t4380*t4166;
  t4464 = 3.2*t4361*t4186;
  t4465 = t4457 + t4463 + t4459 + t4464;
  t3911 = -1.*t3287*t3640;
  t3912 = t3830 + t3911;
  t3908 = -1.*t3287*t3814;
  t3909 = t3908 + t3641;
  t4476 = 3.2*t3912*t3761;
  t4478 = -1.*t3287*t3636;
  t4479 = -1.*t3338*t3839;
  t4480 = t4478 + t4479;
  t4481 = 3.2*t3825*t4480;
  t4472 = t3336*t3338;
  t4473 = t3287*t3340;
  t4474 = t4472 + t4473;
  t4475 = 6.8*t4474*t3573;
  t4093 = -1.*t3287*t4047;
  t4494 = t3914*t3338;
  t4495 = t3287*t3970;
  t4496 = t4494 + t4495;
  t4497 = 6.8*t4496*t4000;
  t4094 = t4092 + t4093;
  t4500 = -1.*t3287*t4085;
  t4040 = -1.*t3287*t4038;
  t4050 = t4040 + t4049;
  t4505 = 3.2*t4094*t4090;
  t4507 = -1.*t3338*t4124;
  t4508 = t4500 + t4507;
  t4509 = 3.2*t4097*t4508;
  t4477 = 3.2*t3912*t3816;
  t4482 = 3.2*t3909*t3869;
  t4483 = t4475 + t4476 + t4477 + t4481 + t4482;
  t4231 = -1.*t3771*t3640;
  t4234 = -2.*t3636*t3725;
  t4242 = -1.*t3636*t4241;
  t4243 = -2.*t3771*t3839;
  t4245 = t4231 + t4234 + t4235 + t4242 + t4243 + t4244;
  t4250 = 2.*t3636*t3771;
  t4252 = t3771*t3814;
  t4253 = 2.*t3640*t3725;
  t4254 = t3640*t4241;
  t4263 = t4250 + t4251 + t4252 + t4253 + t4254 + t4259;
  t4520 = 3.2*t3761*t3841;
  t4522 = t4228 + t4479;
  t4523 = 3.2*t3825*t4522;
  t4485 = 3.2*t3912*t3886;
  t4486 = 3.2*t3909*t3890;
  t4487 = t4476 + t4485 + t4481 + t4486;
  t4529 = 3.2*t3816*t3841;
  t4530 = 3.2*t3886*t3841;
  t4531 = 3.2*t3856*t4284;
  t4532 = 3.2*t3642*t3869;
  t4533 = 3.2*t3642*t3890;
  t4534 = 3.2*t3642*t4314;
  t4535 = t4520 + t4529 + t4530 + t4523 + t4531 + t4532 + t4533 + t4534;
  t4328 = -2.*t3636*t3884;
  t4329 = -2.*t3874*t3839;
  t4330 = t4272 + t4235 + t4328 + t4276 + t4329 + t4244;
  t4333 = 2.*t3636*t3874;
  t4334 = 2.*t3640*t3884;
  t4335 = t4333 + t4251 + t4299 + t4334 + t4313 + t4259;
  t4506 = 3.2*t4094*t4118;
  t4510 = 3.2*t4050*t4156;
  t4511 = t4497 + t4505 + t4506 + t4509 + t4510;
  t4367 = -1.*t4112*t4047;
  t4368 = -2.*t4085*t4088;
  t4374 = -1.*t4085*t4373;
  t4375 = -2.*t4112*t4124;
  t4377 = t4367 + t4368 + t4369 + t4374 + t4375 + t4376;
  t4382 = 2.*t4085*t4112;
  t4384 = t4112*t4038;
  t4385 = 2.*t4047*t4088;
  t4386 = t4047*t4373;
  t4388 = t4382 + t4383 + t4384 + t4385 + t4386 + t4387;
  t4550 = 3.2*t4090*t4126;
  t4552 = t4359 + t4507;
  t4553 = 3.2*t4097*t4552;
  t4513 = 3.2*t4094*t4166;
  t4514 = 3.2*t4050*t4186;
  t4515 = t4505 + t4513 + t4509 + t4514;
  t4559 = 3.2*t4118*t4126;
  t4560 = 3.2*t4166*t4126;
  t4561 = 3.2*t4151*t4401;
  t4562 = 3.2*t4102*t4156;
  t4563 = 3.2*t4102*t4186;
  t4564 = 3.2*t4102*t4410;
  t4565 = t4550 + t4559 + t4560 + t4553 + t4561 + t4562 + t4563 + t4564;
  t4419 = -2.*t4085*t4164;
  t4420 = -2.*t4161*t4124;
  t4421 = t4394 + t4369 + t4419 + t4398 + t4420 + t4376;
  t4424 = 2.*t4085*t4161;
  t4425 = 2.*t4047*t4164;
  t4426 = t4424 + t4383 + t4407 + t4425 + t4409 + t4387;
  t3872 = -0.5*var2[3]*t3871;
  t3904 = -0.5*var2[4]*t3896;
  t3906 = -2.88*t3287;
  t3910 = 3.2*t3909*t3761;
  t3913 = 3.2*t3912*t3825;
  t4091 = 3.2*t4050*t4090;
  t4098 = 3.2*t4094*t4097;
  t4099 = t3906 + t3592 + t3910 + t3913 + t4019 + t4091 + t4098;
  t4159 = -0.5*var2[5]*t4158;
  t4197 = -0.5*var2[6]*t4196;
  t4200 = -0.5*var2[2]*t3871;
  t4325 = -0.5*var2[2]*t3896;
  t4348 = -0.5*var2[2]*t4158;
  t4416 = -0.5*var2[2]*t4196;
  t4589 = 6.4*t3816*t3886;
  t4590 = 6.4*t3761*t4284;
  t4591 = 6.4*t3869*t3890;
  t4592 = 6.4*t3825*t4314;
  t4593 = t4589 + t4590 + t4591 + t4592;
  t4616 = 6.4*t4118*t4166;
  t4617 = 6.4*t4090*t4401;
  t4618 = 6.4*t4156*t4186;
  t4619 = 6.4*t4097*t4410;
  t4620 = t4616 + t4617 + t4618 + t4619;
  t4635 = 6.4*t3816*t3825;
  t4636 = 6.4*t3761*t3869;
  t4637 = t4635 + t4636;
  t4639 = 6.4*t3825*t3886;
  t4640 = 6.4*t3761*t3890;
  t4641 = t4639 + t4640;
  t4643 = 6.4*t4118*t4097;
  t4644 = 6.4*t4090*t4156;
  t4645 = t4643 + t4644;
  t4647 = 6.4*t4097*t4166;
  t4648 = 6.4*t4090*t4186;
  t4649 = t4647 + t4648;
  t4656 = t3678*t3601;
  t4657 = -0.24*t3598*t3601;
  t4658 = t4656 + t4657;
  t4660 = t3678*t3598;
  t4661 = Power(t3601,2);
  t4662 = 0.24*t4661;
  t4663 = t4660 + t4662;
  t4667 = -1.*t3678*t3601;
  t4668 = 0.24*t3598*t3601;
  t4669 = t4667 + t4668;
  t4670 = 3.2*t4669*t3816;
  t4671 = 3.2*t4658*t4284;
  t4672 = Power(t3598,2);
  t4673 = -0.24*t4672;
  t4674 = t4660 + t4673;
  t4675 = 3.2*t4674*t3869;
  t4676 = 3.2*t4663*t4314;
  t4677 = t4670 + t4671 + t4675 + t4676;
  t4695 = 3.2*t4663*t3816;
  t4696 = 3.2*t4658*t3869;
  t4697 = t4695 + t4696;
  t4699 = 3.2*t4674*t3761;
  t4700 = 3.2*t4669*t3825;
  t4701 = 3.2*t4663*t3886;
  t4702 = 3.2*t4658*t3890;
  t4703 = t4699 + t4700 + t4701 + t4702;
  t4721 = t4056*t4035;
  t4722 = -0.24*t4033*t4035;
  t4723 = t4721 + t4722;
  t4725 = t4056*t4033;
  t4726 = Power(t4035,2);
  t4727 = 0.24*t4726;
  t4728 = t4725 + t4727;
  t4732 = -1.*t4056*t4035;
  t4733 = 0.24*t4033*t4035;
  t4734 = t4732 + t4733;
  t4735 = 3.2*t4734*t4118;
  t4736 = 3.2*t4723*t4401;
  t4737 = Power(t4033,2);
  t4738 = -0.24*t4737;
  t4739 = t4725 + t4738;
  t4740 = 3.2*t4739*t4156;
  t4741 = 3.2*t4728*t4410;
  t4742 = t4735 + t4736 + t4740 + t4741;
  t4760 = 3.2*t4728*t4118;
  t4761 = 3.2*t4723*t4156;
  t4762 = t4760 + t4761;
  t4764 = 3.2*t4739*t4090;
  t4765 = 3.2*t4734*t4097;
  t4766 = 3.2*t4728*t4166;
  t4767 = 3.2*t4723*t4186;
  t4768 = t4764 + t4765 + t4766 + t4767;
  p_output1[0]=var2[2]*(t3872 + t3904 + t4159 + t4197 - 0.5*t4099*var2[2]);
  p_output1[1]=var2[2]*(t4200 - 0.5*(t3592 + t4207 + 6.4*t3816*t4213 + t4214 + 3.2*t4230*t4245 + 6.4*t3869*t4248 + 3.2*t4248*t4263)*var2[3] - 0.5*t4316*var2[4]);
  p_output1[2]=var2[2]*(t4325 - 0.5*t4316*var2[3] - 0.5*(t4207 + 6.4*t3886*t4213 + t4214 + 6.4*t3890*t4248 + 3.2*t4230*t4330 + 3.2*t4248*t4335)*var2[4]);
  p_output1[3]=var2[2]*(t4348 - 0.5*(t4019 + t4354 + 6.4*t4118*t4356 + t4357 + 3.2*t4361*t4377 + 6.4*t4156*t4380 + 3.2*t4380*t4388)*var2[5] - 0.5*t4412*var2[6]);
  p_output1[4]=var2[2]*(t4416 - 0.5*t4412*var2[5] - 0.5*(t4354 + 6.4*t4166*t4356 + t4357 + 6.4*t4186*t4380 + 3.2*t4361*t4421 + 3.2*t4380*t4426)*var2[6]);
  p_output1[5]=-1.*(-2.88*t3338 + 3.2*t3642*t3825 + 3.2*t3761*t3856 + 3.2*t4097*t4102 + 3.2*t4090*t4151 + t4435 + t4452)*var2[2] - 0.5*t4440*var2[3] - 0.5*t4444*var2[4] - 0.5*t4461*var2[5] - 0.5*t4465*var2[6];
  p_output1[6]=-0.5*t4440*var2[2];
  p_output1[7]=-0.5*t4444*var2[2];
  p_output1[8]=-0.5*t4461*var2[2];
  p_output1[9]=-0.5*t4465*var2[2];
  p_output1[10]=var2[2]*(-0.5*(2.88*t3338 + 3.2*t3761*(t3911 + t4201) + 3.2*t4090*(t4093 + t4352) + t4475 + 3.2*t3825*(t4229 + t4478) + t4497 + 3.2*t4097*(t4360 + t4500))*var2[2] - 0.5*t4483*var2[3] - 0.5*t4487*var2[4] - 0.5*t4511*var2[5] - 0.5*t4515*var2[6]);
  p_output1[11]=var2[2]*(-0.5*t4483*var2[2] - 0.5*(6.4*t3816*t3841 + 6.4*t3642*t3869 + 3.2*t3856*t4245 + 3.2*t3642*t4263 + t4475 + t4520 + t4523)*var2[3] - 0.5*t4535*var2[4]);
  p_output1[12]=var2[2]*(-0.5*t4487*var2[2] - 0.5*t4535*var2[3] - 0.5*(6.4*t3841*t3886 + 6.4*t3642*t3890 + 3.2*t3856*t4330 + 3.2*t3642*t4335 + t4520 + t4523)*var2[4]);
  p_output1[13]=var2[2]*(-0.5*t4511*var2[2] - 0.5*(6.4*t4118*t4126 + 6.4*t4102*t4156 + 3.2*t4151*t4377 + 3.2*t4102*t4388 + t4497 + t4550 + t4553)*var2[5] - 0.5*t4565*var2[6]);
  p_output1[14]=var2[2]*(-0.5*t4515*var2[2] - 0.5*t4565*var2[5] - 0.5*(6.4*t4126*t4166 + 6.4*t4102*t4186 + 3.2*t4151*t4421 + 3.2*t4102*t4426 + t4550 + t4553)*var2[6]);
  p_output1[15]=t3872 + t3904 + t4159 + t4197 - 1.*t4099*var2[2];
  p_output1[16]=t4200;
  p_output1[17]=t4325;
  p_output1[18]=t4348;
  p_output1[19]=t4416;
  p_output1[20]=var2[2]*(-0.5*(6.4*Power(t3816,2) + 6.4*Power(t3869,2) + 6.4*t3761*t4245 + 6.4*t3825*t4263)*var2[3] - 0.5*t4593*var2[4]);
  p_output1[21]=var2[2]*(-0.5*t4593*var2[3] - 0.5*(6.4*Power(t3886,2) + 6.4*Power(t3890,2) + 6.4*t3761*t4330 + 6.4*t3825*t4335)*var2[4]);
  p_output1[22]=var2[2]*(-0.5*(6.4*Power(t4118,2) + 6.4*Power(t4156,2) + 6.4*t4090*t4377 + 6.4*t4097*t4388)*var2[5] - 0.5*t4620*var2[6]);
  p_output1[23]=var2[2]*(-0.5*t4620*var2[5] - 0.5*(6.4*Power(t4166,2) + 6.4*Power(t4186,2) + 6.4*t4090*t4421 + 6.4*t4097*t4426)*var2[6]);
  p_output1[24]=-0.5*t4637*var2[3] - 0.5*t4641*var2[4] - 0.5*t4645*var2[5] - 0.5*t4649*var2[6];
  p_output1[25]=-0.5*t4637*var2[2];
  p_output1[26]=-0.5*t4641*var2[2];
  p_output1[27]=-0.5*t4645*var2[2];
  p_output1[28]=-0.5*t4649*var2[2];
  p_output1[29]=var2[2]*(-0.5*(3.2*t4245*t4658 + 3.2*t4263*t4663)*var2[3] - 0.5*t4677*var2[4]);
  p_output1[30]=var2[2]*(-0.5*t4677*var2[3] - 0.5*(3.2*t4330*t4658 + 3.2*t4335*t4663 + 3.2*t3761*t4669 + 6.4*t3886*t4669 + 3.2*t3825*(-1.*t3598*t3678 + 0.24*t4672) + 6.4*t3890*t4674)*var2[4]);
  p_output1[31]=-0.5*t4697*var2[3] - 0.5*t4703*var2[4];
  p_output1[32]=-0.5*t4697*var2[2];
  p_output1[33]=-0.5*t4703*var2[2];
  p_output1[34]=var2[2]*(-0.384*t4263*var2[3] - 0.384*t4314*var2[4]);
  p_output1[35]=var2[2]*(-0.384*t4314*var2[3] - 0.384*t4335*var2[4]);
  p_output1[36]=-0.384*t3816*var2[3] - 0.384*t3886*var2[4];
  p_output1[37]=-0.384*t3816*var2[2];
  p_output1[38]=-0.384*t3886*var2[2];
  p_output1[39]=var2[2]*(-0.5*(3.2*t4377*t4723 + 3.2*t4388*t4728)*var2[5] - 0.5*t4742*var2[6]);
  p_output1[40]=var2[2]*(-0.5*t4742*var2[5] - 0.5*(3.2*t4421*t4723 + 3.2*t4426*t4728 + 3.2*t4090*t4734 + 6.4*t4166*t4734 + 3.2*t4097*(-1.*t4033*t4056 + 0.24*t4737) + 6.4*t4186*t4739)*var2[6]);
  p_output1[41]=-0.5*t4762*var2[5] - 0.5*t4768*var2[6];
  p_output1[42]=-0.5*t4762*var2[2];
  p_output1[43]=-0.5*t4768*var2[2];
  p_output1[44]=var2[2]*(-0.384*t4388*var2[5] - 0.384*t4410*var2[6]);
  p_output1[45]=var2[2]*(-0.384*t4410*var2[5] - 0.384*t4426*var2[6]);
  p_output1[46]=-0.384*t4118*var2[5] - 0.384*t4166*var2[6];
  p_output1[47]=-0.384*t4118*var2[2];
  p_output1[48]=-0.384*t4166*var2[2];
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

namespace LeftStance
{

void J_Ce1_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
