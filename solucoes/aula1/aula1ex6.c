#include <stdio.h>

int main()
{
    float salario, result;

    printf("Informe o salario: R$");

    scanf("%f", &salario);

    result = salario * 1.25;

    printf("Salario atual: R$ %.2f\n", result);
    return 0;
}
