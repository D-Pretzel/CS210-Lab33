/** lab33-5.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Lab 33
* ===========================================================  */

#include "lab33functs.h"
#include <string.h>

int main() {

    // Write a function simple_checksum(), which calculates a very simple data
    // integrity check. The function accepts a character array as input and returns
    // the exclusive or combination of each character in the array. As in starting
    // at 0, keep a running combination of each character in the array using the
    // bitwise exclusive or (xor) operator. Return the final checksum as a uint8_t type.
    //
    // Create some character arrays and use the print_bits() function to test
    // your simple_checksum() function.
    char test[] = "Hello";
    printf("%d\n", simple_checksum(test));

    return 0;
}
