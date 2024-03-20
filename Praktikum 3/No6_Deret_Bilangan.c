#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int N;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    printf("Bilangan sempurna sampai dengan %d adalah: ", N);
    for (int i = 2; i <= N; ++i) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}