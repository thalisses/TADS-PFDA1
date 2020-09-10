#include <stdio.h>

int main()
{
    int nascimento, atual, idade, idade_days, idade_months;
    float idade_weeks;

    printf("Qual o ano de nascimento? \n");
    scanf("%d", &nascimento);

    printf("Qual o ano atual? \n");
    scanf("%d", &atual);

    idade = atual - nascimento;

    idade_months = idade * 12;
    idade_days = idade * 365;
    idade_weeks = idade_days / 7;

    printf("idade: %d \n", idade);
    printf("idade em meses: %d \n", idade_months);
    printf("idade em dias: %d  \n", idade_days);
    printf("idade em semanas: %.0f  \n", idade_weeks);

    return 0;
}
