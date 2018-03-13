/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F609_p19p19_p19a19a19_u;
static void C609(REAL * C)
{
REAL* V=va_p19p19_p19a19a19_u;
REAL S[2];                                                                  
     
S[0]=V[10]*V[10]*V[10]*V[10];
S[1]=V[7]*V[7]*V[7]*V[7];
C[0]=+V[13]*S[0]*S[1];
}
REAL F609_p19p19_p19a19a19_u(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_p19p19_p19a19a19_u;
static REAL C[1];                                                           
     
if(!DP){C609(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+648;
R=+1;
R*=(N/D);
Prop=1*(gtwidth_p19p19_p19a19a19_u? creal(Q1[10]):Q1[10])*(gtwidth_p19p19_p19a19a19_u? creal(Q1[19]):conj(
 Q1[19]))*(gtwidth_p19p19_p19a19a19_u? creal(Q1[9]):conj(Q1[9]));
if(gswidth_p19p19_p19a19a19_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6]*Q0[7]*Q0[8];
R*=creal(Prop);
 return R;
}