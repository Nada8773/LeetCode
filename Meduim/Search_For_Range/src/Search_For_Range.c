/*
 ============================================================================
 Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.
Your algorithm's runtime complexity must be in the order of O(log n).
If the target is not found in the array, return [-1, -1].
 
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Input: nums = [3,3,3], target = 3
Output: [0,2]
Input: [1] target = 1
Output: [0,0]

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
/************* 4ms***********/
void searchRange(int* nums, int numsSize, int target) {

	    int* a=(int*)malloc(sizeof(int)*2);

	    int flag=0;
	    int index=-1;

	    for(int i=0;i<numsSize;i++)
	    {
	        if(nums[i]==target)
	        {
	        	if(flag==0) // to get first index range
	        	{
	                a[0]=i;
	                a[1]=i;
	                flag=1;
	        	}
	        	else // second range if it have
	        	{
	        		index=i;
	        	}

	        }
	        if(index!=-1)a[1]=index;
	    }
	if(flag==0)
	{
		a[0]=-1;
		a[1]=-1;
	}
    for(int i=0;i<2;i++)
    		    {

    		    	printf("%d",a[i]);
    		    }

}

int main(void) {
	        int a[]={1};
		    int size=1;
		    int target=1;

	searchRange(a,size,target);


		    return EXIT_SUCCESS;
}
