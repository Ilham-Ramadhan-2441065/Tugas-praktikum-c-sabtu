#include <stdio.h>

int main() {
	
	int kecepatan = 2;
	int waktu = 100;
	int jarak;
	
	jarak = kecepatan * waktu;
	
	printf("Jarak yang di tempuh setelah bersepeda selama %d detik adalah %d meter. \n", waktu, jarak);
	
	return 0;
}
