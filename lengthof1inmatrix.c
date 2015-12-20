/* the programm is to find the maximum length path of 1s in the given matrix*/
#include<stdio.h>

int a[5][5];
int visit[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
  main()
 {
 	int maxsize=0,i,j,R=4,C=4,size=0;
 	
	 
 	printf("Enter the elements of the matriz in the form of 0s and 1s\n");
 	for(i=0;i<5;i++)
 	{
 		for(j=0;j<5;j++)
 		{
 			scanf("%d",&a[i][j]);
 		}
 	}
 	for(i=0;i<5;i++)
 	{
 		for(j=0;j<5;j++)
 		{
 			if(a[i][j]==1)
 			{
  		     visit[i][j]=1;
 			 find(a,i,j,visit,size,R,C,&maxsize);
 			}
 		}
 	}
 	printf("\nlength is %d\n",maxsize);
 }
 find(int a[5][5],int r, int c,int visit[5][5], int size, int R, int C ,int* maxsize)
 {
 	int i,newx,newy,val,result;
 	int dir[][2]={{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};
 	if(r>=R || c>=C)
 	return ;
 	size++;
 	if(size>*maxsize)
 	*maxsize=size;
	 	for(i=0;i<8;i++)
	 	{
	 		newx=a[r][c]+ dir[i][0];
			newy=a[r][c]+ dir[i][1];
			val=getval(a,newx,newy,R,C);
			if(val==1 && visit[newx][newy]==0)
			{
			 find(a,newx,newy,visit,size,R,C,maxsize);
			}
	 	}
 }
 int getval(int a[5][5], int i, int j, int R, int C)
 {
 	if(i<0 || i>R || j<0 ||j>C)
 	return 0;
 	else
 	return a[i][j];
 }
