#include <stdio.h>
#include <conio.h>

int main()
{
    char p1, p2, p3, p4, choice;
    printf("Digite sua senha com quatro caracteres: ");
    p1 = getch();
    printf("*");
    p2 = getch();
    printf("*");
    p3 = getch();
    printf("*");
    p4 = getch();
    printf("*");

    if (p1 == '1' && p2 == '3' && p3 == '1' && p4 == '0')
    {
        printf("\n========================");
        printf("\n        Escolhas        ");
        printf("\n     a = saldo          ");
        printf("\n     b = deposito       ");
        printf("\n     c = pagamentos     ");
        printf("\n     d = tranferencias  ");
        printf("\n     e = sair           ");
        printf("\n========================");
        printf("\n     Sua escolha: ");
        choice = getche();

        switch (choice)
        {
        case 'a':
        case 'A':
            printf("\n\nOperação: saldo");
            break;

        case 'b':
        case 'B':
            printf("\n\nOperação: deposito");
            break;

        case 'c':
        case 'C':
            printf("\n\nOperação: pagamentos");
            break;

        case 'd':
        case 'D':
            printf("\n\nOperação: tranferencias");
            break;
        case 'e':
        case 'E':
            printf("\n\nEncerrando operações: tranferencias");
            exit(0);
            break;

        default:
            printf("\n\nOperação Invalida!\a\a\a");
            break;
        }
    }
    else
    {
        printf("Senha Incorreta!")
    }
    getche();
    return 0;
}
