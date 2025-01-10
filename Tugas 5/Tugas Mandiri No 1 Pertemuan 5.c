#include <stdio.h>

int hitungLamaBekerja(int jamMasuk, int jamPulang) {
    int lamaBekerja;
   
    if (jamPulang < jamMasuk) {
        lamaBekerja = (12 - jamMasuk) + jamPulang;
    } else {
        lamaBekerja = jamPulang - jamMasuk;
    }
    return lamaBekerja;
}

int main() {
    int jamMasuk, jamPulang;

    
    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jamMasuk);
    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &jamPulang);

    
    if (jamMasuk >= 1 && jamMasuk <= 12 && jamPulang >= 1 && jamPulang <= 12) {
        int lama = hitungLamaBekerja(jamMasuk, jamPulang);
        printf("Lama bekerja pegawai adalah %d jam.\n", lama);
    } else {
        printf("Input jam tidak valid. Harap masukkan jam antara 1 hingga 12.\n");
    }

    return 0;
}

