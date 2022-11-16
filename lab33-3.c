/** lab33-3.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Lab 33
* ===========================================================  */

#include "lab33functs.h"

int main() {

    // Write a function bit_parity(), which determines if the number of true
    // bits in a variable is even or odd. The function accepts 1 integer parameter,
    // the variable whose parity is being checked. The function should return
    // an int value. If the number of true bits is even, return 0, if the number
    // of true bits is odd, return 1.
    //
    // Create some integer variables and use the print_bits() function to test
    // your bit_parity() function.
    printf("%d\n", bit_parity(2));

    // Extra: can you think of a way to tell if an integer is even or odd, using
    // a bit operation rather than using the mod operator?

    return 0;
}
