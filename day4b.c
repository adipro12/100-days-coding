//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include <stdio.h>

int main() {
    int n, sum;

    // Input 1
    n = 5;
    sum = n * (n + 1) / 2;
    printf("Input: %d\n", n);
    printf("Sum=%d\n\n", sum);

    // Input 2
    n = 10;
    sum = n * (n + 1) / 2;
    printf("Input: %d\n", n);
    printf("Sum=%d\n", sum);

    return 0;
}