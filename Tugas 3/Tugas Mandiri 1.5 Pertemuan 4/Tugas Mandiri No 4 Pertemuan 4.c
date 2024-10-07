#include <stdio.h>

int main() {
    int bilangan;

    // Input bilangan bulat positif
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Memeriksa apakah bilangan ganjil atau genap
    if (bilangan % 2 == 0) {
    	
        printf("GENAP\n");
    } else {
        printf("GANJIL\n");
    }

    return 0;
}

