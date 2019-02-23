/*
 ============================================================================
 Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0?
 Find all unique triplets in the array which gives the sum of zero.
Given array nums = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]
Given array nums = [-2,0,1,1,2],

A solution set is:
[
  [[-2,0,2],[-2,1,1]]
]

explaination
array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0


Time complexity O(n^2)
it takes (52 ms) in leetcode
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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

void threeSum(int* nums, int numsSize) {
	int left;
	int right;
	int sum;
	int row=0;
	int **a=((void *)0);
    a = (int **)malloc(50000 * sizeof(int *));
    sort(nums,0 ,numsSize-1);


    for(int i=0;i<numsSize-1;i++)
    	{
    	left=i+1;
    	right =numsSize-1;

    	// handles duplicates for i position
    	/*
    	 Input:[-4,-1,-1,0,1,2]
         Output without the  handle:[[-1,-1,2],[-1,0,1],[-1,0,1]]
         Output with the handle:[[-1,-1,2],[-1,0,1]]
    	 *
    	 */
    	 if(i > 0 && nums[i] == nums[i - 1])
    	   continue;


    	 while(left<right)
    	  {
    		sum=nums[i]+nums[left]+nums[right];
    		if(sum==0)
    		{

                a[row] = (int *)malloc(3 * sizeof(int));
                a[row][0]=nums[i];
                a[row][1]=nums[left];
                a[row][2]=nums[right];
                left++;
                right--;
                row++;


                //handle duplicate here



                //handle duplicates for left index

                while(left<right && nums[left]==nums[left-1])
                {
                    left++;
                }
                //handle duplicates for start index
                /*
                 Input:[-2,0,0,2,2]
                 Output without the right handle:[[-2,0,2],[-2,0,2]]
                 Output with the right handle:[[-2,0,2]]

                 *
                 */

                while(left<right && nums[right]==nums[right+1])
                {
                    right--;
                }

    		}
    		else if(sum<0)left++;
    		else right--;
    	}


    }
    // print
    for(int r=0;r<row;r++)
    {
    	printf("\n row=%d\n",row);
    	for(int c=0;c<3;c++)
    	{
    		printf("%d  ",a[r][c]);
    	}
    }

}


int main(void) {
	int nums[] = {-4,-1,-1,0,1,2};
	//int nums[] = {0,0,0,0,0,0};
	//int nums[]={-2,0,1,1,2};
	//int nums[]={-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6}; 	int size=15;

	int size=6;
	threeSum(nums,size);


	return EXIT_SUCCESS;
}
