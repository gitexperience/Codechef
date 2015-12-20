#include<stdio.h>
void main()
{
	int a[]={2,3,4,5,6};
	char *b="visual c+";
	printf("%d %d\n", sizeof(a), sizeof(b));   / integer is reported as 4bytes as well size of pointer is 4 bytes
	printf("%d %d\n", sizeof(*a), sizeof(*b));
}
