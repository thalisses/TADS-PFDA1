#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 10

int numbers[TAMANHO_VETOR];
int numbers_inverse[TAMANHO_VETOR];

int main()
{
    // Numeros aleatorios
    printf("\nNUMEROS: ");
    for(int i=0; i<TAMANHO_VETOR; i++){
        numbers[i] = rand()%10;
        printf("%d ", numbers[i]);
    }

    //  exiba o vetor em ordem inversa.
    printf("\nNUMEROS INVERTIDOS: ");
    for(int i=0; i<TAMANHO_VETOR; i++){
        numbers_inverse[i] = numbers[TAMANHO_VETOR-i-1];
        printf("%d ", numbers_inverse[i]);
    }

    //  exiba somente os número pares
    printf("\nNUMEROS PARES: ");
    for(int i=0; i<TAMANHO_VETOR; i++){
        if(numbers[i]%2 == 0){
            printf("%d ", numbers[i]);
        }
    }

    //  exiba somente os ímpares
    printf("\nNUMEROS IMPARES : ");
    for(int i=0; i<TAMANHO_VETOR; i++){
        if(numbers[i]%2 != 0){
            printf("%d ", numbers[i]);
        }
    }

    //  calcule a média aritmética de todos os números
    printf("\nMEDIA ARITMETICA: ");
    float sum;
    for(int i=0; i<TAMANHO_VETOR; i++){
        sum += numbers[i];
    }
    printf("%.2f", sum/TAMANHO_VETOR);
    
    //  exiba o maior valor e sua posição no vetor
    printf("\nMAIOR VALOR: ");
    int bigger=0;
    int index;
    for(int i=0; i<TAMANHO_VETOR; i++){
        if(numbers[i] > bigger){
            bigger = numbers[i];
            index = i;
        }
    }
    printf("%d, POSIÇÃO: %d", bigger, index);

    //  exiba o menor valor e sua posição no vetor
    printf("\nMENOR VALOR: ");
    int smaller=numbers[0];
    index=0;
    for(int i=0; i<TAMANHO_VETOR; i++){
        if(numbers[i] < smaller){
            smaller = numbers[i];
            index = i;
        }
    }
    printf("%d, POSIÇÃO: %d", smaller, index);

//  exiba os elementos repetidos
    printf("\nNUMEROS REPETIDOS: ");
    for(int i=0; i<TAMANHO_VETOR; i++){
        for(int j=i+1; j<TAMANHO_VETOR; j++){
            if(numbers[i] == numbers[j]) {
                printf("%d ", numbers[i]);
            }
        }
    }

    return 0;
}
