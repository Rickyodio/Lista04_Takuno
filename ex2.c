#include <stdio.h>
//ex2

int produtoEscalar(int A[], int B[], int n){
    int resultado = 0;
    for (int i = 0; i < n; i++){
        resultado += (A[i] * B[i]);
    }
    
    return resultado;
}

int main() {
    int resultado;
    int lista1[3] = {1,2,3};
    int lista2[3] = {3,2,1};
    
    resultado = produtoEscalar(lista1, lista2, 3);
    
    printf("O produto escalar entre as listas eh %d", resultado);
    
    

    return 0;
}
