// Nama:Johan Miracle Simanjuntak
// NIM:24060123120026
// Kelas:A
// Nama File: jarakGLBB
// No.1

#include <stdio.h>

int main() {
    // Deklarasi variabel
    double v0, t, a, S;

    // Input nilai v0, t, dan a dari pengguna
    printf("Masukkan kecepatan awal (v0) dalam meter per detik: ");
    scanf("%lf", &v0);

    printf("Masukkan waktu (t) dalam detik: ");
    scanf("%lf", &t);

    printf("Masukkan percepatan (a) dalam meter per detik kuadrat: ");
    scanf("%lf", &a);

    // Menghitung jarak (S)
    S = v0 * t + 0.5 * a * t * t;

    // Menampilkan hasil
    printf("\nJarak yang ditempuh adalah %.2f meter.\n", S);

    return 0;
}