//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include <stdio.h>

int main() {
    int num1 = -5;
    int num2 = 0;
    int num3 = 10;

    // Input 1
    if (num1 >= 0) {
        if (num1 == 0)
            printf("Zero\n");
        else
            printf("Positive\n");
    }
    else {
        printf("Negative\n");
    }

    // Input 2
    if (num2 >= 0) {
        if (num2 == 0)
            printf("Zero\n");
        else
            printf("Positive\n");
    }
    else {
        printf("Negative\n");
    }

    // Input 3
    if (num3 >= 0) {
        if (num3 == 0)
            printf("Zero\n");
        else
            printf("Positive\n");
    }
    else {
        printf("Negative\n");
    }

    return 0;
}