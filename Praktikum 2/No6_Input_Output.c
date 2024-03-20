#include <stdio.h>

// Fungsi untuk menghitung dan menampilkan hasil operasi aritmatika
void kalkSS(int iA, int iB, char pilihan) {
    int hasil;

    switch (pilihan) {
        case 'a':
            hasil = iA + iB;
            printf("Hasil iA + iB: %d\n", hasil);
            break;
        case 'b':
            hasil = iA - iB;
            printf("Hasil iA - iB: %d\n", hasil);
            break;
        case 'c':
            hasil = iA * iB;
            printf("Hasil iA * iB: %d\n", hasil);
            break;
        case 'd':
            // Memastikan iB tidak sama dengan 0 untuk menghindari pembagian oleh nol
            if (iB != 0) {
                float hasilFloat = (float)iA / iB;
                printf("Hasil iA / iB: %.2f\n", hasilFloat);
            } else {
                printf("Pembagian oleh nol tidak diizinkan\n");
            }
            break;
        case 'e':
            // Memastikan iB tidak sama dengan 0 untuk menghindari pembagian oleh nol
            if (iB != 0) {
                hasil = iA / iB;
                printf("Hasil iA div iB: %d\n", hasil);
            } else {
                printf("Pembagian oleh nol tidak diizinkan\n");
            }
            break;
        case 'f':
            // Memastikan iB tidak sama dengan 0 untuk menghindari operasi modulo dengan nol
            if (iB != 0) {
                hasil = iA % iB;
                printf("Hasil iA mod iB: %d\n", hasil);
            } else {
                printf("Operasi modulus dengan nol tidak diizinkan\n");
            }
            break;
        default:
            printf("Bukan pilihan menu yang benar\n");
    }
}

int main() {
    // Variabel untuk menyimpan dua bilangan bulat dan karakter pilihan menu
    int iA, iB;
    char pilihan;

    // Meminta pengguna memasukkan dua bilangan bulat
    printf("Masukkan bilangan bulat iA: ");
    scanf("%d", &iA);

    printf("Masukkan bilangan bulat iB: ");
    scanf("%d", &iB);

    // Meminta pengguna memasukkan karakter pilihan menu
    printf("Masukkan pilihan menu (a-f): ");
    scanf(" %c", &pilihan);  // Menggunakan spasi sebelum %c untuk menghindari karakter newline (\n) yang tersisa

    // Memanggil fungsi kalkSS
    kalkSS(iA, iB, pilihan);

    return 0;
}