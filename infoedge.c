#include<stdio.h>
void main()
{
	int a[30],max,smax,smpos, i,mpos,temp;
	printf(" enter the elements\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array before swapping is: \n");
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	max=a[0];
	smax=a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]>max)
		{
		max=a[i];
		mpos=i;
		}
	}
	for(i=1;i<10;i++)
	{
		if(a[i]!=max)
		{
			if(smax<a[i])
			{
				smax=a[i];
				smpos=i;
			}
		}
	}
	temp=a[mpos];
	a[mpos]=a[smpos];
	a[smpos]=temp;
	printf("array afetr swapping is: \n");
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	
	
	
			
	}
	
