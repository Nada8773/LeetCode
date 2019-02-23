/*
 ============================================================================
 Given two strings s and t , write a function to determine if t is an anagram of s.

 Input: s= "ac"
        t= "bb"
 Output: false

 Input: s = "anagram", t = "nagaram"
Output: true

 Input: s = "aa", t = "a"
Output: false

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 26
int isAnagram(char* s, char* t)
{
	int count[size]={0};

	for(int i=0;s[i]!='\0';i++)
	{
		count[s[i]-'a']++;
	}

	for(int i=0;t[i]!='\0';i++)
		{
			count[t[i]-'a']--;
		}

	for(int i=0;i<size;i++)
		{
		if(count[i] !=0)
		{
			return 0;
		}

		}
	return 1;

}
int main(void) {
	char *s="anagram";
	char *t="nagaram";
	int result=isAnagram( s,  t);
	if(result==0)
	{
		printf("false");
	}
	else
		printf("true");





	return EXIT_SUCCESS;
}
