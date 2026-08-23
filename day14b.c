//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>

int main() {

    int n, product;

    // Input 1
    n = 4;
    product = 1;

    for (int i = 2; i <= n; i = i + 2) {
        product = product * i;
    }

    printf("Input 1: %d\n", n);
    printf("Output 1: %d (2 * 4)\n\n", product);


    // Input 2
    n = 6;
    product = 1;

    for (int i = 2; i <= n; i = i + 2) {
        product = product * i;
    }

    printf("Input 2: %d\n", n);
    printf("Output 2: %d (2 * 4 * 6)\n", product);

    return 0;
}