/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C4(REAL *);
extern DNN S4_ext;
REAL S4_ext(double GG, REAL * momenta,REAL*cb_coeff,int * err)
{REAL  ans=0;
REAL DP[3];
REAL* V=va_ext;
 if(momenta)
 {sprod_(3, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[3];                                                     
if(!momenta){ C4(C); return 0;}
N=+C[0];
D=+C[1];
R=+C[2];
R*=(N/D);
;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (3 2) */
 }
ans+=R;

}
return ans;
}

static void C4(REAL*C)
{
  REAL* V=va_ext;
REAL S[5];                                                            
S[0]=V[14]*V[14];
S[1]=V[15]*V[15];
S[2]=V[4]*V[4];
C[2]=+S[0]*(S[2]*(8*S[0]-12)+S[1]*(16*S[0]-24))+9*(S[2]-S[1]);
S[3]=V[13]*V[13];
C[1]=+18*S[0]*S[3];
S[4]=V[1]*V[1];
C[0]=+S[4];
}
