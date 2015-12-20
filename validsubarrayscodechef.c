#include<stdio.h>
int combination(int);
int fact(int);
main()
{
	static int arr[1000];
	int cases,i=0,n,j=0,result=0,flag=0,temp=0,longcount=0;
	scanf("%d",&cases);
	if(cases<1)return;
	while(i<cases)
	{
	scanf("%d",&n);
	if(n<1) return;
	for(j=0;j<n;j++)
		{
			scanf("%d",&arr[j]);	
		}
	result=result+n;
	for(j=0;j<n-1;j++)
	{
		if(arr[j]<arr[j+1] && flag==0)
		{
			flag=1;
			temp++;
		}
		while(flag==1 && arr[j]<arr[j+1] && j<n-1)
		{
			temp++;
			j++;
		}
		 if (temp==1 && arr[j]>=arr[j+1])
		result++;
		else if (temp>1 && arr[j] >= arr[j+1])
		{
			longcount = combination(temp);
			result= result + longcount;
		}
		temp=0;
	}
		printf("%d\n",result);
		result=0;
		longcount=0;
		flag=0;
		i++;
	}
}
int combination(int n)
{
	int res;
	res=fact(n)/(fact(n-2)*2);
	if(res<0)
	res=1;
	return res;
}
int fact(int n)
{
if(n<=0)
return 1;
else if(n==1)
return 1;
else if(n>1)
return n*fact(n-1);	
}
