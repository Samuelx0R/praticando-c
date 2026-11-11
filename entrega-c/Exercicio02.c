#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcula_media(float valor1, float valor2, float valor3, int opcao);

int main()
{
    float num1, num2, num3, media;
    int escolha;

    puts("Insira 3 valores para as variaveis (x,y,z): ");
    scanf("%f%f%f", &num1, &num2, &num3);

    do{

    puts("Escolha umas das seguintes opcoes: ");
    puts(
         "\n\t( 1 ) - Media Geometrica"
         "\n\t( 2 ) - Media Ponderada"
         "\n\t( 3 ) - Media Harmonica"
         "\n\t( 4 ) - Media Aritmetica\n"
         "R: "
         );
    scanf("%d", &escolha);

    media = calcula_media(num1, num2, num3, escolha);

    }while(media == -1);
    printf("Resultado da operacao: %.2f", media);

    return 0;
}

float calcula_media(float valor1, float valor2, float valor3, int opcao){

    switch(opcao){

        case 1:{
            return cbrt(valor1 * valor2 * valor3);
        }
        case 2:{
            return (valor1 + (2 * valor2) + (3 * valor3))/6;
        }
        case 3:{
            return 3/(1/valor1 + 1/valor2 + 1/valor3);
        }
        case 4:{
            return (valor1 + valor2 + valor3)/3;
        }
        default: {
            printf("ERRO: opcao invalido.\n");
            return -1;
        }
    }

}

//Professor, notei que as fórmulas apresentadas no enunciado 2 são incoerentes, tanto a geometrica quanto a harmonica
