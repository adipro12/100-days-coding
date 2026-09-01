//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main() {
    int numbers[] = {1234, 1001};
    int i;

    for (i = 0; i < 2; i++) {
        int num = numbers[i];
        int temp = num, first, last, power = 1, middle;

        // Find last digit
        last = num % 10;

        // Find first digit and power
        while (temp >= 10) {
            temp = temp / 10;
            power = power * 10;
        }

        first = temp;

        // Find middle digits
        middle = (num % power) / 10;

        // Swap first and last digit
        num = last * power + middle * 10 + first;

        printf("Input: %d\n", numbers[i]);
        printf("Output: %d\n\n", num);
    }

    return 0;
}