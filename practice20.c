#include<stdio.h>

int main()
{
   int i=10;
   showbits(i);
   i=-i;
   showbits(i);  		//difference dekho, '~' sign saare signs ko ulat deta hai 
   i=~i;				// jabki '-' sign 2s complement nikal deta hai...
   showbits(i);
printf("%d",i);
}
void showbits(int n)
{
	int i,k, andmask;
	for(i=15;i>=0;i--)
	{
		andmask=1<<i;
		k=n&andmask;
		k==0? printf("0"):printf("1");
	}
	printf("\n");
}
