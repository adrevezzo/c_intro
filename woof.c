#include <stdio.h>
#include <cs50.h>

void woof(int woofs);

void main(void) {

// without a function
    // int i = 0;

    // while (i < 10) {
    //     printf("Meow\n");
    //     i++;
    // }

    // for (int j = 0; j < 10; j++) {
    //     printf("Meow, for loop\n");
    // }

    woof(15);
}

void woof(int woofs) {
    for (int i=0; i<woofs; i++) {
        printf("Woofing\n");
    }
}