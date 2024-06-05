#include <stdio.h>

// Binary search without boolean
int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return mid; // Element found, return index
        }
        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Element not found
}

int main() {
    int T2[] = {1,4,6,7,10,12,18,21,29,30,41,44,47};
    int N2 = 13;

    int x1 = 41;
    int x2 = 8;

    int result1 = binarySearch(T2, N2, x1);
    int result2 = binarySearch(T2, N2, x2);

    if (result1 != -1) {
        printf("Element %d found at index %d\n", x1, result1);
    } else {
        printf("Element %d not found\n", x1);
    }

    if (result2 != -1) {
        printf("Element %d found at index %d\n", x2, result2);
    } else {
        printf("Element %d not found\n", x2);
    }

    return 0;
}