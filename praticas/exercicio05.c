#include <stdio.h>
#include <stdlib.h>

void ler_Vnotas(float *notas, int tam);
float calcula_media(float *notas, int tam);

int main()
{
    const int Vtamanho = 4;
    float media = 0;

    float *Vnotas = malloc(Vtamanho * sizeof *Vnotas);
    if(Vnotas == NULL){
        puts("Falha na alocacao");
        return 1;
    }

    puts("Insira 4 notas: ");
    ler_Vnotas(Vnotas, Vtamanho);

    media = calcula_media(Vnotas, Vtamanho);

    printf("Media final: %.2f", media);

    free(Vnotas);
    return 0;
}

void ler_Vnotas(float *notas, int tam){

    for(int i = 0; i < tam; i++){
        printf("%da nota: ", i+1);
        scanf("%f", &notas[i]);
    }
}

float calcula_media(float *notas, int tam){

    float media = 0;

    for(int i = 0; i < tam; i++){
        media += notas[i];
    }

    return media / tam;
}
