#include <stdio.h>
#define SQ(x) x * x

int main() {

    printf ("%d %d\n", SQ(2 + 3), 64 / SQ(4)); //Output: 11 64.
    
    //A macro is pure text substitution, with no brackets added.
    //SQ(2 + 3) becomes 2 + 3 * 2 + 3 = 2 + 6 + 3 = 11. 
    //64 / SQ(4) becomes 64 / 4 * 4; 
    // / and * have equal precedence and group left to right, so (64 / 4) * 4 = 64. 

    return 0;
}

/*
Output:-------------

A) 25 4
B) 11 4
C) 11 64
D) 25 64

*/