#define MASSES_INFO
#define CONSTRAINTS 
#define OMEGA
#define CLEAN

#include "../include/micromegas.h"
#include "../include/micromegas_aux.h"
#include "lib/pmodel.h"


int main(int argc,char** argv)
{
int err;
char cdmName[10];
int spin2, charge3,cdim;
ForceUG=0 ;  /* to Force Unitary Gauge assign 1 else 0 */
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
if(err) 
	{
	printf("Can't calculate %s\n",cdmName);
	return 1;
	}
qNumbers(cdmName, &spin2, &charge3, &cdim);
printf("\nDark matter candidate is '%s' with spin=%d/2\n", cdmName,       spin2);
if(charge3) 
	{
	printf("Dark Matter has electric charge %d/3\n",charge3);
	exit(1);
	}
if(cdim!=1) 
	{
	printf("Dark Matter is a color particle\n");
	exit(1);
	}
#ifdef MASSES_INFO
	{
	printf("\n=== MASSES OF HIGGS AND ODD PARTICLES: ===\n");
	printHiggs(stdout);
	printMasses(stdout,1);   
	}
#endif
#ifdef CONSTRAINTS
	{
	double csLim;  
	if(Zinvisible()) printf("Excluded by Z->invisible\n");
	if(LspNlsp_LEP(&csLim)) printf("LEP excluded by e+,e- -> DM q qbar  Cross section= %.2E pb\n",csLim);
	}
#endif
#ifdef OMEGA
	{
	int fast=-1;
	double Beps=1.E-6, cut=1e-102;
	double Omega,Xf;   
	int i;
	printf("\n==== Calculation of relic density =====\n");  
	// to exclude processes with virtual W/Z in DM   annihilation      
	//VZdecay=0; VWdecay=1; cleanDecayTable(); 
	// to include processes with virtual W/Z  also  in co-annihilation 
	   VZdecay=2; VWdecay=2; cleanDecayTable(); 
	Omega=darkOmega32(&Xf,fast,Beps);
	printf("Xf=%e OmegaEX=%e\n",Xf,Omega);
	Omega=darkOmegaFO(&Xf, fast, Beps);
	printf("Xf=%e OmegaFO=%e\n",Xf,Omega);
	if(Omega>0)printChannels(Xf,cut,Beps,1,stdout);
	double x, dx=0.8,vs;
	FILE * fp=fopen("data", "w+");
	numout * cc=newProcess("~x1,~x1->~x1,~X1,~X1"),*cc22=newProcess("~x1,~X1->W+,W-");//("~x1,~x1->~x1,~X1,~X1");//,~X1"~x1,~X1->W+,W-"
	double hubb,Rin,Rout,Rin22,Rout22,s,d,d22,vs22,noint, M_Pl=1.22066e19;
	int err,rep22=0,rep=0;
	double xstart=Mcdm/Tstart,xend=Mcdm/Tend;
	for (x =10 ; x< 50; x+=dx)
		{
		if (x>19 && x<30 && rep==0) x-=0.8*dx;
		if (x>200 )dx=2;
		s=s_dens(Mcdm/x);
		vs22=vSigmaCC(Mcdm/x,cc22,0);
		vs= vSigmaCC(Mcdm/x,cc,0);
		if (vs==0 && rep<6) 
			{
			vs= vSigmaCC(Mcdm/x,cc,0);
			rep++;
			printf("repeating calculation\n\n");
			continue;
			}/*
		if (vs22==0 && rep22<6)
			{
			vs22= vSigmaCC(Mcdm/x,cc22,0);
			printf("repeating calculation\n\n");
			rep22++;
			continue;
			}*/
		rep=0;
		vs22= vSigma(Mcdm/x, Beps,fast);
		Rin=vs/(s*Yeq(Mcdm/x));//*s*YF(Mcdm/x);
		Rout=vs;//*pow(s*Yeq(Mcdm/x),2)/(s*YF(Mcdm/x));
		Rin22=vs22;//*s*YF(Mcdm/x);
		Rout22=vs22;//*pow(s*Yeq(Mcdm/x),2)/(s*YF(Mcdm/x));
		hubb=H_rate(Mcdm/x);
		d=fabs( Rin-Rout);
		d22=fabs( Rin22-Rout);
		fprintf(fp,    "%f\t%e\t%e\t%e\t%e\t%e\n", x,s*YF(Mcdm/x), vs22, Rin,Rout22,3.*hubb);
		fprintf(stdout,"%f\t%e\t%e\t%e\t%e\t%e\n", x,s*YF(Mcdm/x), vs22, Rin,Rout22,3.*hubb);
		//fprintf(stdout,"%f\t%e\t%e\n", x, dcs,chi2);
		}
		
		//fprintf(stdout,"sigma 0 =\t%e\n",vSigmaCC(0.00001,cc,1));
	fclose(fp);   
	VZdecay=1; VWdecay=1; cleanDecayTable();  // restore default
	}
#endif
#ifdef CLEAN 
	system("rm -f nngg.in nngg.out"); 
	system("rm -f HB.* HS.* hb.* hs.*  debug_channels.txt debug_predratio.txt  Key.dat");
	system("rm -f Lilith_*   particles.py*");
	system("rm -f   smodels.in  smodels.log  smodels.out  summary.*");  
#endif 
killPlots();
return 0;
}
