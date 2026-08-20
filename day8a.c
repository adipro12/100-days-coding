//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

#include <stdio.h>

int main() {
    char ch1 = 'A';
    char ch2 = 'a';
    char ch3 = '3';
    char ch4 = '#';

    // Input 1
    if (ch1 >= 'A' && ch1 <= 'Z')
        printf("Uppercase alphabet\n");
    else if (ch1 >= 'a' && ch1 <= 'z')
        printf("Lowercase alphabet\n");
    else if (ch1 >= '0' && ch1 <= '9')
        printf("Digit\n");
    else
        printf("Special character\n");

    // Input 2
    if (ch2 >= 'A' && ch2 <= 'Z')
        printf("Uppercase alphabet\n");
    else if (ch2 >= 'a' && ch2 <= 'z')
        printf("Lowercase alphabet\n");
    else if (ch2 >= '0' && ch2 <= '9')
        printf("Digit\n");
    else
        printf("Special character\n");

    // Input 3
    if (ch3 >= 'A' && ch3 <= 'Z')
        printf("Uppercase alphabet\n");
    else if (ch3 >= 'a' && ch3 <= 'z')
        printf("Lowercase alphabet\n");
    else if (ch3 >= '0' && ch3 <= '9')
        printf("Digit\n");
    else
        printf("Special character\n");

    // Input 4
    if (ch4 >= 'A' && ch4 <= 'Z')
        printf("Uppercase alphabet\n");
    else if (ch4 >= 'a' && ch4 <= 'z')
        printf("Lowercase alphabet\n");
    else if (ch4 >= '0' && ch4 <= '9')
        printf("Digit\n");
    else
        printf("Special character\n");

    return 0;
}