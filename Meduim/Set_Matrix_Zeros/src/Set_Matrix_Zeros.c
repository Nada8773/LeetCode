/*
 ============================================================================
Input:
[
  [1,1,1],
  [1,0,1],
  [1,1,1]
]
Output:
[
  [1,0,1],
  [0,0,0],
  [1,0,1]
]
Given a m x n matrix, if an element is 0,
set its entire row and column to 0. Do it in-place.


 ============================================================================
 */


/*****************************************************************************************/
	void setZeroes(int** matrix, int RowSize, int ColSize) {
   int col0 = 1;

    // set Row=0 and col=0  with zeros 
    
    for (int i = 0; i < RowSize; i++) {
        if (matrix[i][0] == 0) col0 = 0;
        for (int j = 1; j < ColSize; j++)
          {
            if (matrix[i][j] == 0)
                matrix[i][0] = matrix[0][j] = 0;
          }
    }
    
   
    
    

    for (int i = RowSize - 1; i >= 0; i--) {
        for (int j = ColSize - 1; j >= 1; j--)
    
           {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
           }
        if (col0 == 0) matrix[i][0] = 0;
    }

	
//print
	for(int r=0;r<RowSize;r++)
					{
						for(int c=0;c<ColSize;c++)
						{
							printf("%d ",*((matrix+r*ColSize)+c));
						}
						printf("\n");
					}



	for (int r = RowSize - 1; r >= 0; r--) {
	        for (int c = ColSize - 1; c >= 1; c--)
	        {
	            if (*((matrix+r*ColSize)+0) == 0 || *((matrix+0*ColSize)+c) == 0)
	            	*((matrix+r*ColSize)+c) = 0;
	        }
	        if (flag == 0)
	        {
	        	*((matrix+r*ColSize)+0) = 0;
	        }

	    }


	// print
	for(int r=0;r<RowSize;r++)
						{
							for(int c=0;c<ColSize;c++)
							{
								printf("%d ",*((matrix+r*ColSize)+c));
							}
							printf("\n");
						}



}

