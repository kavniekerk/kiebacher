#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../CalcHEP_src/include/extern.h"
#include "../../CalcHEP_src/include/VandP.h"
#include "autoprot.h"
extern int  FError;
/*  Special model functions  */

int nModelParticles=20;
static ModelPrtclsStr ModelPrtcls_[20]=
{
  {"G","G", 21, "0","0",2,8,0}
, {"A","A", 22, "0","0",2,1,0}
, {"Z","Z", 23, "MZ","wZ",2,1,0}
, {"W+","W-", 24, "MW","wW",2,1,3}
, {"h","h", 25, "Mh","wh",0,1,0}
, {"e","E", 11, "0","0",1,1,-3}
, {"ne","Ne", 12, "0","0",1,1,0}
, {"m","M", 13, "Mm","0",1,1,-3}
, {"nm","Nm", 14, "0","0",1,1,0}
, {"l","L", 15, "Ml","0",1,1,-3}
, {"nl","Nl", 16, "0","0",1,1,0}
, {"d","D", 1, "0","0",1,3,-1}
, {"u","U", 2, "0","0",1,3,2}
, {"s","S", 3, "0","0",1,3,-1}
, {"c","C", 4, "Mc","0",1,3,2}
, {"b","B", 5, "Mb","0",1,3,-1}
, {"t","T", 6, "Mt","wt",1,3,2}
, {"~ZZ","~ZZ", 31, "MDZ","0",2,1,0}
, {"~x","~X", 32, "Mcdm","0",0,1,0}
, {"~H","~H", 33, "MDH","wDH",0,1,0}
};
ModelPrtclsStr *ModelPrtcls=ModelPrtcls_; 
int nModelVars=28;
int nModelFunc=25;
static char*varNames_[53]={
 "EE","alfSMZ","Q","s12","s23","s13","Mm","Ml","McMc","MbMb"
,"Mtp","MZ","MW","Mh","EPS","MUH","MUP","Mcdm","lamPC","lamCH"
,"lamPH","lamchi","lamphi","lamH","KAP","RATIO","gXhat","qd","CW","SW"
,"GF","LamQCD","Mb","Mt","Mc","c12","c23","c13","Vud","Vus"
,"Vub","Vcd","Vcs","Vcb","Vtd","Vts","Vtb","VEW","VDH","dhi"
,"MDH","MUC","MDZ"};
char**varNames=varNames_;
static REAL varValues_[53]={
   3.134300E-01,  1.184000E-01,  1.000000E+02,  2.210000E-01,  4.100000E-02,  3.500000E-03,  1.057000E-01,  1.777000E+00,  1.200000E+00,  4.250000E+00
,  1.730700E+02,  9.118900E+01,  8.038500E+01,  1.250000E+02,  1.000000E-07,  5.200000E+00,  7.300000E+00,  2.400000E+00,  1.000000E-01,  1.000000E-01
,  1.000000E-01,  1.000000E-01,  1.000000E-01,  1.000000E-01,  1.100000E+00,  1.003000E+02,  6.300000E+00,  3.000000E+00};
REAL*varValues=varValues_;
int calcMainFunc(void)
{
   int i;
   static REAL * VV=NULL;
   static int iQ=-1;
   static int cErr=1;
   REAL *V=varValues;
   FError=0;
   if(VV && cErr==0)
   { for(i=0;i<nModelVars;i++) if(i!=iQ && VV[i]!=V[i]) break;
     if(i==nModelVars)      {if(iQ>=0 && VV[iQ]!=V[iQ]) goto FirstQ; else return 0;} 
   }
  cErr=1;
   V[28]=V[12]/(V[11]);
   if(!isfinite(V[28]) || FError) return 28;
   V[29]=sqrt(1-pow(V[28],2));
   if(!isfinite(V[29]) || FError) return 29;
   V[30]=pow(V[0],2)/(pow(2*V[29]*V[12],2))/(M_SQRT2);
   if(!isfinite(V[30]) || FError) return 30;
   V[31]=initQCD5(V[1],V[8],V[9],V[10]);
   if(!isfinite(V[31]) || FError) return 31;
 FirstQ:
 cErr=1;
   V[32]=MbEff(V[2]);
   if(!isfinite(V[32]) || FError) return 32;
   V[33]=MtEff(V[2]);
   if(!isfinite(V[33]) || FError) return 33;
   V[34]=McEff(V[2]);
   if(!isfinite(V[34]) || FError) return 34;
   V[35]=sqrt(1-pow(V[3],2));
   if(!isfinite(V[35]) || FError) return 35;
   V[36]=sqrt(1-pow(V[4],2));
   if(!isfinite(V[36]) || FError) return 36;
   V[37]=sqrt(1-pow(V[5],2));
   if(!isfinite(V[37]) || FError) return 37;
   V[38]=V[35]*V[37];
   if(!isfinite(V[38]) || FError) return 38;
   V[39]=V[3]*V[37];
   if(!isfinite(V[39]) || FError) return 39;
   V[40]=V[5];

   V[41]=-V[35]*V[4]*V[5]-V[3]*V[36];
   if(!isfinite(V[41]) || FError) return 41;
   V[42]=V[35]*V[36]-V[3]*V[4]*V[5];
   if(!isfinite(V[42]) || FError) return 42;
   V[43]=V[4]*V[37];
   if(!isfinite(V[43]) || FError) return 43;
   V[44]=V[3]*V[4]-V[35]*V[36]*V[5];
   if(!isfinite(V[44]) || FError) return 44;
   V[45]=-V[3]*V[36]*V[5]-V[35]*V[4];
   if(!isfinite(V[45]) || FError) return 45;
   V[46]=V[36]*V[37];
   if(!isfinite(V[46]) || FError) return 46;
   V[47]=sqrt((4*V[22]*pow(V[15],2)-2*V[20]*pow(V[16],2))/(4*V[23]*V[22]-pow(V[20],2)));
   if(!isfinite(V[47]) || FError) return 47;
   V[48]=sqrt((4*V[23]*pow(V[16],2)-2*V[20]*pow(V[15],2))/(4*V[23]*V[22]-pow(V[20],2)));
   if(!isfinite(V[48]) || FError) return 48;
   V[49]=V[23]*pow(V[47],2)-pow(V[48],2)*V[22];
   if(!isfinite(V[49]) || FError) return 49;
   V[50]=sqrt(pow(V[13],2)+2*sqrt(pow(V[49],2)+pow(V[20],2)*pow(V[47],2)*pow(V[48],2)));
   if(!isfinite(V[50]) || FError) return 50;
   V[51]=I*sqrt(-(pow(V[17],2)-V[18]*pow(V[48],2)/(2)-V[19]*pow(V[47],2)/(2)));
   if(!isfinite(V[51]) || FError) return 51;
   V[52]=V[25]*V[17];
   if(!isfinite(V[52]) || FError) return 52;
   if(VV==NULL) 
   {  VV=malloc(sizeof(REAL)*nModelVars);
      for(i=0;i<nModelVars;i++) if(strcmp(varNames[i],"Q")==0) iQ=i;
   }
   for(i=0;i<nModelVars;i++) VV[i]=V[i];
   cErr=0;
   return 0;
}
