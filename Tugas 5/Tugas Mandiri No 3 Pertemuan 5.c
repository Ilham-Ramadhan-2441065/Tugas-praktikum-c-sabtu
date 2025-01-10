#include <stdio.h>

int hitungBiayaParkir(int jamMasuk, int jamKeluar) {
    int lamaParkir, biaya;

  
    if (jamKeluar < jamMasuk) {
        
        lamaParkir = (12 - jamMasuk) + jamKeluar;
    } else {
        lamaParkir = jamKeluar - jamMasuk;
    }

    
    if (lamaParkir <= 2) {
        biaya = 2000;
    } else {
        biaya = 2000 + (lamaParkir - 2) * 500; 
    }

    return biaya;
}

int main() {
    int jamMasuk, jamKeluar;

   
    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jamMasuk);
    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &jamKeluar);

    
    if (jamMasuk >= 1 && jamMasuk <= 12 && jamKeluar >= 1 && jamKeluar <= 12) {
        int biaya = hitungBiayaParkir(jamMasuk, jamKeluar);
        printf("Biaya parkir adalah: %d\n", biaya);
    } else {
        printf("Input jam tidak valid. Harap masukkan jam antara 1 hingga 12.\n");
    }

    return 0;
}

