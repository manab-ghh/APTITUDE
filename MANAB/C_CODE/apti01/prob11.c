#include <stdio.h>

int main() {
    int i, sum = 0;
    for (i = 0; i < 5; i++) {

        //Inside a switch, break leaves only the switch, 
        //while continue goes to the next iteration of the loop. 

        switch (i) {
            case 0:                    //i = 0: falls through 1 and 2, then +100: sum = 103. 
            case 1: sum += 1;          //i = 1: +1 +2 +100 = 206. 
            case 2: sum += 2; break;   //i = 2: +2 +100 = 308. 
            case 3: continue;          //i = 3: continue skips the +100: still 308. 
            default: sum += 10;        //i = 4: default +10, then +100 = 418.
        }
        
        

        sum += 100;

    }

    printf ("%d\n", sum);

    return 0;
}