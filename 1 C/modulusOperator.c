/*
Project Desc: Using the modulus operator to calculate and display arithmetic operations

Author: Neil Jiang C24510496

Date: 1st October 2024
*/

#include <stdio.h>

int main(void) {   
    float answer;

    answer = 2%2;
    printf("2 %% 2 = %.0f\n", answer);

    answer = 3%2;
    printf("3 %% 2 = %.0f\n", answer);

    answer = 5%2;
    printf("5 %% 2 = %.0f\n", answer);

    answer = 7%3;
    printf("7 %% 3 = %.0f\n", answer);

    answer = 100%33;
    printf("100 %% 33 = %.0f\n", answer);

    answer = 100%7;
    printf("100 %% 7 = %.0f", answer);

    return 0;
}
