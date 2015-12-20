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
 	int i,j,flag=0,arr[100];
 	
	if(flag==0)
	{
		for(i=3;i>=0;i--)
		printf("%c",arr[i]);
	}
	if(flag==0)
	printf("\n");
 	
	 }

	else
	{
		arr[n-1]='a';	
		binary(n-1);
		arr[n-1]='b';
		binary(n-1);
		arr[n-1]='c';
	}
		
 }
