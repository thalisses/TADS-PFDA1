#include <stdio.h>

int main()
{
    float r, altura, volume;

    printf("Qual valor de R? \n");

    scanf("%f", &r);

    printf("Qual valor da altura? \n");
    scanf("%f", &altura);

    volume = 3.14159 * (r * r) * altura;

    printf("O volume é: %.2f m3\n", volume);

    return 0;
}
