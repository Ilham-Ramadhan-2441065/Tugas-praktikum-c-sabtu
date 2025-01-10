#include <stdio.h>

int main() {
    int A[11] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35}; 
    int B[11];  
    int j = 0;  
    int i;

    
    printf("Nilai yang diinput:\n");
    for(i = 0; i < 11; i++) {
        printf("%d ", A[i]);  
        if (A[i] % 2 == 0) {   
            B[j] = A[i];      
            j++;               
        }
    }

    
    printf("\n\nNilai genap yang disimpan:\n");
    for(i = 0; i < j; i++) {
        printf("%d ", B[i]);  
    }

    return 0;
}

