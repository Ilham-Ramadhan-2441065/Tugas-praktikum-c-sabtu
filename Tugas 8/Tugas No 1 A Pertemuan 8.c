#include <stdio.h>
#define SIZE 11
#define END_MARKER 999

int main() {
	int i;
    
    int A[SIZE] = {0};

   
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};

   
    int positions[] = {0, 2, 4, 6, 8, 10};

    
    int pos_index = 0;

    
    for(i = 0; data[i] != END_MARKER && pos_index < 6; i++) {
        
        if(i == 0) A[positions[pos_index++]] = 12;  
        else if(i == 2) A[positions[pos_index++]] = 7;  
        else if(i == 4) A[positions[pos_index++]] = 5;  
        else if(i == 6) A[positions[pos_index++]] = 17;  
        else if(i == 8) A[positions[pos_index++]] = 9;   
        else if(i == 10) A[positions[pos_index++]] = 35; 
    }

    
    printf("A ");
    for(i = 0; i < SIZE; i++) {
        if(A[i] != 0) {
            printf("%d ", A[i]);
        } else {
            printf("  ");
        }
    }
    printf("\n");

    return 0;
}
