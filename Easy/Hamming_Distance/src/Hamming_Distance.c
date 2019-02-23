/*
 ============================================================================
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.

Input: x = 1, y = 4

Output: 2

Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ?   ?

The above arrows point to positions where the corresponding bits are different.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=93;
	int y=73;
	 int count=0;
	    int z=x^y;
	    int mask=1;

	    while(z)
	    {
		    printf("z=%d\n",z);

	    if((z&mask)==1)
	       {
		    printf("z222=%d\n",z);

	        count++;

	       }
	    z=z>>1;
	    }
	    printf("c=%d\n",count);

	    return EXIT_SUCCESS;
}
