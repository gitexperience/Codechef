#include<stdio.h>
main()
{
	int arr[100],i,j,count;
	printf("Enter the number of digits\n");
	scanf("%d",&count);
	for(i=0;i<count;i++)
	{
		scanf("%d",&arr[i]);
	}
	j=0;
	for(i=0;i<count;i++)
	{
		while(j<count)
		{
		printf("%d",arr[(i+j)%count]);
		j++;
		}
		j=0;
		printf("\n");
	}
}
	
