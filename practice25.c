#include<stdio.h>
void swap(int *,int*);
void exchange(int **, int *);
void main()
{
int c=10,d=20;
printf("before swap, c= %d d=%d\n",c,d);
swap(&c,&d);
printf("after swap, c= %d d=%d\n",c,d);
return 0;
}
void swap(int *cc, int*dd)
{
	printf("%d\n %d\n %d\n %d\n",cc,*cc , dd,*dd);
	exchange(&cc, dd);								// kyuki dd to pointer hai ab usko hold krne k liye pointer to pointer chahiye hi.
}									// and agar dd ki value pass kr rhe hai to simple pointer me hi catch krenge. 
void exchange(int **cc, int *dd)
{
	
	int t;
	t=**cc;
	**cc=*dd;
	*dd=t;
}
