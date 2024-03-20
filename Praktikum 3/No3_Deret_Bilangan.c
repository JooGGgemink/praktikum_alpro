#include <stdio.h>

int main() {
    int N, i, count = 0;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; ++i) {
        if (N % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("%d adalah bilangan prima\n", N);
    } else {
        printf("%d bukan bilangan prima\n", N);
    }

    return 0;
}