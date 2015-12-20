#include<stdio.h>
int path(int, int );
static int arr[21][21]={0};
long long int row=0,col=0,result=0,temp=0;
 main()
{
	int i,j,res;
	printf("enter the dimensions of the matrix\n");
	scanf("%d%d",&i,&j);
	arr[20][20]=3;
	res=path(0,0);
	printf("%d",res);
}
int path(int row,int col )
{
	if(row<21 && col <21)
		{
			if(arr[row][col]==3)
			{
			return 1;	
			}
			else{
			return (path(row+1,col)+path(row,col+1));
			}
		}
		else return;
}
