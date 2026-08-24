//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>

int main() {
    int n1 = 1234;
    int n2 = 100;
    int rev, rem, n;

    // Reverse 1234
    n = n1;
    rev = 0;

    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    printf("%d\n", rev);

    // Reverse 100
    n = n2;
    rev = 0;

    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    printf("%d\n", rev);

    return 0;
}