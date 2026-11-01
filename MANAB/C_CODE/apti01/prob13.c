#include <stdio.h>


int main() {

    int i;

    //The semicolon right after for (...) is an empty statement, and it is the whole loop body.
    //The loop only increments i, from 0 until the condition i < 5 fails at i = 5. 

    for (i = 0; i < 5; i++); 
    {
        printf ("%d\n", i);
    }
    
    //The braces that follow are an ordinary block, not the loop body, so printf runs once, after the loop, and prints 5.

    return 0;
}