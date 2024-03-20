#include <stdio.h>

int main() {
    int N, i;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    printf("Faktor bilangan %d adalah: ", N);
    for (i = 1; i <= N; ++i) {
        if (N % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}