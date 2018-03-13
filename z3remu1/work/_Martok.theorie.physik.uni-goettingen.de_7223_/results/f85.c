/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F85_p19p19_p19a19a19_u;
static void C85(REAL * C)
{
REAL* V=va_p19p19_p19a19a19_u;
REAL S[4];                                                                  
     
S[0]=V[14]*V[14]*V[14]*V[14];
S[1]=V[10]*V[10];
S[2]=V[9]*V[9]*V[9]*V[9];
S[3]=V[7]*V[7];
C[0]=+2*S[0]*S[1]*S[2]*S[3];
}
REAL F85_p19p19_p19a19a19_u(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_p19p19_p19a19a19_u;
static REAL C[1];                                                           
     
if(!DP){C85(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+9;
R=+DP[0]*(DP[4]-DP[2])+DP[1]*(DP[4]-DP[2]);
R*=(N/D);
Prop=1*(gtwidth_p19p19_p19a19a19_u? creal(Q1[11]):Q1[11])*(gswidth_p19p19_p19a19a19_u? creal(Q1[12]):
 Q1[12])*(gtwidth_p19p19_p19a19a19_u? creal(Q1[19]):conj(Q1[19]))*(gswidth_p19p19_p19a19a19_u? creal(
 Q1[2]):conj(Q1[2]));
if(gswidth_p19p19_p19a19a19_u ) Prop=Prop*Q0[1]*Q0[3]*Q0[4]*Q0[5]*Q0[6]*Q0[7]*Q0[8];
R*=creal(Prop);
 return R;
}
