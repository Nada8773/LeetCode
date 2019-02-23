/*
 ============================================================================
Input: ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
char *s="hello";
int length =strlen(s);
   char tmp;
   int l=0;
   int h=length-1;

while(l<h)
{
	tmp=s[l];
	s[l]=s[h];
	s[h]=tmp;
l++;
h--;
if(l==h)
{
	break;
}
}
for(int i=0;i<length;i++)
{
	printf("%c",s[i]);
}
	return EXIT_SUCCESS;
}
