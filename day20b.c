//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main() {
    int binary, temp, digit;
    int complement = 0, place = 1;

    // Input 1
    binary = 1010;
    temp = binary;

    while (temp > 0) {
        digit = temp % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        complement = complement + digit * place;
        place = place * 10;
        temp = temp / 10;
    }

    printf("1's complement of 1010 = %04d\n", complement);


    // Input 2
    binary = 1111;
    temp = binary;
    complement = 0;
    place = 1;

    while (temp > 0) {
        digit = temp % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        complement = complement + digit * place;
        place = place * 10;
        temp = temp / 10;
    }

    printf("1's complement of 1111 = %04d\n", complement);

    return 0;
}