/*
 ============================================================================
Input: haystack = "hello", needle = "ll"
Output: 2

Input: haystack = "aaaaa", needle = "bba"
Output: -1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strStr(char* haystack, char* needle) {
	int size1=strlen(haystack);
	int size2=strlen(needle);
	int i,j;
	if(needle[0]=='\0') return 0;
for(i=0;i<size1-size2+1;i++)
  {
	  for(j=0;j<size2;j++)
	  {
		 // printf("i+j=%d  j=%d\n",i+j,j);
		 // printf("h=%c  n=%c\n",haystack[i+j],needle[j]);
		  if(haystack[i+j]!=needle[j])
		  {
			  break;
		  }
	  }
	  if(j==size2)return i;
  }
return -1;

}

int main(void) {
	char a1[]="aaaaa";
	char a2[]="bba";
	int result=strStr(a1,a2);
	printf("%d",result);
	return EXIT_SUCCESS;
}
