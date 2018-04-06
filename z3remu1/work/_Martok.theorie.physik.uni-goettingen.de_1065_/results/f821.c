/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F821_p19p19_p19a19a19_u;
static void C821(REAL * C)
{
REAL* V=va_p19p19_p19a19a19_u;
REAL S[6];                                                                  
     
S[0]=V[16]*V[16];
C[1]=+S[0];
S[1]=V[25]*V[25];
S[2]=V[22]*V[22];
S[3]=V[14]*V[14];
S[4]=V[11]*V[11];
S[5]=V[10]*V[10];
C[0]=+S[1]*S[2]*S[3]*S[4]*S[5];
}
REAL F821_p19p19_p19a19a19_u(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_p19p19_p19a19a19_u;
static REAL C[2];                                                           
     
if(!DP){C821(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+9;
R=+2*DP[2]-C[1]-DP[0]+DP[4];
R*=(N/D);
Prop=1*(gtwidth_p19p19_p19a19a19_u? creal(Q1[20]):Q1[20])*(gswidth_p19p19_p19a19a19_u? creal(Q1[1]):Q1[1])
 *(gswidth_p19p19_p19a19a19_u? creal(Q1[18]):conj(Q1[18]))*(gswidth_p19p19_p19a19a19_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_p19p19_p19a19a19_u ) Prop=Prop*Q0[2]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 return R;
}
