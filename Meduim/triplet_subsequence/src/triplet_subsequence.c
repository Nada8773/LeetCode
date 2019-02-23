/*
 ============================================================================

Input:   [5,1,5,5,2,5,4]    as 1< 2< 5
Output:  true

Input: [1,2,3,4,5]          as 1 <2< 3
Output: true

Input: [5,4,3,2,1]
Output: false

Input: {0,4,2,1,0,-1,-3}
Output: false

Given an unsorted array return whether an increasing subsequence of length
3 exists or not in the array.
Formally the function should:

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int increasingTriplet(int* nums, int numsSize) {


	int first = INT_MAX, second = INT_MAX;
	int num;
	for (int i = 0; i < numsSize; i++) {
		num=nums[i];
		printf("i=%d\n",i);
		printf("num=%d   c1=%d   c2=%d \n",num,first,second);
	        if (num <= first)
	        {
	            first = num;           // first is minimum number in array
	        }
	        else if (num <= second)
	        {
	            second = num;           // second number bigger than first
	        }
	        else                      // if( num > first && num > second)
	        {
	            return 1;
	        }
	    }
	    return 0;

}

int main(void) {
	int a[]={5,1,5,5,2,5,4};
		int size=7;
		int res =increasingTriplet(a, size);

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
