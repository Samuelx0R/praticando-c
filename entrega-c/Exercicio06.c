#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct agenda_Telefonica{

    char nome[50];
    char email[30];
    char telefone[13];

} agenda;

void preenche_agenda(agenda *info, int tam);
void imprime_agenda(agenda *info, int tam);

int main()
{
    const int Atamanho = 10;

    agenda *dados = malloc(Atamanho * sizeof *dados);
    if(dados == NULL){
        puts("Falha na alocacao");
        return 1;
    }

    puts("Preencha os dados da sua agenda: ");

    preenche_agenda(dados, Atamanho);


    puts("\n================================================");
    puts("Imprimindo contatos: ");

    imprime_agenda(dados, Atamanho);

    free(dados);

    return 0;
}

void preenche_agenda(agenda *info, int tam){

    for(int i = 0; i < tam; i++){

    puts("---------------------------------");
    printf("%da contato\n", i+1);

    printf("Nome: ");
    fgets(info[i].nome, sizeof info[i].nome, stdin);

    printf("Email: ");
    fgets(info[i].email, sizeof info[i].email, stdin);

    printf("Telefone: ");
    fgets(info[i].telefone, sizeof info[i].telefone, stdin);

    }

}

void imprime_agenda(agenda *info, int tam){

    for(int i = 0; i < tam; i++){
        puts("\n---------------------------------");
        printf("%do contato: ", i+1);
        printf("\nNome: %s\n", info[i].nome);
        printf("Email: %s\n", info[i].email);
        printf("Telefone: %s", info[i].telefone);
        puts("\n---------------------------------");
    }
}
