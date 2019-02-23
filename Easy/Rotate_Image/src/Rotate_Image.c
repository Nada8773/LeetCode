/*
 ============================================================================
Given input matrix = 
[
  [1,2,3],
  [4,5,6],
  [7,8,9]
],

rotate the input matrix in-place such that it becomes:
[
  [7,4,1],
  [8,5,2],
  [9,6,3]
]
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int* num1,int* num2)
{


	int tmp;
	tmp=*num1;
	*num1=*num2;
	*num2=tmp;
}

int main(void) {
	int matrixRowSize=3;
	int num_level=(matrixRowSize/2);
	int last =matrixRowSize-1;
	int level=0;
int  matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};


while(level<num_level)
{

    for(int i=level;i<last;++i)
         {
    	swap(&matrix[level][i],&matrix[i][last]);
    	swap(&matrix[level][i],&matrix[last][last-i+level]);
    	swap(&matrix[level][i],&matrix[last-i+level][level]);
         }
++level;
--last;
}

for(int Row=0;Row< matrixRowSize;Row++)
   {
        for(int Col=0;Col<matrixRowSize;Col++)
        {
       	printf("%d",matrix[Row][Col]);
        }
   }
return EXIT_SUCCESS;
}
