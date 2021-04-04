#include<stdio.h>

int main() {
    char nama[50], nim[15], prodi[30];
    int tahun;

    // Pesan Selamat Datang
    printf("Selamat Datang Di \"Command Line\" USK!\n");
    printf("Dimohon Mengisi Beberapa Data di Bawah.\n");

    // Meminta user input nama
    printf("Nama Lengkap: ");
    scanf(" %[^\n]s", nama);

    // Meminta user input nim
    printf("NIM: ");
    scanf(" %s", nim);

    // Meminta user input prodi
    printf("Program Studi: ");
    scanf(" %[^\n]s", prodi);

    // Meminta user input tahun angkatan
    printf("Tahun Angkatan: ");
    scanf(" %d", &tahun);
    
    // Mencetak output berupa tabel
    printf("Terima Kasih.\nData Anda Sudah Tersimpan.\n");
    printf("=====================================\n");
    printf("|1.| Nama  : %s\n|2.| NIM   : %s\n", nama, nim);
    printf("|3.| Prodi : %s\n|4.| Tahun : %d\n", prodi, tahun);
    printf("=====================================\n");
    return 0;
}
