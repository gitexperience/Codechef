#include<stdio.h>
void main()
{
int i,j,k,l;
for(i=0;i<5;i++)
{
	for(j=5;j>i;j--)
	printf(" ");
	for(k=0;k<i;k++)
	printf("*");
	for(l=0;l<=i;l++)
	printf("*");
	printf("\n");
}
		
}
