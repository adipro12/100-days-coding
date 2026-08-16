//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    celsius=0;
    fahrenheit=(celsius*9/5)+32;
    printf("Fahrenheit=%f", fahrenheit);

    celsius=100;
    fahrenheit=(celsius*9/5)+32;
    printf("\nFahrenheit=%f", fahrenheit);

    return 0;
}