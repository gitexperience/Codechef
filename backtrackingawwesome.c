/* I have implemented this algorithm after getting inspiration from pg-38 made easy and its a generic algorithm */
#include<stdio.h>
void binary(int );
int arr[3];
 main()
 {
	int n=4;
	binary(n);
		
 }
 void binary(int n)
 {
 	int i,j,flag=0;
 	if(n<1)
 	{
 	for(i=3;i>=0;i--)
 	{
 		for(j=i-1;j>=0;j--)
 		{
		 	if(arr[i]==arr[j])	
		 	flag=1;
 		}
 	}
	if(flag==0)
	{
		for(i=3;i>=0;i--)
		printf("%d",arr[i]);
	}
	if(flag==0)
	printf("\n");
 	
	 }

	else
	{
		arr[n-1]=1;	
		binary(n-1);
		arr[n-1]=2;
		binary(n-1);
		arr[n-1]=3;
		binary(n-1);
		arr[n-1]=4;
		binary(n-1);
	}
		
 }
