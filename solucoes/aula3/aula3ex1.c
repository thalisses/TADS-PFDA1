#include <stdio.h>

int main()
{
    int num, count = 1;
    printf("digite um numero inteiro:");
    scanf("%d", &num);
    do
    {
        printf("\n %d x %d = %d", num, count, num * count);
        count++;
    } while (count <= 10);

    return 0;
}
