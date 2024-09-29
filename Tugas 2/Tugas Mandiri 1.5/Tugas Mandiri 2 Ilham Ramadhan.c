#include <stdio.h>

int main () {
	float alas = 8.0;
	float tinggi = 5.0;
	float luas;
	
	luas = (alas * tinggi) /2;
	
	printf("Luas segitiga dengan alas %.2f dan tinggi %.2f adalah %.2f", alas, tinggi, luas);
	
	return 0;
}

