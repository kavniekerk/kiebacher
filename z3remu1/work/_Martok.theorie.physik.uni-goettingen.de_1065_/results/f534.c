/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F534_p19p19_p19a19a19_u;
static void C534(REAL * C)
{
REAL* V=va_p19p19_p19a19a19_u;
REAL S[5];                                                                  
     
S[0]=V[16]*V[16];
C[1]=+3*S[0];
S[1]=V[21]*V[21];
S[2]=V[14]*V[14];
S[3]=V[11]*V[11];
S[4]=V[10]*V[10];
C[0]=+S[1]*S[2]*S[3]*S[4]*V[7];
}
REAL F534_p19p19_p19a19a19_u(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_p19p19_p19a19a19_u;
static REAL C[2];                                                           
     
if(!DP){C534(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+18;
R=+2*(DP[1]-DP[0]+DP[2]+DP[4])+4*DP[3]-C[1];
R*=(N/D);
Prop=1*(gtwidth_p19p19_p19a19a19_u? creal(Q1[17]):Q1[17])*(gtwidth_p19p19_p19a19a19_u? creal(Q1[8]):Q1[8])
 *(gtwidth_p19p19_p19a19a19_u? creal(Q1[7]):conj(Q1[7]));
if(gswidth_p19p19_p19a19a19_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 return R;
}