#include <stdio.h>

int main()
{
    int celsius;
    float fahrenheit;

    printf("Informe o celsius: \n");

    scanf("%d", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("O valor de %d celsius em Fahrenheit é: %.1f \n", celsius, fahrenheit);

    return 0;
}
