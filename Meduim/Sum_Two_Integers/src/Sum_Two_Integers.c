/*
 ============================================================================
 Calculate the sum of two integers a and b,
 but you are not allowed to use the operator + and -.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int a=2;
   int b=2;
   int carry;

while(b!=0)
{
   carry=a&b;
  // printf("carry=%d\n",carry);
   a=a^b;
   b=carry<<1;
 //  printf("b=%d\n",b);
}
printf("sum=%d",a);


	return EXIT_SUCCESS;
}
