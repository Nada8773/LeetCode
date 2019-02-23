/*
 ============================================================================
 Name        : zigzag_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int* a ,int* b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}


void zigzag(int* arr,int size)
{
	int flag=1;
	 for(int i=0;i<=size-2;i++)
	    {
		 if(flag)
		 {
			 if(arr[i]>arr[i+1])
			   {
			    swap(&arr[i],&arr[i+1]);
			    }
		 }
		 else
		 {
			 if(arr[i]<arr[i+1])
			 	{
			 	swap(&arr[i],&arr[i+1]);
			    }

		 }
		 flag=!flag;
	    }

}
/******************************************* Method 2****************
void zigzag(int* a,int size)
{

    for(int i=0;i<=size-2;i=i+2)
    {
    	printf("i=%d\n",i);
    	printf("a[i]=%d  a[i+1]=%d\n",arr[i],arr[i+1]);
    	if(arr[i]>arr[i+1])
    	{
    		swap(&arr[i],&arr[i+1]);
    	}
    	if((i+2)==size)
    	{
    		break;
    	}
    	printf("a[i+1]=%d  a[i+2]=%d\n",arr[i+1],arr[i+2]);
       if(arr[i+1]<arr[i+2])
    	{
    		swap(&arr[i+1],&arr[i+2]);
    	}

    }

    for(int i=0;i<size;i++)
        {
    	printf("%d",arr[i]);
        }
}
*********************************************************************/
int main(void) {
    int  arr[] = {4, 3, 7, 8, 6, 2, 1};
    int size =7;
    zigzag(arr,size);


    return EXIT_SUCCESS;
}
