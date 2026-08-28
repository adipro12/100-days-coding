//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>

int main() {
    int n1 = 123;
    int n2 = 999;
    int sum, digit;

    // Input 1
    sum = 0;
    while (n1 > 0) {
        digit = n1 % 10;
        sum = sum + digit;
        n1 = n1 / 10;
    }
    printf("%d\n", sum);

    // Input 2
    sum = 0;
    while (n2 > 0) {
        digit = n2 % 10;
        sum = sum + digit;
        n2 = n2 / 10;
    }
    printf("%d\n", sum);

    return 0;
}