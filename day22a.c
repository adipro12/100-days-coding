//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main() {
    int numbers[] = {145, 123};
    int i, num, temp, digit, sum, fact, j;

    for (i = 0; i < 2; i++) {
        num = numbers[i];
        temp = num;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            fact = 1;

            for (j = 1; j <= digit; j++) {
                fact = fact * j;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        if (sum == num) {
            printf("Strong number\n");
        } else {
            printf("Not strong number\n");
        }
    }

    return 0;
}