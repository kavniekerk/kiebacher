/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include"num_out.h"
#include"num_in.h"
static int calcall[2];
static int particles[6]={0,0,0,0,0,0};
extern DNN S1_p19p19_p19a19a19_u;
static  DNN * darr[1]={&S1_p19p19_p19a19a19_u};
double (*aWidth_p19p19_p19a19a19_u)(char*)=NULL;
static int calcFunc_stat(void)
{
 REAL * V=va_p19p19_p19a19a19_u;
 FError=0;
   V[15]=sqrt(1-pow(V[8],2));
   if(!isfinite(V[15]) || FError){ return 15;}
   V[16]=sqrt(1-pow(V[9],2));
   if(!isfinite(V[16]) || FError){ return 16;}
   V[17]=-(V[11]*V[10]*V[15]+V[12]*V[3]*V[8]);
   if(!isfinite(V[17]) || FError){ return 17;}
   V[18]=-(V[11]*V[10]*V[8]-V[12]*V[3]*V[15]);
   if(!isfinite(V[18]) || FError){ return 18;}
   V[19]=aWidth_p19p19_p19a19a19_u("Z");
   if(!isfinite(V[19]) || FError){ return 19;}
   V[20]=aWidth_p19p19_p19a19a19_u("h");
   if(!isfinite(V[20]) || FError){ return 20;}
   V[21]=aWidth_p19p19_p19a19a19_u("~ZZ");
   if(!isfinite(V[21]) || FError){ return 21;}
   V[22]=aWidth_p19p19_p19a19a19_u("~H");
   if(!isfinite(V[22]) || FError){ return 22;}
return 0;
}

#define  cwb_1 NULL
colorBasis  cb_p19p19_p19a19a19_u[1]={
 { 0, 0,  cwb_1}
};
static int permMap[1][2]={
 {0,1}
};
static int permP[1][5]={

 // ~x ~x -> ~x ~X ~X ,
{1,2,3,5,4}
};
static int permC[1][0]={
{}
};
#include"sqme.inc"
