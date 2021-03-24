#include <stdio.h>

int main() {
    float a, t;

    printf("Input Alas Segitiga: ");
    scanf("%f", &a);

    printf("Input Tinggi Segitiga: ");
    scanf("%f", &t);

    printf("Luas Segitiga: %.2f\n", (a * t) / 2);

    return 0;
}
