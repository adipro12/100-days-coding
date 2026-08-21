//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2;

    // Input 1
    a = 1;
    b = -3;
    c = 2;

    d = b * b - 4 * a * c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: %.0f, %.0f\n", root1, root2);
    }
    else if (d == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.0f\n", root1);
    }
    else {
        printf("Roots are complex\n");
    }


    // Input 2
    a = 1;
    b = -2;
    c = 1;

    d = b * b - 4 * a * c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: %.0f, %.0f\n", root1, root2);
    }
    else if (d == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.0f\n", root1);
    }
    else {
        printf("Roots are complex\n");
    }


    // Input 3
    a = 1;
    b = 2;
    c = 5;

    d = b * b - 4 * a * c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: %.0f, %.0f\n", root1, root2);
    }
    else if (d == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.0f\n", root1);
    }
    else {
        printf("Roots are complex\n");
    }

    return 0;
}