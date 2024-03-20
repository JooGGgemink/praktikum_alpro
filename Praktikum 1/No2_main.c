// Nama:Johan Miracle Simanjuntak
// NIM:24060123120026
// Kelas:A
// Nama File: jarakPBola
// No.2

#include <stdio.h>

int main() {
    // Mendeklarasikan variabel
    double v0, t, g, X;

    // Membaca input dari pengguna
    printf("Masukkan kecepatan awal (v0) dalam m/s: ");
    scanf("%lf", &v0);

    printf("Masukkan waktu (t) dalam detik: ");
    scanf("%lf", &t);

    printf("Masukkan gravitasi (g) dalam m/s^2: ");
    scanf("%lf", &g);

    // Menghitung jarak menggunakan rumus y = v0 * t - 0.5 * (g * t^2)
    X = v0 * t - 0.5 * (g * t * t);

    // Menampilkan hasil
    printf("Jarak yang ditempuh: %.2f meter\n", X);

    return 0;
}