#include <stdio.h>

void bilInteger(int i) {
    if (i > 0) {
        printf("%d adalah bilangan bulat positif.\n", i);
    } else if (i == 0) {
        printf("%d adalah nol.\n", i);
    } else {
        printf("%d adalah bilangan bulat negatif.\n", i);
    }
}

int main() {
    int input;
    printf("Masukkan bilangan integer: ");
    scanf("%d", &input);
    bilInteger(input);
    return 0;
}
