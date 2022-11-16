/** lab33-4.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Lab 33
* ===========================================================  */

#include "lab33functs.h"

int main() {

    // Write a function flip_bit(), which negates a specific bit in a variable.
    // The function accepts 2 integer parameters, the first is the variable who
    // bit will be changed, the second is the number of the bit to be flipped.
    // Bits are numbered from 0 to 31, where bit 0 is the least significant bit.
    // The function should return the modified variable.

    // Create some integer variables and use the print_bits() function to test
    // your flip_bit() function.
    printf("%d\n", flip_bit(0, 0));

    return 0;
}
