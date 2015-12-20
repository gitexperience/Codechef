#include<stdio.h>
int main()
{
	long int i=0,j,n,k,le;
	long int count[10],temp=0;
	scanf("%ld",&n);
	le=n;
	while(le--)
	{
		scanf("%ld",&k);
		
			temp=0;
		for(j=5;j<=k;)
		{
		temp=temp+(int)k/j;
		j=j*5;	
		}
		count[i]=temp;
		i++;
	
	}
	for(i=0;i<n;i++)
	{
	printf("%ld\n",count[i]);
	}
	return 0;
}
