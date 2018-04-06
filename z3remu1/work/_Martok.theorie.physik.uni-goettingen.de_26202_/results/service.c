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
const int nin_ext = 2;

const int nout_ext = 3;

const int nprc_ext = 1;

char * pinf_ext(int nsub,int nprtcl,REAL* pmass,int * num)
{
int n;
 static char *names[1][5] ={
{"~x","~x","~x","~X","~X"}};
int const nvalue[1][5]={
{16,16,16,16,16}};
int const pcode[1][5]={
{32,32,32,-32,-32}};
if  (nsub<0 ||nsub>1||nprtcl<0||nprtcl>5) return NULL;
if(pmass)
{
  n=nvalue[nsub-1][nprtcl-1];
  if (n==0) *pmass=0; else *pmass=va_ext[n];
  if (*pmass<0) (*pmass)=-(*pmass);
}
if(num)*num=pcode[nsub-1][nprtcl-1];
return names[nsub-1][nprtcl-1];
}
char * polarized_ext[3]={"",",",","};
int pinfAux_ext(int nsub,int nprtcl,int*spin2,int*color,int*neutral)
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
const int nvar_ext = 17;

const int nfunc_ext = 12;

char * varName_ext[30]={"P(cms)"
,"MZ"
,"Mh"
,"EPS"
,"lamPC"
,"lamCH"
,"lamPH"
,"lamchi"
,"lamphi"
,"lamH"
,"KAP"
,"gXhat"
,"SW"
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
,"sinDH"
,"hcc"
,"Hcc"
,"wZ"
,"wh"
,"wDH"};

 char * den_info_ext(int nsub,int n, int * mass, int * width)
{
 switch(nsub){
 case 1: switch(n){
    case 1: *mass=15; *width=0; return "\1\3";
    case 2: *mass=15; *width=0; return "\2\3";
    case 3: *mass=15; *width=29; return "\3\4";
    case 4: *mass=15; *width=29; return "\3\5";
    case 5: *mass=16; *width=0; return "\1\4";
    case 6: *mass=16; *width=0; return "\1\5";
    case 7: *mass=16; *width=0; return "\1\2";
    case 8: *mass=17; *width=0; return "\1\3";
    case 9: *mass=17; *width=0; return "\2\3";
    case 10: *mass=17; *width=0; return "\3\4";
    case 11: *mass=17; *width=0; return "\3\5";
    case 12: *mass=2; *width=0; return "\1\3";
    case 13: *mass=2; *width=0; return "\2\3";
    case 14: *mass=2; *width=28; return "\3\4";
    case 15: *mass=2; *width=28; return "\3\5";
    case 16: *mass=1; *width=0; return "\1\3";
    case 17: *mass=16; *width=0; return "\4\5";
    case 18: *mass=1; *width=0; return "\2\3";
    case 19: *mass=1; *width=27; return "\3\4";
    case 20: *mass=16; *width=0; return "\2\5";
    case 21: *mass=1; *width=27; return "\3\5";
    case 22: *mass=16; *width=0; return "\2\4";
    default:*mass=0; *width=0; return NULL;
                  }
   default: *mass=0; *width=0; return NULL;
            }
}

CalcHEP_interface interface_ext={ 1,
"/net/theorie/home/stefan.kiebacher/Documents/micromegas_4.3.5/CalcHEP_src/"
,17, 12, varName_ext,va_ext,2, 3, 1, &pinf_ext, &pinfAux_ext, polarized_ext, &calcFunc_ext, &BWrange_ext,&twidth_ext,&gtwidth_ext,&gswidth_ext, &aWidth_ext, &sqme_ext,&den_info_ext,cb_ext};

CalcHEP_interface * PtrInterface_ext=&interface_ext;
