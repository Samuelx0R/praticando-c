#include <stdio.h>
#include <stdlib.h>

void ler_matriz(int matriz[][5]);
void imprime_matriz(int matriz[][5]);

int main()
{
    int matriz[5][5];

    puts("Preencha a matriz 5x5: ");
    ler_matriz(matriz);

    puts("Printando apenas valores impares e suas posicoes");
    imprime_matriz(matriz);

    return 0;
}

void ler_matriz(int matriz[][5]){

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprime_matriz(int matriz[][5]){

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            if(matriz[i][j] % 2 != 0){
                printf("[%d][%d] | [%d]\n", i, j, matriz[i][j]);
            }

        }
    }
}
