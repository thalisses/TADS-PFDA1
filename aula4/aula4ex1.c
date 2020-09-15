#include <stdio.h>

int main()
{
    int i;
    printf("Multiplos de 3: (0 a 100)\n");

    for (i = 0; i <= 100; i = (i + 3))
    {
        printf("%d\n", i);
    }

    return 0;
}
