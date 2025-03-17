#include <stdio.h>

//ex5

void multiplicaVetorPorEscalar(int A[], int n, int escalar){

    int resultado = 0;

    for (int i = 0; i < n; i++){

        resultado = A[i] * escalar;
        printf("%d\n",resultado);


    }

}


int main(){

    int lista1[3] = {2, 3, 4};

    multiplicaVetorPorEscalar(lista1, 3, 2);





    return 0;
}
