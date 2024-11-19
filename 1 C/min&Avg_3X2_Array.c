#include <stdio.h>

#define X 2
#define Y 3

int main() {
    int i;
    int j;

    int min;
    int avg;
    int sizeOfArray = X*Y;

    int arr[Y][X];
    
    // Reads and stores integers in array
    for (i = 0; i<Y ; i++) { // (Y Co-ordinates
        for (j = 0; j<X; j++) { // (X Co-ordinates)
            printf("Enter a value for  row,%d col,%d: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    } printf("\n");


    // Prints out array
    for (i = 0; i<X ; i++) {// Column (X Co-ordinates
        for (j = 0; j<Y; j++) { // Row (Y Co-ordinates)
            printf("%d,",arr[i][j]);
        }
    } printf("\n");


    // Finds smallest number in the array
    for (i = 0; i<X ; i++) { // Column (X Co-ordinates
        for (j = 0; j<Y; j++) { // Row (Y Co-ordinates)
            min = arr[0][0];
            if (arr[i][j] < min) {
                 min = arr[i][j];
            }
        }
    } printf("\nSmallest number in array is %d\n",min);


    // Finds average of all values in the array
    for (i = 0; i<X ; i++) { // Column (X Co-ordinates
        for (j = 0; j<Y; j++) { // Row (Y Co-ordinates)
            avg += arr[i][j];
        }
    } 
    avg /= sizeOfArray;
    printf("\nThe average of all the values in array is %d\n",avg); 

    // Ends program
    return 0;
}