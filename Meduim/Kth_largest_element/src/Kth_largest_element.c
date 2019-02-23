/*
 ============================================================================
 Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.

Input: [3,2,1,5,6,4] and k = 2
Output: 5

Input: [3,2,3,1,2,4,5,5,6] and k = 4
Output: 4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>




/******************************** 4ms O(nlog(n)) *************************/

void sort(int* nums, int low, int high)
{
        int l=low;
        int h=high;
		int m=(l+h)/2;
		int mid=nums[m];
		int tmp;
		printf("mid=%d\n",mid);
		while(l<=h)
		{

			while(nums[l]<mid)
			{
				l++;
			}
			printf("l=%d\n",l);
			while(nums[h]>mid)
			{
				h--;
			}
			printf("h=%d\n",h);
			if(l<=h)
			{
				tmp=nums[l];
				nums[l]=nums[h];
				nums[h]=tmp;
				l++;
				h--;
			}
			for(int i=0;i<high+1;i++)
				{
					printf("%d",nums[i]);
				}
		}
		printf("\n low=%d h=%d \n",low,h);
		if(low<h)
		{
			sort(nums,low,h);
		}
		if(l<high)
		{
			sort(nums,l,high);
		}
}

int findKthLargest(int* nums, int numsSize, int k) {
    sort(nums,0,numsSize-1);
	for(int i=0;i<numsSize;i++)
	{
		printf("%d",nums[i]);
	}
return nums[numsSize-k];
}



int main(void) {
	 int a[]={3,2,1,5,6,4};
	    int size=6;
	    int k=2;
	    int res=findKthLargest(a,size, k);
	    printf("\n %d",res);	return EXIT_SUCCESS;
}
