#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    printf("Bilangan prima sampai dengan %d adalah: ", N);
    for (int i = 2; i <= N; ++i) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}