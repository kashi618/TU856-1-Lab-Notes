/*
Project Description: Prints 3 variables using one printf statement

Author:  Neil Jiang C24510496

Date:  September 24th 2024
*/



#include <stdio.h>

int main () {
    int   var1;
    float var2;
    char  var3;

    var1 = 21;
    var2 = 15.12741;
    var3 = 'A';

    printf("Integer: %d\nFloat: %f\nChar: %c", var1, var2, var3);

    return 0;
}