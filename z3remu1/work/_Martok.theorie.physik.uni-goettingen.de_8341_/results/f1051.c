/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F1051_p19p19_p19a19a19_u;
static void C1051(REAL * C)
{
REAL* V=va_p19p19_p19a19a19_u;
REAL S[3];                                                                  
     
S[0]=V[18]*V[18]*V[18]*V[18];
S[1]=V[10]*V[10];
S[2]=V[7]*V[7];
C[0]=+S[0]*S[1]*S[2];
}
REAL F1051_p19p19_p19a19a19_u(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_p19p19_p19a19a19_u;
static REAL C[1];                                                           
     
if(!DP){C1051(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+18;
R=+1;
R*=(N/D);
Prop=1*(gswidth_p19p19_p19a19a19_u? creal(Q1[18]):Q1[18])*(gswidth_p19p19_p19a19a19_u? creal(Q1[7]):Q1[7])
 *(gtwidth_p19p19_p19a19a19_u? creal(Q1[22]):conj(Q1[22]))*(gtwidth_p19p19_p19a19a19_u? creal(Q1[10]):
 conj(Q1[10]));
if(gswidth_p19p19_p19a19a19_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6]*Q0[8];
R*=creal(Prop);
 return R;
}
