#include <stdio.h>

int main() {
    char chars[] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};
    int i;

    // arrayName[i] = *(arrayName + i)


    // Display contents
    for (i=0; i<8; i++) {
        printf("%c", *(chars+i));
    } printf("\n");


    // Change blank elements with underscore
    for (i=0; i<sizeof(chars); i++) {
        if (*(chars+i) == ' ') {
            *(chars+i) = '_';
        } 
    }

    // Display new contents
    for (i=0; i<sizeof(chars); i++) {
        printf("%c", *(chars+i));
    } // End for()


    return 0;


}