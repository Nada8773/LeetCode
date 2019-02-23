/*
 ============================================================================


Input: "aabaab!bb"
Output: 3

 Input: "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.


Input: "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.


Input: "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
             Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

Input : hcdfaqxpvhneu
Output : 12
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max(x, y)		((x) > (y)) ? (x) : (y)


void lengthOfLongestSubstring(char* s) {
	int size=strlen(s);
	int max_len=1;
	int prev_index;
	int cur_len=1;

	int *a=(int*)malloc(sizeof(int)*128);

	for(int i=0;i<128;i++)
	{
		a[i]=-1;
	}

	a[s[0]]=0;

	for(int i=1;i<size;i++)
	{
		printf("i=%d\n",i);

		prev_index=a[s[i]];

		printf("i-count=%d  prev_index==%d \n",i-cur_len,prev_index);


		if(prev_index==-1 || i-cur_len>prev_index) //i-count>index for abba
		{
			cur_len++;
		}
		else
		{
			if(cur_len>max_len)
			{
				max_len=cur_len;
			}

			cur_len=i-prev_index;
		}
		printf("count_subsize=%d\n",cur_len);
		a[s[i]]=i;
		printf("a[s[i]]=%d s[%d]=%c \n",a[s[i]],i,s[i]);
	}

	if(cur_len>max_len)
	{
		max_len=cur_len;
	}
    free(a);

    printf("max_len=%d",max_len);

}


int main(void) {
	char str[]="abba";
	lengthOfLongestSubstring(str);
	return EXIT_SUCCESS;
}
