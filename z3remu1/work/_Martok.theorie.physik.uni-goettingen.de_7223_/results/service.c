/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include<math.h>
#include<complex.h>
#include"num_out.h"
#include"num_in.h"
double BWrange_p19p19_p19a19a19_u=2.7;
int twidth_p19p19_p19a19a19_u=0;
int gtwidth_p19p19_p19a19a19_u=0;
int gswidth_p19p19_p19a19a19_u=0;
 REAL va_p19p19_p19a19a19_u[23]={0};
const int nin_p19p19_p19a19a19_u = 2;

const int nout_p19p19_p19a19a19_u = 3;

const int nprc_p19p19_p19a19a19_u = 1;

char * pinf_p19p19_p19a19a19_u(int nsub,int nprtcl,REAL* pmass,int * num)
{
int n;
 static char *names[1][5] ={
{"~x","~x","~x","~X","~X"}};
int const nvalue[1][5]={
{5,5,5,5,5}};
int const pcode[1][5]={
{32,32,32,-32,-32}};
if  (nsub<0 ||nsub>1||nprtcl<0||nprtcl>5) return NULL;
if(pmass)
{
  n=nvalue[nsub-1][nprtcl-1];
  if (n==0) *pmass=0; else *pmass=va_p19p19_p19a19a19_u[n];
  if (*pmass<0) (*pmass)=-(*pmass);
}
if(num)*num=pcode[nsub-1][nprtcl-1];
return names[nsub-1][nprtcl-1];
}
char * polarized_p19p19_p19a19a19_u[3]={"",",",","};
int pinfAux_p19p19_p19a19a19_u(int nsub,int nprtcl,int*spin2,int*color,int*neutral)
{
int const pcode[1][5]={
{32,32,32,-32,-32}};
int const Spin2[1][5]={
{0,0,0,0,0}};
int const Color[1][5]={
{1,1,1,1,1}};
int const Neutral[1][5]={
{0,0,0,0,0}};
if(nsub<0 ||nsub>1||nprtcl<0||nprtcl>5) return 0;
if(spin2) *spin2=Spin2[nsub-1][nprtcl-1];
if(color) *color=Color[nsub-1][nprtcl-1];
if(neutral) *neutral=Neutral[nsub-1][nprtcl-1];
return pcode[nsub-1][nprtcl-1];
}
const int nvar_p19p19_p19a19a19_u = 14;

const int nfunc_p19p19_p19a19a19_u = 8;

char * varName_p19p19_p19a19a19_u[23]={"P(cms)"
,"Mh"
,"MZ2"
,"VEW"
,"MDZ"
,"Mcdm"
,"MDH"
,"KAP"
,"sinDH"
,"sinDG"
,"VDH"
,"lamPC"
,"lamCH"
,"lamchi"
,"gXhat"
,"cosDH"
,"cosDG"
,"hcc"
,"Hcc"
,"wZ"
,"wh"
,"wZZ"
,"wDH"};

 char * den_info_p19p19_p19a19a19_u(int nsub,int n, int * mass, int * width)
{
 switch(nsub){
 case 1: switch(n){
    case 1: *mass=6; *width=0; return "\1\3";
    case 2: *mass=6; *width=0; return "\2\3";
    case 3: *mass=6; *width=22; return "\3\4";
    case 4: *mass=6; *width=22; return "\3\5";
    case 5: *mass=5; *width=0; return "\1\4";
    case 6: *mass=5; *width=0; return "\1\5";
    case 7: *mass=5; *width=0; return "\1\2";
    case 8: *mass=4; *width=0; return "\1\3";
    case 9: *mass=4; *width=0; return "\2\3";
    case 10: *mass=4; *width=21; return "\3\4";
    case 11: *mass=4; *width=21; return "\3\5";
    case 12: *mass=1; *width=0; return "\1\3";
    case 13: *mass=1; *width=0; return "\2\3";
    case 14: *mass=1; *width=20; return "\3\4";
    case 15: *mass=1; *width=20; return "\3\5";
    case 16: *mass=2; *width=0; return "\1\3";
    case 17: *mass=5; *width=0; return "\4\5";
    case 18: *mass=2; *width=0; return "\2\3";
    case 19: *mass=2; *width=19; return "\3\4";
    case 20: *mass=5; *width=0; return "\2\5";
    case 21: *mass=2; *width=19; return "\3\5";
    case 22: *mass=5; *width=0; return "\2\4";
    default:*mass=0; *width=0; return NULL;
                  }
   default: *mass=0; *width=0; return NULL;
            }
}

CalcHEP_interface interface_p19p19_p19a19a19_u={ 1,
"/net/theorie/home/stefan.kiebacher/Documents/micromegas_4.3.5/CalcHEP_src/"
,14, 8, varName_p19p19_p19a19a19_u,va_p19p19_p19a19a19_u,2, 3, 1, &pinf_p19p19_p19a19a19_u, &pinfAux_p19p19_p19a19a19_u, polarized_p19p19_p19a19a19_u, &calcFunc_p19p19_p19a19a19_u, &BWrange_p19p19_p19a19a19_u,&twidth_p19p19_p19a19a19_u,&gtwidth_p19p19_p19a19a19_u,&gswidth_p19p19_p19a19a19_u, &aWidth_p19p19_p19a19a19_u, &sqme_p19p19_p19a19a19_u,&den_info_p19p19_p19a19a19_u,cb_p19p19_p19a19a19_u};

CalcHEP_interface * PtrInterface_p19p19_p19a19a19_u=&interface_p19p19_p19a19a19_u;
