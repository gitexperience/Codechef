#include<stdio.h>
int ispalin(char *);
main()
{
	char *str="abaparap";
	 longestPalindrome(str);
}
void longestPalindrome(char* s) {
 int i,j,k=0,l,m=0,x=0,t=0;
static char str[1000];

 printf("\ni am here\n");
 for(i=0;i<strlen(s);i++)
 {
     l=i;
     for(j=i+1;j<strlen(s);j++)
     {
        while(k<=(j-i))
        {
        	memcpy(str,s+i, (j-i) );
            k++;
        }
        while(t<(j-i)){
        printf("%c ",str[t]); t++;} t=0;
        printf("\n");
       	k=0;
        if(ispalin(str))
   	 	{
   	 		if(max<strlen(str))
   	 		x=0;
	     	
   	 	}
     }
    
 }   
}
int ispalin(char *str)
{

    int a=0,b, flag=0;
    b=strlen(str)-1;
    printf("\n");
    while(a<b)
    {
        if(str[a]!=str[b])
        {
            flag=1;
            break;
        }
        a++;
        b--;
    }
    if(flag)
    return 0;
    else return 1;
}
