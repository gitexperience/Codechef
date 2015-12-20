/*program to print the number in the form of speak as you see . like 1,11,21,1211,111221 etc.*/
/*here i am entering the number eg 11 and the result is the next number in the series*/
#include<stdio.h>
 void main()
 {
 int a=1,i,b[10],k,temp,j=0;
 printf("enter the number in the sequence you want to print\n");
 scanf("%d",&i);
 if(i==1)
 {
 printf(11);
 }
 else
 while(i>0)
 {
 	k=i%10;
 	b[j]=k;
 	i=i/10;
 }
 for(i=0;i<10;i++)
 {
 if(b[j]!=0)
 	printf("%d%d",b[j],j);	
 }
 }
