#include<stdio.h>
main()
{
	int arr[4][4];
	int i,j,k,l,m,n,result=0,flag=0,newx=0,newy=0,conti=0, modify[3][5];
	int dir[][2]={{-1,0},{0,1},{1,0},{0,-1}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		scanf("%d",&arr[i][j]);
	}
	while(1)
	{
		flag=0;
		conti=0;
		for(i=0;i<3;i++)
		{
			for(j=0;j<5;j++)
			{
				if(arr[i][j]==1)
				{
				conti=1;
				}
			}
		}
		
		if(conti==0)
		break;
		for(i=0;i<3;i++)
		{
			for(j=0;j<5;j++)
			{
				if(arr[i][j]==2)
				{
					for(k=0;k<4;k++)
					{
						newx=i+dir[k][0];
						newy=j+dir[k][1];
						if(arr[newx][newy]==1 && newx >=0 && newx<3 && newy<5 && newy>=0)
						{
						//	printf(" %d %d  ",newx,newy);
							flag=1;
							modify[newx][newy]=9;
						}
					}
				}
			}
		
		}
		result++;
	//	printf(" here again \n");
			
		for(i=0;i<3;i++)
		{
			for(j=0;j<5;j++)
			{
			
				if(modify[i][j]==9)
				{
					printf("me %d \n",arr[2][0]);
					if(arr[i][j]==1)
					arr[i][j]=2;
					modify[i][j]=0;
				}
				printf("yu %d \n",arr[2][0]);
			}
		}
		for(i=0;i<3;i++)
			{
				for(j=0;j<5;j++)
				printf("%d ",arr[i][j]);
				printf("\n");
			}
			if(flag==0)
			{
				printf("not possible\n");
				return;
			}
			
	}
	printf("time is %d ",result);
		
}
	
