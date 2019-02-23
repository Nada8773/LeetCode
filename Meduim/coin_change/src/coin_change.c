/*
 ============================================================================
 You are given coins of different denominations and a total amount of money amount.
 Write a function to compute the fewest number of coins that you need to make up that amount. 
 If that amount of money cannot be made up by any combination of the coins, return -1.
 
 Input: coins = [1, 2, 5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1

Input: coins = [2], amount = 3
Output: -1

Algorithm
1- create an array it's size equal to the amount+1
2- a[0]=0  & the others value amount+1
3- check the condition   if(coins[j]<=i)
4- if true find that min(a[i],a[i-coins[j]]+1)

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define min(x, y)		((x) < (y)) ? (x) : (y)
int coinChange(int* coins, int size, int amount) {

        int a[amount+1];
        for(int i=0;i<amount+1;i++)
        {
        	a[i]=amount+1;
        }
        a[0]=0;

        for(int j=0;j<=amount;j++)
 	        	{
          	printf("%d ",a[j]);
 	        	}




        for(int i=1;i<=amount;i++)
        {
        	for(int j=0;j<size;j++)
        	{
        		printf("\n i=%d j=%d\n",i,j);
        		if(coins[j]<=i)
        		{
        			a[i]=min(a[i],a[i-coins[j]]+1);
        		}
        	}
                              for(int j=0;j<=amount;j++)
     	                            	{
                            	printf("%d ",a[j]);
     	                             	}

        	printf("\n after j\n");
        }
printf("%d",amount);
return a[amount]>amount?-1:a[amount];
}

int main(void) {
	int coins[]={1,2};
	int size=2;
	int amount=3;

	int res=coinChange(coins, size, amount);
	printf("\n res=%d",res);

	return EXIT_SUCCESS;
}
