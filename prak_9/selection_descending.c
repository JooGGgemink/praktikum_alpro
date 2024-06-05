#include <stdio.h>

// Fungsi untuk mengurutkan array menggunakan Selection Sort secara descending
void selectionSortDescending(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int max_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        int temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }
}

// Fungsi untuk mencetak array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int T[] = {7, 1, 6, 5, 3, 2, 6}; // Ganti a dan b dengan digit terakhir dan digit kedua terakhir NIM
    int N = 7;

    printf("Original array: \n");
    printArray(T, N);

    selectionSortDescending(T, N);

    printf("Sorted array using Selection Sort (descending): \n");
    printArray(T, N);

    return 0;
}