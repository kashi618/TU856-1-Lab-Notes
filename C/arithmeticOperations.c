/*
Project Desc: Demonstrating many arithmetic operations

Author: Neil Jiang C24510496

Date: Octover 1st 2024
*/
#include <stdio.h>

int main (void) {
    float floatAns;
    int intAns;

    intAns = 15 + 10;
    printf("15 + 10 = %d\n", intAns);

    intAns = 15 - 10;
    printf("15 - 10 = %d\n", intAns);

    intAns = 15 * 10;
    printf("15 x 10 = %d\n", intAns);

    floatAns = 15/10;
    printf("15 / 10 = %.2f\n", floatAns);

    floatAns = 15 % 3;
    printf("15 %% 3 = %.2f\n", floatAns);


    return 0;
}