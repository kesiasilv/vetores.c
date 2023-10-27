#include <stdio.h>
//-----------vetores----------//
int main(){
    //todo vetor inicia em zero;//
    //sintaxe: tipo, nome e tamanho;
    /*int vetor[3];

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;*/
/*
    -----------------------------
    int nota[3];
    double media;

    nota[0] = 9;
    nota[1] = 7;
    nota[2] = 8;

    media = (nota[0] + nota[1] + nota[2]) / 3;

    printf("media = %2.lf", media);

*/
/*
    int nota[3] = {9, 7, 8};
    double media;
    int i;

//pega indice por indice para calcular a media//
    for(i = 0; i < 3; i++){
        media += nota[i];
    }

     printf("media = %2.lf", media / 3);
*/
    int nota[3];
    double media;
    int i;

    for(i = 0; i < 3; i++){
        printf("digite a nota %i", i + 1);
        scanf("%i", &nota[1]);

    }
     for(i = 0; i < 3; i++){
        printf("noptas digitadas : indice - %i\n- nota - %i\n", i, nota[1]);
     }

}
