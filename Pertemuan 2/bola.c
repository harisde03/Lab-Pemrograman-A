#include<stdio.h>

int main() {
    float phi = 22.0/7;
    float r, result;

    printf("Program hitung volume bola!\nMasukkan Jari-Jari: ");
    scanf("%f", &r);

    result = 4.0/3 * phi * r * r * r;

    printf("Volume Bola: %.2f\n", result);

    return 0;
}
