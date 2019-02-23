/*
 ============================================================================
Write a program that outputs the string representation of numbers from 1 to n.

 for multiples of 3  output “Fizz”
 the multiples of 5 output “Buzz”.
 multiples of both 3 and 5 output “FizzBuzz”.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */

char** fizzBuzz(int n, int* returnSize) {

    char **a=(char**)malloc(sizeof(char*)*n);

    int count=1;
    int i;


    for(i=0;i<n;i++)
    {

        if((count%3==0) && (count%5==0))
         {
             a[i]=malloc(sizeof(char)*9);
             sprintf(a[i], "%s", "FizzBuzz");  // Instead of printing on console, it store output on char buffer which are specified in sprintf
         }

        else if(count%3==0)
        {
            a[i]=malloc(sizeof(char)*5);
            sprintf(a[i], "%s", "Fizz");
        }

        else if(count%5==0)
        {
            a[i]=malloc(sizeof(char)*5);
            sprintf(a[i], "%s", "Buzz");
        }

        else
        {
            a[i] = malloc(sizeof(char) * 2);
            sprintf(a[i], "%d", count);
        }
         count++;
    }


    *returnSize=n;
    return a;


}

