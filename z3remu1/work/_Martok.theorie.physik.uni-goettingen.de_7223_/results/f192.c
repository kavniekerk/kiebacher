/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F192_p19p19_p19a19a19_u;
static void C192(REAL * C)
{
REAL* V=va_p19p19_p19a19a19_u;
REAL S[4];                                                                  
     
S[0]=V[5]*V[5];
C[1]=+3*S[0];
S[1]=V[14]*V[14];
S[2]=V[9]*V[9];
S[3]=V[7]*V[7];
C[0]=+V[17]*V[15]*S[1]*V[10]*S[2]*S[3];
}
REAL F192_p19p19_p19a19a19_u(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_p19p19_p19a19a19_u;
static REAL C[2];                                                           
     
if(!DP){C192(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+18;
R=+2*(DP[1]-DP[0]+DP[2]+DP[4])+4*DP[3]-C[1];
R*=(N/D);
Prop=1*(gtwidth_p19p19_p19a19a19_u? creal(Q1[13]):Q1[13])*(gtwidth_p19p19_p19a19a19_u? creal(Q1[10]):
 Q1[10])*(gswidth_p19p19_p19a19a19_u? creal(Q1[3]):conj(Q1[3]));
if(gswidth_p19p19_p19a19a19_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[4]*Q0[5]*Q0[6]*Q0[7]*Q0[8];
R*=creal(Prop);
 return R;
}
