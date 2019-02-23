/*
 ============================================================================
Input: nums = [4,5,6,7,0,1,2], target = 0 //[0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).
Output: 4

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int search(int* nums, int numsSize, int target) {
	int low = 0, high = numsSize - 1;
	int m = (low + high) >> 1;
	printf("%d\n",m);
	return 0;
}

int main(void) {
    int a[]={1,3};
    int size=2;
    int target=3;
    int res=search(a,size, target);
    printf("%d",res);
	return EXIT_SUCCESS;
}
