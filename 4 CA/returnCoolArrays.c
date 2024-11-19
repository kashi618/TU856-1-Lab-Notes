/*
Proj Description: Reads 15 integers from the user, and returns them in 3 different ways.
                    - Each number on separate lines
                    - Each number on a single line, separated by a space
                    - Each number on a single line, separated by a space, in reversed order

Author: Neil Jiang C24510496

Date: November 12, 2024
*/

#include <stdio.h>

// Amount of numbers inputted
#define NUM_ARRAY 15


int main() {
    // Initializing Variables
    int i = 0;
    int nums[NUM_ARRAY];
    

    // Reads integer from user NUM_ARRAY times
    for (i=0; i<NUM_ARRAY; i++) {
        printf("Please enter an integer: ");
        scanf("%d", &nums[i]);
    } printf("\n\n");

    
    // Prints each number in a separate line
    printf("Numbers on separate lines: \n");
    for (i=0; i<NUM_ARRAY; i++) {
        printf("%d\n",nums[i]);
    } printf("\n\n");


    // Prints all numbers on one line, separated by a space
    printf("Numbers on ONE line: \n");
    for (i=0; i<NUM_ARRAY; i++) {
        printf("%d ",nums[i]);
    } printf("\n\n");
    

    // Prints out numbers in reversed order
    printf("Numbers in reversed order: \n");
    for (i=(NUM_ARRAY-1); i != -1; i--) {
        printf("%d ",nums[i]);
    } printf("\n\n");


    // End of program
    return 0;
}