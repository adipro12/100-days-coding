//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>

int main() {
    int n, original, remainder, sum;

    // Input 1
    n = 153;
    original = n;
    sum = 0;

    while (n > 0) {
        remainder = n % 10;
        sum = sum + remainder * remainder * remainder;
        n = n / 10;
    }

    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");


    // Input 2
    n = 123;
    original = n;
    sum = 0;

    while (n > 0) {
        remainder = n % 10;
        sum = sum + remainder * remainder * remainder;
        n = n / 10;
    }

    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}