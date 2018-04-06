/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F1110_p19p19_p19a19a19_u;
static void C1110(REAL * C)
{
REAL* V=va_p19p19_p19a19a19_u;
REAL S[1];                                                                  
     
S[0]=V[10]*V[10];
C[0]=+V[26]*V[25]*V[24]*V[23]*S[0];
}
REAL F1110_p19p19_p19a19a19_u(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_p19p19_p19a19a19_u;
static REAL C[1];                                                           
     
if(!DP){C1110(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+18;
R=+1;
R*=(N/D);
Prop=1*(gtwidth_p19p19_p19a19a19_u? creal(Q1[12]):Q1[12])*(gswidth_p19p19_p19a19a19_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_p19p19_p19a19a19_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[6];
R*=creal(Prop);
 return R;
}
