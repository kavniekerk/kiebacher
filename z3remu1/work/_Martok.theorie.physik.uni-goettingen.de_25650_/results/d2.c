/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C2(REAL *);
extern DNN S2_ext;
REAL S2_ext(double GG, REAL * momenta,REAL*cb_coeff,int * err)
{REAL  ans=0;
REAL DP[3];
REAL* V=va_ext;
 if(momenta)
 {sprod_(3, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[2];                                                     
if(!momenta){ C2(C); return 0;}
N=-C[0];
D=+3;
R=+C[1];
R*=(N/D);
;
ans+=R;

}
return ans;
}

static void C2(REAL*C)
{
  REAL* V=va_ext;
REAL S[4];                                                            
S[0]=V[21]*V[21];
S[1]=V[4]*V[4];
C[1]=+4*S[0]-S[1];
S[2]=V[27]*V[27];
S[3]=V[11]*V[11];
C[0]=+S[2]*S[3];
}
