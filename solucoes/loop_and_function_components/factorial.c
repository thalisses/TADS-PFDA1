// 6) Codifique o programa em linguagem C com uma função que receba um valor inteiro e
// positivo, calcule e mostre o seu fatorial.
#include <stdio.h>
#include <stdlib.h>

int factorial(n){
    int fact = 0;
    for (int i = n; i >= 1; i--) {
        fact =  i*fact;
    }
    return fact;
}

typedef struct{
    char os;
}name;

int main (){
    int num;

    printf("\nDIGITE O NUMERO INTEIRO E POSITIVO: ");
    scanf("%d", &num);

    if(num >0){
        int fact = factorial(num);
        printf("\nSeu FATORIAL: %i", fact);
    }
    return 0;
}