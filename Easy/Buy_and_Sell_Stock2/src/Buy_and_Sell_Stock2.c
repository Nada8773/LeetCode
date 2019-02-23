/*
 ============================================================================
 Input: [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
             Not 7-1 = 6, as selling price needs to be larger than buying price.
Input: [7,6,4,3,1]
Output: 0

Input: [2,1,2,1,0,1,2]
Output: 2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// using macro make time 0ms after it was 4ms
#define min(x,y) (x<y?x:y)
#define max(x,y) (x>y?x:y)
/*
int max(int x,int y)
{
    if(x>y) return x;
    else  return y;
}

int min(int x,int y)
{
    if(x<y) return x;
    else  return y;
}
*/
int maxProfit(int* prices, int pricesSize) {

    int max_profit=0;
    int buy;
    if(pricesSize ==1)return 0;
    buy=min(prices[0],prices[1]);
    for(int i=1;i<pricesSize;i++)
    {
    	if(prices[i]<buy) buy=prices[i];
        max_profit=max(max_profit,prices[i]-buy);
    }
    return max_profit;
}

int main(void) {
	int a[]={7,1,5,3,6,4};
	      int numsSize=6;
	     int res=maxProfit(a,numsSize);
	     printf("%d",res);	return EXIT_SUCCESS;
}
