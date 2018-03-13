/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F828_ext;
static void C828(REAL * C)
{
REAL* V=va_ext;
REAL S[7];                                                                  
     
S[0]=V[5]*V[5]*V[5]*V[5];
C[3]=+S[0];
S[1]=V[5]*V[5];
C[2]=+4*S[1];
C[1]=+2*S[1];
S[2]=V[16]*V[16];
S[3]=V[14]*V[14]*V[14]*V[14];
S[4]=V[10]*V[10];
S[5]=V[9]*V[9];
S[6]=V[7]*V[7];
C[0]=+2*S[2]*S[3]*S[4]*S[5]*S[6];
}
REAL F828_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[4];                                                           
     
if(!DP){C828(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+9;
R=+DP[0]*(C[1]+DP[0]-4*DP[2]-2*DP[4])+DP[2]*(4*(DP[2]+DP[4])-C[2])+DP[4]*(
 DP[4]-C[1])+C[3];
R*=(N/D);
Prop=1*Q2[20]*(gswidth_ext? creal(Q1[1]):Q1[1])*(gswidth_ext? creal(Q1[5]):
 conj(Q1[5]));
if(gswidth_ext ) Prop=Prop*Q0[2]*Q0[3]*Q0[4]*Q0[6]*Q0[7]*Q0[8];
R*=creal(Prop);
 return R;
}
