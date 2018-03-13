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
, {"Z","Z", 23, "MZ2","wZ",2,1,0}
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
, {"~ZZ","~ZZ", 31, "MDZ","wZZ",2,1,0}
, {"~x","~X", 32, "Mcdm","0",0,1,0}
, {"~H","~H", 33, "MDH","wDH",0,1,0}
};
ModelPrtclsStr *ModelPrtcls=ModelPrtcls_; 
int nModelVars=31;
int nModelFunc=7;
static char*varNames_[38]={
 "EE","alfSMZ","Q","s12","s23","s13","Mm","Ml","McMc","MbMb"
,"Mtp","MZ","MW","Mh","MZ2","VEW","MDZ","Mcdm","MDH","KAP"
,"sinDH","sinDG","VDH","lamPC","lamCH","lamPH","lamchi","lamphi","lamH","gXhat"
,"qd","CW","SW","GF","LamQCD","Mb","Mt","Mc"};
char**varNames=varNames_;
static REAL varValues_[38]={
   3.134300E-01,  1.184000E-01,  1.000000E+02,  2.210000E-01,  4.100000E-02,  3.500000E-03,  1.057000E-01,  1.777000E+00,  1.200000E+00,  4.250000E+00
,  1.730700E+02,  9.118900E+01,  8.038500E+01,  1.250000E+02,  9.118900E+01,  2.630000E+02,  7.820000E+01,  4.620000E+01,  1.842000E+02,  2.200000E+00
,  1.000000E-01,  1.000000E-01,  6.300000E+01,  3.000000E-02,  1.000000E-03,  1.000000E-03,  3.000000E-01,  3.000000E-01,  3.000000E-01,  3.300000E+00
,  3.000000E+00};
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
   V[31]=V[12]/(V[11]);
   if(!isfinite(V[31]) || FError) return 31;
   V[32]=sqrt(1-pow(V[31],2));
   if(!isfinite(V[32]) || FError) return 32;
   V[33]=pow(V[0],2)/(pow(2*V[32]*V[12],2))/(M_SQRT2);
   if(!isfinite(V[33]) || FError) return 33;
   V[34]=initQCD5(V[1],V[8],V[9],V[10]);
   if(!isfinite(V[34]) || FError) return 34;
 FirstQ:
 cErr=1;
   V[35]=MbEff(V[2]);
   if(!isfinite(V[35]) || FError) return 35;
   V[36]=MtEff(V[2]);
   if(!isfinite(V[36]) || FError) return 36;
   V[37]=McEff(V[2]);
   if(!isfinite(V[37]) || FError) return 37;
   if(VV==NULL) 
   {  VV=malloc(sizeof(REAL)*nModelVars);
      for(i=0;i<nModelVars;i++) if(strcmp(varNames[i],"Q")==0) iQ=i;
   }
   for(i=0;i<nModelVars;i++) VV[i]=V[i];
   cErr=0;
   return 0;
}
