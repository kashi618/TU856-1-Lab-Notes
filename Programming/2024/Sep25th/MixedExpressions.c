#include <stdio.h>

int main() {

    int   int1;
    int   int2;
    float float1;
    float float2;



//  Example 1
    printf("Example 1:\n");

    int1   = 10;
    float1 = 2.5;
    float2 = 0;
    
    // This is a mixed expression, as it divides an integer and a float
    float2 = int1 / float1; 
    printf("Float2 has a value of %f\n\n",float2);



// Example 2
    printf("Example 2:\n");

    float1 = 0;
    int1   = 10;
    int2   = 8;

    // This won't give the correct value, as 10 / 8 is not 2
    float1 = int1 / int2;
    printf("Float1 has a value of %f\n\n",float1);



// Fixing Example 2
    printf("Fixing Example 2:\n");

    float1 = 0;
    int1   = 10;
    int2   = 8;

    // You can fix it by making one of the integers a float
    float1 = (float)int1 / int2;
    printf("Float1 has a value of %f\n",float1);

    return 0;

}

