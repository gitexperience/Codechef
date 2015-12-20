#include<stdio.h>
#include<math.h>
int ispalindrome(long int num)
{
	long long int x=num, num1=0;
	int r;
	while(x!=0)
	{
		r=x%10;
		num1=num1*10+r;
		x=x/10;
	}
	if(num1==num)
	return 1;
	else return 0;
}
int findbinary(long long int newnum )
{
	 int arr1[1000],i=0,j,flag=1,x;
	while(newnum>0)
	{
		j=newnum%2;
		arr1[i++]=j;
		newnum=newnum/2;
	}
	for(x=i-1;x>=0;x--)
	{
		if(arr1[x]!=0)
		break;
	}
	for(j=0;j<=x;j++,x--)
	{
		if(arr1[j]!=arr1[x])
		{
		return 0;
		}
	}
	return 1;
}

void main()
{
	long long int i,result=0;
	for(i=0;i<=1000000;i++)
	{
		if(ispalindrome(i))
		{
			if(findbinary(i))
			result=result+i;
		}
	}
printf("\nresult of sum is%ld ",result);
}
