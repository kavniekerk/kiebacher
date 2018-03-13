/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F852_ext;
static void C852(REAL * C)
{
REAL* V=va_ext;
REAL S[6];                                                                  
     
S[0]=V[5]*V[5]*V[5]*V[5];
C[5]=+9*S[0];
S[1]=V[5]*V[5];
C[4]=+18*S[1];
C[3]=+6*S[1];
C[2]=+12*S[1];
C[1]=+24*S[1];
S[2]=V[14]*V[14]*V[14]*V[14];
S[3]=V[10]*V[10];
S[4]=V[9]*V[9]*V[9]*V[9];
S[5]=V[7]*V[7];
C[0]=+S[2]*S[3]*S[4]*S[5];
}
REAL F852_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[6];                                                           
     
if(!DP){C852(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+36;
R=+DP[0]*(8*(DP[0]-DP[1])+12*(-DP[2]-DP[3])+C[4]-24*DP[4])+DP[2]*(4*(DP[1]+
 DP[2])+8*DP[3]-C[2]+16*DP[4])+DP[3]*(4*(DP[1]+DP[3])+16*DP[4]-C[2])+DP[4]*(
 8*DP[1]-C[1]+16*DP[4])+C[5]-C[3]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_ext? creal(Q1[20]):Q1[20])*Q2[11]*(gtwidth_ext? creal(
 Q1[19]):conj(Q1[19]));
if(gswidth_ext ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6]*Q0[7]*Q0[8];
R*=creal(Prop);
 return R;
}
