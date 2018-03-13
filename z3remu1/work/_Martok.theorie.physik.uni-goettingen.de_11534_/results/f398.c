/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F398_ext;
static void C398(REAL * C)
{
REAL* V=va_ext;
REAL S[4];                                                                  
     
S[0]=V[5]*V[5];
C[1]=+2*S[0];
S[1]=V[14]*V[14];
S[2]=V[9]*V[9];
S[3]=V[7]*V[7];
C[0]=+V[17]*V[15]*S[1]*V[10]*S[2]*S[3];
}
REAL F398_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[2];                                                           
     
if(!DP){C398(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+9;
R=+2*(DP[1]-DP[0]+DP[2])+DP[3]-C[1]+DP[4];
R*=(N/D);
Prop=1*(gtwidth_ext? creal(Q1[15]):Q1[15])*(gswidth_ext? creal(Q1[18]):conj(
 Q1[18]))*(gswidth_ext? creal(Q1[1]):conj(Q1[1]));
if(gswidth_ext ) Prop=Prop*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6]*Q0[7]*Q0[8];
R*=creal(Prop);
 return R;
}
