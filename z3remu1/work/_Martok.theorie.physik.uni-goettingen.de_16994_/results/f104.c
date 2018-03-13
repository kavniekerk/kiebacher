/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F104_ext;
static void C104(REAL * C)
{
REAL* V=va_ext;
REAL S[3];                                                                  
     
S[0]=V[14]*V[14];
S[1]=V[9]*V[9];
S[2]=V[7]*V[7];
C[0]=+V[18]*S[0]*V[10]*S[1]*V[8]*S[2];
}
REAL F104_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[1];                                                           
     
if(!DP){C104(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+18;
R=+DP[0]+DP[1];
R*=(N/D);
Prop=1*(gtwidth_ext? creal(Q1[11]):Q1[11])*(gswidth_ext? creal(Q1[12]):
 Q1[12])*(gtwidth_ext? creal(Q1[21]):conj(Q1[21]));
if(gswidth_ext ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6]*Q0[7]*Q0[8];
R*=creal(Prop);
 return R;
}
