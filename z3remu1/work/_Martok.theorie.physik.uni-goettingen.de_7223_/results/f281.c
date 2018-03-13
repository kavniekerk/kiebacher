/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F281_p19p19_p19a19a19_u;
static void C281(REAL * C)
{
REAL* V=va_p19p19_p19a19a19_u;
REAL S[3];                                                                  
     
S[0]=V[17]*V[17]*V[17]*V[17];
S[1]=V[10]*V[10];
S[2]=V[7]*V[7];
C[0]=+S[0]*S[1]*S[2];
}
REAL F281_p19p19_p19a19a19_u(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_p19p19_p19a19a19_u;
static REAL C[1];                                                           
     
if(!DP){C281(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+18;
R=+1;
R*=(N/D);
Prop=1*(gtwidth_p19p19_p19a19a19_u? creal(Q1[14]):Q1[14])*(gswidth_p19p19_p19a19a19_u? creal(Q1[12]):
 Q1[12])*(gtwidth_p19p19_p19a19a19_u? creal(Q1[19]):conj(Q1[19]))*(gswidth_p19p19_p19a19a19_u? creal(
 Q1[4]):conj(Q1[4]));
if(gswidth_p19p19_p19a19a19_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[5]*Q0[6]*Q0[7]*Q0[8];
R*=creal(Prop);
 return R;
}
