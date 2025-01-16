/*
    Introduction to variables in C.
*/

// Preprocessor directive
#include <stdio.h>

// Main Function
int main() {
    // Create a variable
    int first_number;
    // Assign the value to the fist_number variable
    first_number = 1;

    // Create and Initialize
    int second_number = -15;

    // Create a third variable
    int sum = first_number + second_number;

    // Print the value of a variable
    //%d - conversion specifier
    printf("The first number is %d\n", first_number);
    printf("The second number is %d\n", second_number);
    printf("%d + %d = %d\n", first_number, second_number, sum);
    return 0;
};