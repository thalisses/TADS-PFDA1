/* BIBLIOTECAS */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* VARIÁVEIS GLOBAIS */
int _1oDia_de_aula, _1oMes_de_aula, total_dias, dia_final;
/* CORPO DO PROGRAMA */
int main()
{
    setlocale(LC_ALL, "");
    printf("\nEm que dia suas aulas começaram? ---> ");
    fflush(stdin);
    scanf("%i", &_1oDia_de_aula); /* em 2019, as aulas começaram em 11/02 */
    printf("\nEm que mês suas aulas começaram?[2=fevereiro][3=março][4=abril] ---> ");
    fflush(stdin);
    scanf("%i", &_1oMes_de_aula);
    total_dias = 0;
    switch (_1oMes_de_aula)
    {
    case 2:
    {
        dia_final = 28;                                   /* fevereiro tem 28 dias */
        total_dias = dia_final - _1oDia_de_aula + 31 + 3; /* conta fevereiro, março e abril */
    }
    break;
    case 3:
    {
        dia_final = 31;                              /* março tem 31 dias */
        total_dias = dia_final - _1oDia_de_aula + 3; /* conta março e abril */
    }
    break;
    case 4:
    {
        dia_final = 3;                           /* consedera até hoje 03/04/2019 */
        total_dias = dia_final - _1oDia_de_aula; /* conta só abril */
    }
    break;
    }

    printf("\n\nVocê faz parte do IFSP há %d dias.", total_dias);
    // return 0;
}