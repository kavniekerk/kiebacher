/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F531_ext;
static void C531(REAL * C)
{
REAL* V=va_ext;
REAL S[6];                                                                  
     
S[0]=V[16]*V[16]*V[16]*V[16];
C[5]=+9*S[0];
S[1]=V[16]*V[16];
C[4]=+18*S[1];
C[3]=+6*S[1];
C[2]=+24*S[1];
C[1]=+12*S[1];
S[2]=V[21]*V[21]*V[21]*V[21];
S[3]=V[14]*V[14];
S[4]=V[11]*V[11]*V[11]*V[11];
S[5]=V[10]*V[10];
C[0]=+S[2]*S[3]*S[4]*S[5];
}
REAL F531_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[6];                                                           
     
if(!DP){C531(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+36;
R=+DP[0]*(8*(DP[0]-DP[2])+12*(-DP[1]-DP[4])+C[4]-24*DP[3])+DP[1]*(4*(DP[1]+
 DP[2])+16*DP[3]-C[1]+8*DP[4])+DP[3]*(16*(DP[3]+DP[4])+8*DP[2]-C[2])+DP[4]*(
 4*(DP[2]+DP[4])-C[1])+C[5]-C[3]*DP[2];
R*=(N/D);
Prop=1*Q2[17]*(gtwidth_ext? creal(Q1[8]):Q1[8])*(gtwidth_ext? creal(Q1[7]):
 conj(Q1[7]));
if(gswidth_ext ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 return R;
}