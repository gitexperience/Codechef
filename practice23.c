#include<stdio.h>
main()
{
struct u{
int bit:1;
int bit2:3;
int it4:21;     // a  big thing, sizeof prints in the multiple of 4 , depending upon the size ,
char ch; 			// here if we put it4=20, the output will be 4..jitne bytes ka data hota hai usko 4-4 k multiples me bhejta hai
					//only when the sizeof whole structure is concerned..
}a;
printf("%d",sizeof(a));
}
