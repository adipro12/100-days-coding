//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include <stdio.h>

int main() {

    // Input 1
    int a = 3, b = 7, c = 5;

    if (a >= b && a >= c)
        printf("Largest is %d\n", a);
    else if (b >= a && b >= c)
        printf("Largest is %d\n", b);
    else
        printf("Largest is %d\n", c);


    // Input 2
    a = -1;
    b = -5;
    c = 0;

    if (a >= b && a >= c)
        printf("Largest is %d\n", a);
    else if (b >= a && b >= c)
        printf("Largest is %d\n", b);
    else
        printf("Largest is %d\n", c);

    return 0;
}