#include<stdio.h>
void main()
{
	int arr[10][10],i=0,j=0,n,m;
	int k=0,l=0; //k is starting row index. //l is starting column index..
	printf("\n Enter the dimension of matrix \n");
	scanf("%d%d",&n,&m);//n is row
	printf("Enter the matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		scanf("%d",&arr[i][j]);
		}
	}
	i=0;j=0;
	while(k<n && l<m)
	{
		for(i=l;i<m;i++)
		printf("%d ",arr[k][i]);
		k++;
		for(j=k;j<n;j++)
		printf("%d ",arr[j][m-1]);
		m--;
		if(k<n)
		{
			for(i=m-1;i>=l;i--)
			printf("%d ",arr[n-1][i]);
			n--;
		}
		if(l<m)
		{
			for(j=n-1;j>=k;j--)
			printf("%d ",arr[j][l]);
			l++;
		}
	}
}
