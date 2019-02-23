/*
 ============================================================================
 Given an array nums, write a function to move all 0's to the end of it
 while maintaining the relative order of the non-zero elements.


 Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*************************** 4 ms ****************************/
int main(void) {
	int nums[]={1,0,0,3,12};
	int numsSize=5;

	 int j=0;
		    for(int i=0;i<numsSize;i++)
		    {
		         if(nums[i] != 0)
		         {

		        	 nums[j]=nums[i];
		        	 j++;

		         }

		    }
		    printf("%d\n",j);
		    while(j<numsSize)
		    {
		    	nums[j]=0;
		    	j++;
		    }



		for(int k=0;k<numsSize;k++)
				{
			printf("%d",nums[k]);
				}


	return EXIT_SUCCESS;
}
