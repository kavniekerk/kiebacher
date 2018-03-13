/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F862_ext;
static void C862(REAL * C)
{
REAL* V=va_ext;
REAL S[6];                                                                  
     
S[0]=V[5]*V[5];
C[1]=+3*S[0];
S[1]=V[16]*V[16];
S[2]=V[14]*V[14]*V[14]*V[14];
S[3]=V[10]*V[10];
S[4]=V[9]*V[9];
S[5]=V[7]*V[7];
C[0]=+S[1]*S[2]*S[3]*S[4]*S[5];
}
REAL F862_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[2];                                                           
     
if(!DP){C862(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+9;
R=+DP[2]*(2*(-DP[2]-DP[3]-DP[4])+C[1]+4*DP[0])+DP[4]*(4*(DP[4]-DP[0])+2*
 DP[3]-C[1]);
R*=(N/D);
Prop=1*(gtwidth_ext? creal(Q1[20]):Q1[20])*(gtwidth_ext? creal(Q1[11]):
 Q1[11])*(gtwidth_ext? creal(Q1[19]):conj(Q1[19]))*(gswidth_ext? creal(
 Q1[6]):conj(Q1[6]));
if(gswidth_ext ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[7]*Q0[8];
R*=creal(Prop);
 return R;
}