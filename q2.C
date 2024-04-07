// TODO: write a program to convert a roman number to an integer number.
// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// For example, two is written as II in Roman numeral, just two one's added together.
// Twelve is written as, XII, which is simply X + II. The number twenty seven is written as XXVII,
// which is XX + V + II.
// Roman numerals are usually written largest to smallest from left to right. However, the numeral for
// four is not IIII. Instead, the number four is written as IV. Because the one is before the five we
// subtract it making four. The same principle applies to the number nine, which is written as IX.
// There are six instances where subtraction is used:
// I can be placed before V (5) and X (10) to make 4 and 9.
// X can be placed before L (50) and C (100) to make 40 and 90.
// C can be placed before D (500) and M (1000) to make 400 and 900.
// Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.

// Example 1:
// Input: "I"
// Output: 1

// Example 2:
// Input: "IV"
// Output: 4

// let's write code to find the roman value to int with switch case.

#include <stdio.h>
#include <string.h>

// Function to convert a single Roman numeral character to an integer value
int roman_to_int(char c);

int main()
{
    char roman_num[100];

    // Prompt the user to enter a Roman numeral
    printf("enter a roman value make sure you enter valur in upper case: ");
    scanf("%s", roman_num);

    int integer_num = 0;

    // Iterate through each character of the input Roman numeral
    for (int i = 0; i < strlen(roman_num); i++)
    {
        // Convert the current Roman numeral character to its integer value
        int current_num = roman_to_int(roman_num[i]);
        // If there is another character after the current one, get its integer value as well
        int next_num = (i + 1 < strlen(roman_num)) ? roman_to_int(roman_num[i + 1]) : 0;

        // Check if the current numeral is smaller than the next one
        if (current_num < next_num)
        {
            // If true, subtract the current value from the total
            integer_num -= current_num;
        }
        else
        {
            // If false, add the current value to the total
            integer_num += current_num;
        }
    }

    // Print the result
    printf("The integer equivalent of the Roman numeral %s is: %d\n", roman_num, integer_num);

    return 0;
}

// Function to convert a single Roman numeral character to an integer value
int roman_to_int(char c)
{
    switch (c)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return 0;
    }
}

// /******************* Output *********************
// enter a roman value make sure you enter valur in upper case: VI
// The integer equivalent of the Roman numeral VI is: 6
// /**************************************************/