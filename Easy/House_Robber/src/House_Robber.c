/*
 ============================================================================
 You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed,
 the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and
 it will automatically contact the police if two adjacent houses were broken into on the same night.

Given a list of non-negative integers representing the amount of money of each house, 
determine the maximum amount of money you can rob tonight without alerting the police.
 
 
 Input: [1,2,3,1]
Output: 4      -> 1+3

Input: [2,7,9,3,1]
Output: 12     -> 2+9+1
Input: [2,1,1,2]
Output: 4      -> 2+2
Input: [1,3,1]
Output: 3      ->3

Input: 4,1,2,7,5,3,1
Output: 14     ->4+7+3
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int max(int x,int y)
{
    if(x>y) return x;
    else  return y;
}

int rob(int* nums, int numsSize) {

    int max_sum;

    if(numsSize==0)return 0;
    if(numsSize==1)return nums[0];
    if(numsSize==2)return (max_sum=max(nums[0],nums[1]));

    int v1=nums[0];
    int v2=max(nums[0],nums[1]);

       for(int i=2;i<numsSize;i++)
       {
    	   max_sum=max(nums[i]+v1,v2);
           v1=v2;
           v2=max_sum;
       }
       return max_sum;

}

int main(void) {
      int a[]={2,7,9,3,1};
      int numsSize=5;
     int res=rob(a,numsSize);
     printf("%d",res);

	return EXIT_SUCCESS;
}
