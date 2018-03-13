/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F1019_p19p19_p19a19a19_u;
static void C1019(REAL * C)
{
REAL* V=va_p19p19_p19a19a19_u;
REAL S[6];                                                                  
     
S[0]=V[5]*V[5]*V[5]*V[5];
C[3]=+9*S[0];
S[1]=V[5]*V[5];
C[2]=+12*S[1];
C[1]=+24*S[1];
S[2]=V[16]*V[16]*V[16]*V[16];
S[3]=V[14]*V[14]*V[14]*V[14];
S[4]=V[10]*V[10];
S[5]=V[7]*V[7];
C[0]=+S[2]*S[3]*S[4]*S[5];
}
REAL F1019_p19p19_p19a19a19_u(double GG,REAL*DP,REAL*Q0,COMPLEX*Q1,REAL*Q2,REAL*
 cb_coeff)
{
REAL N,D,R; COMPLEX Prop;
REAL * V=va_p19p19_p19a19a19_u;
static REAL C[4];                                                           
     
if(!DP){C1019(C); return 0;} 
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+36;
R=+16*(DP[0]*(DP[0]-DP[2]-DP[3])+DP[4]*(DP[2]+DP[3]+DP[4]))+DP[2]*(4*DP[2]-
 C[2]+8*DP[3])+DP[0]*(C[1]-32*DP[4])+DP[3]*(4*DP[3]-C[2])+C[3]-C[1]*DP[4];
R*=(N/D);
Prop=1*Q2[20]*Q2[16];
if(gswidth_p19p19_p19a19a19_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6]*Q0[7]*Q0[8];
R*=creal(Prop);
 return R;
}
