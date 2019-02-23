/*
 ============================================================================
 Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent,
 with the colors in the order red, white and blue.
Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.
Note: You are not suppose to use the library's sort function for this problem.

 Input: [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sort(int* nums,int low ,int high)
{
    int l=low;
        int h=high;
		int m=(l+h)/2;
		int mid=nums[m];
		int tmp;

    while(l<=h)
		{

			while(nums[l]<mid)
			{
				l++;
			}
			while(nums[h]>mid)
			{
				h--;
			}
			if(l<=h)
			{
				tmp=nums[l];
				nums[l]=nums[h];
				nums[h]=tmp;
				l++;
				h--;
			}
		}

		if(low<h)
		{
			sort(nums,low,h);
		}
		if(l<high)
		{
			sort(nums,l,high);
		}
}


void sortColors(int* nums, int numsSize) {

    sort(nums,0 ,numsSize-1);
}

int main(void) {
	        int a[]={2,0,2,1,1,0};
		    int size=6;
		    sortColors(a,size);
	return EXIT_SUCCESS;
}
