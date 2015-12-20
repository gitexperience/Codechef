#include<stdio.h>
int main()
{
	 int i=0,count=0;
	 int temp,n,k;
	scanf("%d",&n);
	scanf("%d",&k);
	while(i<n)
	{
	scanf("%d",&temp);
	if(temp%k==0)
{
	count++;
}
	i++;
	}
	printf("%d\n",count);
	return 0;;
}
			
			
