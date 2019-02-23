/*
 ============================================================================
Given [2,3,1,1,4], it means that
From position 0, you can go forward upto 2 positions; i.e, you may go to position 1 or position 2.
From position 1, you can go forward upto 3 positions, to positions 2, 3, 4 (your choice)


Input: [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.

Input: [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum
             jump length is 0, which makes it impossible to reach the last index

Input:  [0]
Output: true

Input: [2,5,0,0]
Output :true

Input: [2,1,0,0]
Output :false
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define max(x, y)		((x) > (y)) ? (x) : (y)
#define min(x, y)		((x) < (y)) ? (x) : (y)

/*************** 796 ms
                          https://www.youtube.com/watch?v=jH_5ypQggWg
                                                                     	****************/
/*int canJump(int* nums, int numsSize) {

	int a[numsSize];
	a[0]=0;
	for(int i=1;i<numsSize;i++)
	{
		a[i]=-1;
	}
	for(int i=1;i<numsSize;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(i<=j+nums[j]) // to store number of jump in a[i]
			{
				if(a[i]==-1)
				{
					a[i]=max(a[i],a[j]+1);
				}
				else
				{
					a[i]=min(a[i],a[j]+1);
				}


			}
		}
		if(a[i]==-1)return 0;
	}

		return 1;


}
*/
/************************* 4ms *********************/
int canJump(int* nums, int numsSize) {

	int max=0;

	for(int i=0;i<numsSize;i++)
	{
		if(max<(nums[i]+i))
		{
			max=(nums[i]+i);
		}
		if(max<i+1)return 0;
		if(max>=numsSize-1)break;
	}
	return 1;
}

int main(void) {
	int res;
	int a[]={3,3,5,1,4};
	int size=5;


	 res=canJump(a,size);
	if(res==1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return EXIT_SUCCESS;
}
