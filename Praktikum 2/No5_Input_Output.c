#include <stdio.h>

// Fungsi untuk mengecek jenis segitiga
void CekSegitiga(int sisi1, int sisi2, int sisi3) {
    // Memeriksa apakah ada sisi yang nol atau negatif
    if (sisi1 <= 0 || sisi2 <= 0 || sisi3 <= 0) {
        printf("Terdapat nilai yang bukan sisi segitiga\n");
        return;
    }

    // Memeriksa jenis segitiga
    if (sisi1 == sisi2 && sisi2 == sisi3) {
        printf("Segitiga Sama Sisi\n");
    } else if (sisi1 == sisi2 || sisi1 == sisi3 || sisi2 == sisi3) {
        printf("Segitiga Sama Kaki\n");
    } else {
        printf("Segitiga Sembarang\n");
    }
}

int main() {
    // Variabel untuk menyimpan panjang sisi segitiga
    int sisi1, sisi2, sisi3;

    // Meminta pengguna memasukkan panjang sisi
    printf("Masukkan panjang sisi 1: ");
    scanf("%d", &sisi1);

    printf("Masukkan panjang sisi 2: ");
    scanf("%d", &sisi2);

    printf("Masukkan panjang sisi 3: ");
    scanf("%d", &sisi3);

    // Memanggil fungsi CekSegitiga
    CekSegitiga(sisi1, sisi2, sisi3);

    return 0;
}