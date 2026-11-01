

#include <stdio.h>

int main() {
    signed char c = 120; //A signed char holds -128 to 127. 
    int count = 0;

    while (c > 0) {
        c = c + 5;
        count++;
    }
    //Pass 1: c = 125, count = 1. 
    //Pass 2: 125 + 5 = 130 does not fit; stored in 8 bits it wraps to 130 - 256 = -126, and count = 2. 
    //Now c > 0 is false, so the loop ends. 

    printf ("%d %d\n", count, c); //Output: 2 -126.

    return 0;
}