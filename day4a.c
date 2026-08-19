//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

#include <stdio.h>

#include <stdio.h>

int main() {
    int a = 10, b = 20;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    int c=7, d=14;

    c=c+d;
    d=c-d;
    c=c-d;

    printf("after swapping:\n");
    printf("c=%d\n", c);
    printf("d=%d\n", d);

    return 0;
}