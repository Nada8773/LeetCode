/*
 ============================================================================
 Given an integer array nums, find the contiguous subarray (containing at least one number) 
 which has the largest sum and return its sum.


Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

Input: [-1,0,-2],
Output: 0


 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int max(int x,int y)
{
    if(x>y) return x;
    else  return y;
}

/****************************  216 ms	*************************/
/*int maxSubArray(int* nums, int numsSize)  {

	int count=0;
	int sum=0;
	int max_sum =-2147483648;

 while(count<numsSize)
 {
    for(int i=count;i<numsSize;i++)
    {
    	sum+=nums[i];
    	max_sum=max(max_sum,sum);

    }
    sum=0;
    count++;
 }
 return max_sum;

}*/

/*************************** 4ms ****************************/
int maxSubArray(int* nums, int numsSize) {
   int max_sum=nums[0];
   int curr_max = nums[0];
   int v1=0;

   for (int i = 1; i < numsSize; i++)
   {
        curr_max = max(nums[i], curr_max+nums[i]);
        max_sum = max(max_sum, curr_max);
   }
    return max_sum;
}

int main(void) {
      int a[]={-2,1,-3,4,-1,2,1,-5,4};
      int numsSize=9;
     int res=maxSubArray(a,numsSize);
     printf("%d",res);

	return EXIT_SUCCESS;
}
