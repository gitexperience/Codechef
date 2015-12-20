#include<stdio.h>
void main()
{
int n[3][3]= {
	2,4,3,
	6,8,5,
	3,5,1
};
int (*ptr)[3]; 		// bhaiya yaad rkhna difference pointer to an array of 3 integers and array of pointers me..
ptr=n;
ptr++;
printf("%d\n",*(*(ptr +1)+1));
}
