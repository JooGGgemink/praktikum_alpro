#include <stdio.h>

// Fungsi untuk mengurutkan array menggunakan Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    int T[] = {7, 1, 6, 5, 3, 2, 6}; // Contoh array
    int N = 7;

    printf("Original array: \n");
    printArray(T, N);

    insertionSort(T, N);

    printf("Sorted array using Insertion Sort: \n");
    printArray(T, N);

    return 0;
}