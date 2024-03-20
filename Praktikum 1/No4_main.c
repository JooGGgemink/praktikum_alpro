// Nama:Johan Miracle Simanjuntak
// NIM:24060123120026
// Kelas:A
// Nama File: volBolaKecrt
// No.4

#include <stdio.h>

int main() {
    // Deklarasi variabel
    float r, Vb, Vk;
    const float PHI = 3.14;

    // Input jari-jari lingkaran
    printf("Masukkan jari-jari lingkaran (dalam meter): ");
    scanf("%f", &r);

    // Menghitung volume bola
    Vb = (4.0 / 3.0) * (PHI * r * r * r);

    // Menghitung volume kerucut
    Vk = 0.5 * Vb;

    // Menampilkan hasil
    printf("Volume bola (Vb) : %.2f meter kubik\n", Vb);
    printf("Volume kerucut (Vk): %.2f meter kubik\n", Vk);

    return 0;
}