/*
Program Description:    This program declares and assigns 3 variables with different values, and then shows them to the user.


Author: C24510496 | Neil Jiang

Date: September 24, 2024
*/

#include <stdio.h>

int main()
{
    // Declares Variables
    int   num1, num2;
    float num3;

    // Assigns Value to Variables
    num1 = 400;
    num2 = 600;

    num3 = num2;

    // Shows Each Variable
    printf("num1 contains %d ", num1);
    printf("num2 contains %f and num3 contains %f", num2, num3);

    // Ends Program
    return 0;
}