
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

#include "base.h"
#include "cabecalho.h"

void leitura(int idades[], int tamanho);
void transforma(int idades[], int tamanho);
void compara(int idades_comparacao[], int tamanho);
void cabecalho();

int main() {
    
    cabecalho();
    
    
    return 0;
}
