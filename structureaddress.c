#include<stdio.h>
void main()
{
	struct 
	{
		int num;
		int num2;
		float f;
		char mess[50];
		int i;
	}m;
	m.num=1;
	m.f=3.14;
	strcpy(m.mess,"Everything looks rosy");
	printf("%u %u %u %u %u\n",&m.num, &m.f, &m.mess,&m.num2,&m.i);
	printf("%d %f %s\n",m.num,m.f,m.mess);
}
