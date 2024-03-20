#include <stdio.h>

int main() {
    int N, i, sum = 0;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    for (i = 1; i < N; ++i) {
        if (N % i == 0) {
            sum += i;
        }
    }

    if (sum == N) {
        printf("%d adalah bilangan sempurna\n", N);
    } else {
        printf("%d bukan bilangan sempurna\n", N);
    }

    return 0;
}