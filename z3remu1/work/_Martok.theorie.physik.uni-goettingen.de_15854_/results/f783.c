/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F783_ext;
static void C783(REAL * C)
{
REAL* V=va_ext;
REAL S[6];                                                                  
     
S[0]=V[5]*V[5]*V[5]*V[5];
C[4]=+6*S[0];
S[1]=V[5]*V[5];
C[3]=+10*S[1];
C[2]=+7*S[1];
C[1]=+11*S[1];
S[2]=V[14]*V[14]*V[14]*V[14];
S[3]=V[10]*V[10];
S[4]=V[9]*V[9]*V[9]*V[9];
S[5]=V[7]*V[7];
C[0]=+S[2]*S[3]*S[4]*S[5];
}
REAL F783_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[5];                                                           
     
if(!DP){C783(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+9;
R=+DP[0]*(8*(-DP[1]-DP[2])+C[3]+4*DP[0]-6*DP[3]-10*DP[4])+DP[1]*(4*DP[1]-
 C[3]+8*DP[2]+6*DP[3]+10*DP[4])+DP[2]*(4*DP[2]-C[3]+6*DP[3]+10*DP[4])+DP[3]*
 (2*DP[3]-C[2]+6*DP[4])+DP[4]*(4*DP[4]-C[1])+C[4];
R*=(N/D);
Prop=1*(gswidth_ext? creal(Q1[18]):Q1[18])*(gswidth_ext? creal(Q1[1]):Q1[1])
 *(gtwidth_ext? creal(Q1[19]):conj(Q1[19]))*(gtwidth_ext? creal(Q1[11]):
 conj(Q1[11]));
if(gswidth_ext ) Prop=Prop*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6]*Q0[7]*Q0[8];
R*=creal(Prop);
 return R;
}