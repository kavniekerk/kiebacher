/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C10(REAL *);
extern DNN S10_ext;
REAL S10_ext(double GG, REAL * momenta,REAL*cb_coeff,int * err)
{REAL  ans=0;
REAL DP[3];
REAL* V=va_ext;
 if(momenta)
 {sprod_(3, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[3];                                                     
if(!momenta){ C10(C); return 0;}
N=+C[0];
D=+C[1];
R=+C[2];
R*=(N/D);
;
ans+=R;

}
return ans;
}

static void C10(REAL*C)
{
  REAL* V=va_ext;
REAL S[5];                                                            
S[0]=V[14]*V[14];
S[1]=V[4]*V[4];
S[2]=V[3]*V[3];
C[2]=+S[0]*(S[2]*(16*S[0]-8)+S[1]*(8*S[0]-4))+S[1]-S[2];
S[3]=V[13]*V[13];
C[1]=+6*S[0]*S[3];
S[4]=V[1]*V[1];
C[0]=+S[4];
}
