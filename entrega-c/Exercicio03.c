#include <stdio.h>
#include <stdlib.h>

void ler_vetor(int *vetor1, int tam);
void imprime_vetor(int *vetor1, int tam);
void inverte_vetor(int *vetor1, int tam);
int main()
{
    const int Ctamanho = 20;
    int *vetor = malloc(Ctamanho * sizeof *vetor);

    if(vetor == NULL){
        puts("Erro na alocação");
        return 1;
    }

    puts("O vetor contem 20 posicoes, insira valores para cada um delas: ");
    ler_vetor(vetor, Ctamanho);

    puts("\nVetor digitado: ");
    imprime_vetor(vetor, Ctamanho);

    puts("Vetor inverso: ");
    inverte_vetor(vetor, Ctamanho);

    free(vetor);
    return 0;
}

void ler_vetor(int *vetor1, int tam){

    for(int i = 0; i < tam; i++){
        scanf("%d", &vetor1[i]);
    }

}

void inverte_vetor(int *vetor1, int tam){

    int *vetor_inverso = malloc(tam * sizeof *vetor_inverso);

    if(vetor_inverso == NULL){
        puts("Erro na alocação");
        return;
    }

    for(int i = 0; i < tam; i++){
        vetor_inverso[tam - 1 - i] = vetor1[i];
    }

    imprime_vetor(vetor_inverso, tam);
    free(vetor_inverso);

}

void imprime_vetor(int *vetor1, int tam){

    for(int i = 0; i < tam; i++){
       printf("| %d | ", vetor1[i]);
    }

    puts("");

}

