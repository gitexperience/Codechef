#include<conio.h>
#include<stdio.h>
int arr[10],w;
void isprime(int);
int main(void)
{
 int a,b,i,max,no;
 printf("enter the two no:");
 scanf("%d%d",&a,&b);
 for(i=a;i<=b;i++)
  isprime(i);
  if(w==0)
  {
   printf("\nNO ANY PRIME NO");
  }
  else
  {
   max=arr[0];
   no=0;
   for(i=1;i<=9;i++)
  {
   if(arr[i]>=max)
   {
     max=arr[i];
     no=i;
   }
  }
  printf("\nHIGHEST OCCURING DIGIT IS %d",no);
  printf("\n AND NO OF TIMES IS %d",max);
 }
 getch();
 return 0;
}
void isprime(int m)
{
 int a,q;
 for(a=2;a<=m/2;a++)
 {
  if(m%a==0)
     return;
 }
    w=1;
    while(m>0)
    {
     a=m%10;
     m=m/10;
     arr[a]+=1;
    }
}
