#include <stdio.h>

int main() {
    int n = 5;
    while (n-- > 2)
        printf("%d", n);
    printf(" %d", n);

    //n-- compares the old value with 2 and then decrements, so the body sees the decremented value.
    //5 > 2: n = 4, print 4. 
    //4 > 2: n = 3, print 3. 
    //3 > 2: n = 2, print 2.
    //2 > 2 is false, but n is still decremented, to 1.
    //The last printf prints 1. 
    //Output: 432 1.
 
    return 0;
}

/*
Options:--------------------

A) 543 2
B) 432 2
C) 4321 0
D) 432 1

*/