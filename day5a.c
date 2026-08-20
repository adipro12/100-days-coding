//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/ 

#include <stdio.h>
#include <math.h>

int main() {
    // Input 1
    float p1 = 1000, r1 = 5, t1 = 2;

    // Input 2
    float p2 = 5000, r2 = 7, t2 = 3;

    float SI1, CI1, SI2, CI2;

    // For Input 1
    SI1 = (p1 * r1 * t1) / 100;
    CI1 = p1 * pow((1 + r1 / 100), t1) - p1;

    // For Input 2
    SI2 = (p2 * r2 * t2) / 100;
    CI2 = p2 * pow((1 + r2 / 100), t2) - p2;

    printf("Input 1:\n");
    printf("Simple Interest=%.0f\n", SI1);
    printf("Compound Interest=%.2f\n\n", CI1);

    printf("Input 2:\n");
    printf("Simple Interest=%.0f\n", SI2);
    printf("Compound Interest=%.2f\n", CI2);

    return 0;
}