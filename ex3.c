#include <stdio.h>
//ex 3

int vetoresIguais(int A[], int B[], int n){
    int resultado1 = 0, resultado2 = 0;
    
    for (int i = 0; i < n; i++){
        resultado1 += A[i];
        resultado2 += B[i];
    }
    
    if (resultado1 == resultado2){
        return 1;
    }else{
        return 0;
    }
    
}

int main() {

    int vetor1[5] = {10, 10, 10, 10, 10};
    int vetor2[5] = {10, 10, 10, 10, 10};
    
    int resultado = vetoresIguais(vetor1, vetor2, 5);

    if (resultado == 1){
        printf("As listas sao iguais!");
    }else{
        printf("As listas nao sao iguais.");
    }


    

    return 0;
}
