#include <stdio.h>
#include <curses.h>
#include <stdlib.h>

#define MASCARA '*'
#define SENHA "iron maiden"

int main()
{
    char pass[11];
    int i, tries = 3;
    do
    {
        printf("Senha:");
        for (i = 0; i < 11; i++)
        {
            fflush(stdin);
            pass[i] = getch();
            putchar(MASCARA);
        }

        if (strcmp(pass, SENHA) == 0)
        {
            printf("\nAcesso Vip!");
            break;
        }

        if (strcmp(pass, SENHA) != 0 && tries > 0)
        {
            printf("\nSenha incorreta, voce tem %d tentativas", tries);
        }

        if (strcmp(pass, SENHA) != 0 && tries == 0)
        {
            printf("\nBARRADO NA ENTRADA");
        }
        tries--;
    } while (tries >= 0);

    return 0;
}