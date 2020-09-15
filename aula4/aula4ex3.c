#include <stdio.h>

int main()
{
    int num, i, sum = 0;
    printf("Digite um numero inteiro positivo:");
    scanf("%d", &num);

    if (num > 0)
    {
        for (i = num; i > 0; i--)
        {
            sum = sum + i;
        }
        printf("A soma dos numeros antecessores de %d é: %d\n", num, sum);
    }
    else
    {
        printf("Numero invalido!\n");
    }

    return 0;
}
