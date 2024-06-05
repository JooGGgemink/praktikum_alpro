#include <stdio.h>

// Sequential search with sentinel
int sequentialSearchSentinel(int arr[], int n, int x) {
    int i = 0;
    arr[n] = x; // Adding the sentinel
    while (arr[i] != x) {
        i++;
    }
    if (i < n) {
        return i; // Element found, return index
    } else {
        return -1; // Element not found
    }
}

int main() {
    int T1[] = {19,1,28,5,20,15,52,13,16,29};
    int N1 = 10;

    int x1 = 52;
    int x2 = 10;

    int result1 = sequentialSearchSentinel(T1, N1, x1);
    int result2 = sequentialSearchSentinel(T1, N1, x2);

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