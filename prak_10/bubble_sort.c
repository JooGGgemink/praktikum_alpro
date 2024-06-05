#include <stdio.h>

// Fungsi untuk mengurutkan array menggunakan Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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

    bubbleSort(T, N);

    printf("Sorted array using Bubble Sort: \n");
    printArray(T, N);

    return 0;
}