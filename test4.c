/* program to remove the vowels from the string , if there are consecutive vowels , then remain them as it is */
#include<stdio.h>
#include<string.h>
//char a[10]={'a','e','i','o','u','A','I','O','U','E'};
//#define a 0
void main()
{
	char arr[20]="homees";
	int i=0,j,temp,flag=0,del=0;
	int len;
	len=strlen(arr);
	while(arr[i]!='\0')
	{
		if((arr[i]=='a'|| arr[i]=='e'|| arr[i]=='i'|| arr[i]=='o'|| arr[i]== 'u'|| arr[i]=='A'|| arr[i]=='E'|| arr[i]=='I'|| arr[i]=='O'|| arr[i]=='U') && flag==0 )
		{
			flag=1;
			i++;
			continue;
		}
		else if(flag==1 && (arr[i]!='a' && arr[i]!='e'&& arr[i]!='i' && arr[i]!='o' && arr[i]!= 'u'&& arr[i]!='A'&& arr[i]!='E'&& arr[i]!='I'&& arr[i]!='O'&& arr[i]!='U') )
		{
			j=i;
			while(j<len)
			{
				arr[j-1]=arr[j];
				j++;
			}
			arr[j-1]='\0';
			flag=0;
		}
		else if(flag==1 && (arr[i]=='a' && arr[i]=='e'&& arr[i]=='i' && arr[i]=='o' && arr[i]== 'u'&& arr[i]=='A'&& arr[i]=='E'&& arr[i]=='I'&& arr[i]=='O'&& arr[i]=='U') )
		{
			printf(" aa fye");
			i++;
			flag=0;	
		}
			else
		{
		i++;
		}		
	}
	for(i=0;arr[i]!='\0';i++)
	printf("%c",arr[i]);
	printf("\n");
}
