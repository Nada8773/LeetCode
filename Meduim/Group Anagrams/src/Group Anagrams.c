/*
Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
Given an array of strings, group anagrams together.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void groupAnagrams(char** str, int strsSize) {

int c=0;
int count[strsSize];
int index=0;

int sum=0;

	for(int r=0;r<strsSize;r++)
	{
		//printf("\n r=%d \n  ",r);
		   while(str[r][c]!='\0')
		        	{
			  // printf("%c  ",str[r][c]);
			   sum+=str[r][c];

		        		c++;
		        	}
		   count[index]=sum;
          index++;
          c=0;
          sum=0;
	}

	char ***p;

		    p=(char ***) malloc(strsSize * sizeof(char **));

		    for(int i=0;i<strsSize;i++)
		    {
		        p[i]=(char**)malloc(strsSize * sizeof(char *));
		        for(int j=0;j<strsSize;j++)
		            p[i][j]=(char *)malloc(strsSize * sizeof(char));
		    }


	int row;

	int h=0;

  for(int i=0;i<strsSize;i++)
	{
       if(strcmp(str[i],"$$")==0)
       {
    	   printf("here i=%d",i);
    	   continue;
       }
       printf("\n i=%d \n",i);
        row=0;
        p[h][row]=str[i];

        printf("\nh=%d\n",h);
		for(int j=i+1;j<strsSize-1;j++)
		{

            printf("\n");

			if(count[i]==count[j])
			{
				printf("yes\n");
				row++;
				p[h][row]=str[j];
				str[j]="$$";
				count[j]=0;

			}


		}
		h++;

	}
}






int main(void) {

	char *strs[]={"eat", "tea", "tan", "ate", "nat", "bat"};
	int strsize=6;
	groupAnagrams(strs, strsize);

	return EXIT_SUCCESS;
}
