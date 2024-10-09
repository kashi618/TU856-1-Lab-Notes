/*
Project Desc: Finds the volume of a cube, with length 2.8

Author: Neil Jiang C24510496

Date: Octover 1st 2024
*/

#include <stdio.h>

int main (void) {
    // Length of cube, measured in meters
    float length = 2.8;
    float volume;

    // Formula for volume of cube, (length x length x length)
    volume = length * length * length;
    printf("The volume of a cube with length 2.8m is: %.2f\n", volume);
    
    return 0;
}