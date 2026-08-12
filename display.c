//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main() {
    int num1=10;
    int num2=2;
    int sum=num1+num2;
    int diff=num1-num2;
    int product=num1*num2;
    int quatient=num1/num2;
    printf("sum=%d, diff=%d, product=%d, quotient=%d", sum, diff, product, quatient);
   
    num1=7;
    num2=3;
    sum=num1+num2;
    diff=num1-num2;
    product=num1*num2;
    quatient=num1/num2;
    printf("\nsum=%d, diff=%d, product=%d, quotient=%d", sum, diff, product, quatient);

    return 0;
}