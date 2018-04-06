/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F18_p19p19_p19a19a19_u;
static void C18(REAL * C)
{
REAL* V=va_p19p19_p19a19a19_u;
REAL S[7];                                                                  
     
S[0]=V[16]*V[16]*V[16]*V[16];
C[4]=+3*S[0];
S[1]=V[16]*V[16];
C[3]=+8*S[1];
C[2]=+7*S[1];
C[1]=+2*S[1];
S[2]=V[22]*V[22];
S[3]=V[21]*V[21];
S[4]=V[14]*V[14];
S[5]=V[11]*V[11]*V[11]*V[11];
S[6]=V[10]*V[10];
C[0]=+S[2]*S[3]*S[4]*S[5]*S[6];
}
REAL F18_p19p19_p19a19a19_u(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_p19p19_p19a19a19_u;
static REAL C[5];                                                           
     
if(!DP){C18(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+9;
R=+DP[0]*(C[2]+4*DP[0]-10*DP[1]-8*DP[3]-2*DP[4])+DP[1]*(4*(DP[1]+DP[4])+10*
 DP[3]-C[3])+DP[3]*(4*DP[3]-C[2]+2*DP[4])+C[4]-C[1]*DP[4];
R*=(N/D);
Prop=1*Q2[7]*(gswidth_p19p19_p19a19a19_u? creal(Q1[1]):Q1[1])*(gtwidth_p19p19_p19a19a19_u? creal(Q1[17]):
 conj(Q1[17]));
if(gswidth_p19p19_p19a19a19_u ) Prop=Prop*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 return R;
}