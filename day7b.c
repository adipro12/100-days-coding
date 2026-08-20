//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>

int main() {
    char ch1 = 'a';
    char ch2 = 'b';

    // Input 1
    if (ch1 == 'a' || ch1 == 'e' || ch1 == 'i' || ch1 == 'o' || ch1 == 'u')
        printf("Vowel\n");
    else
        printf("Consonant\n");

    // Input 2
    if (ch2 == 'a' || ch2 == 'e' || ch2 == 'i' || ch2 == 'o' || ch2 == 'u')
        printf("Vowel\n");
    else
        printf("Consonant\n");

    return 0;
}