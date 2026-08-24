//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include <stdio.h>

int main() {
    int n1=5;
    int n2=3;
    int i;
    int factorial;

    factorial=1;
    for(i = 1; i <= n1; i++) {
        factorial = factorial * i;
    }

    printf("%d\n",factorial);

    factorial=1;
    for(i=1;i<=n2;i++) {
        factorial=factorial*i;
    }

    printf("%d\n", factorial);

    return 0;
}