#include<stdio.h>

int main() {
    char nama[50];
    char *ptr;
    char ubah, jadi;

    printf("Masukkan Nama: ");
    scanf("%[^\n]", nama);

    ptr = nama;

    printf("Huruf Yang ingin Diubah: ");
    scanf(" %c", &ubah);

    printf("Huruf Diubah Menjadi: ");
    scanf(" %c", &jadi);

    while (*ptr++ != '\0') {
        if (*ptr == ubah) *ptr = jadi;
    }

    printf("Nama Yang Diubah: %s\n", nama);
    
    return 0;
}
