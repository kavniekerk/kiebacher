/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F68_ext;
static void C68(REAL * C)
{
REAL* V=va_ext;
REAL S[5];                                                                  
     
S[0]=V[16]*V[16];
C[1]=+3*S[0];
S[1]=V[22]*V[22]*V[22]*V[22];
S[2]=V[14]*V[14];
S[3]=V[11]*V[11]*V[11]*V[11];
S[4]=V[10]*V[10];
C[0]=+S[1]*S[2]*S[3]*S[4];
}
REAL F68_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[2];                                                           
     
if(!DP){C68(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+9;
R=+DP[0]*(4*(DP[3]-DP[0])+2*(DP[4]-DP[1])-C[1])+DP[1]*(2*(DP[1]+DP[4])+4*
 DP[3]-C[1]);
R*=(N/D);
Prop=1*(gtwidth_ext? creal(Q1[9]):Q1[9])*(gswidth_ext? creal(Q1[10]):Q1[10])
 *(gtwidth_ext? creal(Q1[11]):conj(Q1[11]))*(gtwidth_ext? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_ext ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 return R;
}