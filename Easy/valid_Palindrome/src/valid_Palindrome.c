/*
 ============================================================================
 Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Input: "A man, a plan, a canal: Panama"
Output: palindrome

Input: "race a car"
Output: Not palindrome
Input: "6p"
Output: Not palindrome
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int isPalindrome(char* s)
{
    int size=0;
    int l,h;
  
    //convert to lower

    for (int i = 0; s[i]!='\0'; i++)
     	{
     		if(s[i] >= 'A' && s[i] <= 'Z')
     		{
     			s[i] = s[i] + 32;
   		}
     	}
    for(int i=0;s[i]!='\0';i++)
    {

    	if((s[i]>='a' &&s[i]<='z') || (s[i]<='9'&& s[i]>='0'))
    	{
    		s[size]=s[i];
    		size++;
    	}
    }
   /* for(int i=0;i<size;i++)
        {
    	printf("%c",s[i]);
        }*/

l=0;
h=size-1;
while(l<h)
{
   if(s[l]!=s[h])
     {
     return -1; //not
     }
   l++;
   h--;
}

return 1; //palindrome
}

int main(void) {
    char a[]= "race a car";
    int result=isPalindrome(a);

   if(result==1)
   {
	   printf("palindrome");
   }
   else{
	   printf("not palindrome");

   }

	return EXIT_SUCCESS;
}
