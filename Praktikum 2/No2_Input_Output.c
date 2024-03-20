#include <stdio.h>

int main() {
    // Deklarasi variabel
    int nomorHari;

    // Meminta input nomor hari dari pengguna
    printf("Masukkan nomor hari (1 - 7): ");
    scanf("%d", &nomorHari);

    // Melakukan validasi nomor hari
    if (nomorHari >= 1 && nomorHari <= 7) {
        // Menampilkan nama hari sesuai nomor hari
        switch (nomorHari) {
            case 1:
                printf("Hari ke %d adalah Senin\n", nomorHari);
                break;
            case 2:
                printf("Hari ke %d adalah Selasa\n", nomorHari);
                break;
            case 3:
                printf("Hari ke %d adalah Rabu\n", nomorHari);
                break;
            case 4:
                printf("Hari ke %d adalah Kamis\n", nomorHari);
                break;
            case 5:
                printf("Hari ke %d adalah Jumat\n", nomorHari);
                break;
            case 6:
                printf("Hari ke %d adalah Sabtu\n", nomorHari);
                break;
            case 7:
                printf("Hari ke %d adalah Minggu\n", nomorHari);
                break;
        }
    } else {
        // Menampilkan pesan kesalahan jika nomor hari tidak tepat
        printf("Nomor hari tidak tepat\n");
    }

    return 0;
}
