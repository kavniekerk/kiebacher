/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C14(REAL *);
extern DNN S14_ext;
REAL S14_ext(double GG, REAL * momenta,REAL*cb_coeff,int * err)
{REAL  ans=0;
REAL DP[3];
REAL* V=va_ext;
 if(momenta)
 {sprod_(3, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[3];                                                     
if(!momenta){ C14(C); return 0;}
N=+C[0];
D=+C[1];
R=+C[2];
R*=(N/D);
;
ans+=R;

}
return ans;
}

static void C14(REAL*C)
{
  REAL* V=va_ext;
REAL S[4];                                                            
S[0]=V[14]*V[14];
C[2]=+S[0]*(8*S[0]-4)+1;
S[1]=V[13]*V[13];
C[1]=+6*S[0]*S[1];
S[2]=V[4]*V[4];
S[3]=V[1]*V[1];
C[0]=+S[2]*S[3];
}
