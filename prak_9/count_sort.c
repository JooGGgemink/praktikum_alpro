#include <stdio.h>
#include <string.h>

// Fungsi untuk mengurutkan array menggunakan Count Sort
void countSort(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int count[max + 1];
    memset(count, 0, sizeof(count));

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
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
    int T[] = {7, 1, 6, 5, 3, 2, 6}; // Ganti a dan b dengan digit terakhir dan digit kedua terakhir NIM
    int N = 7;

    printf("Original array: \n");
    printArray(T, N);

    countSort(T, N);

    printf("Sorted array using Count Sort: \n");
    printArray(T, N);

    return 0;
}