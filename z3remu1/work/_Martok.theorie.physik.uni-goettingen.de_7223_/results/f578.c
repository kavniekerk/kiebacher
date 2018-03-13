/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F578_p19p19_p19a19a19_u;
static void C578(REAL * C)
{
REAL* V=va_p19p19_p19a19a19_u;
REAL S[3];                                                                  
     
S[0]=V[13]*V[13];
S[1]=V[10]*V[10];
S[2]=V[7]*V[7];
C[0]=+S[0]*S[1]*S[2];
}
REAL F578_p19p19_p19a19a19_u(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_p19p19_p19a19a19_u;
static REAL C[1];                                                           
     
if(!DP){C578(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+72;
R=+1;
R*=(N/D);
Prop=1*Q2[12];
if(gswidth_p19p19_p19a19a19_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6]*Q0[7]*Q0[8];
R*=creal(Prop);
 return R;
}
