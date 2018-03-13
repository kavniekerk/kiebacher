/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F522_ext;
static void C522(REAL * C)
{
REAL* V=va_ext;
REAL S[3];                                                                  
     
S[0]=V[16]*V[16];
S[1]=V[14]*V[14];
S[2]=V[7]*V[7];
C[0]=+V[17]*S[0]*V[15]*S[1]*V[10]*S[2];
}
