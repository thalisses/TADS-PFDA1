#include <stdio.h>

#define TAMANHO_VETOR 10

int numbers[TAMANHO_VETOR];

int main()
{
    int num;
    printf("Digite 10 numeros:\n");
    for(int i=0; i<TAMANHO_VETOR; i++){
        scanf("%d", &num);
        numbers[i] = num*num;
    }

    printf("quadrados:\n");
    for(int i=0; i<TAMANHO_VETOR; i++){
        printf("%d\n", numbers[i]);
    }

    return 0;
}
