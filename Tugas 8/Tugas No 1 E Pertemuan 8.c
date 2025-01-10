#include <stdio.h>
#define SIZE 11
#define END_MARKER 999

int main() {
    int i;
    int A[SIZE] = {0};

   
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};

   
    int positions[] = {1, 2, 4, 6, 7, 8, 10};

    
    int pos_index = 0; 
    for(i = 0; data[i] != END_MARKER && pos_index < sizeof(positions)/sizeof(positions[0]); i++) {
        if(data[i] % 2 != 0) {  
            A[positions[pos_index]] = data[i];
            pos_index++;
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
