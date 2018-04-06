/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include"num_out.h"
#include"num_in.h"
static int calcall[17];
static int particles[4]={0,0,0,0};
extern DNN S1_ext,S2_ext,S3_ext,S4_ext,S5_ext,S6_ext,S7_ext,S8_ext,S9_ext,
 S10_ext,S11_ext,S12_ext,S13_ext,S14_ext,S15_ext,S16_ext;
static  DNN * darr[16]={&S1_ext,&S2_ext,&S3_ext,&S4_ext,&S5_ext,&S6_ext,
 &S7_ext,&S8_ext,&S9_ext,&S10_ext,&S11_ext,&S12_ext,&S13_ext,&S14_ext,
 &S15_ext,&S16_ext};
double (*aWidth_ext)(char*)=NULL;
static int calcFunc_stat(void)
{
 REAL * V=va_ext;
 FError=0;
   V[23]=V[10]*pow(V[18],2)-pow(V[19],2)*V[9];
   if(!isfinite(V[23]) || FError){ return 23;}
   V[24]=asin(2*V[8]*V[18]*V[19]/(2*sqrt(pow(V[23],2)+pow(V[8]*V[18]*V[19],2))))/(2);
   if(!isfinite(V[24]) || FError){ return 24;}
   V[25]=atan((pow(V[11]*V[19]/(V[22]*cos(V[7])),2)-1)/(V[14]*tan(V[7])));
   if(!isfinite(V[25]) || FError){ return 25;}
   V[26]=cos(V[25]);
   if(!isfinite(V[26]) || FError){ return 26;}
   V[27]=sqrt(1-pow(V[26],2));
   if(!isfinite(V[27]) || FError){ return 27;}
   V[28]=cos(V[24]);
   if(!isfinite(V[28]) || FError){ return 28;}
   V[29]=sqrt(1-pow(V[28],2));
   if(!isfinite(V[29]) || FError){ return 29;}
return 0;
}

#define  cwb_1 NULL

#define  cwb_2 NULL

 static int cwb_3[4]=
       {
        2,3,2,0 
       };

 static int cwb_4[4]=
       {
        2,3,2,0 
       };

 static int cwb_5[4]=
       {
        2,3,2,0 
       };

 static int cwb_6[4]=
       {
        2,3,2,0 
       };

 static int cwb_7[4]=
       {
        2,3,2,0 
       };

 static int cwb_8[4]=
       {
        2,3,2,0 
       };

#define  cwb_9 NULL

#define  cwb_10 NULL

#define  cwb_11 NULL

#define  cwb_12 NULL

#define  cwb_13 NULL

#define  cwb_14 NULL

#define  cwb_15 NULL

#define  cwb_16 NULL
colorBasis  cb_ext[16]={
 { 0, 0,  cwb_1},
 { 0, 0,  cwb_2},
 { 1, 1,  cwb_3},
 { 1, 1,  cwb_4},
 { 1, 1,  cwb_5},
 { 1, 1,  cwb_6},
 { 1, 1,  cwb_7},
 { 1, 1,  cwb_8},
 { 0, 0,  cwb_9},
 { 0, 0,  cwb_10},
 { 0, 0,  cwb_11},
 { 0, 0,  cwb_12},
 { 0, 0,  cwb_13},
 { 0, 0,  cwb_14},
 { 0, 0,  cwb_15},
 { 0, 0,  cwb_16}
};
static int permMap[16][2]={
 {0,1}, {1,0}, {1,0}, {1,0}, {1,0}, {1,0}, {1,0}, {1,0}, {1,0}, {1,0}, {1,0}
 , {1,0}, {1,0}, {1,0}, {1,1}, {2,0}
};
static int permP[2][3]={

 // Z -> ~H ~H ,
{1,3,2},
 // Z -> ~x ~X ,
 // Z -> t T ,
 // Z -> b B ,
 // Z -> c C ,
 // Z -> s S ,
 // Z -> u U ,
 // Z -> d D ,
 // Z -> nl Nl ,
 // Z -> l L ,
 // Z -> nm Nm ,
 // Z -> m M ,
 // Z -> ne Ne ,
 // Z -> e E ,
 // Z -> h h ,
{1,3,2},
 // Z -> W+ W- 
};
static int permC[2][0]={
{},
{}
};
#include"sqme.inc"
