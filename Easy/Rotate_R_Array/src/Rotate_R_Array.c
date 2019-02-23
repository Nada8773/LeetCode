
/*
Given an array, rotate the array to the right by k steps, where k is non-negative.

Input: [1,2,3,4,5,6,7] and k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Input: [-1,-100,3,99] and k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]



*/

#include <stdio.h>
#include <stdlib.h>


#define numsSize 7

int  main() {
  int nums[]={1,2,3,4,5,6,7};
  int k=3;
  int key;
  int count=0;
int i;
  int arr[numsSize];
if(numsSize<k)
{
  k=k-numsSize;
}
    key=numsSize-k;
  for(i=0;i<numsSize;i++)
  {

      if (key>=numsSize)
      {
	     arr[i]=nums[count];
	     count++;

      }
      else
      {
      arr[i]=nums[key];
	  key++;
      }
  }

  for (int i=0;i<numsSize;i++)
  {
	  nums[i]=arr[i];
  }

return 0;

}
