#include <stdio.h>

int main() {
    int N, i, sum = 0;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; ++i) {
        sum += i;
    }

    printf("Jumlah deret bilangan adalah: %d\n", sum);

    return 0;
}