/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F267_p19p19_p19a19a19_u;
static void C267(REAL * C)
{
REAL* V=va_p19p19_p19a19a19_u;
REAL S[6];                                                                  
     
S[0]=V[16]*V[16];
C[1]=+S[0];
S[1]=V[25]*V[25];
S[2]=V[21]*V[21];
S[3]=V[14]*V[14];
S[4]=V[11]*V[11];
S[5]=V[10]*V[10];
C[0]=+S[1]*S[2]*S[3]*S[4]*S[5];
}
REAL F267_p19p19_p19a19a19_u(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_p19p19_p19a19a19_u;
static REAL C[2];                                                           
     
if(!DP){C267(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+9;
R=+2*DP[1]-C[1]-DP[0]+DP[3];
R*=(N/D);
Prop=1*(gtwidth_p19p19_p19a19a19_u? creal(Q1[12]):Q1[12])*(gswidth_p19p19_p19a19a19_u? creal(Q1[10]):
 Q1[10])*(gtwidth_p19p19_p19a19a19_u? creal(Q1[7]):conj(Q1[7]))*(gswidth_p19p19_p19a19a19_u? creal(Q1[14])
 :conj(Q1[14]));
if(gswidth_p19p19_p19a19a19_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 return R;
}
