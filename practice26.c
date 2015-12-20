#include<stdio.h>
	float a=3.14;
	float **z,**y,***x,****v,****w;
	float **fun1(float*);
	float ****fun2(float***);
	
	void main()
{
z=fun1(&a);
printf("%u %f \n",z,**z);
}
float** fun1(float *z)
{
	y=&z;
	v=fun2(&y);
	return(**v);
}
float ****fun2(float***x)
{
	w=&x;
	return(w);
}
