#include <stdio.h>

//ex 11


int contarOcorrenciasChar(char str[], char c, int n){

    int ocorrencia = 0;

    for (int i = 0; i < n; i++){
        if(str[i] == c){
            ocorrencia += 1;
        }
    }

    return ocorrencia;
}


int main(){

    char nome[] = "ricardo";
    char letra = 'r';

    int resultado = contarOcorrenciasChar(nome, letra, 7);
    printf("A letra %c aparece %d vezes na string %s", letra, resultado, nome);



    return 0;
}
