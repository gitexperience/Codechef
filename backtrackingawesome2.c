/* this is same as backtrackingawesome just isme loop laga k values assign ki hai.*/
#include<stdio.h>
#include<string.h>
int arr[3];
void string(int ,int*,int);
 main()
{
	int i=3,count=0,m=0;
	int a[3]={'a','b','c'};
	count=(sizeof(a)/sizeof(int));
	printf("count is : %d\n",count);
	string(i,a,count);	
}
void string(int n, int *k,int count)
{
	int i,j;
	if(n<1)
	{
		return;
	
	}
	else
	{
		for(j=0;j<count;j++)
		{
			arr[n-1]=k[j];
			printf("\n");
			string(n-1,k,count);
			printf("%c",arr[j]);
		}
	}
}
