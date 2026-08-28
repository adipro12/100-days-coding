//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

int main() {
    int a1 = 4, b1 = 5;
    int a2 = 7, b2 = 3;
    int lcm;

    // Input 1
    lcm = (a1 > b1) ? a1 : b1;

    while (lcm % a1 != 0 || lcm % b1 != 0) {
        lcm++;
    }

    printf("%d\n", lcm);

    // Input 2
    lcm = (a2 > b2) ? a2 : b2;

    while (lcm % a2 != 0 || lcm % b2 != 0) {
        lcm++;
    }

    printf("%d\n", lcm);

    return 0;
}