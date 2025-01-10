#include <stdio.h>
#define SIZE 11
#define END_MARKER 999

int main() {
	int i;
   
    int A[SIZE] = {0};

   
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};

    
    int j = 0;  
    for( i = 0; data[i] != END_MARKER && j < SIZE; i++) {
        if(data[i] > 9) {
            A[j] = data[i];
            j++;
        }
    }

    
    printf("A ");
    for( i = 0; i < SIZE; i++) {
        if(A[i] != 0) {
            printf("%d ", A[i]);
        } else {
            printf("  "); 
        }
    }
    printf("\n");

    return 0;
}

