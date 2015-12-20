/*program to print all the pemutations of the given 4 or something digits number*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,d;
int arr1[]={2,4,6,7};
int arr2[]={2,4,6,7};
int arr3[]={2,4,6,7};
int arr4[]={2,4,6,7};
printf(" The permutations of a 4 digit number 1234 \n");

for(a=0; a<4; a++)
{
for(b=0; b<4; b++)
{
for(c=0; c<4; c++)
{
for(d=0; d<4; d++)
{
if(!(arr1[a]==arr2[b] || arr1[a]==arr3[c] || arr1[a]==arr4[d] || arr2[b]==arr3[c] || arr2[b]==arr4[d] || arr3[c]==arr4[d]))
printf("%d%d%d%d\n",arr1[a],arr2[b],arr3[c],arr4[d]);
}
}
}
}
return 0;
} 
