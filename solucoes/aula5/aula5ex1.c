#include <stdio.h>

#define TAMANHO_VETOR 10

float numbers[TAMANHO_VETOR];

int main()
{
    printf("Digite 10 numeros:\n");
    for(int i=0; i<TAMANHO_VETOR; i++){
        scanf("%f", &numbers[i]);
    }

    for(int i=0; i<TAMANHO_VETOR; i++){
        printf("%.2f\n", numbers[i]);
    }

    return 0;
}
