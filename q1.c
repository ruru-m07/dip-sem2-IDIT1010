// TODO: write a program to find out the area of a hexagon useing fuctions

#include <stdio.h>
#include <math.h>

// Function to calculate the area of a hexagon given the length of its side
float areaOfHexagon(float side);

int main()
{
    float side;

    // Prompt the user to enter the length of a side of the hexagon
    printf("Enter the side of the hexagon: ");
    scanf("%f", &side);

    // Calculate the area of the hexagon using the areaOfHexagon function
    float area = areaOfHexagon(side);

    // Print the result
    printf("The area of the hexagon with side length %.2f is: %.6f\n", side, area);

    return 0;
}

// Function to calculate the area of a hexagon given the length of its side
float areaOfHexagon(float side)
{
    // Area of a hexagon formula: (3 * √3 * side^2) / 2
    // where side is the length of a side of the hexagon
    return (3 * sqrt(3) * side * side) / 2;
}

/******************* Output *********************
    Enter the side of the hexagon: 5
    The area of the hexagon is: 64.951851
**************************************************/