#include <stdio.h>
//ex 3
void vetoresIguais(int A[], int B[], int n){
    int resultado1 = 0, resultado2 = 0;
    
    for (int i = 0; i < n; i++){
        resultado1 += A[i];
        resultado2 += B[i];
    }
    
    if (resultado1 == resultado2){
        printf("As listas são iguais!\n");
    }else{
        printf("As listas nao sao iguais.\n");
    }
}

int main() {

    int vetor1[5] = {10, 10, 10, 10, 10};
    int vetor2[5] = {10, 10, 10, 10, 10};
    
    vetoresIguais(vetor1, vetor2, 5);
    

    return 0;
}
