#include<stdio.h>
main()
{
	int arr[7][2]={ {10,20}, {5,6}, {56,54}, {20,10}, {54,56}, {1,2}, {2,1} };
	int i=0,j,b[7][2],temp,targ,first,last,mid;
	for(i=0;i<7;i++)
	{
		for(j=i+1;j<7;j++)
		{
		if(arr[j][0]<(arr[i][0]))
			{
			temp=arr[j][0];
			arr[j][0]=arr[i][0];
			arr[i][0]=temp;
		
			temp=arr[j][1];
			arr[j][1]=arr[i][1];
			arr[i][1]=temp;
			}
		}
	}

	for(i=0;i<7;i++)
	{
		targ=arr[i][1];
		first=i+1;			//yha par hmne i use kia tha and uski vjah se output nhi aa rha tha , use i+1 , and i have the answer.
		last=6-i;
		while(arr[first][0]<arr[last][0])
		{
					mid =(first+last)/2;	
					if(arr[mid][0]<targ)		//do this if condition rather than arr[mid][0]>targ...
					{
						first=mid+1;
					}
					else
						last=mid;
		}
		if(targ==arr[first][0])
				{
					if(arr[i][0]==arr[first][1])
					printf(" %d %d ",arr[i][0],arr[i][1]);
				}
		else if(targ==arr[last][0])
				{
					if(arr[i][0]==arr[last][1])
					printf(" %d %d ",arr[i][0],arr[i][1]);
				}
				else{}
	}

}
