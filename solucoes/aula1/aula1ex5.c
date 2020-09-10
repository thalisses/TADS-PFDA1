#include <stdio.h>

int main()
{
    float salario, previdencia, ir;

    printf("Informe o salario bruto: R$ ");
    scanf("%f", &salario);

    previdencia = salario * 0.0085;
    ir = previdencia * 0.0275;

    printf("salario bruto: %.2f\n", salario);
    printf("salario liquido: %.2f\n", salario - previdencia - ir);
    printf("previdencia: %.2f\n", previdencia);
    printf("ir: %.2f\n", ir);

    return 0;
}
