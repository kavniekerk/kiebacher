/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F168_ext;
static void C168(REAL * C)
{
REAL* V=va_ext;
REAL S[6];                                                                  
     
S[0]=V[16]*V[16]*V[16]*V[16];
C[4]=+6*S[0];
S[1]=V[16]*V[16];
C[3]=+10*S[1];
C[2]=+11*S[1];
C[1]=+7*S[1];
S[2]=V[22]*V[22]*V[22]*V[22];
S[3]=V[14]*V[14];
S[4]=V[11]*V[11]*V[11]*V[11];
S[5]=V[10]*V[10];
C[0]=+S[2]*S[3]*S[4]*S[5];
}
REAL F168_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[5];                                                           
     
if(!DP){C168(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+9;
R=+DP[0]*(8*(-DP[1]-DP[2])+C[3]+4*DP[0]-10*DP[3]-6*DP[4])+DP[1]*(4*DP[1]-
 C[3]+8*DP[2]+10*DP[3]+6*DP[4])+DP[2]*(4*DP[2]-C[3]+10*DP[3]+6*DP[4])+DP[3]*
 (4*DP[3]-C[2]+6*DP[4])+DP[4]*(2*DP[4]-C[1])+C[4];
R*=(N/D);
Prop=1*(gtwidth_ext? creal(Q1[11]):Q1[11])*(gtwidth_ext? creal(Q1[8]):Q1[8])
 *(gswidth_ext? creal(Q1[18]):conj(Q1[18]))*(gswidth_ext? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_ext ) Prop=Prop*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 return R;
}
