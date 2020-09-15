#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, d, e = a + b;
    for (c = 3; c <= 11; c++)
    {
        e = e + (a + b);
        d = a;
        a = b;
        b = b + d;
    }
    printf("%d", e);
    return 0;
}
