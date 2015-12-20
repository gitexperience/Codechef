#include<stdio.h>
int main()
{
	int a[5]={10,34,45,56,67};
		int *p;
		p=&a;
	
	printf("%u\n ",&a);

	printf("%u\n",(*p));

	*p=*p+1;
	*p=*p+10;
     //see this difference *p++ and *p=*p+3 
	printf("%d", *p);
	printf("%d", *p);
}

