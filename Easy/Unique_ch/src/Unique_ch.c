/*
 ============================================================================
 Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:

 Input: "aadadaad"
Output: -1

 Input: "a"
Output: 0

Input: "cc"
Output: -1

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/******************************** this fun take 16ms  O(n^2)*********************/
/*
int firstUniqChar(char* s) {

int length =strlen(s);
    int count;
    if(length==1)
    {
        return 0;
    }
    for(int i=0;i<length;i++)
    {
        count=0;
        for(int j=0;j<length;j++)
        {

            if(i != j &&s[i]==s[j])
            {
               count++;
                break;
            }
        }
        if(count==0)
        {
            return i;
        }
    }
    return -1;
}*/

/******************************************* 8ms *******************************************/
int firstUniqChar(char* s) {
	int size=26;

	int* count=(int*) malloc(sizeof(int)*size);

	    for (int i = 0; i < size; i++) //A=65 z=90 (90-65=25)
        {
             count[i] = 0;
        }



	    for (int i = 0; s[i] != '\0'; i++)
        {
          count[s[i] - 'a']++;
        }


	    for (int i = 0; s[i] != '\0'; i++)
	        if (count[s[i] - 'a'] == 1)
            {
             free(count);
	         return i;
            }



	    return -1;
}

int main(void) {
	char *s="loveleetcode";
	int result=firstUniqChar( s);
	printf(" %d",result);
}
