/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F105_ext;
static void C105(REAL * C)
{
REAL* V=va_ext;
REAL S[4];                                                                  
     
S[0]=V[14]*V[14]*V[14]*V[14];
S[1]=V[10]*V[10];
S[2]=V[9]*V[9]*V[9]*V[9];
S[3]=V[7]*V[7];
C[0]=+S[0]*S[1]*S[2]*S[3];
}
REAL F105_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[1];REAL S[1];                                                 
     
if(!DP){C105(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+18;
S[0]=DP[2]*DP[2];
R=+DP[0]*(DP[0]+2*DP[2])+S[0];
R*=(N/D);
Prop=1*Q2[13]*Q2[12];
if(gswidth_ext ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6]*Q0[7]*Q0[8];
R*=creal(Prop);
 return R;
}
