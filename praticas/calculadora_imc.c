#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void leitura_dados(float *peso, float *altura);
float calcula_IMC(float x, float y);

int main()
{
    float peso, altura, IMC;

    printf("Insira seu peso E altura: ");
    leitura_dados(&peso, &altura);

    printf("peso: %.2f\naltura: %.2f",peso,altura);

    IMC = calcula_IMC(peso, altura);

    printf("\nIMC: %.2f", IMC);

    return 0;
}

void leitura_dados(float *x, float *y){
    scanf("%f%f", x, y);
}

float calcula_IMC(float x, float y){
    return x/pow(y,2);
}
