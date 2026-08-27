//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>

int main() {
    int a, b, hcf;

    // Input 1
    a = 12;
    b = 18;

    hcf = 1;

    for(int i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("%d\n", hcf);

    // Input 2
    a = 7;
    b = 9;

    hcf = 1;

    for(int i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("%d\n", hcf);

    return 0;
}