#include <stdio.h>
#include <stdlib.h>

void leitura_dados(float *notas, int qtd);
void imprime_dados(float *notas, int qtd);
float calcula_media(float *notas, int qtd);
void calcula_maior_menor(float *notas, int qtd, float *maior, float *menor);
void calcula_maior_igual_media(float *notas, int qtd, float media, int *qtd_maior_igual);

int main()
{
    int qtd, qtd_maior_igual = 0;
    float media = 0;
    float maior, menor;

    puts("\n\t------------- Cadastro de notas -------------");
    printf("\t| Quantas notas serao inseridas no sistema? |");
    puts("\n\t---------------------------------------------");
    printf("\tR: ");
    scanf("%d", &qtd);

    if(qtd <= 0){
        printf("\n\tQuantidade invalida!\n");
        return 1;
    }

    float *turma_notas = malloc(qtd * sizeof *turma_notas);
    if(turma_notas == NULL){
        printf("Falha na alocacao");
        return 1;
    }

    puts("\n\tInsira notas: ");
    leitura_dados(turma_notas, qtd);

    puts("\n\t------------------- Notas --------------------");
    printf("\t|             Exibindo as notas              |");
    puts("\n\t----------------------------------------------");

    imprime_dados(turma_notas, qtd);

    puts("\n\t------------------- Media --------------------");
    printf("\t|              Exibindo a media              |");
    puts("\n\t----------------------------------------------");

    media = calcula_media(turma_notas, qtd);
    printf("\n\tMedia: %.2f\n", media);

    puts("\n\t------------------- Media --------------------");
    printf("\t|      Exibindo Maior/Igual que a media      |");
    puts("\n\t----------------------------------------------");

    calcula_maior_igual_media(turma_notas, qtd, media, &qtd_maior_igual);
    printf("\n\tQuantidade de alunos com nota maior ou igual a media: %d", qtd_maior_igual);

    puts("");
    puts("\n\t--------------- Maior e Menor ----------------");
    printf("\t|        Exibindo Maior e Menor Valor        |");
    puts("\n\t----------------------------------------------");

    calcula_maior_menor(turma_notas, qtd, &maior, &menor);

    printf("\n\tMaior: %.2f\n", maior);
    printf("\tMenor: %.2f", menor);

    free(turma_notas);
    return 0;
}

void leitura_dados(float *notas, int qtd){

    for(int i = 0; i < qtd; i++){
        printf("\t%da | nota: ", i+1);
        scanf("%f", &notas[i]);
    }
}

void imprime_dados(float *notas, int qtd){

    printf("\n\tNotas: \n");

    for(int i = 0; i < qtd; i++){
         printf("\t%da | nota: %.2f\n", i+1, notas[i]);
    }

    printf("\n\tNotas invertidas: \n");

    for(int i = qtd - 1; i >= 0; i--){
         printf("\t%da | nota: %.2f\n", i+1, notas[i]);
    }
}

float calcula_media(float *notas, int qtd){

    float media = 0;

    for(int i = 0; i < qtd; i++){
        media += notas[i];
    }

     return media/qtd;

}

void calcula_maior_menor(float *notas, int qtd, float *maior, float *menor){

    *maior = notas[0]; *menor = notas[0];

    for(int i = 1; i < qtd; i++){
        if(notas[i] > *maior){
            *maior = notas[i];
        }
        if(notas[i] < *menor){
            *menor = notas[i];
        }
    }

}

void calcula_maior_igual_media(float *notas, int qtd, float media, int *qtd_maiorIgual){

    for(int i = 0; i < qtd; i++){
        if(notas[i] >= media){
            printf("\n\tAluno: %d, Nota: %.2f", i+1, notas[i]);
            (*qtd_maiorIgual)++;
        }
    }
}
