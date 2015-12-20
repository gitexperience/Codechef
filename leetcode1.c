/*Given a string, find the length of the longest substring without repeating characters. 
For example, the longest substring without repeating letters for "abcabcbb" is "abc", which the length is 3. 
For "bbbbb" the longest substring is "b", with the length of 1.*/
#include<stdio.h>
#include<string.h>
void len(char*);
void main()
{
	char *s="helo my anme nau nvuruntru";
	len(s);
}
void len(char*s)
{

	char a[150];
	static  char b[150],flag[150];
	int length=0,max=1;
	int result=0,i=0,j=0;
		if(*s=='\0')
		{
		printf("%d\n",0);
		return;
		}
	 while(*s!='\0')
    {
    	b[length]=*s;
        length=length+1;
        printf("%d\n",length);
	 	s++;
    }
    printf("%s",b);
    while(i<length)
    {
    	a[i]=b[j];
    	j++;
    	while((b[j]!=0))
    	{								//yha par flag wala concept nhi lgane par glat output aa rha tha ,espaecially for 
    		if(a[i]!=b[j])				//this specific input abcabcabb.
    		{
    		flag[b[j]]=flag[b[j]]+1;
    		}
    		if(flag[b[j]]>1)
    		break;
    		result++;
    		j++;
    	}
    	i++;
    	j=i;
    	if(max<result)
    	max=result;
    	result=0;
    	
	}
	printf("\n%d\n",max);
}
