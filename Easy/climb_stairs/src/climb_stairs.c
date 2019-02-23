/*
 ============================================================================
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Note: Given n will be a positive integer.

Input: 2
Output: 2
Explanation:
There are two ways: (1, 1) and (2)


Input: 3
Output: 3
Explanation:
(1, 1, 1), (1, 2), (2, 1)

Input: n = 4
Output: 5
Explanation:
(1, 1, 1, 1), (1, 1, 2), (2, 1, 1), (1, 2, 1), (2, 2)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int climbStairs(int n) {

   int v1=1;
   int v2=2;
   int sum=0;
    if(n<=1) return n;
    if(n==2) return 2;
    for(int i=2;i<n;i++)
    {
        sum=v1+v2;
        v1=v2;
        v2=sum;

    }
    return sum;
}

int main(void) {

	int n=4;
	int res=climbStairs(n);
	printf("%d",res);
}
