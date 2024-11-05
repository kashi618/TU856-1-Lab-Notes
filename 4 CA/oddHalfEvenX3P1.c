/*
Project Desc: This program takes in a positive integer from the user. If it is even, it is halved. If it is odd, it is multiplied 3 and
              incremented by 1. This is repeated til the number becomes 1. The amount of steps taken is then returned to the user

Author: Neil Jiang C24510496

Date: October 22, 2024
*/


#include <stdio.h>

int main() {
    // Initializing variables
    int num;
    int steps = 0;

    // Reads positive integer from user, stores in num
    printf("Enter a positive integer: ");
    scanf(" %d",&num);
    printf("\n");

    // Error checking, when integer is NOT positive
    while (num < 1) {
        printf("Error, please enter a positive integer: ");
        scanf("%d",&num);
        printf("\n");
    } 


    // If number is NOT 1
    while (num != 1) {
        // If the number is even
        if (num%2 == 0) {
            num /= 2;
        }
        // If the number is odd
        else {
            num = (num*3) + 1;
        }

        steps++;            

        // Return value of num
        printf("Next Value is %d\n",num);

    } // End while

    // Return final value and steps
    printf("Final value %d, number of steps %d\n",num,steps);

    // End program
    return 0;
}