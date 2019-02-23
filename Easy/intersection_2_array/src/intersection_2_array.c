/*
 ============================================================================
Given two arrays, write a function to compute their intersection.


input   nums1[]={4,9,5};
        nums2[]={9,4,9,8,4}
Output  {4,9}

Input:   nums1 = [1,2,2,1],
         nums2 = [2,2]
Output: [2,2]
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int partition (int* a,int start ,int end)
{
	int index=start;
	int pivot=a[end];
	int tmp;
	for(int i=start;i<end;i++)
	{
		if(a[i]<=pivot)
		{
			tmp=a[i];
			a[i]=a[index];
			a[index]=tmp;
			index++;
		}
	}
	tmp=a[index];
	a[index]=a[end];
	a[end]=tmp;
	return index;
}

void q_sort(int* arr,int start,int end)
{
	int pivot_index;
	if(start<end)
	{
		pivot_index=partition (arr,start ,end);
		q_sort(arr,start,pivot_index-1);
		q_sort(arr,pivot_index+1,end);

	}

}


int main(void) {
	int nums1[]={3,1,2};
	int nums1Size=3;
	int nums2[]={1,3};
	int nums2Size=2;
	int size;
	int i=0;
	int j=0;
	int k=0;
	size = (nums1Size > nums2Size) ? nums1Size : nums2Size;
	int* a= (int*)malloc(size*sizeof(int));
	q_sort(nums1,0,nums1Size-1);
	q_sort(nums2,0,nums2Size-1);

	while((i<nums1Size) && (j<nums2Size))
	{
		//printf("n1[%d]=%d  n2[%d]=%d \n",i,nums1[i],j,nums2[j]);
    if(nums1[i]==nums2[j])
		{
		a[k]=nums1[i];
		k++;
		i++;
		j++;
		}
		else if (nums1[i] > nums2[j]) j++;
		else if (nums1[i] < nums2[j]) i++;

		//printf("i=%d j=%d  k=%d\n",i,j,k);

	}
for(int c=0;c<k;c++)
{
	printf("%d",a[c]);
}


return 0;
}
