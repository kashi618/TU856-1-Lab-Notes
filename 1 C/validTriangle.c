/*
In a triangle, the sum of any two sides must be greater
than the third side. Write a program to input three numbers
and determine if ythey form a valid triangle
*/

#include <stdio.h>

int validTrangle(int s1,int s2,int s3);

int main() {
    int side1;
    int side2;
    int side3;

    printf("Side1: ");   scanf(" %d",&side1);
    printf("Side2: ");   scanf(" %d",&side2);
    printf("Side3: ");   scanf(" %d",&side3);

    if ( validTrangle(side1,side2,side3) == 0) {printf("YESS THE TRIANGLE TRIANGLES");}
    
    else if (validTrangle(side1,side2,side3) == 1) {printf("NOOOO ITS NOT A TIRANGLE");}

}

// Returns 0 if true, 1 if false
int validTrangle(int s1,int s2,int s3) {
    if ( (s1+s2) > s3  && (s1+s3) > s2 && (s2+s3) > s1) 
        {return 0;}
    else 
        {return 1;}
}


