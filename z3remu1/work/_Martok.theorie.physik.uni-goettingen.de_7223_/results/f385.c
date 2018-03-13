/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F385_p19p19_p19a19a19_u;
static void C385(REAL * C)
{
REAL* V=va_p19p19_p19a19a19_u;
REAL S[2];                                                                  
     
S[0]=V[17]*V[17];
S[1]=V[7]*V[7];
C[0]=+V[18]*S[0]*V[10]*V[8]*S[1];
}
REAL F385_p19p19_p19a19a19_u(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_p19p19_p19a19a19_u;
static REAL C[1];                                                           
     
if(!DP){C385(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+18;
R=+1;
R*=(N/D);
Prop=1*(gtwidth_p19p19_p19a19a19_u? creal(Q1[15]):Q1[15])*(gtwidth_p19p19_p19a19a19_u? creal(Q1[10]):
 Q1[10])*(gswidth_p19p19_p19a19a19_u? creal(Q1[7]):conj(Q1[7]));
if(gswidth_p19p19_p19a19a19_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6]*Q0[8];
R*=creal(Prop);
 return R;
}
