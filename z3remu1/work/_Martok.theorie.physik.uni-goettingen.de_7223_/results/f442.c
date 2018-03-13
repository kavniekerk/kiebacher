/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F442_p19p19_p19a19a19_u;
static void C442(REAL * C)
{
REAL* V=va_p19p19_p19a19a19_u;
REAL S[6];                                                                  
     
S[0]=V[5]*V[5];
C[1]=+S[0];
S[1]=V[17]*V[17];
S[2]=V[16]*V[16];
S[3]=V[14]*V[14];
S[4]=V[10]*V[10];
S[5]=V[7]*V[7];
C[0]=+S[1]*S[2]*S[3]*S[4]*S[5];
}
REAL F442_p19p19_p19a19a19_u(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_p19p19_p19a19a19_u;
static REAL C[2];                                                           
     
if(!DP){C442(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+9;
R=+2*DP[1]-C[1]-DP[0]+DP[3];
R*=(N/D);
Prop=1*(gtwidth_p19p19_p19a19a19_u? creal(Q1[9]):Q1[9])*(gswidth_p19p19_p19a19a19_u? creal(Q1[5]):Q1[5])*(
 gtwidth_p19p19_p19a19a19_u? creal(Q1[19]):conj(Q1[19]))*(gswidth_p19p19_p19a19a19_u? creal(Q1[4]):conj(
 Q1[4]));
if(gswidth_p19p19_p19a19a19_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[6]*Q0[7]*Q0[8];
R*=creal(Prop);
 return R;
}
