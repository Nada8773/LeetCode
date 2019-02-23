/*
 ============================================================================
Input: amount = 5, coins = [1, 2, 5]
Output: 4
Explanation: there are four ways to make up the amount:
5=5
5=2+2+1
5=2+1+1+1
5=1+1+1+1+1

https://www.youtube.com/watch?v=jaNZ83Q3QGc&t=399s
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int change(int amount, int* coins, int coinsSize) {
    int index;
    if(amount==0)return 1;
    int* a=(int*)malloc(sizeof(int)*(amount+1));
        for(int i=0;i<amount+1;i++)
        {
        	a[i]=0;
        }
        a[0]=1;

    for(int i=0;i<coinsSize;i++)
    {
        for(int j=1;j<amount+1;j++)
        {
            if(j>=coins[i])
            {
                index=j-coins[i];
                a[j]+=a[index];
            }
        }

    }
  printf("%d",a[amount]);
    return a[amount];
}

int main(void) {
	int coins[]={1,2};
		int size=2;
		int amount=4;

		int res=change(amount, coins, size);
		printf("\n res=%d",res);
	return EXIT_SUCCESS;
}
