//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>

int main() {

    int a, b, c;

    // Input 1
    a = 3;
    b = 3;
    c = 3;

    if (a == b && b == c)
        printf("Equilateral\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles\n");
    else
        printf("Scalene\n");


    // Input 2
    a = 3;
    b = 3;
    c = 4;

    if (a == b && b == c)
        printf("Equilateral\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles\n");
    else
        printf("Scalene\n");


    // Input 3
    a = 2;
    b = 3;
    c = 4;

    if (a == b && b == c)
        printf("Equilateral\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles\n");
    else
        printf("Scalene\n");

    return 0;
}