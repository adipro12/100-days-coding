//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
    int n, original, reverse = 0, remainder;

    n = 121;   // Input 1

    original = n;

    while (n > 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if (original == reverse) {
        printf("Palindrome\n");
    }
    else {
        printf("Not palindrome\n");
    }

    // Input 2
    n = 123;
    original = n;
    reverse = 0;

    while (n > 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if (original == reverse)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}