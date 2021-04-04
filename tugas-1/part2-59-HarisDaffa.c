#include<stdio.h>
#define BASE_F 32
#define BASE_K 273

int main() {
    int suhu;
    float convert;
    char satuan = 67;

    // Meminta User Input
    // Menggunakan Konsep Implicit Casting dan Postfix Increment
    printf("Masukkan Suhu dalam Celsius(%c): ", satuan++);
    scanf("%d", &suhu);

    // Mengubah Suhu Celsius ke Reamur
    // Menggunakan Konsep Explicit Casting dan Prefix Increment
    convert = (float) 4/5 * suhu;
    printf("Suhu Reamur    : %6.2f %c\n", convert, ++satuan+13);

    // Mengubah Suhu Celsius ke Fahrenheit
    // Menggunakan Konsep Konstanta dan Prefix Increment
    convert = (float) 9/5 * suhu + BASE_F;
    printf("Suhu Fahrenheit: %6.2f %c\n", convert, ++satuan);

    // Mengubah Suhu Celsius ke Kelvin
    // Ketiga Satuan Suhu menggunakan Casting berdasarkan ASCII
    convert = (float) suhu + BASE_K;
    printf("Suhu Kelvin    : %6.2f %c\n", convert, satuan+5);

    return 0;
}
