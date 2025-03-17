// Online C compiler to run C program online
#include <stdio.h>
//ex1 (Takuno)

void somaVetores(int A[], int B[], int C[], int n){
    for (int i = 0; i < n; i++ ){
        C[i] = A[i] + B[i];
    }
    
}

void mostraVetor(int v[], int n){
     for (int i = 0; i < n; i++ ){
        printf("%d", v[i]);
    }
    printf("\n");
}

int main() {
    int A[3] = {1, 1, 1};
    int B[3] = {2, 2, 2};
    int C[3] = {0, 0, 0};
    somaVetores(A, B, C, 3);
    mostraVetor(C, 3);
    
    return 0;
}
