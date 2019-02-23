/*
 ============================================================================
Input: 11
Output: 3
Explanation: Integer 11 has binary representation 00000000000000000000000000001011
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int hammingWeight(int n) {
    int count=0;
	while(n)
	{
	    if(n&1)
	    {
	    	n=(n>>1);
	        count++;
	    }
	    else
	    	n=(n>>1);
	}
    return count;
}

int main(void) {
   int num=3;
   int r=hammingWeight(num);
   printf("%d",r);

return EXIT_SUCCESS;
}
