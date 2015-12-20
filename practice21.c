#include<stdio.h>
void main()
{
	int i=10;
printf("%f\n",(float)((int)3.5/2));   // integer value ko %f se print krana me zero hi milega kyuki conversion nhi ho pata hai..
return 0; 								//float aur integer me agar format specifier me alat palat ki to zero aa rha hai..
}
