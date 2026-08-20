//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>

int main() {
    // Input 1
    int seconds1 = 3661;

    // Input 2
    int seconds2 = 7322;

    int h1, m1, s1;
    int h2, m2, s2;

    // Input 1
    h1 = seconds1 / 3600;
    m1 = (seconds1 % 3600) / 60;
    s1 = seconds1 % 60;

    // Input 2
    h2 = seconds2 / 3600;
    m2 = (seconds2 % 3600) / 60;
    s2 = seconds2 % 60;

    printf("Input 1:\n");
    printf("%d:%d:%d\n\n", h1, m1, s1);

    printf("Input 2:\n");
    printf("%d:%d:%d\n", h2, m2, s2);

    return 0;
}