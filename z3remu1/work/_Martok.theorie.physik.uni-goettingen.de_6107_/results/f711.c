/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F711_ext;
static void C711(REAL * C)
{
REAL* V=va_ext;
REAL S[3];                                                                  
     
S[0]=V[18]*V[18];
S[1]=V[10]*V[10]*V[10]*V[10];
S[2]=V[7]*V[7]*V[7]*V[7];
C[0]=+S[0]*S[1]*S[2];
}
REAL F711_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[1];                                                           
     
if(!DP){C711(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+648;
R=+1;
R*=(N/D);
Prop=1*(gtwidth_ext? creal(Q1[20]):Q1[20])*(gtwidth_ext? creal(Q1[10]):
 Q1[10])*(gtwidth_ext? creal(Q1[21]):conj(Q1[21]))*(gswidth_ext? creal(
 Q1[12]):conj(Q1[12]));
if(gswidth_ext ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6]*Q0[7]*Q0[8];
R*=creal(Prop);
 return R;
}
