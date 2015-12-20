#include<stdio.h>
void main()
{
	int arr[10]={2,3,4,5,6,7,8,9,3};
	int (*a)[10],i=0,flag=0,k,temp;
	for(i=0;i<10;i++)
	{
		if(arr[i]=='\0')
		break;
	}
	if(i==10)
	flag=1;
	k=0;
	if(flag==1)
	{
		temp=arr[9];
		for(i=10;i>0;i--)
		{
		arr[i]=arr[i-1];
		}
		arr[0]=temp;
	}
	else
	{
		for(i=10;i>0;i--)
		{
			arr[i]=arr[i-1];
		}arr[i]=0;
	}
	i=1;
	for(i=0;i<10;i++)
	printf("%d ",arr[i]);
	printf("\n");
	
}
	
