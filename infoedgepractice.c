#include<stdio.h>
void main()
{
	int a[10],max,count,temp,i,index=0;
	static int b[100];
	printf("enter the count\n");
	scanf("%d",&count);
	printf("enter the elements of the array\n");
	for(i=0;i<count;i++)
	{
		scanf("%d",&a[i]);
	}
	temp=0;
	while(temp<count)
	{
		b[a[temp]]=b[a[temp]]+1;
		temp++;
	}
	i=0;
	max=b[i];
	while(i<100)
	{
	if(max<b[i+1])
	{
	temp=b[i+1];
	b[i+1]=max;
	max=temp;
	index=(i+1);
	}
	else
	i++;
	}
	printf("max occurance is %d",index);
}
	
		
	
	
	
