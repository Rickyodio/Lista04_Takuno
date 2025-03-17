#include <stdio.h>
//ex 4

int encontreMaior(int A[], int n){
    int maior = A[0];
    
    for (int i = 1; i < n; i++){
        if(A[i] > maior){
            maior = A[i];
        }
    }
    return maior;
}


int main() {
    int lista1[3] = {1, 5, 3};
    int resultado = encontreMaior(lista1, 3);
    printf("O maior numero eh %d", resultado);
    return 0;
}
