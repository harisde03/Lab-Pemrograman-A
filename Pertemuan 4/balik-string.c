#include<stdio.h>

int main() {
    char nama[50];
    int i;

    printf("Input Nama: ");
    scanf("%[^\n]", nama);

    // Pengganti strlen()
    for (i = 0; nama[i] != '\0'; i++);
    // Di akhir for nilai i menjadi sepanjang array nama.

    printf("Hasil Terbalik: ");

    for ( ; i >= 0; i--) {
        printf("%c", nama[i]);
    }

    printf("\n");

    return 0;
}
