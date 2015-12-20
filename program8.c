#include<stdio.h>
void main()
{
	char s[]="my name is anubhav singh";
	printf("1)%s\n",&s[2]);					//rule:- printf me jha se address milta hai whi se wo print krana shuru kr deta hai. program7 ka rule bhi dekh lena
	printf("2)%s\n",s);
	printf("3)%s\n",&s);
	printf("4)%c\n",s[2]);
	return 0;
}
