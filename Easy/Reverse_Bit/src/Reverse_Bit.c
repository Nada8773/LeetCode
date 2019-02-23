/*
 ============================================================================
Reverse bits of a given 32 bits unsigned integer.

Input: 00000010100101000001111010011100
Output: 00111001011110000010100101000000
Explanation: The input binary string 00000010100101000001111010011100 represents the unsigned integer 43261596,
so return 964176192 which its binary representation is 00111001011110000010100101000000.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverseBits(unsigned int n) {
    unsigned int tmp=n;
    int count=31;
    n=n>>1;
    while(n)
    {
        tmp=tmp<<1;
        tmp=tmp|(n&1);
        n=n>>1;
        count--;
    }
    tmp=tmp<<count;

    printf("%d",tmp);
}
int main(void) {
	int n=43261596;
	reverseBits(n);


	return EXIT_SUCCESS;
}
