#include<stdio.h>

int main() {
    int pilihan, lives = 3;
    char garis[20] = "===================\n";

    // Mencetak sambutan kepada pemain/user
    printf("Welcome, Traveler!\n");
    printf("Kamu dalam perjalanan menuju harta karun.\n");
    printf("%sNyawamu saat ini: %d\n%sHarap berhati-hati dalam memilih.\n", garis, lives, garis);
    printf("Kamu Melihat Jalan Setapak di depan dan sebuah Jurang di sebelah.\n");
    printf("Jalan apa yang kamu pilih:\n1. Jalan Setapak\n2. Jurang\nPilih: ");
    scanf("%d", &pilihan);

    // Switch Case
    switch (pilihan) {
        case 1 :
            lives -= 2;
            printf("Kamu jalan dengan santai hingga seekor harimau mencakarmu dari belakang.\n");
            printf("Kamu lari dan menjerit hingga harimaunya kaget dan lari menjauh.\n");
            break;
        case 2 :
            lives -= 1;
            printf("Kamu terjun ke dalam jurang. Tapi kenapa kamu melakukan itu?\n");
            printf("\"Oh.. Ternyata jurangnya enggak dalam\". Lalu kamu mengambil jalan lurus,\n");
            break;
        default:
            printf("Kamu tidak tahu arah, dan mencoba berpikir tenang.\n");
            printf("Setelah dipikir beberapa kali, kamu memilih untuk pulang.\n");
    }

    // if & nested conditions
    if (lives <3) {
        printf("%sNyawamu saat ini: %d\n%s", garis, lives, garis);
        printf("Hingga kamu menemukan sebuah gua. Kamu merasakan hal yang aneh dengan gua ini.\n");
        printf("Kamu dapat mengambil jalan memutari gua atau masuk ke dalamnya.\n");
        printf("Jalan apa yang kamu pilih:\n1. Masuk ke dalam gua\n2. Jalan memutari gua\nPilih: ");
        scanf("%d", &pilihan);
        if (pilihan == 1) {
            printf("Kamu memilih masuk ke dalam gua. Didalam sangat gelap dan hening.\n");
            printf("Kamu tetap berjalan dengan sangat hati-hati, dan perasaan aneh yang\n");
            printf("menakutimu kian menghilang.\"Oh.. Cuma perasaanku saja.\"\n");
            printf("Kamu terus berjalan.\n");
        } else if (pilihan == 2) {
            lives--;
            printf("Kamu memilih untuk memutari gua dan memasuki hutan, jalannya cukup\n");
            printf("memusingkan dan melelahkan, namun kamu tetap berjalan dan jalan.\n");
        } else {
            printf("Setelah apa yang terjadi padamu, membuatmu tidak dapat berpikir jernih.\n");
            printf("Kamu memutuskan untuk tidur sejenak.\n");
            printf("Disaat kamu bangun, sudah ada 3 ekor harimau menunggumu sadar.\n");
        }
    }

    // if & nested conditions
    if (pilihan == 1 || pilihan == 2) {
        printf("%sNyawamu saat ini: %d\n%s", garis, lives, garis);
        printf("Hingga kamu menemukan tanah lapang dan menemukan tanda 'X' di atasnya\n");
        printf("Tanpa berpikir panjang, Kamu menggali tanah itu tanpa memperhatikan nyawa.\n");
        lives--;
        printf("%sNyawamu saat ini: %d\n%s", garis, lives, garis);
        printf("Kamu berhasil menemukan harta karun yang kamu cari!\n");
        if (lives == 0) {
            printf("Namun disaat kamu lagi senangnya, kamu malah jatuh dan terkubur ke dalam.\n");
        } else if (lives == -1) {
            printf("Namun disaat kamu ingin menyentuhnya, kamu lupa kalau kamu sudah mati.\n");
        }
    }

    // Ternary
    (pilihan < 1 || pilihan > 2) ? printf("Kamu tidak berhati-hati dalam memilih.\n") : printf("TAMAT.\n");

    return 0;
}
