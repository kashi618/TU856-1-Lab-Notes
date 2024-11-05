/*
Project Desc.: Reads a 5 digit integer array fom the user. Returns the array, but in reversed order.

Author: Neil Jiang C24510496

Date: November 5, 2024
*/

// The number of elements in the array
#define NUMOFINT 5

#include <stdio.h>


int main() {
    int i;
    int j;
    
    // Declares and sets all array values to 0
    int userArray[NUMOFINT] = {0};
    int revArray[NUMOFINT]  = {0};

    // Reads integer value from user, NUMOFINT times
    for (i=0; i<NUMOFINT; i++) {
        printf("Enter an integer: ");
        scanf("%d",&userArray[i]);
    }

    // Reverses the array
    // This works by setting the last value of the user array, as the first value of the reversed array.
    // Then it sets the second last value of the user array, as the second value of the reversed array, etcetc.
    j = NUMOFINT;
    for (i=0; i<NUMOFINT; i++) {
        j -= 1;
        revArray[i] = userArray[j];
    }

    // Returns value of the user's array, and its reversed version
    printf("Your array of integers is ");
    for (i=0; i<NUMOFINT; i++) {printf("%d",userArray[i]);} // Returns each element in the array

    printf("\nThe reversed version is ");
    for (i=0; i<NUMOFINT; i++) {printf("%d\n",revArray[i]);} // Returns each element in the array
    

    // Ends program
    return 0;
}

