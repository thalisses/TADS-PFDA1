#include <stdio.h>

int main()
{
    int sum = 0, trigo = 1, casas = 64;

    for (int i = 1; i <= casas; i++)
    {
        sum = trigo * 2;
        trigo += sum;
    }
    printf("A rainha pagara pelo serviço %d grãos de trigo.\n", trigo);

    return 0;
}
