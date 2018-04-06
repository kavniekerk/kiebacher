/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F280_ext;
static void C280(REAL * C)
{
REAL* V=va_ext;
REAL S[3];                                                                  
     
S[0]=V[25]*V[25]*V[25]*V[25];
S[1]=V[14]*V[14];
S[2]=V[10]*V[10];
C[0]=+S[0]*S[1]*S[2];
}
