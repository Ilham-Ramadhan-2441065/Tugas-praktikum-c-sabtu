#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, sisi_miring;

    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Sisi miring segitiga dengan rumus Pythagoras
    sisi_miring = sqrt(alas * alas + tinggi * tinggi);

    // Hasil perhitungan sisi miring
    printf("Panjang sisi miring segitiga adalah: %.2f cm\n", sisi_miring);

    return 0;
}

