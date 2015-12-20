/* a c program to find 2^1000*/
#include<stdio.h>
void main()
{
static int a[500];
int temp, i,j,carry=0;
long long int sum=0;
a[0]=2;
for(i=1;i<1000;i++)
{
for(j=0;j<400;j++)
{
	temp=a[j]*2;
	if(temp>9)
	{
		a[j]=temp%10+carry;
		carry=1;
	}
	else
	{
		a[j]=temp+carry;
		carry=0;
	}
}
}
printf("the answer is \n");
for(i=0;i<400;i++)
{
	printf("%d",a[i]);
	sum=sum+a[i];
	
}
printf("\nits sum is %d",sum );
}
	
