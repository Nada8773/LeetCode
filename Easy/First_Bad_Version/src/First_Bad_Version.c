/*
 ============================================================================
 You are a product manager and currently leading a team to develop a new product.
 Unfortunately, the latest version of your product fails the quality check. Since each version is developed 
 based on the previous version, all the versions after a bad version are also bad.

Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one,
which causes all the following ones to be bad.

You are given an API bool isBadVersion(version) which will return whether version is bad. 
Implement a function to find the first bad version. You should minimize the number of calls to the API.
 
 

 
 Given n = 5, and version = 4 is the first bad version.
1-2-3-4-5
call isBadVersion(3) -> false
call isBadVersion(5) -> true
call isBadVersion(4) -> true
 OUTPUT 4


 n = 2126753390, and version = 1702766719
 if you using mid=(start+end)/2; overflow will happen so we will replace it by using
 mid=start+(end-start)/2;
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isBadVersion(int mid)
{
	int version = 3 ; // input
	if(mid==version)
	{
		return 1; // true
	}
	return 0; // false

}

int main(void) {
	int n=3; // intput


	int mid;
	int start=1;
	int end=n;
	while(start+1<end)         // 1 2 3 4 5
	{
		mid=start+(end-start)/2;
		if(isBadVersion(mid)) // true
		{
			end=mid;
		}
		else
		{
			start=mid;
		}

	}

	  printf("%d",end);

	return EXIT_SUCCESS;
}
