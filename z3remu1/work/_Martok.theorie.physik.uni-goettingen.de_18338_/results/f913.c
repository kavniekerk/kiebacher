/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F913_ext;
static void C913(REAL * C)
{
REAL* V=va_ext;
REAL S[2];                                                                  
     
S[0]=V[17]*V[17];
S[1]=V[7]*V[7];
C[0]=+V[18]*S[0]*V[10]*V[8]*S[1];
}
REAL F913_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[1];                                                           
     
if(!DP){C913(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+18;
R=+1;
R*=(N/D);
Prop=1*(gswidth_ext? creal(Q1[18]):Q1[18])*(gswidth_ext? creal(Q1[3]):Q1[3])
 *(gswidth_ext? creal(Q1[8]):conj(Q1[8]));
if(gswidth_ext ) Prop=Prop*Q0[1]*Q0[2]*Q0[4]*Q0[5]*Q0[6]*Q0[7];
R*=creal(Prop);
 return R;
}
