//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>

int main() {
    int num1 = 3;
    int num2 = 4;
    int sum = num1 + num2;
    printf("sum = %d\n", sum);

    num1 = -1;
    num2 = 20;
    sum = num1 + num2;
    printf("sum = %d\n", sum);

    return 0;
}