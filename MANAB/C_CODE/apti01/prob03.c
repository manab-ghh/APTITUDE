#include <stdio.h>

int main() {
    int a = 0, b = 5, c = 10;

    int r = (a && b++) || c++;

    printf ("%d %d %d\n", b, c, r); //Output: 5 11 1.

    //&& stops as soon as its left side is false.
    //a is 0, so a && b++ is 0 and b++ never runs: b stays 5.
    //The || then needs its right side, so c++ runs: it yields 10 (true) and c becomes 11. 
    // A logical expression is always 0 or 1, so r = 1. 

    return 0;
}

/*
Options:----------

A) 5 11 1
B) 6 11 1
C) 5 10 1
D) 5 11 10

*/