//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main() {
    int n, i, element;

    scanf("%d", &n);

    int arr[n + 1];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    i = n - 1;

    // Elements ko right shift karna
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Correct position par element insert
    arr[i + 1] = element;

    // Updated array print
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}