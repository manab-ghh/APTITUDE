#include <stdio.h>

int main() {
    int a, b;
    a = 5, 10;
    b = (5, 10);

    printf ("%d %d\n", a, b); //Output: 5 10.

    //The comma operator has the lowest precedence of all, lower even than =. 
    //So a = 5, 10; is read as (a = 5), 10; and a gets 5. 
    //In b = (5, 10); the brackets force the comma first: it evaluates 5, discards it, and yields the right operand, 10. 

    return 0;
}

/*
Output:-------------------

A) 10 10
B) 5 5
C) 5 10
D) 10 5

*/