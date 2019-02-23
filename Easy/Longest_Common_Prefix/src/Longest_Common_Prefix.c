/*
 ============================================================================
 Input: ["flower","flow","flight"]
Output: "fl"

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* longestCommonPrefix(char** strs, int strsSize) {

	 int len=strlen(strs[0]);

	int count;
	if(strsSize==0)return "";
    if(strsSize==1)return strs[0];


	for(int i=1;i<strsSize;i++)
	{
        count=0;
		for(int j=0;j<len;j++)
			{
			if (strs[0][j]!=strs[i][j])
		          {
				     strs[0][j]='\0';
					 break;
		          }
            else
                  {
                  count++;
                  }
			}
        if(count !=len)
        {
         len=count;
        }
	}
    strsSize=len;
	return strs[0];

}




int main(void) {
    char arr[3][6]={"flower","flow","flight"};
    char *a=malloc(sizeof(char));
     a =longestCommonPrefix(arr,6);
  for (int j=0;a[j]!='\0';j++)
    	{
          printf("%c",a[j]);
    	}
	return EXIT_SUCCESS;
}
