#include<stdio.h>

int main() {
   int panjang, lebar;
   char huruf = 'a';

   printf("Masukkan Panjang: ");
   scanf("%d", &panjang);

   printf("Masukkan Lebar: ");
   scanf("%d", &lebar);

   for (int i = 0; i < panjang; i++) {
       for (int j = 0; j < lebar; j++) {
           printf("%c ", huruf++);
           if (huruf > 'z') huruf = 'a';
       }
       printf("\n");
   }

   return 0;
}
