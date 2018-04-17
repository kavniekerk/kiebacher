#define MASSES_INFO
#define CONSTRAINTS
#define OMEGA
#include "../include/micromegas.h"
#include "../include/micromegas_aux.h"
#include "lib/pmodel.h"

int main(int argc,char** argv)
{  int err;
   char cdmName[10];
   int spin2, charge3,cdim;
  ForceUG=1;  /* to Force Unitary Gauge assign 1 */
  VZdecay=1; VWdecay=1;  
  if(argc==1)
  { 
      printf(" Correct usage:  ./main  <file with parameters> \n");
      printf("Example: ./main data1.par\n");
      exit(1);
  }
  err=readVar(argv[1]);
  if(err==-1)     {printf("Can not open the file\n"); exit(1);}
  else if(err>0)  { printf("Wrong file contents at line %d\n",err);exit(1);}
  err=sortOddParticles(cdmName);
  printConstr(stdout);
  if(err) { printf("Can't calculate %s\n",cdmName); return 1;}
  if(CDM1) 
  { 
     qNumbers(CDM1, &spin2, &charge3, &cdim);
     printf("\nDark matter candidate is '%s' with spin=%d/2 mass=%.2E\n",CDM1,  spin2,Mcdm1); 
     if(charge3) printf("Dark Matter has electric charge %d/3\n",charge3);
     if(cdim!=1) printf("Dark Matter is a color particle\n");
  }
  if(CDM2) 
  { 
     qNumbers(CDM2, &spin2, &charge3, &cdim);
     printf("\nDark matter candidate is '%s' with spin=%d/2 mass=%.2E\n",CDM2,spin2,Mcdm2); 
     if(charge3) printf("Dark Matter has electric charge %d/3\n",charge3);
     if(cdim!=1) printf("Dark Matter is a color particle\n");
  }
#ifdef MASSES_INFO
{
  printf("\n=== MASSES OF HIGGS AND ODD PARTICLES: ===\n");
  printHiggs(stdout);
  printMasses(stdout,1);
}
#endif

#ifdef CONSTRAINTS
{ double csLim;
  if(Zinvisible()) printf("Excluded by Z->invizible\n");
  //if(Zprimelimits()) printf("Excluded by Z' limits\n");
  if(LspNlsp_LEP(&csLim)) printf("LEP excluded by e+,e- -> DM q q-\\bar  Cross Section= %.2E pb\n",csLim);
}
#endif

#ifdef OMEGA
{ int fast=0;
  double Beps=1.E-7, cut=1.e-160;
  double Omega, P=1e-3;  
  int i,err; 
  printf("sigma_self/Mcdm(P=%f) = %e cm^2/g",P,coreandcusp(P));
  printf("\n==== Calculation of relic density =====\n");   
  if(CDM1 && CDM2) 
  {
  
    Omega= darkOmega2(fast,Beps);
    printf("Omega_1h^2=%.2E\n", Omega*(1-fracCDM2));
    printf("Omega_2h^2=%.2E\n", Omega*fracCDM2);
  } else
  {  double Xf;
     Omega=darkOmega23(&Xf,fast,Beps);
     printf("Xf=%.2e Omega=%.2e\n",Xf,Omega);
     if(Omega>0)printChannels(Xf,cut,Beps,1,stdout);
  }
	double x, dx=1,vs;
	FILE * fp=fopen("data", "w+");
	numout * cc=newProcess("~x,~x->~x,~X,~X"),*cc22=newProcess("~x,~X->u,U");//("~x1,~x1->~x1,~X1,~X1");//,~X1"~x1,~X1->W+,W-"
	double hubb,Rin,Rout,Rin22,Rout22,s,d,d22,vs22,noint,neq,nF, M_Pl=1.22066e19;
	int rep22=0,rep=0,count=20;
	double xstart=Mcdm/Tstart,xend=Mcdm/Tend;
	for (x =3 ; x< 40; x+=dx,count++)
		{
		if (x>19 && x<30 && rep==0) x-=0.2*dx;
		s=s_dens(Mcdm/x);
		neq=s*Yeq(Mcdm/x);
		nF=s*YF(Mcdm/x);
		vs22=vSigmaCC23(Mcdm/x,cc22,1);
		vs=vSigmaCC23(Mcdm/x,cc,0);
		if (vs==0 && rep<20) 
			{
			vs= vSigmaCC23(Mcdm/x,cc,0);
			rep++;
			//printf("repeating calculation\n\n");
			x-=dx;
			count--;
			continue;
			}
		if (vs22==0 && rep22<9)
			{
			vs22= vSigmaCC23(Mcdm/x,cc22,1);
			//printf("repeating calculation\n\n");
			rep22++;
			x-=dx;
			count--;
			continue;
			}
		rep=0;
		Rin=vs*(nF-nF*nF/neq);
		Rin22=vs22*(nF-neq*neq/nF);
		hubb=H_rate(Mcdm/x);		
		if(count%20==0)fprintf(stdout,"%s\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\n", "x","YF(x)","Yeq(x)","R_22","vs22","R_32","vs32");
		fprintf(fp,    "%f\t%e\t%e\t%e\t%e\t%e\t%e\n"              , x,YF(Mcdm/x), Yeq(Mcdm/x), fabs(Rin22), vs22, fabs(Rin),vs);
		fprintf(stdout,"%.2f\t%.2e\t%.2e\t%.2e\t%.2e\t%.2e\t%.2e\n", x,YF(Mcdm/x), Yeq(Mcdm/x), fabs(Rin22), vs22, fabs(Rin),vs);
		//fprintf(stdout,"%f\t%e\t%e\n", x, dcs,chi2);
		}
		
		//fprintf(stdout,"sigma 0 =\t%e\n",vSigmaCC(0.00001,cc,1));
	fclose(fp);   
}
#endif
  return 0;
}
