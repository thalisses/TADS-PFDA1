#include <stdio.h>
#include <conio.h>

int main()
{
    float altura, peso_ideal;
    char sexo;
    printf("Informe sua altura:");
    scanf("%f", &altura);

    printf("\nQual o sexo biologico: ");
    printf("\n f = feminino ");
    printf("\n m = masculino");
    sexo = getche();

    switch (sexo)
    {
    case 'f':
    case 'F':
        peso_ideal = 62.1 * altura - 58;
        printf("\n\nPeso ideal: %f", peso_ideal);
        break;

    case 'm':
    case 'M':
        peso_ideal = 72.7 * altura - 44.7;
        printf("\n\nPeso ideal: %f", peso_ideal);
        break;

    default:
        printf("\n\nOpção invalida!\a\a\a");
        break;
    }
    return 0;
}
