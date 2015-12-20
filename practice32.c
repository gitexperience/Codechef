#include<stdio.h>
void main()
{
int n[3][3]= {
	2,4,3,
	6,8,5,
	3,5,1
};
int *ptr;
ptr=(int*)n;
printf("%u \n", n);
printf("%d\n", ptr[2]);
printf("%d\n", ptr[5] );
}
