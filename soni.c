#include<stdio.h>
main()
{
	int i;
	float result,MINf,QSinf,result1;
	float length=9.60,breadth=7.62,height=3.47,N=40;
	float agw=15.78,Uwall=1.78,fos=1.25,Uroof=1.316,Wi=.0099,Ufloor=1.2,Wo=0.0107,ETDwall=25,Po=1.095,ETDroof=30,SHpp=90,LHpp=40;
	float ETDfloor=18,Uglass=3.12,SHGglass=300,SCglass=.86,LL=.8,Cpm=1021.66,inf=.5,Pa=1.095,AL=400,DBTo=24, DBTi=25 ,RH=50, WBTo=24;
	float Hfg=2500971.5,Minf;
	printf("Enter the choice you want to find / Press 9 to Exit\n");
	printf("1: Heat transfer through walls \n 2: Heat transfer rate through roof \n 3: Heat transfer through floor\n 4: Heat transfer rate through glass.\n 5: Heat tranfer due to infiteration.\n 6: Internal Load.\n 7:Lighting Load.\n 8: Appliance Load.\n ");
	do
	{
	scanf("%d",&i);
	switch(i)
	{
		case 1: 
		 result=Uwall*((length*breadth)-agw)* ETDwall;
		 printf("Heat transfer through walls is :%f watt\n",result);
		 break;
		 case 2:
		 result=Uroof * length*breadth*ETDroof;
		 printf("Heat transfer rate through roof is: %f watt\n",result);
		 break;
		 case 3:
		 result=Ufloor *length *breadth*ETDfloor;
		 printf("Heat transfer through floor is: %f watt\n",result);
		 break;
		 case 4:
		 result=agw*(Uglass*(DBTo-DBTi)+SHGglass*SCglass);
		 printf("Heat transfer through glass is : %f watt\n",result);
		 break;
		 case 5:
		 Minf=(Pa*inf*length*breadth*height)/3600;
		 result1=Minf*Cpm*(DBTi-DBTo);
		 printf("Specific Infiteration heat is : %f watt\n ",result1);
		 result=Minf*Hfg*(Wo-Wi);
		 printf("Latent Infiteration heat is : %f watt\n ",result);
		 break;
		 case 6:
		 result1=N*SHpp;
		 printf("Specific Internal Load is: %f watt\n",result1);
		 result=N*LHpp;
		 printf("Latent Internal Load is : %f watt\n",result);
		 break;
		 case 7:
		 result= LL* length*breadth;
		 printf("Lighting Load is :%f watt\n",result);
		 break;
		 case 8:
		 result1=300;
		 result=100;
		 printf("Specific Appliance load is :%f watt\n",result1);
		 printf("Latent Appliance Load is :%f watt\n",result);
		 break;
	}
	 }while(i!=9);
}
