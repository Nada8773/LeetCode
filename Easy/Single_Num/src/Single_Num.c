/*
 ============================================================================
 Given a non-empty array of integers, every element appears twice except for one. Find that single one.


Input: [2,2,1]
Output: 1
Input: [4,1,2,1,2]
Output: 4
Input: [1,3,1,-1,3]
Output: -1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int singleNumber(int* nums, int numsSize) {
    int count =0;
    int n=(numsSize-1);
    int index;
   int sum_index=((n*(n+1))/2);
   printf("sum_index=%d\n",sum_index);
    for(int i=0;i<numsSize-1;i++)
       {
    for(int j=i+1;j<numsSize;j++)
           {
               if(nums[i]==nums[j])
               {
            	   printf("%d %d\n",i,j);
            	   count=count+i+j;

               }
           }
       }

    index=(sum_index-count);

return  nums[index];
}
int main(void) {
int a[]={1,3,1,-1,3};
int size=5;
int result;
result=singleNumber(a,size);
printf("%d",result);
	return EXIT_SUCCESS;
}
