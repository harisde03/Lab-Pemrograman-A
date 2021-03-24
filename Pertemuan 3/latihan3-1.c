#include <stdio.h>

int main() {
    char karakter;

    printf("Masukkan sebuah karakter: ");
    scanf("%c", &karakter);
    
    karakter += 32;

    printf("Output: %c\n", karakter);

    return 0;
}
