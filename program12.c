#include<stdio.h>
void main()
{
	int *p,d;
	char str[10]={"hello"};   //str is address of an array while &str is the address of the character
	printf("%d %d %d %d\n", sizeof('3'), sizeof("hello1"), sizeof(str),sizeof(&str));
}
