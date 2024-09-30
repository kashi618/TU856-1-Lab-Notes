#include <stdio.h>

int main () {

    int counter;
    int output;

// Post Increment
    counter = 0;
    output = counter++;

    printf("Post Increment:\n");
    printf("Counter is %d\n", counter);
    printf("Output is %d\n\n", output);

// Pre Increment
    counter = 0;
    output = ++counter;

    printf("Pre Increment:\n");
    printf("Counter is %d\n", counter);
    printf("Output is %d\n", output);

    return 0;

}