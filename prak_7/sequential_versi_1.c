#include <stdio.h>

int sequentialSearch1(int arr[], int size, int x) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            return i;  // Return the index where the element is found
        }
    }
    return -1;  // Element not found
}

int main() {
    int T[] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29, 71, 65, 10, 18, 87, 5, 90, 35, 7, 11};
    int size = sizeof(T) / sizeof(T[0]);

    int x1 = 15;
    int result1 = sequentialSearch1(T, size, x1);
    if (result1 != -1) {
        printf("Element %d found at index %d\n", x1, result1);
    } else {
        printf("Element %d not found\n", x1);
    }

    int x2 = 70;
    int result2 = sequentialSearch1(T, size, x2);
    if (result2 != -1) {
        printf("Element %d found at index %d\n", x2, result2);
    } else {
        printf("Element %d not found\n", x2);
    }

    return 0;
}