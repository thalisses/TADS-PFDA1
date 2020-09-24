#include <stdio.h>

int main()
{
    int carnerinhos = 0, sleep = 0;

    while (sleep == 0)
    {
        printf("\nJa dormi? 0=Não 1=Sim \n");
        scanf("%d", &sleep);
        if (sleep == 0)
        {
            carnerinhos++;
        }
    }
    printf("\nprecisei contar %d carnerinhos para dormir", carnerinhos);

    return 0;
}
