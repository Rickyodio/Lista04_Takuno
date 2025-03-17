#include <stdio.h>

//ex6

void inverterVetor(int A[], int n) {
    int resultado;
    
    for(int i = 0; i < n / 2; i++) {
        
        resultado = A[i];
        A[i] = A[n - 1 - i];
        A[n - 1 - i] = resultado;
    }
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    
    inverterVetor(A, 5);
    
    for(int i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }

    printf("\n");
    
    return 0;
}
