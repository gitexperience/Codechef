/*Given two numbers L and R, find the highest occurring digit in the prime numbers present between L and R (both inclusive). 
If multiple digits have the same highest frequency print the largest of them. 
If there are no prime no.s between L and R, print -1. */
#include<stdio.h>
static int freq[100];
int isprime(int num)
{
	int temp=2,flag=1;
	while(temp<num)
	{
		if(num%temp==0)
		{
		flag=0;
		}
	temp++;
	}
	return flag;
}
void main()
{
	int l,r,i,count=0;
	int x,y,temp;
	static int max,prime[50];
	printf("Enter the two numbers\n");
	scanf("%d%d",&l,&r);
	i=l;
	while(i<=r)
	{
		if(isprime(i))
		{
			prime[count]=i;
			i++;
			count++;
		}
		else i++;
	}
	for(i=0;i<=count;i++)
	{
		int number=prime[i];
		while(number!=0)
		{
		x=number%10;
		freq[x]++;
		number=number/10;		
		}
	}
	max=freq[0];
	for(i=0;i<10;i++)
	{
		if(max<=freq[i])
		{
		max=freq[i];
		y=i;			//y is index and our output	
		}
	}
	printf("highest occuring digit is %d:and that number of times is %d",y,max);

}
	
	
	
