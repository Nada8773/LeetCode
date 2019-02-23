/*
 ============================================================================
Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int nums[]={1,1,1,2,2,3,3};
	int numsSize=7;
	int j=0;
	int flag=0;
for(int i=0;i<numsSize ;i++)
{
	/*if(flag==1)
	{
		i--;
		flag=0;
	}*/
    j=i+1;
	if (nums[i]==nums[j])
	{

		for(int k=j;k<numsSize;k++)
		{
			nums[k]=nums[k+1];

		}
		numsSize--;
		j--;
		//flag=1;
		i--;


	}


}
for(int i=0;i<numsSize ;i++)
{
	printf("%d",nums[i]);
}
	return 0;
}
