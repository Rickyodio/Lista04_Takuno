#include <stdio.h>
//ex 1 (Ricardo)
int somaVetores(int A[], int B[], int n){
    int C = 0;
    for  (int i = 0; i < n; i++){
        C += A[i] + B[i];
    }
    
    return C;
    
    
}

int main(){
    
    int n, resultado;
    
    int lista1[5] = {10, 10, 10};
    int lista2[5] = {10, 10, 10};
    
    printf("Digite o tamanho das duas listas: \n");
    scanf("%d", &n);
    resultado = somaVetores(lista1, lista2, n);
    
    printf("A soma das listas eh %d", resultado);
    
    return 0;
}
