#include <stdio.h>

int main() {
    int a = -1;
    unsigned int b = 1;

    if (a < b) 
        printf ("Less\n");
    else 
        printf ("Greater\n");

    
    //When an int is compared with an unsigned int, the int is converted to unsigned first. 
    //-1 becomes the largest unsigned value, 4294967295 with a 32-bit int. 
    //4294967295 < 1 is false, so the else branch runs and prints Greater.

    return 0;
}

/*
Options:----------

A) It prints Less
B) Compilation error
C) It prints Greater
D) Runtime error

*/