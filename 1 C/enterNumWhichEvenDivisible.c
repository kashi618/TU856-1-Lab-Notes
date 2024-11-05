/*
Project Desc: Takes integer 1-5 from user. Returns if the number 1-20 is divisible by the integer

Author: Neil Jiang C24510496

Date: October 22, 2024
*/

#include <stdio.h>

int main() {
    // Initializing variables
    int num = 0;
    int i;

    // Reads an integer 1-5
    while (num<1 || num>5) {
        printf("Please enter a number between 1-5: ");
        scanf("%d",&num);
        printf("\n");
    }


    // Check if num divisible by every num 1-20
    for (i=1;i<=20;i++) {
        if (i%num == 0) {
            printf("Number %d is divisible by %d\n",i,num);
        }
    } // END FOR LOOP

    // End program
    return 0;
}