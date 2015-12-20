#include<stdio.h>
int *sort(int[], int );
main()
{
	int a[5]={2,4,5,7,8};
	int i,*e,*f;
	int b[5]={11,2,5,6,3};
	int c[5],k=0,l=0,z;
	int length =sizeof(a)/sizeof(a[0]);
	e=sort(a,length);

	f=sort(b,length);

	for(i=0;i<5;i++)
	{
		if(e[k]>=f[l])
		{
		c[i]=e[k++];
		}
		else
		{
		c[i]=f[l++];
		}
	}
	for(i=0;i<5;i++)
	printf("%d ",c[i]);
}
int* sort(int *a,int length)
{
	int temp,i,j;
	for(i=0;i<5;i++)
	for(i=0;i<length;i++)
	{
		for(j=i+1;j<length;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	return a;
}
