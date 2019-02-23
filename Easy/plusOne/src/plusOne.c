/*
 ============================================================================
 Given a non-empty array of digits representing a non-negative integer, plus one to the integer.
The digits are stored such that the most significant digit is at the head of the list, 
and each element in the array contain a single digit.
You may assume the integer does not contain any leading zero, except the number 0 itself.

Input: [1,2,3]
Output: [1,2,4]

Input: [9,9]
Output: [1,0,0]
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int digits[]={9,9};
	int digitsSize=2;
	int i=digitsSize-1;
	int*a= (int*)calloc(digitsSize+1,sizeof(int));
	a[digitsSize]=digits[digitsSize-1]+1;


	for( i=digitsSize-1;i>0;i--)
	{
		printf("a[i]%d\n",a[i]);
		a[i]=digits[i-1]+(a[i+1]/10);
		printf("af a[i]%d\n",a[i]);
		a[i+1]=a[i+1]%10;
		printf("a[i+1]%d\n",a[i+1]);
	}
		if(a[i+1]==10)
		{
			a[i+1]=0;
			a[i]=1;
			digitsSize=digitsSize+1;


		}
		else
		{
			a=a+1;

		}
		for(int j=0;j<digitsSize;j++)
		{
			printf("%d",a[j]);
		}

	return EXIT_SUCCESS;
}
