#include <stdio.h>

int main() {
    int a[3][3] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    //The values fill the rows in order: row 0 = 2 4 6, row 1 = 8 10 12, row 2 = 14 16 18.

    printf ("%d %d %d\n", a[1][2], *(*(a + 2) + 1), **a + 4); //Output: 12 16 6.

    //a[1][2] = 12. 
    //*(a + 2) is row 2, and *(*(a + 2) + 1) is element 1 of that row, a[2][1] = 16. **a is a[0][0] = 2,
    //and **a + 4 = 6.

    return 0;
}

/*
Options:------------

A) 16 12 6
B) 12 16 10
C) 12 14 6
D) 12 16 6

*/