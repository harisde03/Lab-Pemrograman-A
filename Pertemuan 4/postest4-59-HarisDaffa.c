#include<stdio.h>

int main() {
    char nama[50];
    char *pointer;
    char ubah, jadi;

    printf("Masukkan Nama: ");
    scanf("%[^\n]", nama);

    pointer = nama;

    printf("Huruf Yang Ingin Diubah  : ");
    scanf(" %c", &ubah);

    printf("Huruf Akan Diubah Menjadi: ");
    scanf(" %c", &jadi);

    do {
        if (*pointer == ubah) *pointer = jadi;
    } while (*pointer++ != '\0');

    printf("Nama Yang Diubah: %s\n", nama);

    return 0;
}
