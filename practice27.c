#include<stdio.h>
 void main()
 {
 int a[3][4]= {
 	1,2,3,4,
 	5,6,7,8,
 	7,6,5,4
 } ;
 int i=4;						//ek bar phir se dekho aur samjho 
 printf("%u %u %u %d\n %d",a, a+1, &a+1, *(*a+1), sizeof(i));
 }
