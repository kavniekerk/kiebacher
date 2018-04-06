/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F684_p19p19_p19a19a19_u;
static void C684(REAL * C)
{
REAL* V=va_p19p19_p19a19a19_u;
REAL S[5];                                                                  
     
S[0]=V[16]*V[16];
C[1]=+3*S[0];
S[1]=V[22]*V[22];
S[2]=V[14]*V[14]*V[14]*V[14];
S[3]=V[11]*V[11];
S[4]=V[10]*V[10]*V[10]*V[10];
C[0]=+S[1]*S[2]*S[3]*S[4];
}
REAL F684_p19p19_p19a19a19_u(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_p19p19_p19a19a19_u;
static REAL C[2];                                                           
     
if(!DP){C684(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+648;
R=+4*(DP[4]-DP[0])+2*(DP[2]+DP[3])-C[1];
R*=(N/D);
Prop=1*Q2[20]*(gtwidth_p19p19_p19a19a19_u? creal(Q1[8]):Q1[8])*(gtwidth_p19p19_p19a19a19_u? creal(Q1[9]):
 conj(Q1[9]));
if(gswidth_p19p19_p19a19a19_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 return R;
}
