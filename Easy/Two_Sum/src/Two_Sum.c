/*
 ============================================================================
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int nums[]={2, 7, 11, 15};
int numsSize=4;
int target=9;

int* a=(int*)malloc(2*sizeof(int));
int sum;
for (int i=0;i<numsSize-1;i++)
{
	for(int j=i+1;j<numsSize;j++)
	{
		sum=nums[i]+nums[j];
		if(sum==target)
		{
			a[0]=i;
			a[1]=j;
		}
	}
}
	for(int i=0;i<2;i++)
	{
		printf("%d",a[i]);
	}
	return EXIT_SUCCESS;
}
