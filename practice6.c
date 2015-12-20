#include<stdio.h>
int main()
{
	
	unsigned int arr[3][3]={
	2,4,6,
	9,1,10,
	16,64,5
	};
	int *y;
	y=&arr;
	y=y+2;
	*y=*y*2;
	printf("%d",*y);

}
