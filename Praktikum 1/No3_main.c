// Nama:Johan Miracle Simanjuntak
// NIM:24060123120026
// Kelas:A
// Nama File: gayaSentr
// No.3

#include <stdio.h>

int main() {
    // Deklarasi variabel
    double m, v, r, F;

    // Input nilai massa, kecepatan, dan jari-jari
    printf("Masukkan nilai massa (kg): ");
    scanf("%lf", &m);

    printf("Masukkan nilai kecepatan (m/s): ");
    scanf("%lf", &v);

    printf("Masukkan nilai jari-jari (m): ");
    scanf("%lf", &r);

    // Menghitung gaya sentripetal
    F = m * (v * v) / r;

    // Menampilkan hasil
    printf("Gaya sentripetal adalah: %.2lf Newton\n", F);

    return 0;
}