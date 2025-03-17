#include <stdio.h>

//ex 7 

int buscarElemento(int A[], int n, int chave){

    for (int i = 0; i < n; i++){
        if(A[i] == chave){
            return i;
            break;
        }

    }
    
    return -1;
}

int main(){

    

    int lista1[4] = {1, 3, 4, 6};


    int resultado = buscarElemento(lista1, 4, 6);
    printf("%d", resultado);


    return 0;
}
