/*
 ============================================================================
 Given an array of size n, find the majority element. The majority element is the element that appears more than ? n/2 ? times.
You may assume that the array is non-empty and the majority element always exist in the array.

Input: [3,2,3]
Output: 3

Input: [2,2,1,1,1,2,2]
Output: 2

Input: [1]
Output: 1

Input: [2,1,2,4,7]
Output: 0
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>




/*************************** Moore’s Voting Algorithm 4ms ************/

int majorityElement(int* nums, int numsSize) {
	    int count = 0;
	    int major ;

	    for(int i = 0; i < numsSize; i++)
	    {
	        if(count == 0)
	            {
	                major = nums[i];
	                count++;
	                continue;
	            }
	        else
	        {
	            if(nums[i] == major)
	             {
	             count++;
	             }

	            else count--;
	        }


	    }
	   // return major;

	               int c=0;
	    	       for(int i = 0; i < numsSize; i++)
	    	           {
	    	           if(nums[i] == major)
	    	             {
	    	             c++;
	    	             }
	    	           }
	    	        return (c>numsSize/2)?major:0;

}

int main(void) {

	int a[]={2,2,1,1,1,2,2};
	int size=7;
	int res=majorityElement(a,size);
	printf("\n%d",res);

	return EXIT_SUCCESS;
}
