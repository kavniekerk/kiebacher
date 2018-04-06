/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F877_ext;
static void C877(REAL * C)
{
REAL* V=va_ext;
REAL S[4];                                                                  
     
S[0]=V[16]*V[16];
C[1]=+3*S[0];
S[1]=V[22]*V[22];
S[2]=V[11]*V[11];
S[3]=V[10]*V[10];
C[0]=+V[26]*V[24]*S[1]*V[14]*S[2]*S[3];
}
REAL F877_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[2];                                                           
     
if(!DP){C877(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+18;
R=+4*(DP[4]-DP[0])+2*(DP[2]+DP[3])-C[1];
R*=(N/D);
Prop=1*(gtwidth_ext? creal(Q1[20]):Q1[20])*(gtwidth_ext? creal(Q1[9]):Q1[9])
 *(gtwidth_ext? creal(Q1[22]):conj(Q1[22]));
if(gswidth_ext ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 return R;
}
