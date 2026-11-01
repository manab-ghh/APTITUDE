#include <stdio.h>

int main() {
    int a[] = {1, 2, 3};

    int *p = a;

    int x = *p++; //*p++ is *(p++): x = a[0] = 1, then p moves to a[1].
    int y = (*p)++; //(*p)++ increments the value at p after using it: y = 2, and a[1] becomes 3. 
    int z = *++p; // *++p first moves p to a[2], then reads it: z = 3.

    printf("%d %d %d %d\n", x, y, z, a[1]); //Output: 1 2 3 3.

    return 0;
}

/*
Options:--------

A) 1 2 3 3
B) 2 2 3 3
C) 1 3 3 3
D) 1 2 3 2

*/