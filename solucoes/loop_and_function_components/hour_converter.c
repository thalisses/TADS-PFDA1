#include <stdio.h>

int hour_to_seconds(int info[]) {
    return (info[0] * 60) * 60 + (info[1] * 60) + info[2];
}

int main()
{
    char options[][20] = { "HORAS", "MINUTOS", "SEGUNDOS" };

    int values[] = {0,0,0};

    for (int i = 0; i < 3; i++){
        printf("\nDIGITE O NUMERO DE %s: ", options[i]);
        scanf("%i", &values[i]);
    }

    int seconds = hour_to_seconds(values);

    printf("\nConvertido em segundos o resultado é: %i segundos\n", seconds);

    return 0;
}
