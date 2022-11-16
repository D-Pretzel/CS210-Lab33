/** lab33functs.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Lab 33
* ===========================================================  */

#include "lab33functs.h"
#include <string.h>

/** ----------------------------------------------------------
 * @fn void print_bits(void* ptr, int num_bytes)
 * @brief prints char representation of any variables individual bits
 * @param ptr is a pointer to the variable being printed
 * @param num_bytes is the number of bytes in the variable
 * @return void, prints each bit as a character, ends with a new line
 * ----------------------------------------------------------
 */
void print_bits(void* ptr, int num_bytes) {
    // Cast the pointer as an unsigned byte
    uint8_t* byte = ptr;

    // For each byte, (bytes are little endian ordered)
    for (int i = num_bytes - 1; i >= 0; --i) {

        // For each bit, (inside the byte, bits are big endian ordered)
        for (int j = 7; j >= 0; --j) {

            // Print a character 1 or 0, given the bit value
            printf("%c", (byte[i] >> j) & 1 ? '1' : '0');
        }

        // Separate bytes
        printf(" ");
    }

    // End with a new line
    printf("\n");
}

int check_bit(int value, int bit) {

    // Shift the value to the right by the bit number
    value = value >> bit;

    // Mask the value with 1
    value = value & 1;

    // Return the value
    return value;
}

int count_bits(int value) {

    // Create a counter
    int counter = 0;

    // For each bit in the value
    for (int i = 0; i < 32; ++i) {

        // If the bit is 1
        if (check_bit(value, i) == 1) {

            // Increment the counter
            counter++;
        }
    }

    // Return the counter
    return counter;
}

int bit_parity(int value) {

    // If the number of bits is even
    if (count_bits(value) % 2 == 0) {

        // Return 0
        return 0;
    }

    // Otherwise
    else {

        // Return 1
        return 1;
    }
}

int flip_bit(int value, int bit) {

    // Create a mask
    int mask = 1;

    // Shift the mask to the left by the bit number
    mask = mask << bit;

    // XOR the value with the mask
    value = value ^ mask;

    // Return the value
    return value;
}

unsigned int simple_checksum(char* string) {

    // Use the XOR checksum algorithm
    unsigned int checksum = 0;

    // For each character in the string
    for (int i = 0; i < strlen(string); ++i) {

        // XOR the checksum with the character
        checksum = checksum ^ string[i];
    }

    // Return the checksum
    return checksum;
}
