 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int lev=-1,n,val[50],a[50];
void main()
{
    int i,j;
    printf("Enter how many numbers?\n");
    scanf("%d",&n);
    printf("\nEnter %d numbers:\n\n",n);
    for(i=0;i<n;i++)
    {
        val[i]=0;
        j=i+1;
        scanf("%d\n\n",&a[j]);
    }
    visit(0);
    getch();
}
visit(int k)
{
    int i;
    val[k]=++lev;
    if(lev==n)
    {
        for(i=0;i<n;i++)
        printf("%2d",a[val[i]]);
        printf("        ");
    }
    for(i=0;i<n;i++)
    {
	    if(val[i]==0)
	    {
	    	visit(i);
	    }
    }
    lev--;
    val[k]=0;
}
