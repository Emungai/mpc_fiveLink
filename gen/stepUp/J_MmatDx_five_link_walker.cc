/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:20:11 GMT-05:00
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
  double t2713;
  double t2710;
  double t2711;
  double t2714;
  double t2718;
  double t2706;
  double t2719;
  double t2720;
  double t2721;
  double t2729;
  double t2730;
  double t2731;
  double t2732;
  double t2733;
  double t2712;
  double t2715;
  double t2716;
  double t2717;
  double t2722;
  double t2723;
  double t2754;
  double t2751;
  double t2752;
  double t2755;
  double t2759;
  double t2760;
  double t2761;
  double t2769;
  double t2770;
  double t2771;
  double t2772;
  double t2773;
  double t2753;
  double t2756;
  double t2757;
  double t2758;
  double t2762;
  double t2763;
  double t2725;
  double t2726;
  double t2727;
  double t2791;
  double t2792;
  double t2793;
  double t2741;
  double t2737;
  double t2738;
  double t2739;
  double t2740;
  double t2742;
  double t2765;
  double t2766;
  double t2767;
  double t2806;
  double t2807;
  double t2808;
  double t2781;
  double t2777;
  double t2778;
  double t2779;
  double t2780;
  double t2782;
  double t2795;
  double t2796;
  double t2797;
  double t2799;
  double t2800;
  double t2802;
  double t2803;
  double t2804;
  double t2810;
  double t2811;
  double t2812;
  double t2814;
  double t2815;
  double t2817;
  double t2818;
  double t2819;
  double t2872;
  double t2873;
  double t2874;
  double t2876;
  double t2877;
  double t2878;
  double t2892;
  double t2893;
  double t2894;
  double t2896;
  double t2897;
  double t2898;
  double t2728;
  double t2734;
  double t2735;
  double t2736;
  double t2744;
  double t2745;
  double t2746;
  double t2747;
  double t2909;
  double t2910;
  double t2911;
  double t2912;
  double t2913;
  double t2794;
  double t2798;
  double t2823;
  double t2824;
  double t2825;
  double t2826;
  double t2827;
  double t2828;
  double t2829;
  double t2830;
  double t2831;
  double t2832;
  double t2866;
  double t2867;
  double t2868;
  double t2869;
  double t2870;
  double t2871;
  double t2875;
  double t2879;
  double t2880;
  double t2882;
  double t2883;
  double t2884;
  double t2932;
  double t2933;
  double t2934;
  double t2914;
  double t2915;
  double t2916;
  double t2919;
  double t2920;
  double t2923;
  double t2924;
  double t2925;
  double t2926;
  double t2927;
  double t2928;
  double t2931;
  double t2936;
  double t2937;
  double t2941;
  double t2965;
  double t2966;
  double t2943;
  double t2968;
  double t2969;
  double t2945;
  double t2768;
  double t2774;
  double t2775;
  double t2776;
  double t2784;
  double t2785;
  double t2786;
  double t2787;
  double t2980;
  double t2981;
  double t2982;
  double t2983;
  double t2984;
  double t2809;
  double t2813;
  double t2843;
  double t2844;
  double t2845;
  double t2846;
  double t2847;
  double t2848;
  double t2849;
  double t2850;
  double t2851;
  double t2852;
  double t2886;
  double t2887;
  double t2888;
  double t2889;
  double t2890;
  double t2891;
  double t2895;
  double t2899;
  double t2900;
  double t2902;
  double t2903;
  double t2904;
  double t3003;
  double t3004;
  double t3005;
  double t2985;
  double t2986;
  double t2987;
  double t2990;
  double t2991;
  double t2994;
  double t2995;
  double t2996;
  double t2997;
  double t2998;
  double t2999;
  double t3002;
  double t3007;
  double t3008;
  double t3012;
  double t3036;
  double t3037;
  double t3014;
  double t3039;
  double t3040;
  double t3016;
  double t2833;
  double t2834;
  double t2840;
  double t2841;
  double t2853;
  double t2854;
  double t2860;
  double t2861;
  double t2835;
  double t2836;
  double t2837;
  double t2838;
  double t2839;
  double t2842;
  double t2855;
  double t2856;
  double t2857;
  double t2858;
  double t2859;
  double t2862;
  double t2863;
  double t3096;
  double t3107;
  double t2929;
  double t3117;
  double t2935;
  double t2938;
  double t2939;
  double t2942;
  double t2944;
  double t2946;
  double t3126;
  double t2955;
  double t2956;
  double t2957;
  double t3127;
  double t2951;
  double t2952;
  double t2953;
  double t3128;
  double t3131;
  double t3132;
  double t2963;
  double t3136;
  double t2967;
  double t2970;
  double t2971;
  double t3138;
  double t2973;
  double t2974;
  double t2975;
  double t3102;
  double t3110;
  double t3000;
  double t3120;
  double t3006;
  double t3009;
  double t3010;
  double t3013;
  double t3015;
  double t3017;
  double t3155;
  double t3026;
  double t3027;
  double t3028;
  double t3156;
  double t3022;
  double t3023;
  double t3024;
  double t3157;
  double t3160;
  double t3161;
  double t3034;
  double t3165;
  double t3038;
  double t3041;
  double t3042;
  double t3167;
  double t3044;
  double t3045;
  double t3046;
  double t3068;
  double t3069;
  double t3070;
  double t3071;
  double t3072;
  double t3073;
  double t3074;
  double t3075;
  double t3076;
  double t3051;
  double t3052;
  double t3053;
  double t3054;
  double t2865;
  double t2881;
  double t2885;
  double t2901;
  double t2905;
  double t2906;
  double t2743;
  double t2748;
  double t2749;
  double t2783;
  double t2788;
  double t2789;
  double t3116;
  double t3118;
  double t3119;
  double t3121;
  double t3122;
  double t3123;
  double t3137;
  double t3139;
  double t3140;
  double t2940;
  double t2947;
  double t2948;
  double t3150;
  double t3151;
  double t3152;
  double t2972;
  double t2976;
  double t2977;
  double t3166;
  double t3168;
  double t3169;
  double t3011;
  double t3018;
  double t3019;
  double t3179;
  double t3180;
  double t3181;
  double t3043;
  double t3047;
  double t3048;
  double t3077;
  double t3078;
  double t3079;
  double t3080;
  double t3081;
  double t3082;
  double t3083;
  double t3084;
  double t3097;
  double t3098;
  double t3099;
  double t3129;
  double t2917;
  double t3191;
  double t3192;
  double t3193;
  double t3143;
  double t3144;
  double t3145;
  double t2954;
  double t2958;
  double t2959;
  double t3203;
  double t3204;
  double t3205;
  double t3206;
  double t3207;
  double t3085;
  double t3086;
  double t3087;
  double t3088;
  double t3255;
  double t3256;
  double t3257;
  double t3258;
  double t3294;
  double t3295;
  double t3089;
  double t3185;
  double t3259;
  double t3260;
  double t3288;
  double t3289;
  double t3103;
  double t3104;
  double t3105;
  double t3158;
  double t2988;
  double t3217;
  double t3218;
  double t3219;
  double t3172;
  double t3173;
  double t3174;
  double t3025;
  double t3029;
  double t3030;
  double t3229;
  double t3230;
  double t3231;
  double t3232;
  double t3233;
  double t3090;
  double t3091;
  double t3092;
  double t3093;
  double t3261;
  double t3262;
  double t3263;
  double t3264;
  double t3327;
  double t3328;
  double t3094;
  double t3186;
  double t3265;
  double t3266;
  double t3321;
  double t3322;
  t2713 = Cos(var1[3]);
  t2710 = Cos(var1[4]);
  t2711 = Sin(var1[3]);
  t2714 = Sin(var1[4]);
  t2718 = Sin(var1[2]);
  t2706 = Cos(var1[2]);
  t2719 = t2713*t2710;
  t2720 = -1.*t2711*t2714;
  t2721 = t2719 + t2720;
  t2729 = -1.*t2710;
  t2730 = 1. + t2729;
  t2731 = 0.4*t2730;
  t2732 = 0.64*t2710;
  t2733 = t2731 + t2732;
  t2712 = -1.*t2710*t2711;
  t2715 = -1.*t2713*t2714;
  t2716 = t2712 + t2715;
  t2717 = t2706*t2716;
  t2722 = -1.*t2718*t2721;
  t2723 = t2717 + t2722;
  t2754 = Cos(var1[5]);
  t2751 = Cos(var1[6]);
  t2752 = Sin(var1[5]);
  t2755 = Sin(var1[6]);
  t2759 = t2754*t2751;
  t2760 = -1.*t2752*t2755;
  t2761 = t2759 + t2760;
  t2769 = -1.*t2751;
  t2770 = 1. + t2769;
  t2771 = 0.4*t2770;
  t2772 = 0.64*t2751;
  t2773 = t2771 + t2772;
  t2753 = -1.*t2751*t2752;
  t2756 = -1.*t2754*t2755;
  t2757 = t2753 + t2756;
  t2758 = t2706*t2757;
  t2762 = -1.*t2718*t2761;
  t2763 = t2758 + t2762;
  t2725 = -1.*t2713*t2718;
  t2726 = -1.*t2706*t2711;
  t2727 = t2725 + t2726;
  t2791 = t2706*t2713;
  t2792 = -1.*t2718*t2711;
  t2793 = t2791 + t2792;
  t2741 = t2706*t2721;
  t2737 = t2710*t2711;
  t2738 = t2713*t2714;
  t2739 = t2737 + t2738;
  t2740 = -1.*t2718*t2739;
  t2742 = t2740 + t2741;
  t2765 = -1.*t2754*t2718;
  t2766 = -1.*t2706*t2752;
  t2767 = t2765 + t2766;
  t2806 = t2706*t2754;
  t2807 = -1.*t2718*t2752;
  t2808 = t2806 + t2807;
  t2781 = t2706*t2761;
  t2777 = t2751*t2752;
  t2778 = t2754*t2755;
  t2779 = t2777 + t2778;
  t2780 = -1.*t2718*t2779;
  t2782 = t2780 + t2781;
  t2795 = t2713*t2718;
  t2796 = t2706*t2711;
  t2797 = t2795 + t2796;
  t2799 = t2718*t2716;
  t2800 = t2799 + t2741;
  t2802 = t2706*t2739;
  t2803 = t2718*t2721;
  t2804 = t2802 + t2803;
  t2810 = t2754*t2718;
  t2811 = t2706*t2752;
  t2812 = t2810 + t2811;
  t2814 = t2718*t2757;
  t2815 = t2814 + t2781;
  t2817 = t2706*t2779;
  t2818 = t2718*t2761;
  t2819 = t2817 + t2818;
  t2872 = t2733*t2711;
  t2873 = 0.24*t2713*t2714;
  t2874 = t2872 + t2873;
  t2876 = t2713*t2733;
  t2877 = -0.24*t2711*t2714;
  t2878 = t2876 + t2877;
  t2892 = t2773*t2752;
  t2893 = 0.24*t2754*t2755;
  t2894 = t2892 + t2893;
  t2896 = t2754*t2773;
  t2897 = -0.24*t2752*t2755;
  t2898 = t2896 + t2897;
  t2728 = -0.748*t2727;
  t2734 = t2733*t2714;
  t2735 = -0.24*t2710*t2714;
  t2736 = t2734 + t2735;
  t2744 = t2733*t2710;
  t2745 = Power(t2714,2);
  t2746 = 0.24*t2745;
  t2747 = t2744 + t2746;
  t2909 = -1.*t2713*t2710;
  t2910 = t2711*t2714;
  t2911 = t2909 + t2910;
  t2912 = t2718*t2911;
  t2913 = t2717 + t2912;
  t2794 = -13.6*t2727*t2793;
  t2798 = -13.6*t2797*t2793;
  t2823 = Power(t2727,2);
  t2824 = -6.8*t2823;
  t2825 = -6.8*t2727*t2797;
  t2826 = Power(t2793,2);
  t2827 = -6.8*t2826;
  t2828 = -1.*t2706*t2713;
  t2829 = t2718*t2711;
  t2830 = t2828 + t2829;
  t2831 = -6.8*t2793*t2830;
  t2832 = -1.*t2718*t2716;
  t2866 = Power(t2713,2);
  t2867 = 0.11*t2866;
  t2868 = Power(t2711,2);
  t2869 = 0.11*t2868;
  t2870 = t2867 + t2869;
  t2871 = -6.8*t2727*t2870;
  t2875 = -1.*t2874*t2721;
  t2879 = -1.*t2716*t2878;
  t2880 = t2875 + t2879;
  t2882 = t2874*t2739;
  t2883 = t2721*t2878;
  t2884 = t2882 + t2883;
  t2932 = -1.*t2733*t2711;
  t2933 = -0.24*t2713*t2714;
  t2934 = t2932 + t2933;
  t2914 = -0.768*var2[4]*t2913;
  t2915 = -3.2*t2736*t2800;
  t2916 = -3.2*t2747*t2913;
  t2919 = -6.4*t2800*t2804;
  t2920 = -6.4*t2800*t2913;
  t2923 = -3.2*t2800*t2742;
  t2924 = -3.2*t2723*t2804;
  t2925 = t2706*t2911;
  t2926 = t2832 + t2925;
  t2927 = -3.2*t2800*t2926;
  t2928 = -3.2*t2723*t2913;
  t2931 = -3.2*t2800*t2880;
  t2936 = t2874*t2721;
  t2937 = t2716*t2878;
  t2941 = -3.2*t2884*t2913;
  t2965 = -0.24*t2710*t2711;
  t2966 = t2965 + t2933;
  t2943 = -1.*t2716*t2874;
  t2968 = 0.24*t2713*t2710;
  t2969 = t2968 + t2877;
  t2945 = -1.*t2878*t2911;
  t2768 = -0.748*t2767;
  t2774 = t2773*t2755;
  t2775 = -0.24*t2751*t2755;
  t2776 = t2774 + t2775;
  t2784 = t2773*t2751;
  t2785 = Power(t2755,2);
  t2786 = 0.24*t2785;
  t2787 = t2784 + t2786;
  t2980 = -1.*t2754*t2751;
  t2981 = t2752*t2755;
  t2982 = t2980 + t2981;
  t2983 = t2718*t2982;
  t2984 = t2758 + t2983;
  t2809 = -13.6*t2767*t2808;
  t2813 = -13.6*t2812*t2808;
  t2843 = Power(t2767,2);
  t2844 = -6.8*t2843;
  t2845 = -6.8*t2767*t2812;
  t2846 = Power(t2808,2);
  t2847 = -6.8*t2846;
  t2848 = -1.*t2706*t2754;
  t2849 = t2718*t2752;
  t2850 = t2848 + t2849;
  t2851 = -6.8*t2808*t2850;
  t2852 = -1.*t2718*t2757;
  t2886 = Power(t2754,2);
  t2887 = 0.11*t2886;
  t2888 = Power(t2752,2);
  t2889 = 0.11*t2888;
  t2890 = t2887 + t2889;
  t2891 = -6.8*t2767*t2890;
  t2895 = -1.*t2894*t2761;
  t2899 = -1.*t2757*t2898;
  t2900 = t2895 + t2899;
  t2902 = t2894*t2779;
  t2903 = t2761*t2898;
  t2904 = t2902 + t2903;
  t3003 = -1.*t2773*t2752;
  t3004 = -0.24*t2754*t2755;
  t3005 = t3003 + t3004;
  t2985 = -0.768*var2[6]*t2984;
  t2986 = -3.2*t2776*t2815;
  t2987 = -3.2*t2787*t2984;
  t2990 = -6.4*t2815*t2819;
  t2991 = -6.4*t2815*t2984;
  t2994 = -3.2*t2815*t2782;
  t2995 = -3.2*t2763*t2819;
  t2996 = t2706*t2982;
  t2997 = t2852 + t2996;
  t2998 = -3.2*t2815*t2997;
  t2999 = -3.2*t2763*t2984;
  t3002 = -3.2*t2815*t2900;
  t3007 = t2894*t2761;
  t3008 = t2757*t2898;
  t3012 = -3.2*t2904*t2984;
  t3036 = -0.24*t2751*t2752;
  t3037 = t3036 + t3004;
  t3014 = -1.*t2757*t2894;
  t3039 = 0.24*t2754*t2751;
  t3040 = t3039 + t2897;
  t3016 = -1.*t2898*t2982;
  t2833 = -1.*t2706*t2721;
  t2834 = t2832 + t2833;
  t2840 = -1.*t2706*t2739;
  t2841 = t2840 + t2722;
  t2853 = -1.*t2706*t2761;
  t2854 = t2852 + t2853;
  t2860 = -1.*t2706*t2779;
  t2861 = t2860 + t2762;
  t2835 = -3.2*t2834*t2800;
  t2836 = Power(t2742,2);
  t2837 = -3.2*t2836;
  t2838 = Power(t2723,2);
  t2839 = -3.2*t2838;
  t2842 = -3.2*t2841*t2804;
  t2855 = -3.2*t2854*t2815;
  t2856 = Power(t2782,2);
  t2857 = -3.2*t2856;
  t2858 = Power(t2763,2);
  t2859 = -3.2*t2858;
  t2862 = -3.2*t2861*t2819;
  t2863 = t2824 + t2825 + t2827 + t2831 + t2835 + t2837 + t2839 + t2842 + t2844 + t2845 + t2847 + t2851 + t2855 + t2857 + t2859 + t2862;
  t3096 = -0.748*t2830;
  t3107 = -13.6*t2727*t2830;
  t2929 = t2824 + t2825 + t2827 + t2831 + t2923 + t2924 + t2927 + t2928;
  t3117 = -6.8*t2830*t2870;
  t2935 = t2934*t2721;
  t2938 = t2739*t2878;
  t2939 = t2935 + t2936 + t2937 + t2938;
  t2942 = -1.*t2716*t2934;
  t2944 = -1.*t2721*t2878;
  t2946 = t2942 + t2943 + t2944 + t2945;
  t3126 = -0.768*var2[4]*t2926;
  t2955 = Power(t2710,2);
  t2956 = -0.24*t2955;
  t2957 = t2744 + t2956;
  t3127 = -3.2*t2736*t2723;
  t2951 = -1.*t2733*t2714;
  t2952 = 0.24*t2710*t2714;
  t2953 = t2951 + t2952;
  t3128 = -3.2*t2747*t2926;
  t3131 = -6.4*t2742*t2723;
  t3132 = -6.4*t2723*t2926;
  t2963 = t2923 + t2924 + t2927 + t2928;
  t3136 = -3.2*t2723*t2880;
  t2967 = t2966*t2721;
  t2970 = t2739*t2969;
  t2971 = t2967 + t2936 + t2937 + t2970;
  t3138 = -3.2*t2884*t2926;
  t2973 = -1.*t2716*t2966;
  t2974 = -1.*t2721*t2969;
  t2975 = t2973 + t2943 + t2974 + t2945;
  t3102 = -0.748*t2850;
  t3110 = -13.6*t2767*t2850;
  t3000 = t2844 + t2845 + t2847 + t2851 + t2994 + t2995 + t2998 + t2999;
  t3120 = -6.8*t2850*t2890;
  t3006 = t3005*t2761;
  t3009 = t2779*t2898;
  t3010 = t3006 + t3007 + t3008 + t3009;
  t3013 = -1.*t2757*t3005;
  t3015 = -1.*t2761*t2898;
  t3017 = t3013 + t3014 + t3015 + t3016;
  t3155 = -0.768*var2[6]*t2997;
  t3026 = Power(t2751,2);
  t3027 = -0.24*t3026;
  t3028 = t2784 + t3027;
  t3156 = -3.2*t2776*t2763;
  t3022 = -1.*t2773*t2755;
  t3023 = 0.24*t2751*t2755;
  t3024 = t3022 + t3023;
  t3157 = -3.2*t2787*t2997;
  t3160 = -6.4*t2782*t2763;
  t3161 = -6.4*t2763*t2997;
  t3034 = t2994 + t2995 + t2998 + t2999;
  t3165 = -3.2*t2763*t2900;
  t3038 = t3037*t2761;
  t3041 = t2779*t3040;
  t3042 = t3038 + t3007 + t3008 + t3041;
  t3167 = -3.2*t2904*t2997;
  t3044 = -1.*t2757*t3037;
  t3045 = -1.*t2761*t3040;
  t3046 = t3044 + t3014 + t3045 + t3016;
  t3068 = -6.8*t2727*t2793;
  t3069 = -6.8*t2797*t2793;
  t3070 = -3.2*t2800*t2723;
  t3071 = -3.2*t2742*t2804;
  t3072 = -6.8*t2767*t2808;
  t3073 = -6.8*t2812*t2808;
  t3074 = -3.2*t2815*t2763;
  t3075 = -3.2*t2782*t2819;
  t3076 = t3068 + t3069 + t3070 + t3071 + t3072 + t3073 + t3074 + t3075;
  t3051 = Power(t2706,2);
  t3052 = -12.*t3051;
  t3053 = Power(t2718,2);
  t3054 = -12.*t3053;
  t2865 = 2.88*t2718;
  t2881 = -3.2*t2742*t2880;
  t2885 = -3.2*t2723*t2884;
  t2901 = -3.2*t2782*t2900;
  t2905 = -3.2*t2763*t2904;
  t2906 = t2865 + t2871 + t2881 + t2885 + t2891 + t2901 + t2905;
  t2743 = -3.2*t2736*t2742;
  t2748 = -3.2*t2747*t2723;
  t2749 = t2728 + t2743 + t2748;
  t2783 = -3.2*t2776*t2782;
  t2788 = -3.2*t2787*t2763;
  t2789 = t2768 + t2783 + t2788;
  t3116 = 2.88*t2706;
  t3118 = -3.2*t2841*t2880;
  t3119 = -3.2*t2834*t2884;
  t3121 = -3.2*t2861*t2900;
  t3122 = -3.2*t2854*t2904;
  t3123 = t3116 + t3117 + t3118 + t3119 + t3120 + t3121 + t3122;
  t3137 = -3.2*t2723*t2939;
  t3139 = -3.2*t2742*t2946;
  t3140 = t3117 + t3136 + t3137 + t3138 + t3139;
  t2940 = -3.2*t2800*t2939;
  t2947 = -3.2*t2804*t2946;
  t2948 = t2871 + t2931 + t2940 + t2941 + t2947;
  t3150 = -3.2*t2723*t2971;
  t3151 = -3.2*t2742*t2975;
  t3152 = t3136 + t3150 + t3138 + t3151;
  t2972 = -3.2*t2800*t2971;
  t2976 = -3.2*t2804*t2975;
  t2977 = t2931 + t2972 + t2941 + t2976;
  t3166 = -3.2*t2763*t3010;
  t3168 = -3.2*t2782*t3017;
  t3169 = t3120 + t3165 + t3166 + t3167 + t3168;
  t3011 = -3.2*t2815*t3010;
  t3018 = -3.2*t2819*t3017;
  t3019 = t2891 + t3002 + t3011 + t3012 + t3018;
  t3179 = -3.2*t2763*t3042;
  t3180 = -3.2*t2782*t3046;
  t3181 = t3165 + t3179 + t3167 + t3180;
  t3043 = -3.2*t2815*t3042;
  t3047 = -3.2*t2819*t3046;
  t3048 = t3002 + t3043 + t3012 + t3047;
  t3077 = -2.88*t2706;
  t3078 = -6.8*t2793*t2870;
  t3079 = -3.2*t2804*t2880;
  t3080 = -3.2*t2800*t2884;
  t3081 = -6.8*t2808*t2890;
  t3082 = -3.2*t2819*t2900;
  t3083 = -3.2*t2815*t2904;
  t3084 = t3077 + t3078 + t3079 + t3080 + t3081 + t3082 + t3083;
  t3097 = -3.2*t2747*t2834;
  t3098 = -3.2*t2736*t2841;
  t3099 = t3096 + t3097 + t3098;
  t3129 = t3096 + t3127 + t3128;
  t2917 = t2728 + t2915 + t2916;
  t3191 = -3.2*t2747*t2939;
  t3192 = -3.2*t2736*t2946;
  t3193 = t3191 + t3192;
  t3143 = -3.2*t2957*t2742;
  t3144 = -3.2*t2953*t2723;
  t3145 = t3143 + t3127 + t3144 + t3128;
  t2954 = -3.2*t2953*t2800;
  t2958 = -3.2*t2957*t2804;
  t2959 = t2915 + t2954 + t2958 + t2916;
  t3203 = -3.2*t2957*t2880;
  t3204 = -3.2*t2953*t2884;
  t3205 = -3.2*t2747*t2971;
  t3206 = -3.2*t2736*t2975;
  t3207 = t3203 + t3204 + t3205 + t3206;
  t3085 = -0.748*t2793;
  t3086 = -3.2*t2747*t2800;
  t3087 = -3.2*t2736*t2804;
  t3088 = t3085 + t3086 + t3087;
  t3255 = -0.748*t2870;
  t3256 = -3.2*t2736*t2880;
  t3257 = -3.2*t2747*t2884;
  t3258 = -0.67 + t3255 + t3256 + t3257;
  t3294 = -0.768*var2[1]*t2926;
  t3295 = -0.768*var2[0]*t2913;
  t3089 = -0.768*t2800;
  t3185 = -0.768*t2723;
  t3259 = -0.768*t2884;
  t3260 = -0.2 + t3259;
  t3288 = -0.768*t2747;
  t3289 = -0.2 + t3288;
  t3103 = -3.2*t2787*t2854;
  t3104 = -3.2*t2776*t2861;
  t3105 = t3102 + t3103 + t3104;
  t3158 = t3102 + t3156 + t3157;
  t2988 = t2768 + t2986 + t2987;
  t3217 = -3.2*t2787*t3010;
  t3218 = -3.2*t2776*t3017;
  t3219 = t3217 + t3218;
  t3172 = -3.2*t3028*t2782;
  t3173 = -3.2*t3024*t2763;
  t3174 = t3172 + t3156 + t3173 + t3157;
  t3025 = -3.2*t3024*t2815;
  t3029 = -3.2*t3028*t2819;
  t3030 = t2986 + t3025 + t3029 + t2987;
  t3229 = -3.2*t3028*t2900;
  t3230 = -3.2*t3024*t2904;
  t3231 = -3.2*t2787*t3042;
  t3232 = -3.2*t2776*t3046;
  t3233 = t3229 + t3230 + t3231 + t3232;
  t3090 = -0.748*t2808;
  t3091 = -3.2*t2787*t2815;
  t3092 = -3.2*t2776*t2819;
  t3093 = t3090 + t3091 + t3092;
  t3261 = -0.748*t2890;
  t3262 = -3.2*t2776*t2900;
  t3263 = -3.2*t2787*t2904;
  t3264 = -0.67 + t3261 + t3262 + t3263;
  t3327 = -0.768*var2[1]*t2997;
  t3328 = -0.768*var2[0]*t2984;
  t3094 = -0.768*t2815;
  t3186 = -0.768*t2763;
  t3265 = -0.768*t2904;
  t3266 = -0.2 + t3265;
  t3321 = -0.768*t2787;
  t3322 = -0.2 + t3321;
  p_output1[0]=(t2794 + t2798 - 6.4*t2723*t2800 - 6.4*t2742*t2804 + t2809 + t2813 - 6.4*t2763*t2815 - 6.4*t2782*t2819)*var2[0] + t2863*var2[1] + t2906*var2[2] + t2749*var2[3] - 0.768*t2723*var2[4] + t2789*var2[5] - 0.768*t2763*var2[6];
  p_output1[1]=t2914 + (t2794 + t2798 + t2919 + t2920)*var2[0] + t2929*var2[1] + t2948*var2[2] + t2917*var2[3];
  p_output1[2]=t2914 + (t2919 + t2920)*var2[0] + t2963*var2[1] + t2977*var2[2] + t2959*var2[3];
  p_output1[3]=t2985 + (t2809 + t2813 + t2990 + t2991)*var2[0] + t3000*var2[1] + t3019*var2[2] + t2988*var2[5];
  p_output1[4]=t2985 + (t2990 + t2991)*var2[0] + t3034*var2[1] + t3048*var2[2] + t3030*var2[5];
  p_output1[5]=-6.8*Power(t2797,2) - 3.2*Power(t2800,2) - 3.2*Power(t2804,2) - 6.8*Power(t2812,2) - 3.2*Power(t2815,2) - 3.2*Power(t2819,2) + t2827 + t2847 + t3052 + t3054;
  p_output1[6]=t3076;
  p_output1[7]=t3084;
  p_output1[8]=t3088;
  p_output1[9]=t3089;
  p_output1[10]=t3093;
  p_output1[11]=t3094;
  p_output1[12]=t2863*var2[0] + (t2794 + t2809 - 6.4*t2723*t2834 - 6.4*t2742*t2841 - 6.4*t2763*t2854 - 6.4*t2782*t2861 + t3107 + t3110)*var2[1] + t3123*var2[2] + t3099*var2[3] - 0.768*t2834*var2[4] + t3105*var2[5] - 0.768*t2854*var2[6];
  p_output1[13]=t3126 + t2929*var2[0] + (t2794 + t3107 + t3131 + t3132)*var2[1] + t3140*var2[2] + t3129*var2[3];
  p_output1[14]=t3126 + t2963*var2[0] + (t3131 + t3132)*var2[1] + t3152*var2[2] + t3145*var2[3];
  p_output1[15]=t3155 + t3000*var2[0] + (t2809 + t3110 + t3160 + t3161)*var2[1] + t3169*var2[2] + t3158*var2[5];
  p_output1[16]=t3155 + t3034*var2[0] + (t3160 + t3161)*var2[1] + t3181*var2[2] + t3174*var2[5];
  p_output1[17]=t3076;
  p_output1[18]=t2824 + t2827 + t2837 + t2839 + t2844 + t2847 + t2857 + t2859 + t3052 + t3054;
  p_output1[19]=t2906;
  p_output1[20]=t2749;
  p_output1[21]=t3185;
  p_output1[22]=t2789;
  p_output1[23]=t3186;
  p_output1[24]=t2906*var2[0] + t3123*var2[1];
  p_output1[25]=t2948*var2[0] + t3140*var2[1] + (-6.4*t2884*t2939 - 6.4*t2880*t2946)*var2[2] + t3193*var2[3] - 0.768*t2939*var2[4];
  p_output1[26]=t2977*var2[0] + t3152*var2[1] + (-6.4*t2884*t2971 - 6.4*t2880*t2975)*var2[2] + t3207*var2[3] - 0.768*t2971*var2[4];
  p_output1[27]=t3019*var2[0] + t3169*var2[1] + (-6.4*t2904*t3010 - 6.4*t2900*t3017)*var2[2] + t3219*var2[5] - 0.768*t3010*var2[6];
  p_output1[28]=t3048*var2[0] + t3181*var2[1] + (-6.4*t2904*t3042 - 6.4*t2900*t3046)*var2[2] + t3233*var2[5] - 0.768*t3042*var2[6];
  p_output1[29]=t3084;
  p_output1[30]=t2906;
  p_output1[31]=-3.3612 - 6.8*Power(t2870,2) - 3.2*Power(t2880,2) - 3.2*Power(t2884,2) - 6.8*Power(t2890,2) - 3.2*Power(t2900,2) - 3.2*Power(t2904,2);
  p_output1[32]=t3258;
  p_output1[33]=t3260;
  p_output1[34]=t3264;
  p_output1[35]=t3266;
  p_output1[36]=t2749*var2[0] + t3099*var2[1];
  p_output1[37]=t2917*var2[0] + t3129*var2[1] + t3193*var2[2];
  p_output1[38]=t2959*var2[0] + t3145*var2[1] + t3207*var2[2] + (-6.4*t2747*t2953 - 6.4*t2736*t2957)*var2[3] - 0.768*t2953*var2[4];
  p_output1[39]=t3088;
  p_output1[40]=t2749;
  p_output1[41]=t3258;
  p_output1[42]=-1.58228 - 3.2*Power(t2736,2) - 3.2*Power(t2747,2);
  p_output1[43]=t3289;
  p_output1[44]=-0.768*t2723*var2[0] - 0.768*t2834*var2[1];
  p_output1[45]=t3294 + t3295 - 0.768*t2939*var2[2];
  p_output1[46]=t3294 + t3295 - 0.768*t2971*var2[2] - 0.768*t2953*var2[3];
  p_output1[47]=t3089;
  p_output1[48]=t3185;
  p_output1[49]=t3260;
  p_output1[50]=t3289;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t2789*var2[0] + t3105*var2[1];
  p_output1[53]=t2988*var2[0] + t3158*var2[1] + t3219*var2[2];
  p_output1[54]=t3030*var2[0] + t3174*var2[1] + t3233*var2[2] + (-6.4*t2787*t3024 - 6.4*t2776*t3028)*var2[5] - 0.768*t3024*var2[6];
  p_output1[55]=t3093;
  p_output1[56]=t2789;
  p_output1[57]=t3264;
  p_output1[58]=-1.58228 - 3.2*Power(t2776,2) - 3.2*Power(t2787,2);
  p_output1[59]=t3322;
  p_output1[60]=-0.768*t2763*var2[0] - 0.768*t2854*var2[1];
  p_output1[61]=t3327 + t3328 - 0.768*t3010*var2[2];
  p_output1[62]=t3327 + t3328 - 0.768*t3042*var2[2] - 0.768*t3024*var2[5];
  p_output1[63]=t3094;
  p_output1[64]=t3186;
  p_output1[65]=t3266;
  p_output1[66]=t3322;
  p_output1[67]=-1.2143199999999998;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 68, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_MmatDx_five_link_walker.hh"

namespace LeftStance
{

void J_MmatDx_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
