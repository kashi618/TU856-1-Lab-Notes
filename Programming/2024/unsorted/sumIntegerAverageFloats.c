/*
Project Description:   asd

Author:  Neil Jiang C24510496

Date:  October 1st 2024
*/


#include<stdio.h>

int main (void) {
    int loop = 5;
    int integers = 0;
    int sumIntegers = 0;

    while (loop != 0) {
        loop -= 1;
        integers++;
        sumIntegers += integers;
    } 
    printf("The sum of the integers between 1-5 is %d\n", sumIntegers);



    loop = 10;
    float floatingPoints = 0;
    float sumFloatingPoints = 1;
    float avgFloatingPoints = 0;



    while (loop != 0) {
        loop -= 1;
        floatingPoints += 0.1;
        sumFloatingPoints += floatingPoints;
    }
    avgFloatingPoints = sumFloatingPoints / 10;
    printf("%d\n",sumFloatingPoints);
    printf("%d",avgFloatingPoints);
}