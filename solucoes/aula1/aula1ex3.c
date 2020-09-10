#include <stdio.h>
#include <math.h>

int main()
{
    float base, exp, result;

    printf("Qual valor da base? \n");

    scanf("%f", &base);

    printf("Qual valor do expoente? \n");

    scanf("%f", &exp);

    result = pow(base, exp);

    printf("a base %.1f com expoent %.1f é: %.1f \n", base, exp, result);

    return 0;
}
