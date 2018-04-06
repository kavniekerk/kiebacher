/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C1(REAL *);
extern DNN S1_ext;
REAL S1_ext(double GG, REAL * momenta,REAL*cb_coeff,int * err)
{REAL  ans=0;
REAL DP[3];
REAL* V=va_ext;
 if(momenta)
 {sprod_(3, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[2];                                                     
if(!momenta){ C1(C); return 0;}
N=+C[0];
D=+24;
R=+C[1];
R*=(N/D);
;
ans+=R;

}
return ans;
}

static void C1(REAL*C)
{
  REAL* V=va_ext;
REAL S[6];                                                            
S[0]=V[20]*V[20];
S[1]=V[4]*V[4];
C[1]=+4*S[0]-S[1];
S[2]=V[28]*V[28]*V[28]*V[28];
S[3]=V[27]*V[27];
S[4]=V[12]*V[12];
S[5]=V[11]*V[11];
C[0]=+S[2]*S[3]*S[4]*S[5];
}
