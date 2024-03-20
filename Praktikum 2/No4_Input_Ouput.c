#include <stdio.h>

// Deklarasi fungsi
int hitungTahanan(int tahanan1, int tahanan2, int tahanan3);

int main() {
    // Deklarasi variabel untuk menyimpan masukan tahanan
    int tahanan1, tahanan2, tahanan3;

    // Meminta masukan tahanan dari pengguna
    printf("Masukkan nilai tahanan 1: ");
    scanf("%d", &tahanan1);

    printf("Masukkan nilai tahanan 2: ");
    scanf("%d", &tahanan2);

    printf("Masukkan nilai tahanan 3: ");
    scanf("%d", &tahanan3);

    // Memanggil fungsi hitungTahanan dan menampilkan hasil
    int totalTahanan = hitungTahanan(tahanan1, tahanan2, tahanan3);

    if (totalTahanan >= 0) {
        printf("Total tahanan: %d\n", totalTahanan);
    } else {
        printf("Tahanan tidak boleh negatif\n");
    }

    return 0;
}

// Implementasi fungsi hitungTahanan
int hitungTahanan(int tahanan1, int tahanan2, int tahanan3) {
    // Memeriksa apakah ada tahanan yang negatif
    if (tahanan1 < 0 || tahanan2 < 0 || tahanan3 < 0) {
        // Mengembalikan nilai negatif jika ada masukan yang negatif
        return -1;
    } else {
        // Menghitung total tahanan jika semua masukan non-negatif
        return tahanan1 + tahanan2 + tahanan3;
    }
}