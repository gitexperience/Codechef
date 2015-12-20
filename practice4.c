#include<stdio.h>
int main()
{
	static int a[]={0,9,7,5,3};
	int *p[]={a,a+1,a+2,a+3,a+4};
	printf("%u\n",&a);
	printf("%u %u %d",p,*p,*(*p));
}
