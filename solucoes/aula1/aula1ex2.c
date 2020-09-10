#include <stdio.h>

int main()
{
    int num;
    printf("digite um numero: \n");
    scanf("%d", &num);
    int doble = num * 2;
    int quadratic = num * num;

    printf("Quadrado de %d é: %d\n", num, quadratic);
    printf("Dobro de %d é: %d\n", num, doble);

    return 0;
}
