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
   V[18]=V[9]*pow(V[13],2)-pow(V[14],2)*V[8];
   if(!isfinite(V[18]) || FError){ return 18;}
   V[19]=asin(2*V[6]*V[13]*V[14]/(2*sqrt(pow(V[18],2)+pow(V[6]*V[13]*V[14],2))))/(2);
   if(!isfinite(V[19]) || FError){ return 19;}
   V[20]=atan((pow(V[11]*V[14]/(V[17]*cos(V[3])),2)-1)/(V[12]*tan(V[3])));
   if(!isfinite(V[20]) || FError){ return 20;}
   V[21]=cos(V[20]);
   if(!isfinite(V[21]) || FError){ return 21;}
   V[22]=sqrt(1-pow(V[21],2));
   if(!isfinite(V[22]) || FError){ return 22;}
   V[23]=cos(V[19]);
   if(!isfinite(V[23]) || FError){ return 23;}
   V[24]=sqrt(1-pow(V[23],2));
   if(!isfinite(V[24]) || FError){ return 24;}
   V[25]=-(V[4]*V[14]*V[23]+V[5]*V[13]*V[24]);
   if(!isfinite(V[25]) || FError){ return 25;}
   V[26]=-(V[4]*V[14]*V[24]-V[5]*V[13]*V[23]);
   if(!isfinite(V[26]) || FError){ return 26;}
   V[27]=aWidth_p19p19_p19a19a19_u("Z");
   if(!isfinite(V[27]) || FError){ return 27;}
   V[28]=aWidth_p19p19_p19a19a19_u("h");
   if(!isfinite(V[28]) || FError){ return 28;}
   V[29]=aWidth_p19p19_p19a19a19_u("~H");
   if(!isfinite(V[29]) || FError){ return 29;}
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
