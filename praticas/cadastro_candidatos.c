#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro_alunos{

    char nome[50];
    char cidade[100];
    int idade;

}cadastro;

void leitura_dados(cadastro *info, int qtd);

int main()
{
    int qtd;

    puts("Cadastro de candidados");
    printf("Quantidade de candidatos: ");
    scanf("%d", &qtd);
    getchar();

    cadastro *informacoes = malloc(qtd * sizeof *informacoes);
    if(informacoes == NULL){
        puts("Falha ao alocar memoria!");
        return 1;
    }

    puts("Preencha as seguintes informacoes para cada candidato: ");
    leitura_dados(informacoes, qtd);

    free(informacoes);
    return 0;
}

void leitura_dados(cadastro *info, int qtd){

    for(int i = 0; i < qtd; i++){

        printf("\n\t%do candidato: \n", i+1);

        printf("\nnome: ");
        fgets(info[i].nome, sizeof info[i].nome, stdin);

        printf("idade: ");
        scanf("%d", &info[i].idade);
        getchar();

        printf("cidade: ");
        fgets(info[i].cidade, sizeof info[i].cidade, stdin);

        puts("\n-----------------------------");
    }

}
