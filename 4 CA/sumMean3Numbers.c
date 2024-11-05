/*
Project Desc: Intakes 3 numbers from the user, and returns the sum and the mean of those numbers.

Author: Neil Jiang C24510496

Date: October 8th, 2024
*/

#include <stdio.h>

int main() {
    // Initializing Variables
    float num1;
    float num2;
    float num3;

    float sum = 0;
    float mean = 0;


// Asks the user to input 3 separate numbers
    printf("Enter the first number (incl. decimals): ");
    scanf("%f", &num1);

    printf("Enter the second number (incl. decimals): ");
    scanf("%f", &num2);

    printf("Enter the third number (incl. decimals): ");
    scanf("%f", &num3);


// Uses the 3 numbers to calculate the sum and the mean
    sum = num1+num2+num2;
    mean = sum / 3;


// Returns the value of the sum and mean to the user
    printf("\nRounded to 3 decimal places,");
    printf("\n  The sum of the numbers is:  %.3f",sum);
    printf("\n  The mean of the numbers is: %.3f", mean);


// Ends program
    return 0;
}