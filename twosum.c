/*Given an array of integers, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target,
 where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2*/
#include<stdio.h>
void main()
{
	int arr[10],i,count,target,j;
	printf("Enter the count of numbers\n");
	scanf("%d",&count);
	for(i=0;i<count;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the target\n");
	scanf("%d",&target);
	i=0;
	while(i<count)
	{
		if(target<arr[i])
		i++;
		for(j=i+1;j<count;j++)
		{
			if(target==arr[i]+arr[j])
			printf("Index 1=%d ,Index 2=%d",i+1,j+1);
		}
		i++;
	}
	
	
}
