/*
 ============================================================================
implement atoi which converts a string to an integer.
The function first discards as many whitespace characters as necessary until the first non-whitespace character is found.
Then, starting from this character, takes an optional
initial plus or minus sign followed by as many numerical digits as possible, and interprets them as a numerical value.
The string can contain additional characters after those that form the integral number, which are
ignored and have no effect on the behavior of this function.
If the first sequence of non-whitespace characters in str is not a valid integral number, 
or if no such sequence exists because either str is empty or it contains only whitespace characters, no conversion is performed.
If no valid conversion could be performed, a zero value is returned.

Note:
Only the space character ' ' is considered as whitespace character.
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: 
[-231,  231 - 1]. If the numerical value is out of the range of representable values, INT_MAX (231 - 1) or INT_MIN (-231) 
is returned.
 
 
 
 Input: "42"
Output: 42

Input: "words and 987"
Output: 0

Input: "4193 with words"
Output: 4193
 
 Input:"-91283472332"
Output: -2147483648

Input:"3.14159"
Output:3
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
/*
#define INT_MAX 2147483647
#define INT_MIN -2147483648
*/

int myAtoi(char* str)
{
    long long  num=0;
    int val;
    int j=0;
    int flag=1;
    int count =0;
    int sign=1;
    while(str[j]==' ')
    {
        count++;
        j++;
    }

    if(flag==1 && str[count]=='-')
    {
        sign=-1;
        count++;
        flag=0;
    }
    if(flag==1 && str[count]=='+')
    {
        // check '+' too
        sign=1;
        count++;
        flag=0;
    }

    while(str[count] == '0'){
        // ignore leading 0
        count++;
    }
    for(int i=count;str[i]!='\0';i++)
    {
        if (i - count > 12) {
            // outside of int limits
            break;
        }
	if(str[i]>='0' && str[i]<='9')
	{
		num=(num*10)+(long long)(str[i]-48);
	}
	else
	{
            break;
	}
    }
    num=num*sign;
    if(num>2147483647)
    {
	num=2147483647;
    }
    if(num<(-2147483648))
    {
    	num=-2147483648;
    }
    val=num;
    return (val);
}

int main(void) {
  char str[]="9223372036854775808";
  int num=myAtoi(str);
  printf("%d",num);


	return EXIT_SUCCESS;
}
