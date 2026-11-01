#include <stdio.h>

int main() {
    char *s = "COMPUTER";
    //printf ("%s", s); Output --> COMPUTER

    //Indexes start at 0: C0 O1 M2 P3 U4 T5 E6 R7.

    printf("%s %c\n", s + 3, *(s + 5) + 1); //Output: PUTER U.

    //s + 3 points to 'P', and %s prints from there to the end: PUTER. 
    //*(s + 5) is 'T', and 'T' + 1 is the next character code, 'U', printed by %c.

    return 0;
}

/*
Options:---------

A) PUTER U
B) MPUTER U
C) PUTER T
D) PUTER E

*/