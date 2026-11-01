#include <stdio.h>

int main() {
    int x = 5;
    printf("%d %d", ~x, x << 2 >> 3); //Output: -6 2.
    //~ flips every bit. In two's complement, ~x = -(x + 1), so ~5 = -6. 
    //<< and >> have the same precedence and group left to right, so x << 2 >> 3 is (5 << 2) >> 3 = 20 >> 3 = 2.
    return 0;
}

/*
Output:--------------

A) -5 2
B) -6 5
C) 4294967290 2
D) -6 2

*/