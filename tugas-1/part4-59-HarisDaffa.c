#include<stdio.h>

int main() {
    int tiang, bendera;
    int i, j;

    printf("Mesin gambar bendera.\n");
    // Penggunaan do while untuk pengecekan nilai.
    do {
        printf("Masukkan tinggi tiang dan panjang bendera.\n");
        printf("Tiang harus lebih tinggi daripada panjang bendera.\n");
        printf("Tinggi Tiang: ");
        scanf("%d", &tiang);
        printf("Panjang Bendera: ");
        scanf("%d", &bendera);
    } while (tiang <= bendera);

    // Agar ukuran bendera sesuai pada perulangan.
    bendera--;
    
    // Penggunaan while di dalam for.
    for (i = 0; i < tiang; i++) {
        printf("|");
        j = 0;
        if (i < bendera) {
            while (j != i) {
                printf(" ");
                j++;
            }
        printf("\\");
        } else if (i == bendera) {
            while (j != i) {
                printf("_");
                j++;
            }
        printf("\\");
        }
        printf("\n");
    }

    return 0;
}
