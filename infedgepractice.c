#include<stdio.h> //program to find the unique characters in the string.
void main()
{
	char a[10];
	int i=0 ,j;
	 int b[255];
	for(i=0;i<255;i++)
	{
	b[i]=0;	
	}
	i=0;
	printf("enter string\n");
	gets(a);
	while(a[i]!='\0')
	{
		b[a[i]]=b[a[i]]+ 1;
		i++;
	}
	i=0;
	for(j=0;j<255;j++)
	{
		if(b[j]==1)
		{
			printf("%c",j);
		}
	}
}
		
