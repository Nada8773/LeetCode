
/*
Input: [7,1,5,3,6,4]
Output: 7
Explanation:
Buy on day 2 (price = 1)
and sell on day 3 (price = 5),
 profit = 5-1 = 4.
Then buy on day 4 (price = 3) and sell on day 5 (price = 6)
, profit = 6-3 = 3.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int prices[]={7,1,5,3,6,4};
	int pricesSize=6;
    int j;
    int profit=0;
for(int i=0;i<pricesSize-1;i++)
{
	j=i+1;
	if(prices[i]<prices[j])
	{
		profit+=prices[j]-prices[i];
	}
}
	printf("%d",profit);

	return EXIT_SUCCESS;
}
