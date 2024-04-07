// TODO: write a program to print the (4 * 4 ) matric using for loop and array.

#include <stdio.h>

int main()
{
    int n = 4; // Define the size of the matrix (4x4 in this case)
    int arr[4][4] = {
        // Define a 2D array to hold the elements of the matrix
        {1, 2, 3, 4},    // First row
        {5, 6, 7, 8},    // Second row
        {9, 10, 11, 12}, // Third row
        {13, 14, 15, 16} // Fourth row
    };

    // Loop through each row of the matrix
    for (int i = 0; i < n; i++)
    {
        // Loop through each column of the matrix
        for (int j = 0; j < n; j++)
        {
            // Print the element at the current row and column
            printf("%d ", arr[i][j]);
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

// /******************* Output *********************
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// /*************************************************/