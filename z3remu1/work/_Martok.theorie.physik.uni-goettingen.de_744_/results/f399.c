/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F399_ext;
static void C399(REAL * C)
{
REAL* V=va_ext;
REAL S[3];                                                                  
     
S[0]=V[22]*V[22];
S[1]=V[11]*V[11];
S[2]=V[10]*V[10];
C[0]=+V[25]*V[23]*S[0]*V[14]*S[1]*S[2];
}
REAL F399_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[1];                                                           
     
if(!DP){C399(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+9;
R=+DP[4]-DP[2];
R*=(N/D);
Prop=1*(gtwidth_ext? creal(Q1[13]):Q1[13])*(gtwidth_ext? creal(Q1[19]):conj(
 Q1[19]))*(gswidth_ext? creal(Q1[2]):conj(Q1[2]));
if(gswidth_ext ) Prop=Prop*Q0[1]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 return R;
}
