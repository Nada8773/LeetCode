/*
 ============================================================================
 Input: [1,2,3,1]
Output: true

Input: [1,2,3,4]
Output: false
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sort (int *a,int size)
{
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
        	printf("%d %d \n",a[i],a[j]);
            if(*(a+i)>*(a+j))
            {
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }

    for(int i=0;i<size;i++)
        {
    	printf("%d",a[i]);
        }

}
int containsDuplicate(int* nums, int numsSize)
{
    sort(nums,numsSize);
    for(int i=0;i<numsSize-1;i++)
       {
           for(int j=i+1;j<numsSize;j++)
           {
        	   if(nums[i]==nums[j])
        	   {
        		   return 1;
        	   }
           }
       }
    return -1;

}
int main()
{
	int nums[]={1,2,3,4};
	int numsSize=4;
	int bool;
	bool=containsDuplicate(nums,numsSize);
	if(bool==1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
