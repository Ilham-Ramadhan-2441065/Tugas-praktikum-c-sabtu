#include <stdio.h>

int main() {
    int kode;
    char jenis;
    float harga, diskon, hargaSetelahDiskon;

    
    printf("Masukkan kode: ");
    scanf("%d", &kode);
    printf("Masukkan jenis (A, B, C): ");
    scanf(" %c", &jenis);
    printf("Masukkan harga: ");
    scanf("%f", &harga);

    
    switch (jenis) {
        case 'A':
            diskon = 0.10;
            break;
        case 'B':
            diskon = 0.15; 
            break;
        case 'C':
            diskon = 0.20;
            break;
        default:
            printf("Jenis tidak valid. Harap masukkan A, B, atau C.\n");
            return 1;
    }

    
    hargaSetelahDiskon = harga - (harga * diskon);

   
    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.2f\n", jenis, diskon * 100, hargaSetelahDiskon);

    return 0;
}

