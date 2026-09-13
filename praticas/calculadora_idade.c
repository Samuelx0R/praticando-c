
/*
Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias
e determine sua idade total em dias.

O algoritmo também deverá:

1. Calcular a idade aproximada em horas, considerando cada dia com 24 horas.
2. Informar quantos meses completos a pessoa já viveu, considerando cada ano com 12 meses.
3. Ler a idade de uma segunda pessoa e informar qual das duas é mais velha,
   além de apresentar a diferença entre as idades em dias.
4. Informar se a primeira pessoa é maior de idade (18 anos ou mais).
5. Exibir todas as informações calculadas de forma organizada.

Considere que 1 ano possui 365 dias e 1 mês possui 30 dias.
Desconsidere anos bissextos e diferenças reais na quantidade de dias dos meses.
*/

#include "../.env"
#include "../cabecalhos/cabecalho.h"

void leitura(int idades[], int tamanho);
void transforma(int idades[], int tamanho);
void compara(int idades_comparacao[], int tamanho);

int main() {
    
    int verifica = 1;
    int idade_primeira[3], idade_segunda[3];

    leitura_dados();

    do{
       
        leitura(idade_primeira, 3);
        leitura(idade_segunda, 3);
        


        printf("\nDeseja continuar?\n(1) - Sim\n(0) - Não\n-> ");
        scanf("%d", &verifica);
    }while(verifica != 0);
    
    return 0;
}

void leitura(int idades[], int tamanho){

    printf("\nDigite a sua idade seguindo o padrão:\n[ANO] [MêSES] [DIAS]\n-> ");
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &idades[i]);
    }
}
