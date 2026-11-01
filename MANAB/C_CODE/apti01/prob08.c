#include <stdio.h>

void f(int n) {
    static int s = 0;
    if (n <= 0) return;
    s = s + n;
    f(n - 1);

    printf ("[%d]", s);
}

//There is only one s, shared by every call
//Going down, f(3), f(2) and f(1) add 3, 2 and 1, so s = 6 before f(0) returns. 
//Each call prints only after its recursive call returns, and by then s is already 6. 
//So all three calls print 6.
//Output: [6][6][6].

int main() {
    f(3);
    return 0;
}

/*
Output:-----------------

A) [6][5][3]
B) [3][5][6]
C) [6]
D) [6][6][6]

*/