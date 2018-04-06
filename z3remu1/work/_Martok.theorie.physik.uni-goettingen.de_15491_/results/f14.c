/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F14_ext;
static void C14(REAL * C)
{
REAL* V=va_ext;
REAL S[7];                                                                  
     
S[0]=V[16]*V[16]*V[16]*V[16];
C[3]=+S[0];
S[1]=V[16]*V[16];
C[2]=+4*S[1];
C[1]=+2*S[1];
S[2]=V[22]*V[22];
S[3]=V[21]*V[21];
S[4]=V[14]*V[14];
S[5]=V[11]*V[11]*V[11]*V[11];
S[6]=V[10]*V[10];
C[0]=+2*S[2]*S[3]*S[4]*S[5]*S[6];
}
REAL F14_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[4];                                                           
     
if(!DP){C14(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+9;
R=+DP[0]*(C[1]+DP[0]-4*DP[1]-2*DP[3])+DP[1]*(4*(DP[1]+DP[3])-C[2])+DP[3]*(
 DP[3]-C[1])+C[3];
R*=(N/D);
Prop=1*Q2[7]*(gswidth_ext? creal(Q1[1]):Q1[1])*(gswidth_ext? creal(Q1[14]):
 conj(Q1[14]));
if(gswidth_ext ) Prop=Prop*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 return R;
}
