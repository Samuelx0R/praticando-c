#include <stdio.h>
#include <stdlib.h>

void leitura_dados(int *inter, float *decim, char *caracs, int tam);
void altera_valor(int *inter, float *decim, char *caracs, int tam);
void imprime_valor(int *inter, float *decim, char *caracs, int tam);

int main()
{
    const int Vtamanho = 3;
    int *inteiros = malloc(Vtamanho * sizeof *inteiros);
    float *decimais = malloc(Vtamanho * sizeof *decimais);
    char *caracteres = malloc(Vtamanho * sizeof *caracteres);

    if(inteiros == NULL || decimais == NULL || caracteres == NULL){
        puts("Falha na alocacao");

        free(inteiros);
        free(decimais);
        free(caracteres);

        return 1;
    }

    puts("Insira valores para as variaveis: ");
    leitura_dados(inteiros, decimais, caracteres, Vtamanho);

    puts("\nValores Inseridos: ");
    imprime_valor(inteiros, decimais, caracteres, Vtamanho);

    puts("\n------------------------------------------");

    puts("\nValores alterados: ");
    altera_valor(inteiros, decimais, caracteres, Vtamanho);

    puts("\n------------------------------------------");


    free(inteiros);
    free(decimais);
    free(caracteres);
    return 0;
}

void leitura_dados(int *inter, float *decim, char *caracs, int tam){

    puts("Inteiros: ");
    for(int i = 0; i < tam; i++){
        scanf("%d", &inter[i]);
    }

    puts("Decimais: ");
    for(int i = 0; i < tam; i++){
        scanf("%f", &decim[i]);
    }

    puts("Caracteres: ");
    for(int i = 0; i < tam; i++){
        scanf(" %c", &caracs[i]);
    }
}

void imprime_valor(int *inter, float *decim, char *caracs, int tam){

     puts("Inteiros: ");
     for(int i = 0; i < tam; i++){
        printf("%d |", inter[i]);
    }

    puts("\nDecimais: ");
    for(int i = 0; i < tam; i++){
         printf("%.2f |", decim[i]);
    }

    puts("\nCaracteres: ");
    for(int i = 0; i < tam; i++){
         printf("%c |", caracs[i]);
    }

}

void altera_valor(int *inter, float *decim, char *caracs, int tam){

    for(int i = 0; i < tam; i++){
        inter[i] = 2014;
    }

    for(int i = 0; i < tam; i++){
        decim[i] = 9.99f;
    }

    for(int i = 0; i < tam; i++){
        caracs[i] = 'Y';
    }

    imprime_valor(inter, decim, caracs, tam);
}
