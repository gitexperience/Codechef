#include<stdio.h>			// yes!! i did it!!
int arr[13],flag=0;
main()
{
int i=13;
arr[0]='a';
arr[2]='n';
arr[4]='u';
arr[6]='b';
arr[8]='h';
arr[10]='a';
arr[12]='v';
combination(i);	
}
combination(int n)
{
	int i;
		if(n<=0){
						if(flag==0)
						flag=1;
						else if(flag==1){
					for(i=0;i<13;i++)
					printf("%c",arr[i]);
					printf("\n");
					flag=0;
					}
		}
		else{
arr[n-2]='.';
combination(n-2);
arr[n-2]='.';
combination(n-2);

		}
		
}
