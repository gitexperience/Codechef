#include<stdio.h>
main()
{
	static char arr[100]="my   name          is               anubhav    singh";
	int i,flag=0,j=0,count=0;
	while(arr[j]!='\0')
	{
		flag=0;
		if(arr[j]==' ')
		{
				flag=1;
				arr[count++]=' ';
				j++;
		}
		while(arr[j]==' ')
			j++;
		arr[count++]=arr[j];
			j++;
	}
	for(j=0;j<count;j++)
	{
		printf("%c",arr[j]);
	}
	printf("\n");
}
		
