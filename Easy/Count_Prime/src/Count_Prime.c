/*
 ============================================================================
Input: 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int countPrimes(int n)
{
     int count = 0;
    int isPrime[n+1];

    if(n==0 || n==1) return 0;

    for (int i = 2; i < n; i++)
    {
      isPrime[i] = 1;
    }

   for (int i = 2; i * i < n; i++)
   {
      if (isPrime[i]==1)
      {
          for (int j = i * i; j < n; j += i)
           {
              isPrime[j] = 0;
           }
      }

   }

   for (int i = 2; i < n; i++)
   {
      if (isPrime[i]) count++;
   }
   return count;


}


int main(void) {
  //int num=499979;
  int num=11;
  int r= countPrimes(num) ;
  printf("%d",r);
	return EXIT_SUCCESS;
}
