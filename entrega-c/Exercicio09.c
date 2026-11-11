# include <stdio.h>
# include <stdlib.h>

void leitura_dados(float *kelv, int tam);
void imprime_dados(float *temp, int tam);
void converte_dados(float *temp, int tam);

int main(){
    const int Vtamanho = 24;

    float *temperatura = malloc(Vtamanho * sizeof *temperatura);

    if(temperatura == NULL){
        puts("Falha ao alocar memoria");
        return 1;
    }

    puts("Preencha com as temperaturas em Kelvin: ");
    leitura_dados(temperatura, Vtamanho);

    converte_dados(temperatura, Vtamanho);

    free(temperatura);
    return 0;
}

void leitura_dados(float *kelv, int tam){

    for(int i = 0; i < tam; i++){
        scanf("%f", &kelv[i]);
    }

}

void converte_dados(float *temp, int tam){

    float *fahrenheit = malloc(tam * sizeof *fahrenheit);

    for(int i = 0; i < tam; i++){
        fahrenheit[i] = (temp[i] - 273.15) * 9.0 / 5.0 + 32;
    }

    imprime_dados(fahrenheit, tam);
    free(fahrenheit);
}

void imprime_dados(float *fahren, int tam){

    for(int i = 0; i < tam; i++){
        printf("Fahrenheit: %fo F\n", fahren[i]);
    }

}
