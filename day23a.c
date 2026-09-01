//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

#include <stdio.h>

int main() {
    int terms[] = {3, 5};
    int i, j;
    float sum, numerator, denominator;

    for (i = 0; i < 2; i++) {
        sum = 0;

        for (j = 1; j <= terms[i]; j++) {
            numerator = 2 * j;
            denominator = 4 * j - 1;

            sum = sum + numerator / denominator;
        }

        printf("Approximate sum: %.2f\n", sum);
    }

    return 0;
}