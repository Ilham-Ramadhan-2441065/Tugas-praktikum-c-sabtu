#include <stdio.h>

int main() {
    int i;
    char A[] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char C;          
    int count = 0;    

   
    printf("Masukkan karakter: ");
    scanf(" %c", &C); 

   
    for (i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
        if (A[i] == C) {
            count++;
        }
    }

   
    if (count > 0) {
        printf("ADA\n");
        printf("%d\n", count);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
