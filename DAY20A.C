//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main() {
    int num, digit, product = 1;

    // Input 1
    num = 12345;

    while (num > 0) {
        digit = num % 10;

        if (digit % 2 != 0) {
            product = product * digit;
        }

        num = num / 10;
    }

    printf("Product of odd digits for 12345 = %d (1*3*5)\n", product);


    // Input 2
    num = 2468;
    product = 1;

    while (num > 0) {
        digit = num % 10;

        if (digit % 2 != 0) {
            product = product * digit;
        }

        num = num / 10;
    }

    printf("Product of odd digits for 2468 = %d (no odd digits, assume 1)\n", product);

    return 0;
}