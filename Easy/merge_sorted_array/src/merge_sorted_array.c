/*
 ============================================================================
Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

Output: [1,2,2,3,5,6]

Input:
nums1 = {4,5,6,0,0,0}, m = 3
nums2 = {1,2,3},       n = 3

Output: [1,2,3,4,5,6]
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void merge(int* nums1, int m, int* nums2, int n) {
	int j=0;
	int tmp;

	// add nums2 to nums1
	for(int i=m;i<m+n;i++)
	{
		nums1[i]=nums2[j];
		j++;
	}

	// bubble sort
	for(int i=0;i<m+n;i++)
		{
		for(int k=i+1 ;k<m+n ;k++)
		  {
			if(nums1[i]>nums1[k])
			{
				tmp=nums1[i];
				nums1[i]=nums1[k];
				nums1[k]=tmp;
			}
		  }
		}
	for(int i=0;i<m+n;i++)
		{
			printf("%d",nums1[i]);
		}



}

int main(void) {

	int  m = 3;
	int  n = 3;
	int nums1[] = {4,5,6,0,0,0};
	int nums2[] = {1,2,3};
	merge(nums1, m, nums2,  n);


	return EXIT_SUCCESS;
}
