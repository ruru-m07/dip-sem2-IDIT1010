/*
   TODO: write a program to print a pattern useing for loop.

          *
         * *
        * * *
       * * * *
        * * *
         * *
          *
*/

#include <stdio.h>

int main()
{
    int n = 4; // Define the number of rows in the pattern

    // Loop for upper half of the pattern
    for (int i = 1; i <= n; i++)
    {
        // Print spaces before the stars in each row
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        // Print stars for each row
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        // Move to the next line after completing a row
        printf("\n");
    }

    // Loop for lower half of the pattern
    for (int i = n - 1; i >= 1; i--)
    {
        // Print spaces before the stars in each row
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        // Print stars for each row
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        // Move to the next line after completing a row
        printf("\n");
    }
    return 0;
}

// /******************* Output *********************
//    * 
//   * * 
//  * * *
// * * * *
//  * * *
//   * *
//    *
// /**************************************************/