//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>

int main() {
     int terms[] = {3, 5};
    int i, j;
    float sum, numerator, denominator;

    for (int i = 0; i < 2; i++) {
        sum = 0;
        for (int j = 1; j <= terms[i]; j++) {
            numerator = 2 * j - 1;
            denominator = 2 * j;
            sum += numerator / denominator;
        }

        printf("Approximate sum: %.1f\n", sum);
    }

    return 0;
}