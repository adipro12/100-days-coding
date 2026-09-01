//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include <stdio.h>

int main() {
    int numbers[] = {6, 10};
    int i;

    for (i = 0; i < 2; i++) {
        int num = numbers[i];
        int sum = 0, j;

        // Find all divisors and calculate their sum
        for (j = 1; j < num; j++) {
            if (num % j == 0) {
                sum += j;
            }
        }

        // Check if the number is perfect
        if (sum == num) {
            printf("Perfect number\n");
        } else {
            printf("Not perfect number\n");
        }
    }

    return 0;
}
