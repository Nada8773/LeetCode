/*
 ============================================================================
Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.



Input: "babad"
Output: "bab"
Note: "aba" is also a valid answer.

Input: "cbbd"
Output: "bb"

Input: "bb"
Output: "bb"

Input: "ac"
Output: "a"

Input: "a"
Output: "a"

Input: ""
Output: ""

Input: "abcda"
Output: "a"

Input: "abb"
Output: "bb"



Manacher’s algorithm Solution
O(N) time and O(N) space
https://articles.leetcode.com/longest-palindromic-substring-part-ii/
https://www.youtube.com/watch?v=nbTSfrEfo6M&t=466s
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN(x, y)		((x) < (y)) ? (x) : (y)
#define MAX_LEN			1000
#define MANACHER_LEN(len)	((len) * 2 + 3)
#define MAX_MANACHER_LEN	MANACHER_LEN(MAX_LEN)
#define MANACHER_START_CHAR	'^'
#define MANACHER_SPECIAL_CHAR	'#'
#define MANACHER_END_CHAR	'$'

void longestPalindrome(char* s) {
	int slen = strlen(s);
	/*if (slen <= 1)
		return s;*/

	/*
	*  Convert T string from S string,
	*  for example, S = "abaaba", T = "^#a#b#a#a#b#a#$"
	*/
	char T[MAX_MANACHER_LEN];
	int tlen = MANACHER_LEN(slen);
	printf("tlen=%d\n",tlen);
	T[0] = MANACHER_START_CHAR;
	T[1] = MANACHER_SPECIAL_CHAR;
	for (int i = 0, j = 2; i < slen; i++, j+=2) {
		T[j] = s[i];
		T[j + 1] = MANACHER_SPECIAL_CHAR;
	}
	T[tlen - 1] = MANACHER_END_CHAR;


	printf("MAX_MANACHER_LEN=%d\n",MAX_MANACHER_LEN);
	unsigned short P[MAX_MANACHER_LEN];
	//int P[tlen];
	int C = 0, R = 0;
	int center_idx = 0, max_len = 0;

	for (int i = 2; i < tlen - 2; i++) {
		printf("C=%d  i=%d\n",C,i);
		int i_mirror = C * 2 - i; // i' = C - (i - C)
		//int i_mirror =0;
		printf("i_mirror=%d\n",i_mirror);

		if(R>i)
		  {
			P[i]= MIN(R - i, P[i_mirror]);
			printf("P[i_mirror]=%d\n",P[i_mirror]);
		  }

		else
		  {
			P[i]=0;
		  }
		//P[i] = (R > i) ? MIN(R - i, P[i_mirror]) : 0; // if not copy P[i_mirror] in p[i] in this example ABABABA
		printf("P[%d]=%d\n",i,P[i]);

		printf("i - P[i] - 1=%d  i + P[i] + 1=%d \n",i - P[i] - 1,i + P[i] + 1);
		printf("T[i - P[i] - 1]=%d  T[i + P[i] + 1]=%d\n",T[i - P[i] - 1],T[i + P[i] + 1]);
		while (T[i - P[i] - 1] == T[i + P[i] + 1])
		{
			printf("in loop P[%d]=%d\n",i,P[i]);
			P[i]++;
		}

			printf("P[%d]=%d\n",i,P[i]);
			printf("R=%d\n",R);
		if (i + P[i] > R) {
			C = i;
			R = i + P[i];
			printf("C=%d  R=%d\n",C,R);
		}
		printf("max_len=%d\n",max_len);
		printf("P[%d]=%d\n",i,P[i]);
		if (P[i] > max_len) {
			center_idx = i;
			max_len = P[i];
			printf("max_len=%d center_idx=%d \n",max_len,center_idx);
		}
	}

	int lps_idx = (center_idx - max_len - 1) / 2; // to get the index of first char

	printf("lps_idx=%d\n",lps_idx);
	s[lps_idx + max_len] = '\0';
	printf("lps_idx + max_len=%d\n",lps_idx + max_len);


	/*******************  print ******************/
	int j=lps_idx;
	while(s[j]!='\0')
	{
		printf("%c",s[j]);
		j++;
	}

	//return &s[lps_idx];
}



int main(void) {


     char str[]="ABABABA";
     longestPalindrome(str);

	return EXIT_SUCCESS;
}
