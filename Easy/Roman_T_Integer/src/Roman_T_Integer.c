/*
 ============================================================================
 Input: "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
   M>C  M+C
   C<M  M-C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



//**************** 44 ms	******************//
/*int romanToInt(char* s) {


    int num;
    int sum=0;
    int size=strlen(s);
    int a[size];
    for(int i=0;i<size;i++)
    {
       switch (s[i])
       {
    case 'I':
        num=1;
        break;
    case 'V':
        num=5;
        break;
    case 'X':
        num=10;
        break;
    case 'L':
        num=50;
        break;
    case 'C':
        num=100;
        break;
    case 'D':
        num=500;
        break;
    case 'M':
        num=1000;
        break;

       }
        a[i]=num;
    }

    for (int i=0; i<size; i++)
    {
    	if(i==size-1)a[i+1]=0;
            if (a[i]>= a[i+1]) sum+= a[i];

            else
            {
                sum+=a[i+1] - a[i];

                i++;
            }

    }
    return sum;

}*/


/********************************** 40 ms  *************************/

int value(int r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
    return 0;
}
int romanToInt(char* s) {
    int sum=0;
    int size=strlen(s);
    int v1,v2;

    for (int i=0; i<size; i++)
    {
        v1= value(s[i]);
        v2= value(s[i+1]);
            if(i==size-1)v2=0;
            if (v1>=v2)
            {
               sum+= v1;
            }
            else
            {
                sum+=v2 - v1;
                i++;
            }
    }
    return sum;
}


int main(void) {
	char str[]="III";
	int result=romanToInt(str);
	printf("%d",result);
	return EXIT_SUCCESS;
}
