/*code to remove duplicate from string */
#include<stdio.h>
 char* removedp(char *);
void main()
{
	char str1[50], str2[50],i,j,*str;
	int k=0;
 	 char inter[50];
	printf("enter first string\n");
	gets(str1);
	printf("enter second sring\n");
	gets(str2);
	i=0;j=0;
	while(str1[i]!='\0')
	{
		for(j=0;str2[j]!='\0';j++)
		{
			if(str1[i]==str2[j])
			{
			inter[k++]=str1[i];
			}
		}
		i++;
	}
	printf("printing with duplicate characters\n");
puts(inter);
printf("printing with non-duplicate characters\n");
removedps(&inter);
puts(inter);
}
char *removedps(char *x)
{
    int Ar[256] = {0};
    char* start = x;
    while(*x)
    {       
        if (Ar[*x])   
        {  // remove the repeated character 
           memmove(x, x+1, strlen(x));
        }   
        else
        {
            Ar[*x] = 1;
            x++;
        }       
    }
    return start;
}	 
