#include <stdio.h>

int main() {
	int N;
	
	printf("Masukan nilai N : ");
	scanf("%d", &N);
	
	if (N > 50) {
		N = N - 25;
	} else {
		N = N + 10;
	}
	
	printf("Nilai ahkir N: %d\n", N);
	return 0;	
}
