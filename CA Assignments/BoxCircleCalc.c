/*
Project Desc: Calculates the volume and surface area of a box with a given length, height, width.
              Calculates the area of a circle with a given radius.

Author: Neil Jiang C24510496

Date: October 1st 2024
*/

#include <stdio.h>

int main (void) {
    // Measurements of box, in centimeters
    float heightBox = 10;
    float lengthBox = 11.5;
    float widthBox = 2.5;
    float volumeBox;
    float surfaceAreaBox;

    // Formula for volume, (height x width x length)
    volumeBox = heightBox * widthBox * lengthBox;
    printf("The volume of the box is %.2f\n", volumeBox); // Rounded 2 decimal places

    // Formula for surface area, (2lw + 2lh + 2hw)
    surfaceAreaBox = 2*(lengthBox*widthBox) + 2*(lengthBox*heightBox) + 2*(heightBox*widthBox);
    printf("The surface area of the box is %.2f\n", surfaceAreaBox);  // Rounded 2 decimal places



    // Measurements of circle, in centimeters
    float radiusCircle = 4.8;
    float pi = 3.14;
    float areaCircle;

    // Formula for area,  (pi * (r^2))
    areaCircle = pi * (radiusCircle * radiusCircle);
    printf("The area of the circle is %.2f\n", areaCircle); // Rounded 2 decimal places

    return 0;
}