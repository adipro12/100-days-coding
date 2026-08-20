//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/

#include <stdio.h>

int main() {
    int year1 = 2020;
    int year2 = 1900;
    int year3 = 2000;

    // Input 1
    if ((year1 % 400 == 0) || (year1 % 4 == 0 && year1 % 100 != 0))
        printf("Leap year\n");
    else
        printf("Not a leap year\n");

    // Input 2
    if ((year2 % 400 == 0) || (year2 % 4 == 0 && year2 % 100 != 0))
        printf("Leap year\n");
    else
        printf("Not a leap year\n");

    // Input 3
    if ((year3 % 400 == 0) || (year3 % 4 == 0 && year3 % 100 != 0))
        printf("Leap year\n");
    else
        printf("Not a leap year\n");

    return 0;
}