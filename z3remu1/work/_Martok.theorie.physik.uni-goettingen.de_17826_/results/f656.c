/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F656_ext;
static void C656(REAL * C)
{
REAL* V=va_ext;
REAL S[5];                                                                  
     
S[0]=V[16]*V[16];
C[1]=+3*S[0];
S[1]=V[22]*V[22];
S[2]=V[14]*V[14]*V[14]*V[14];
S[3]=V[11]*V[11];
S[4]=V[10]*V[10]*V[10]*V[10];
C[0]=+S[1]*S[2]*S[3]*S[4];
}
REAL F656_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[2];                                                           
     
if(!DP){C656(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+648;
R=+2*(DP[1]-DP[0]+DP[2]+DP[3])+4*DP[4]-C[1];
R*=(N/D);
Prop=1*(gswidth_ext? creal(Q1[18]):Q1[18])*(gswidth_ext? creal(Q1[10]):
 Q1[10])*(gtwidth_ext? creal(Q1[19]):conj(Q1[19]))*(gtwidth_ext? creal(
 Q1[9]):conj(Q1[9]));
if(gswidth_ext ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 return R;
}