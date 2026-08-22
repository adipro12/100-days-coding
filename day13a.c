//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Input 1
    a = 4;
    b = 2;
    op = '+';

    switch(op) {
        case '+':
            printf("%d\n", a + b);
            break;

        case '-':
            printf("%d\n", a - b);
            break;

        case '*':
            printf("%d\n", a * b);
            break;

        case '/':
            printf("%d\n", a / b);
            break;

        case '%':
            printf("%d\n", a % b);
            break;

        default:
            printf("Invalid operator\n");
    }


    // Input 2
    a = 10;
    b = 3;
    op = '%';

    switch(op) {
        case '+':
            printf("%d\n", a + b);
            break;

        case '-':
            printf("%d\n", a - b);
            break;

        case '*':
            printf("%d\n", a * b);
            break;

        case '/':
            printf("%d\n", a / b);
            break;

        case '%':
            printf("%d\n", a % b);
            break;

        default:
            printf("Invalid operator\n");
    }


    // Input 3
    a = 15;
    b = 5;
    op = '/';

    switch(op) {
        case '+':
            printf("%d\n", a + b);
            break;

        case '-':
            printf("%d\n", a - b);
            break;

        case '*':
            printf("%d\n", a * b);
            break;

        case '/':
            printf("%d\n", a / b);
            break;

        case '%':
            printf("%d\n", a % b);
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}