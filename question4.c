//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>

int main() {
    int radius=7;
    float area=3.14*7*7;
    float circumference=2*3.14*7;
    printf("Area=%f, Circumference=%f", area, circumference);
    
    radius=3;
    area=3.14*3*3;
    circumference=2*3.14*3;
    printf("\nArea=%f, Circumference=%f", area, circumference);
    
    return 0;
}