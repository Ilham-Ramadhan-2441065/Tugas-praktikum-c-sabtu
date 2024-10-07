#include <stdio.h>

int main() {
    int suhu_celcius;
    float suhu_fahrenheit, suhu_reamur;

    printf("Masukkan suhu dalam Celcius: ");
    scanf("%d", &suhu_celcius);

    // suhu dalam Fahrenheit dan Reamur
    suhu_fahrenheit = (suhu_celcius * 9.0 / 5.0) + 32;
    suhu_reamur = suhu_celcius * 4.0 / 5.0;

    // Hasil konversi
    printf("Suhu dalam Fahrenheit: %.2f\n", suhu_fahrenheit);
    printf("Suhu dalam Reamur: %.2f\n", suhu_reamur);

    return 0;
}

