#include <stdio.h>

int main(){
    char kalimat[25];

    printf("Masukkan Sebuah Kalimat: ");
    scanf("%[^\n]s", kalimat);

    printf("%s\n", kalimat);

    return 0;
}
