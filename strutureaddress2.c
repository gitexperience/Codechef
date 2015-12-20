#include<stdio.h>
void main()
{
	struct a 
	{
	char arr[10];
double i;
	float b;
	}v[2];
	printf("%u %u %u %u\n",v[0].arr,&v[0].i,&v[0],&v[0].b);//run this in online compiler 4-4 ka hi difference paoge..
	printf("%u %u %u\n",v[1].arr,&v[1].i,&v[1].b);
}
