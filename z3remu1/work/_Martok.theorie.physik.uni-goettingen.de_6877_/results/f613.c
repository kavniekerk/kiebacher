/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F613_p19p19_p19a19a19_u;
static void C613(REAL * C)
{
REAL* V=va_p19p19_p19a19a19_u;
REAL S[4];                                                                  
     
S[0]=V[22]*V[22];
S[1]=V[14]*V[14];
S[2]=V[11]*V[11];
S[3]=V[10]*V[10];
C[0]=+S[0]*S[1]*S[2]*S[3]*V[7];
}
REAL F613_p19p19_p19a19a19_u(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_p19p19_p19a19a19_u;
static REAL C[1];                                                           
     
if(!DP){C613(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+9;
R=+DP[3]-DP[1]-DP[2]+DP[4];
R*=(N/D);
Prop=1*(gtwidth_p19p19_p19a19a19_u? creal(Q1[8]):Q1[8])*(gswidth_p19p19_p19a19a19_u? creal(Q1[18]):conj(
 Q1[18]))*(gswidth_p19p19_p19a19a19_u? creal(Q1[2]):conj(Q1[2]));
if(gswidth_p19p19_p19a19a19_u ) Prop=Prop*Q0[1]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 return R;
}
