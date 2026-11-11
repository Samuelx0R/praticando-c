#include <stdio.h>
#include <stdlib.h>

double imposto(double preco, int opcao);

int main()
{
    int estado;
    double valor, valor_final = 0;

        puts("Insira o valor do produto: ");
        scanf("%lf", &valor);

    do{

        puts("Insira o estado destinatario final \n\t( 1 ) - MG\n\t( 2 ) - SP\n\t( 3 ) - RJ\n\t( 4 ) - MS\nOpcao: ");
        scanf("%d", &estado);

        valor_final = imposto(valor, estado);

    }while(valor_final == 0);

    printf("Valor acrescido de imposto: %.2lf ", valor_final);

    return 0;
}

double imposto(double preco, int opcao){

    switch(opcao){

        case 1:{
            preco += preco * 0.07;
            return preco;
            break;
        }
        case 2:{
            preco += preco * 0.12;
            return preco;
            break;
        }
        case 3:{
            preco += preco * 0.15;
            return preco;
            break;
        }
        case 4:{
            preco += preco * 0.08;
            return preco;
            break;
        }
        default: {
            printf("ERRO: Estado invalido.\n");
            return preco = 0;
        }
    }

}
