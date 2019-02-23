/*
 ============================================================================
 Input: 5
Output:
[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int n=5;
    int a[n][n];
    if(n==1)printf("1");
  

    int size=3;
    int sum=0;
    a[0][0]=1;
    a[1][0]=1;
    a[1][1]=1;
   
    for(int r=2;r<n;r++)
    {
    	a[r][0]=1;
    	for(int c=1;c<size;c++)
    	{
    		if(c==size-1)
    		{
    			a[r][c]=1;
    			break;
    		}
    		sum=a[r-1][c-1]+a[r-1][c];
    		a[r][c]=sum;
    	}
    	size++;
    }


            // print
    int s=1;
    for(int r=0;r<n;r++)
       {
       	for(int c=0;c<s;c++)
       	{

       		printf("%d",a[r][c]);
       	}
       	printf("\n");
       	s++;
       }




 return EXIT_SUCCESS;
}

