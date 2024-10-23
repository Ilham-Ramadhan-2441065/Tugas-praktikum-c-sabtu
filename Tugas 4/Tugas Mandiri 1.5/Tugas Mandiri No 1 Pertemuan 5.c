#include <stdio.h>

int main() {
    int num;

    // Input bilangan dari pengguna
    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &num);

    // Mengecek apakah bilangan ganjil atau genap
    if (num % 2 == 0) {
        printf("GENAP.\n", num);
    } else {
        printf("GANJIL.\n", num);
    }

    return 0;
}

