#include <stdio.h>

//ex8


float mediaTurma(float notas[], int n){
    float media = 0;

    for (int i = 0; i < n; i++){
        media += notas[i];
    }

    return media/n;
}

int contarAcimaMedia(float notas[], int n, float media){

    int alunos = 0;

    for (int i = 0; i < n; i++){
        if(notas[i] > media){
            alunos += 1;
        }
    }
    
    return alunos;
}


int main(){

    int media, acimaMedia;
    float notasTurma[5] = {8, 6, 5, 6, 7};

    media = mediaTurma(notasTurma, 5);
    printf("Media da turma: %d\n",media);

    acimaMedia = contarAcimaMedia(notasTurma, 5, media);
    printf("Alunos acima da media: %d", acimaMedia);




    return 0;
}
