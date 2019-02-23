/*
 ============================================================================
 A peak element is an element that is greater than its neighbors.
Given an input array nums, where nums[i] ? nums[i+1], find a peak element and return its index.
The array may contain multiple peaks, in that case return the index to any one of the peaks is fine.
You may imagine that nums[-1] = nums[n] = -8.
 
 Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.

Input: nums = [1,2,1,3,5,6,4]
Output: 1 or 5
Explanation: Your function can return either index number 1 where the peak element is 2,
             or index number 5 where the peak element is 6.

 Input:[1,2]
 Output: 1

 Input:[2,1]
 Output:0

 Input:[1,2,3]
 Output:2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int findPeakElement(int* nums, int numsSize) {


	if(numsSize==1)return 0;

	for(int i=0;i<numsSize;i++)
	{
		if(i==numsSize-1)
		{
			if(nums[i]>nums[i-1])return i; //[1,2,3] if the last index is the solution
		}
		else
			if(nums[i]>nums[i+1] && nums[i]>nums[i-1])return i;// [1,2,3,1]
	}
	return (nums[0]<nums[1]?1:0); // check if size=2 -> [1,2] & [2,1]
}

int main(void) {
	    int a[]={1,2,3};
	    int size=3;
	    int res=findPeakElement(a,size);
	    printf("\n %d",res);	return EXIT_SUCCESS;
}
