#include <stdio.h>
#include <stdlib.h>

void leitura_dados(float *Bvalor, int qtd);
void imprime_dados(float *Bvalor, int qtd);
void taxa_correcao(float *Bvalor, int qtd);

int main()
{
    int quantidade;

    puts("Para realizar a alteracao da taxa de correcao, informe os seguintes itens: ");
    printf("1 - Quantidade de brinquedos a serem corrigidos: ");
    scanf("%d", &quantidade);

    float *valor_brinquedo = malloc(quantidade * sizeof *valor_brinquedo);

    if(valor_brinquedo == NULL){
        puts("Falha na alocacao");
        return 1;
    }

    puts("\n2 - v Valor de cada brinquedo v ");
    leitura_dados(valor_brinquedo, quantidade);

    printf("\nQuantidade de produtos: %d\n", quantidade);

    puts("\nValores: ");
    imprime_dados(valor_brinquedo, quantidade);

    puts("\n\nAplicando taxa (5%)");
    taxa_correcao(valor_brinquedo, quantidade);

    free(valor_brinquedo);

    return 0;
}

void leitura_dados(float *Bvalor, int qtd){

    for(int i = 0; i < qtd; i++){
        printf("%do | Brinquedo: ", i+1);
        scanf("%f", &Bvalor[i]);
    }
}

void imprime_dados(float *Bvalor, int qtd){

    for(int i = 0; i < qtd; i++){
        printf("\n%do | Brinquedo: %.2f", i+1, Bvalor[i]);
    }
}

void taxa_correcao(float *Bvalor, int qtd){

    float *vCorrigido = calloc(qtd, sizeof *vCorrigido);
    if(vCorrigido == NULL){
        puts("Falha na alocacao");
        return;
    }

    for(int i = 0; i < qtd; i++){
        vCorrigido[i] = Bvalor[i] * 1.05;
    }

    imprime_dados(vCorrigido, qtd);
    free(vCorrigido);
}
