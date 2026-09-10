#include "base.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct ficha_cliente{

    char nome[150], profissao[150], rua[150], bairro[150], 
    cidade[150], estado[150], cep[9], telefone[13], sexo[10]; 
    
    float altura, peso;
         
    int idade;

} cliente;

void leitura(cliente *cadastro_cliente, int qtd_clientes);
void impressao(cliente *cadastro_cliente, int qtd_clientes);

int main() {
    
    int qtd_cadastro;

    puts("\n====================================================");
    puts("              CADASTRO DE CLIENTES");
    puts("====================================================");

    printf("Informe a quantidade de clientes a serem cadastrados: ");
    scanf("%d", &qtd_cadastro);

    cliente *cadastros_clientes = malloc(qtd_cadastro * sizeof(*cadastros_clientes));

    if(cadastros_clientes == NULL){
        return 1;
    }

    puts("\n====================================================");
    puts("              INICIANDO CADASTRO");
    puts("====================================================");
    puts("\nATENÇÃO: Insira os dados corretamente!");

    leitura(cadastros_clientes, qtd_cadastro);
    system("cls");

    puts("\n====================================================");
    puts("         RELAÇÃO DE CLIENTES CADASTRADOS");
    puts("====================================================");

    impressao(cadastros_clientes, qtd_cadastro);

    puts("\n======================================================");
    puts("              FIM DO PROGRAMA");
    puts("======================================================");


    free(cadastros_clientes);
    
    return 0;
}

void leitura(cliente *cadastro_cliente, int qtd_clientes){
    
    int opcao, verificar;
    getchar();

    for(int i = 0; i < qtd_clientes; i++){

        puts("\n====================================================");
        printf("                %dº | Cliente\n", i + 1 );
        puts("====================================================");

        puts("\n ---------- INFORMAÇÕES BÁSICAS ---------- ");

        printf("\nNome: ");
        fgets(cadastro_cliente[i].nome, 150, stdin);

        printf("Idade: ");
        scanf("%d", &cadastro_cliente[i].idade);

        printf("(1) - Feminino \n(2) - Masculino \n" "Sexo: ");
        scanf("%d", &opcao);
        
        switch(opcao){

            case 1: {
                strcpy(cadastro_cliente[i].sexo, "Feminino");
                break;
            }

            case 2: {
                strcpy(cadastro_cliente[i].sexo, "Masculino");
                break;
            }

            default:{
                printf("Seleção incorreta. \n(1) - Feminino\n(2) - Masculino \n");
                break;
            }
        }

         puts("\n ---------- INFORMAÇÕES PROFISSIONAIS ---------- ");

        do{
            getchar();
            verificar = 0;
            printf("\n! Preencha no formato -> xx xxxxxxxxx \n");
            printf("Número de telefone: ");
            fgets(cadastro_cliente[i].telefone, 13, stdin);

            if(strlen(cadastro_cliente[i].telefone) == 12 && cadastro_cliente[i].telefone[2] == ' '){
                verificar = 1;
            }

        }while(verificar == 0);

        getchar();
        printf("Profissão: ");
        fgets(cadastro_cliente[i].profissao, 150, stdin);

        puts("\n ---------- INFORMAÇÕES DE LOCALIZAÇÃO ---------- ");

        printf("\nEstado: ");
        fgets(cadastro_cliente[i].estado, 150, stdin);

        printf("Cidade: ");
        fgets(cadastro_cliente[i].cidade, 150, stdin);

        printf("Bairro: ");
        fgets(cadastro_cliente[i].bairro, 150, stdin);

        printf("Rua: ");
        fgets(cadastro_cliente[i].rua, 150, stdin);

        printf("Cep: ");
        fgets(cadastro_cliente[i].cep, 9, stdin);

        getchar();
    }
}

void impressao(cliente *cadastro_cliente, int qtd_clientes){
    
    for(int i = 0; i < qtd_clientes; i++){
        puts("\n====================================================");
        printf("                %dº | Cliente\n", i + 1 );
        puts("====================================================");

        puts("\n ---------- INFORMAÇÕES BÁSICAS ---------- ");

        printf("Nome      : %s", cadastro_cliente[i].nome);
        printf("Idade     : %d\n", cadastro_cliente[i].idade);
        printf("Sexo      : %s\n", cadastro_cliente[i].sexo);
        
        puts("\n ---------- INFORMAÇÕES PROFISSIONAIS ---------- ");

        printf("Número de telefone : (%.*s) %.*s-%.*s\n", 
        2, cadastro_cliente[i].telefone,
        5, cadastro_cliente[i].telefone + 3,
        4, cadastro_cliente[i].telefone + 8);
        printf("Profissão          : %s", cadastro_cliente[i].profissao);

        puts("\n ---------- INFORMAÇÕES DE LOCALIZAÇÃO ---------- ");

        printf("Estado : %s", cadastro_cliente[i].estado);
        printf("Cidade : %s", cadastro_cliente[i].cidade);
        printf("Bairro : %s", cadastro_cliente[i].bairro);
        printf("Rua    : %s", cadastro_cliente[i].rua);
        printf("Cep    : %s\n", cadastro_cliente[i].cep);
    }
}