/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F555_ext;
static void C555(REAL * C)
{
REAL* V=va_ext;
REAL S[6];                                                                  
     
S[0]=V[16]*V[16]*V[16]*V[16];
C[5]=+3*S[0];
S[1]=V[16]*V[16];
C[4]=+2*S[1];
C[3]=+8*S[1];
C[2]=+4*S[1];
C[1]=+5*S[1];
S[2]=V[21]*V[21]*V[21]*V[21];
S[3]=V[14]*V[14];
S[4]=V[11]*V[11]*V[11]*V[11];
S[5]=V[10]*V[10];
C[0]=+S[2]*S[3]*S[4]*S[5];
}
REAL F555_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[6];                                                           
     
if(!DP){C555(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+9;
R=+DP[0]*(2*(DP[0]-DP[1])+4*(-DP[3]-DP[4])+C[1]-6*DP[2])+DP[2]*(4*(DP[1]+
 DP[2])+8*DP[3]-C[3]+6*DP[4])+DP[4]*(2*(DP[1]+DP[4])+4*DP[3]-C[1])+C[5]-
 C[4]*DP[1]-C[2]*DP[3];
R*=(N/D);
Prop=1*(gtwidth_ext? creal(Q1[17]):Q1[17])*(gtwidth_ext? creal(Q1[8]):Q1[8])
 *(gtwidth_ext? creal(Q1[20]):conj(Q1[20]))*(gswidth_ext? creal(Q1[14]):
 conj(Q1[14]));
if(gswidth_ext ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 return R;
}
