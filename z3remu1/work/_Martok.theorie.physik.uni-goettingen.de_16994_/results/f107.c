/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F107_ext;
static void C107(REAL * C)
{
REAL* V=va_ext;
REAL S[5];                                                                  
     
S[0]=V[17]*V[17];
S[1]=V[14]*V[14];
S[2]=V[10]*V[10];
S[3]=V[9]*V[9];
S[4]=V[7]*V[7];
C[0]=+S[0]*S[1]*S[2]*S[3]*S[4];
}
REAL F107_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[1];                                                           
     
if(!DP){C107(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+9;
R=+DP[0]+DP[2];
R*=(N/D);
Prop=1*(gtwidth_ext? creal(Q1[13]):Q1[13])*(gswidth_ext? creal(Q1[12]):
 Q1[12])*(gtwidth_ext? creal(Q1[9]):conj(Q1[9]))*(gswidth_ext? creal(Q1[3]):
 conj(Q1[3]));
if(gswidth_ext ) Prop=Prop*Q0[1]*Q0[2]*Q0[4]*Q0[5]*Q0[6]*Q0[7]*Q0[8];
R*=creal(Prop);
 return R;
}
