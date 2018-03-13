/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F466_ext;
static void C466(REAL * C)
{
REAL* V=va_ext;
REAL S[6];                                                                  
     
S[0]=V[5]*V[5];
C[1]=+S[0];
S[1]=V[18]*V[18];
S[2]=V[16]*V[16];
S[3]=V[14]*V[14];
S[4]=V[10]*V[10];
S[5]=V[7]*V[7];
C[0]=+S[1]*S[2]*S[3]*S[4]*S[5];
}
REAL F466_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[2];                                                           
     
if(!DP){C466(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+9;
R=+2*DP[1]-C[1]-DP[0]+DP[3];
R*=(N/D);
Prop=1*Q2[9]*(gswidth_ext? creal(Q1[5]):Q1[5])*(gswidth_ext? creal(Q1[7]):
 conj(Q1[7]));
if(gswidth_ext ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[6]*Q0[8];
R*=creal(Prop);
 return R;
}
