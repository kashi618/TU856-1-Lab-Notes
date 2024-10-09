/*
Project Desc: Intakes 3 numbers from the user, printing them out on separate lines

Author: Neil Jiang C24510496

Date: October 8th, 2024
*/

#include <stdio.h>

int main() {
    // Initializing Variables
    int num1;
    int num2;
    int num3;


// Asks the user to input 3 separate numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);


// Prints the the 3 numbers on separate lines
    printf("\n%d",num1);
    printf("\n%d",num2);
    printf("\n%d\n",num3);


// Ends program
    return 0;
}