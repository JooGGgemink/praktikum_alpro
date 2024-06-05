#include <stdio.h>
#include <stdbool.h>

// Binary search with boolean
bool binarySearchBoolean(int arr[], int n, int x, int* pos) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            *pos = mid;
            return true; // Element found
        }
        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false; // Element not found
}

int main() {
    int T2[] = {1,4,6,7,10,12,18,21,29,30,41,44,47};
    int N2 = 13;

    int x1 = 41;
    int x2 = 8;
    int pos;

    if (binarySearchBoolean(T2, N2, x1, &pos)) {
        printf("Element %d found at index %d\n", x1, pos);
    } else {
        printf("Element %d not found\n", x1);
    }

    if (binarySearchBoolean(T2, N2, x2, &pos)) {
        printf("Element %d found at index %d\n", x2, pos);
    } else {
        printf("Element %d not found\n", x2);
    }

    return 0;
}