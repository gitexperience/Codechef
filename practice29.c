#include<stdio.h>
void main()
{
	int a[]={10,20,30,40,50};
	int j;
	int *k;
	k=&a;
	for(j=0;j<5;j++)
	{
		printf("%d %u\n", *k,a);
		k=k+1;							// yha agar hm a=a+1 krenge values print krane k liye to error dega ,kyuki pta ni kyu wo base 
	}					// address ko change kr rha hai. isliye uske address ko assign krate hai dosre pointer variable ko..
}
