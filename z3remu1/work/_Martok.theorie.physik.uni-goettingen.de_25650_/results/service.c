/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include<math.h>
#include<complex.h>
#include"num_out.h"
#include"num_in.h"
double BWrange_ext=2.7;
int twidth_ext=0;
int gtwidth_ext=0;
int gswidth_ext=0;
 REAL va_ext[30]={0};
const int nin_ext = 1;

const int nout_ext = 2;

const int nprc_ext = 16;

char * pinf_ext(int nsub,int nprtcl,REAL* pmass,int * num)
{
int n;
 static char *names[16][3] ={
{"Z","~H","~H"},
{"Z","~x","~X"},
{"Z","t","T"},
{"Z","b","B"},
{"Z","c","C"},
{"Z","s","S"},
{"Z","u","U"},
{"Z","d","D"},
{"Z","nl","Nl"},
{"Z","l","L"},
{"Z","nm","Nm"},
{"Z","m","M"},
{"Z","ne","Ne"},
{"Z","e","E"},
{"Z","h","h"},
{"Z","W+","W-"}};
int const nvalue[16][3]={
{4,20,20},
{4,21,21},
{4,16,16},
{4,15,15},
{4,17,17},
{4,0,0},
{4,0,0},
{4,0,0},
{4,0,0},
{4,3,3},
{4,0,0},
{4,2,2},
{4,0,0},
{4,0,0},
{4,6,6},
{4,5,5}};
int const pcode[16][3]={
{23,33,33},
{23,32,-32},
{23,6,-6},
{23,5,-5},
{23,4,-4},
{23,3,-3},
{23,2,-2},
{23,1,-1},
{23,16,-16},
{23,15,-15},
{23,14,-14},
{23,13,-13},
{23,12,-12},
{23,11,-11},
{23,25,25},
{23,24,-24}};
if  (nsub<0 ||nsub>16||nprtcl<0||nprtcl>3) return NULL;
if(pmass)
{
  n=nvalue[nsub-1][nprtcl-1];
  if (n==0) *pmass=0; else *pmass=va_ext[n];
  if (*pmass<0) (*pmass)=-(*pmass);
}
if(num)*num=pcode[nsub-1][nprtcl-1];
return names[nsub-1][nprtcl-1];
}
char * polarized_ext[3]={"","",""};
int pinfAux_ext(int nsub,int nprtcl,int*spin2,int*color,int*neutral)
{
int const pcode[16][3]={
{23,33,33},
{23,32,-32},
{23,6,-6},
{23,5,-5},
{23,4,-4},
{23,3,-3},
{23,2,-2},
{23,1,-1},
{23,16,-16},
{23,15,-15},
{23,14,-14},
{23,13,-13},
{23,12,-12},
{23,11,-11},
{23,25,25},
{23,24,-24}};
int const Spin2[16][3]={
{2,0,0},
{2,0,0},
{2,1,1},
{2,1,1},
{2,1,1},
{2,1,1},
{2,1,1},
{2,1,1},
{2,1,1},
{2,1,1},
{2,1,1},
{2,1,1},
{2,1,1},
{2,1,1},
{2,0,0},
{2,2,2}};
int const Color[16][3]={
{1,1,1},
{1,1,1},
{1,3,-3},
{1,3,-3},
{1,3,-3},
{1,3,-3},
{1,3,-3},
{1,3,-3},
{1,1,1},
{1,1,1},
{1,1,1},
{1,1,1},
{1,1,1},
{1,1,1},
{1,1,1},
{1,1,1}};
int const Neutral[16][3]={
{1,1,1},
{1,0,0},
{1,0,0},
{1,0,0},
{1,0,0},
{1,0,0},
{1,0,0},
{1,0,0},
{1,0,0},
{1,0,0},
{1,0,0},
{1,0,0},
{1,0,0},
{1,0,0},
{1,1,1},
{1,0,0}};
if(nsub<0 ||nsub>16||nprtcl<0||nprtcl>3) return 0;
if(spin2) *spin2=Spin2[nsub-1][nprtcl-1];
if(color) *color=Color[nsub-1][nprtcl-1];
if(neutral) *neutral=Neutral[nsub-1][nprtcl-1];
return pcode[nsub-1][nprtcl-1];
}
const int nvar_ext = 22;

const int nfunc_ext = 7;

char * varName_ext[30]={"P(cms)"
,"EE"
,"Mm"
,"Ml"
,"MZ"
,"MW"
,"Mh"
,"EPS"
,"lamPH"
,"lamphi"
,"lamH"
,"gXhat"
,"qd"
,"CW"
,"SW"
,"Mb"
,"Mt"
,"Mc"
,"VEW"
,"VDH"
,"MDH"
,"Mcdm"
,"MDZ"
,"dalhiggs"
,"alhiggs"
,"xi"
,"cosDG"
,"sinDG"
,"cosDH"
,"sinDH"};

 char * den_info_ext(int nsub,int n, int * mass, int * width)
{
 switch(nsub){
 case 1: switch(n){
    default:*mass=0; *width=0; return NULL;
                  }
 case 2: switch(n){
    default:*mass=0; *width=0; return NULL;
                  }
 case 3: switch(n){
    default:*mass=0; *width=0; return NULL;
                  }
 case 4: switch(n){
    default:*mass=0; *width=0; return NULL;
                  }
 case 5: switch(n){
    default:*mass=0; *width=0; return NULL;
                  }
 case 6: switch(n){
    default:*mass=0; *width=0; return NULL;
                  }
 case 7: switch(n){
    default:*mass=0; *width=0; return NULL;
                  }
 case 8: switch(n){
    default:*mass=0; *width=0; return NULL;
                  }
 case 9: switch(n){
    default:*mass=0; *width=0; return NULL;
                  }
 case 10: switch(n){
    default:*mass=0; *width=0; return NULL;
                  }
 case 11: switch(n){
    default:*mass=0; *width=0; return NULL;
                  }
 case 12: switch(n){
    default:*mass=0; *width=0; return NULL;
                  }
 case 13: switch(n){
    default:*mass=0; *width=0; return NULL;
                  }
 case 14: switch(n){
    default:*mass=0; *width=0; return NULL;
                  }
 case 15: switch(n){
    default:*mass=0; *width=0; return NULL;
                  }
 case 16: switch(n){
    default:*mass=0; *width=0; return NULL;
                  }
   default: *mass=0; *width=0; return NULL;
            }
}

CalcHEP_interface interface_ext={ 1,
"/net/theorie/home/stefan.kiebacher/Documents/micromegas_4.3.5/CalcHEP_src/"
,22, 7, varName_ext,va_ext,1, 2, 16, &pinf_ext, &pinfAux_ext, polarized_ext, &calcFunc_ext, &BWrange_ext,&twidth_ext,&gtwidth_ext,&gswidth_ext, &aWidth_ext, &sqme_ext,&den_info_ext,cb_ext};

CalcHEP_interface * PtrInterface_ext=&interface_ext;
