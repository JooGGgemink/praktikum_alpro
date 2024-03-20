// Nama:Johan Miracle Simanjuntak
// NIM:24060123120026
// Kelas:A
// Nama File: luasKellLayang
// No.5

#include <stdio.h>

int main() {
    // Deklarasi variabel
    float s1, s2, d1, d2, x, y;

    // Membaca input dari pengguna
    printf("Masukkan nilai sisi satu (s1) dalam meter: ");
    scanf("%f", &s1);
    
    printf("Masukkan nilai sisi dua (s2) dalam meter: ");
    scanf("%f", &s2);

    printf("Masukkan nilai diagonal satu (d1) dalam meter: ");
    scanf("%f", &d1);

    printf("Masukkan nilai diagonal dua (d2) dalam meter: ");
    scanf("%f", &d2);

    // Menghitung luas dan keliling layang-layang
    x = 0.5 * d1 * d2; // x = luas
    y = 2 * (s1 + s2); // y = keliling

    // Menampilkan hasil
    printf("\nLuas layang-layang: %.2f meter persegi\n", x);
    printf("Keliling layang-layang: %.2f meter\n", y);

    return 0;
}