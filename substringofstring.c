/*substrings of a given string*/
#include<string.h>
#include<stdio.h>
/*void printstring(char[],int);
main()
{
	char str[100];
	int length,i,len;
	printf("enter the string\n");
	gets(str);
	length=strlen(str);
	len=length;
	for(i=1;i<length;i++)
	{
	printstring(str,i,&len);
	}
}
void printstring(char str[],int i,int *len)
{
	int temp=i;
	while(*len>0)
	{
		
		printstring(str,i,(*len-i));
	}
}
*/
main()
{
int i,j,n,k; 
char a[100];
printf("enter the string\n");
gets(a);
i=0;
n=strlen(a);
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
for(k=i;k<j+1;k++)
{
printf("%c",a[k]);
}
printf("\n");
}

}
} 


