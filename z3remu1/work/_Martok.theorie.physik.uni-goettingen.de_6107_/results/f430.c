/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F430_ext;
static void C430(REAL * C)
{
REAL* V=va_ext;
REAL S[5];                                                                  
     
S[0]=V[5]*V[5];
C[1]=+S[0];
S[1]=V[16]*V[16];
S[2]=V[14]*V[14];
S[3]=V[10]*V[10]*V[10]*V[10];
S[4]=V[7]*V[7]*V[7]*V[7];
C[0]=+S[1]*S[2]*S[3]*S[4];
}
REAL F430_ext(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_ext;
static REAL C[2];                                                           
     
if(!DP){C430(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+324;
R=+2*DP[1]-C[1]-DP[0]+DP[3];
R*=(N/D);
Prop=1*(gtwidth_ext? creal(Q1[9]):Q1[9])*(gswidth_ext? creal(Q1[5]):Q1[5])*(
 gtwidth_ext? creal(Q1[20]):conj(Q1[20]))*(gtwidth_ext? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_ext ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[6]*Q0[7]*Q0[8];
R*=creal(Prop);
 return R;
}
