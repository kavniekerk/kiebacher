/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F143_ext;
static void C143(REAL * C)
{
REAL* V=va_ext;
REAL S[6];                                                                  
     
S[0]=V[16]*V[16]*V[16]*V[16];
C[3]=+9*S[0];
S[1]=V[16]*V[16];
C[2]=+24*S[1];
C[1]=+12*S[1];
S[2]=V[22]*V[22]*V[22]*V[22];
S[3]=V[14]*V[14];
S[4]=V[11]*V[11]*V[11]*V[11];
S[5]=V[10]*V[10];
C[0]=+S[2]*S[3]*S[4]*S[5];
}
REAL F143_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[4];                                                           
     
if(!DP){C143(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+36;
R=+DP[0]*(8*(-DP[1]-DP[2]-DP[4])+C[1]+4*DP[0]-16*DP[3])+DP[1]*(8*(DP[2]+
 DP[4])+4*DP[1]-C[1]+16*DP[3])+DP[2]*(4*DP[2]-C[1]+16*DP[3]+8*DP[4])+DP[3]*(
 16*(DP[3]+DP[4])-C[2])+DP[4]*(4*DP[4]-C[1])+C[3];
R*=(N/D);
Prop=1*Q2[11]*Q2[8];
if(gswidth_ext ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 return R;
}
