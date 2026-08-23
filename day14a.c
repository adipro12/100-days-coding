//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include <stdio.h>

int main() {

    int n, sum;

    // Input 1
    n = 3;
    sum = 0;

    for (int i = 1; i <= n; i++) {
        sum = sum + (2 * i - 1);
    }

    printf("Input: %d\n", n);
    printf("Output: %d\n\n", sum);


    // Input 2
    n = 5;
    sum = 0;

    for (int i = 1; i <= n; i++) {
        sum = sum + (2 * i - 1);
    }

    printf("Input: %d\n", n);
    printf("Output: %d\n", sum);

    return 0;
}